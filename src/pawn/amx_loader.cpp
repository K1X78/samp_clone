#include "pawn/amx_loader.hpp"

#include <algorithm>


namespace samp::pawn {

namespace {

// Every table record is eight bytes: a value word followed by the file offset
// of the name.
constexpr std::size_t kTableRecordSize = 8;
}  // namespace

// The AMX loader validates the stock header, expands compact cells and builds
// the public/native tables for the VM image.
// Official: FUN_00401320 @ 0x00401320 (samp-server.exe)
bool AmxImage::load_from_memory(const std::uint8_t* data, std::size_t size, AmxImage& out) {
    const auto read_cstring = [](const std::vector<std::uint8_t>& bytes, std::uint32_t offset) {
        if (offset >= bytes.size()) return std::string();
        std::size_t end = offset;
        while (end < bytes.size() && bytes[end] != 0) ++end;
        return std::string(reinterpret_cast<const char*>(bytes.data() + offset), end - offset);
    };
    const auto read_table = [&](const std::vector<std::uint8_t>& bytes, std::int32_t begin,
                                std::int32_t end, std::int16_t defsize) {
        std::vector<AmxTableEntry> entries;
        if (begin <= 0 || end <= begin) return entries;
        const std::size_t stride = defsize > 0 ? static_cast<std::size_t>(defsize) : kTableRecordSize;
        const std::size_t first = static_cast<std::size_t>(begin);
        const std::size_t last = static_cast<std::size_t>(end);
        for (std::size_t offset = first; offset + stride <= last; offset += stride) {
            if (offset + stride > bytes.size()) break;
            AmxTableEntry entry;
            entry.value = static_cast<std::uint32_t>(bytes[offset]) |
                          (static_cast<std::uint32_t>(bytes[offset + 1]) << 8) |
                          (static_cast<std::uint32_t>(bytes[offset + 2]) << 16) |
                          (static_cast<std::uint32_t>(bytes[offset + 3]) << 24);
            entry.nameofs = static_cast<std::uint32_t>(bytes[offset + 4]) |
                            (static_cast<std::uint32_t>(bytes[offset + 5]) << 8) |
                            (static_cast<std::uint32_t>(bytes[offset + 6]) << 16) |
                            (static_cast<std::uint32_t>(bytes[offset + 7]) << 24);
            if (defsize == 24) {
                entry.nameofs = static_cast<std::uint32_t>(offset + 4);
                const char* first_character = reinterpret_cast<const char*>(bytes.data() + offset + 4);
                const char* name_end = std::find(first_character, first_character + 20, '\0');
                entry.name.assign(first_character, name_end);
            } else {
                entry.name = read_cstring(bytes, entry.nameofs);
            }
            entries.push_back(std::move(entry));
        }
        return entries;
    };
    out = AmxImage{};
    if (data == nullptr || size < samp::amx::kAmxHeaderSize) {
        out.error_ = "the image is too small";
        return false;
    }

    samp::amx::AmxHeader header;
    const auto read_i32 = [data](std::size_t offset) {
        return static_cast<std::int32_t>(data[offset]) |
               (static_cast<std::int32_t>(data[offset + 1]) << 8) |
               (static_cast<std::int32_t>(data[offset + 2]) << 16) |
               (static_cast<std::int32_t>(data[offset + 3]) << 24);
    };
    header.size = read_i32(0);
    header.magic = static_cast<std::uint16_t>(data[4] | (data[5] << 8));
    header.file_version = data[6];
    header.amx_version = data[7];
    header.flags = static_cast<std::int16_t>(data[8] | (data[9] << 8));
    header.defsize = static_cast<std::int16_t>(data[10] | (data[11] << 8));
    header.cod = read_i32(0x0C);
    header.dat = read_i32(0x10);
    header.hea = read_i32(0x14);
    header.stp = read_i32(0x18);
    header.cip = read_i32(0x1C);
    header.publics = read_i32(0x20);
    header.natives = read_i32(0x24);
    header.libraries = read_i32(0x28);
    header.pubvars = read_i32(0x2C);
    header.tags = read_i32(0x30);
    header.nametable = read_i32(0x34);
    if (header.magic != samp::amx::kAmxMagic) {
        out.error_ = "not a Pawn 3.2 AMX image (bad magic)";
        return false;
    }
    // amx_Init 0x401320 tests only the minimum file format and maximum
    // required VM version; it does not impose the reverse bounds.
    if (static_cast<std::int8_t>(header.file_version) < 6) {
        out.error_ = "unsupported .amx file version";
        return false;
    }
    if (static_cast<std::int8_t>(header.amx_version) > 8) {
        out.error_ = "unsupported AMX version";
        return false;
    }
    if (header.defsize != 8 && header.defsize != 24) {
        out.error_ = "unsupported definition record size";
        return false;
    }
    if (header.cod < 0 || header.dat < header.cod || header.hea < header.dat ||
        header.stp < header.hea || header.stp < 4 ||
        header.cod < static_cast<std::int32_t>(samp::amx::kAmxHeaderSize) ||
        static_cast<std::size_t>(header.cod) > size ||
        ((header.dat - header.cod) & 3) != 0 || ((header.hea - header.dat) & 3) != 0) {
        out.error_ = "the section offsets are inconsistent";
        return false;
    }
    if (header.defsize == 8 &&
        (header.nametable < 0 || static_cast<std::size_t>(header.nametable) + 2 > size ||
         (static_cast<unsigned>(data[header.nametable]) |
          (static_cast<unsigned>(data[header.nametable + 1]) << 8)) > 31)) {
        out.error_ = "unsupported AMX name length";
        return false;
    }
    out.header_ = header;

    // The image is the file image with the packed cell stream expanded in
    // place.  The reference runtime allocates at least 'stp' bytes and
    // zeroes image[stp-4].
    const std::size_t image_size = std::max(size, static_cast<std::size_t>(header.stp));
    out.data_.assign(data, data + size);
    out.data_.resize(image_size, 0);

    if ((header.flags & samp::amx::kAmxFlagCompact) != 0) {
        const std::size_t cod = static_cast<std::size_t>(header.cod);
        const std::size_t hea = static_cast<std::size_t>(header.hea);
        if (cod < out.data_.size() && hea > cod) {
            const std::size_t packed_end =
                std::min(out.data_.size(), static_cast<std::size_t>(header.size));
            std::vector<std::int32_t> cells;
            cells.reserve((hea - cod) / 4u);
            std::size_t position = cod;
            while (position < packed_end && cells.size() * 4u + cod < hea) {
                std::uint64_t value = 0;
                std::size_t count = 0;
                while (position < packed_end) {
                    const std::uint8_t byte = out.data_[position++];
                    value = (value << 7) | static_cast<std::uint64_t>(byte & 0x7Fu);
                    ++count;
                    if ((byte & 0x80u) == 0) break;
                }
                const unsigned bits = static_cast<unsigned>(count) * 7u;
                if (bits > 0 && bits < 32u && (value & (1ull << (bits - 1u))) != 0) {
                    value |= ~((1ull << bits) - 1ull);
                }
                cells.push_back(static_cast<std::int32_t>(static_cast<std::uint32_t>(value)));
            }
            for (std::size_t i = 0; i < cells.size(); ++i) {
                const std::size_t offset = cod + i * 4u;
                if (offset + 4u > out.data_.size()) break;
                const std::uint32_t value = static_cast<std::uint32_t>(cells[i]);
                out.data_[offset] = static_cast<std::uint8_t>(value);
                out.data_[offset + 1] = static_cast<std::uint8_t>(value >> 8);
                out.data_[offset + 2] = static_cast<std::uint8_t>(value >> 16);
                out.data_[offset + 3] = static_cast<std::uint8_t>(value >> 24);
            }
        }
    }
    if (static_cast<std::size_t>(header.stp) >= 4) {
        std::fill_n(out.data_.data() + static_cast<std::size_t>(header.stp) - 4, 4, std::uint8_t{0});
    }

    // The public function table.  Its 'address' is the offset of the
    // function's 'proc' opcode from the start of the CODE section.
    for (const auto& entry : read_table(out.data_, header.publics, header.natives, header.defsize))
        out.publics_.push_back({entry.name, entry.value});

    // The native function table.  The index of a record is the operand of the
    // 'sysreq.c <n>' instruction.
    const auto native_table = read_table(out.data_, header.natives, header.libraries, header.defsize);
    out.natives_.reserve(native_table.size());
    for (std::size_t i = 0; i < native_table.size(); ++i) {
        RequiredNative native;
        native.nameofs = native_table[i].nameofs;
        native.name = native_table[i].name;
        native.index = static_cast<std::uint32_t>(i);
        out.natives_.push_back(std::move(native));
    }

    out.libraries_ = read_table(out.data_, header.libraries, header.pubvars, header.defsize);
    out.pubvars_ = read_table(out.data_, header.pubvars, header.tags, header.defsize);
    out.tags_ = read_table(out.data_, header.tags, header.nametable, header.defsize);

    out.ok_ = true;
    return true;
}

}  // namespace samp::pawn
