#include "pawn/pawn_vm.hpp"

#include <algorithm>
#include <cstring>
#include <mutex>
#include <utility>

namespace samp::pawn {
namespace {

using samp::amx::Amx;
using samp::amx::AmxNativeInfo;
using samp::amx::cell;

constexpr int kErrFormat = 17;
constexpr int kErrNotFound = 19;
constexpr int kAmxFlagNativesBound = 0x1000;
constexpr int kAmxFlagInitialized = 0x8000;
constexpr cell kCellBytes = sizeof(cell);
constexpr cell kSysreqPri = 0x7a;
constexpr cell kSysreqC = 0x7b;
constexpr cell kSysreqD = 0x87;

std::mutex sdk_owners_mutex;
PawnVm* sdk_owners = nullptr;

}  // namespace

// Source adapter only; no established separate native entry.
PawnVm::~PawnVm() {
    detach_sdk_state();
}

// Source adapter only; no established separate native entry.
bool PawnVm::load(std::span<const std::uint8_t> bytes, std::string path) {
    AmxImage loaded;
    if (!AmxImage::load_from_memory(bytes.data(), bytes.size(), loaded)) {
        path_ = std::move(path);
        error_ = std::move(loaded.error_);
        ok_ = false;
        return false;
    }
    std::vector<SdkNative> sdk_natives(loaded.natives_.size(), nullptr);

    path_ = std::move(path);
    error_.clear();
    header_ = loaded.header_;
    image_ = std::move(loaded.data_);
    publics_ = std::move(loaded.publics_);
    natives_ = std::move(loaded.natives_);
    native_functions_.clear();
    sdk_natives_ = std::move(sdk_natives);
    string_buffers_.clear();

    pri_ = alt_ = frm_ = 0;
    cip_ = header_.cip;
    stk_ = header_.stp - header_.dat - kCellBytes;
    hea_ = hlw_ = header_.hea - header_.dat;
    reset_stk_ = reset_hea_ = 0;
    last_error_ = 0;
    host_call_ = sleeping_ = halted_ = false;
    amx_ = {};
    amx_.base = image_.data();
    amx_.callback = reinterpret_cast<void*>(&amx_control::callback);
    amx_.hea = amx_.hlw = hea_;
    amx_.stp = amx_.stk = stk_;
    amx_.flags = kAmxFlagInitialized;
    amx_.sysreq_d = kSysreqD;

    if (!owns_sdk_state_) {
        const std::scoped_lock lock(sdk_owners_mutex);
        next_sdk_owner_ = sdk_owners;
        sdk_owners = this;
        owns_sdk_state_ = true;
    }
    ok_ = true;
    return true;
}

// Source adapter only; no established separate native entry.
Amx* PawnVm::sdk_state() noexcept {
    return ok_ && owns_sdk_state_ ? &amx_ : nullptr;
}

// Source adapter only; no established separate native entry.
PawnVm* PawnVm::find_sdk_owner(const Amx* state) {
    const std::scoped_lock lock(sdk_owners_mutex);
    for (auto* owner = sdk_owners; owner != nullptr; owner = owner->next_sdk_owner_) {
        if (&owner->amx_ == state) return owner;
    }
    return nullptr;
}

// Source adapter only; no established separate native entry.
void PawnVm::detach_sdk_state() {
    if (!owns_sdk_state_) return;

    const std::scoped_lock lock(sdk_owners_mutex);
    auto** link = &sdk_owners;
    while (*link != this) link = &(*link)->next_sdk_owner_;
    *link = next_sdk_owner_;
    next_sdk_owner_ = nullptr;
    owns_sdk_state_ = false;
}

// Source adapter only; no established separate native entry.
int PawnVm::register_sdk_natives(const AmxNativeInfo* functions, int maximum) noexcept {
    if (!ok_ || amx_.base != image_.data()) return kErrFormat;
    if (!natives_.empty() &&
        (header_.natives < static_cast<std::int32_t>(sizeof(header_)) || header_.libraries > header_.cod))
        return kErrFormat;

    int status = 0;
    for (std::size_t index = 0; index < natives_.size(); ++index) {
        const auto& name = natives_[index].name;
        if (sdk_natives_[index] || native_functions_.contains(name)) continue;

        const auto address = functions ? amx_registration::find_function(name.c_str(), functions, maximum) : 0u;
        if (address == 0) {
            status = kErrNotFound;
            continue;
        }
        sdk_natives_[index] = reinterpret_cast<SdkNative>(address);
        const auto offset = header_.natives + index * header_.defsize;
        std::memcpy(image_.data() + offset, &address, sizeof(address));
    }
    if (status == 0) amx_.flags |= kAmxFlagNativesBound;
    return status;
}

// Source adapter only; no established separate native entry.
bool PawnVm::sdk_callback_active() const noexcept {
    return owns_sdk_state_ && amx_.callback == reinterpret_cast<void*>(&amx_control::callback);
}

// Source adapter only; no established separate native entry.
PawnVm::SdkNative PawnVm::find_sdk_native(std::uintptr_t address) const noexcept {
    const auto function = reinterpret_cast<SdkNative>(address);
    return std::find(sdk_natives_.begin(), sdk_natives_.end(), function) != sdk_natives_.end() ? function : nullptr;
}

// Source adapter only; no established separate native entry.
int PawnVm::invoke_sdk_native(cell index, cell* result, const cell* parameters) {
    if (!ok_ || amx_.base != image_.data()) return kErrFormat;
    if (index < 0 || static_cast<std::size_t>(index) >= natives_.size()) return samp::amx::kAmxErrNative;

    if (const auto native = sdk_natives_[index]) {
        // Only a registered external native can be quickened into a callable
        // operand. Closure-backed builtins keep their indexed instruction.
        if (amx_.sysreq_d == kSysreqD && amx_.cip >= 2 * kCellBytes && amx_.cip <= header_.dat - header_.cod) {
            auto* code = image_.data() + header_.cod + amx_.cip - 2 * kCellBytes;
            cell opcode;
            cell operand;
            std::memcpy(&opcode, code, sizeof(opcode));
            std::memcpy(&operand, code + sizeof(opcode), sizeof(operand));
            if (opcode == kSysreqC && operand == index && operand != kSysreqPri) {
                const auto address = reinterpret_cast<std::uintptr_t>(native);
                std::memcpy(code, &amx_.sysreq_d, sizeof(cell));
                std::memcpy(code + sizeof(cell), &address, sizeof(address));
            }
        }
        amx_.error = 0;
        *result = native(&amx_, parameters);
        return amx_.error;
    }

    const auto builtin = native_functions_.find(natives_[index].name);
    if (builtin == native_functions_.end()) return kErrNotFound;
    if (parameters == nullptr || parameters[0] < 0 || parameters[0] % kCellBytes != 0)
        return samp::amx::kAmxErrMemaccess;

    const std::span args(parameters + 1, static_cast<std::size_t>(parameters[0]) / sizeof(cell));
    amx_.error = 0;
    *result = builtin->second(args);
    return amx_.error;
}

// Source adapter only; no established separate native entry.
int amx_control::execute(Amx* state, cell* result, int index) {
    auto* owner = PawnVm::find_sdk_owner(state);
    if (owner == nullptr) return kErrFormat;

    cell ignored;
    return owner->execute({}, {}, result ? *result : ignored, index);
}

}  // namespace samp::pawn
