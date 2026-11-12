// The model and texture asset manager of the client.
//
#pragma once

#include <cstdint>
#include <functional>
#include <fstream>
#include <future>
#include <atomic>
#include <memory>
#include <filesystem>
#include <optional>
#include <span>
#include <string>
#include <string_view>
#include <vector>

#include "samp/client/asset_element.hpp"
#include "samp/proto/bitstream.hpp"

namespace samp::client {

// The states of the manager (the dword at +0x213).
enum class AssetState : std::uint32_t {
    kIdle = 0,
    kDownloading = 1,
    kLoaded = 2,
};

using AssetLoader = std::function<bool(bool texture_entry, std::uint32_t base_id,
                                      std::uint32_t element_id, const std::string& texture_name,
                                      const std::string& model_path,
                                      const std::string& texture_path)>;

using AssetRpcEmitter=std::function<void(std::uint8_t,const samp::proto::BitStream&)>;
struct AssetFileTransfer {
    std::uint8_t type=0;
    std::uint32_t checksum=0,expected=0,received=0,crc=0,index=0;
    std::filesystem::path temporary;
    std::ofstream output;
    bool active=false;
};
struct AssetHttpResult {std::vector<std::uint8_t> bytes;std::uint32_t error=0;};
struct AssetHttpJob {
    std::future<AssetHttpResult> result;
    std::shared_ptr<std::atomic_bool> cancelled;
    std::uint8_t type=0;
    std::uint32_t checksum=0,index=0,expected=0;
};

// The manager of the downloaded models and textures.
class AssetManager {
    friend struct AssetManagerTestAccess;
public:
    AssetManager() = default;
    ~AssetManager();

    AssetManager(const AssetManager&) = delete;
    AssetManager& operator=(const AssetManager&) = delete;

    // Reset the manager state.
    void reset();

    // Add one element, returning -1 when its id is out of range.
    std::int32_t add_asset(std::uint32_t index, const AssetElement& record);

    // Remove one element.
    std::int32_t remove_asset(std::uint32_t index);

    // Find an element by kind and id.
    [[nodiscard]] std::int32_t find_index(AssetKind kind, std::uint32_t id) const;

    // Check for a model element.
    [[nodiscard]] bool has_model(std::uint32_t id) const;

    // Read element flags; each result packs the index in its upper bits.
    [[nodiscard]] std::uint32_t flag_56(std::uint32_t id) const;
    [[nodiscard]] std::uint32_t flag_57(std::uint32_t id) const;

    void initialize_user_directory(std::string_view user_files_directory);
    void initialize_cache(std::string_view server_address, std::uint16_t server_port);
    void set_current_id(std::uint32_t id);
    [[nodiscard]] bool has_cached_model(std::uint32_t id) const;
    [[nodiscard]] bool has_cached_texture(std::uint32_t id) const;
    bool load_model(std::uint32_t element_id, const AssetLoader& loader);
    bool load_texture(std::uint32_t element_id, const AssetLoader& loader);
    void collect_garbage();

    // Buffer downloaded bytes before decompression.
    static constexpr std::size_t kStagingSize = 0x1000;
    bool stage(const std::uint8_t* data,std::size_t size,std::uint8_t mode=1,std::uint32_t raw_size=0);
    bool begin_download(std::uint8_t type,std::uint32_t checksum);
    bool write_download(std::span<const std::uint8_t> bytes);
    bool finish_download();
    void fail_download(std::uint32_t code);
    void process_downloads(std::int32_t world,const AssetRpcEmitter& emit);
    bool start_http_download(std::uint8_t type,std::uint32_t checksum,std::string_view url);
    void poll_http_downloads();
    static bool validate_model_file(const std::filesystem::path& path);
    static bool validate_texture_file(const std::filesystem::path& path);
    bool ready_=true,awaiting_finish_ack_=false;
    std::uint32_t last_error_=0;
    std::function<void(std::uint32_t,std::string_view)> url_notice_;
    std::int32_t world_=0;

private:
    std::string directory_;
    std::string fallback_directory_;
public:
    std::string samp_root_;
private:
    std::string model_cache_root_;
    bool cache_initialized_ = false;
public:
    AssetState state_ = AssetState::kIdle;
    std::uint32_t current_id_ = 0;
private:
    AssetFileTransfer transfer_;
    std::array<std::optional<AssetHttpJob>,6> http_;
    std::vector<std::pair<std::uint8_t,std::uint32_t>> pending_requests_;
    bool assets_enabled_ = false;
    bool finished_ = false;
    std::uint32_t parent_id_ = 0;
    std::uint32_t downloaded_bytes_ = 0;
    std::uint32_t downloaded_compressed_bytes_ = 0;
    std::array<std::uint8_t, kStagingSize> staging_{};
    std::size_t staging_length_ = 0;
    std::vector<std::optional<AssetElement>> elements_;
};

}  // namespace samp::client
