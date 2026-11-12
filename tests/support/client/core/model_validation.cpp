#include "samp/client/asset_manager.hpp"
#include <cstring>
#include <fstream>
#include <iterator>
#include <optional>

namespace samp::client {

// 100bb460/bb320 select the clump; bbb30 checks frames, bbf00 geometry count,
// bd700 geometry buffers, bd5f0 materials, bce70 plugins and bc760 skin arrays.
bool AssetManager::validate_model_file(const std::filesystem::path& path) {
    std::ifstream file(path,std::ios::binary|std::ios::ate);
    if(!file || file.tellg()<12 || file.tellg()>64*1024*1024) return false;
    std::vector<std::uint8_t> data(static_cast<std::size_t>(file.tellg()));file.seekg(0);
    if(!file.read(reinterpret_cast<char*>(data.data()),data.size())) return false;
    const auto u32=[&](std::size_t at){std::uint32_t value;std::memcpy(&value,data.data()+at,4);return value;};
    struct Chunk {std::uint32_t id,version;std::size_t data,end;};
    const auto chunk=[&](std::size_t at,std::size_t end)->std::optional<Chunk> {
        if(at>end || end-at<12) return {};
        const auto length=u32(at+4);
        if(length>end-at-12) return {};
        return Chunk{u32(at),u32(at+8),at+12,at+12+length};
    };
    auto root=chunk(0,data.size());if(!root) return false;
    if(root->id==0x2b) root=chunk(root->end,data.size()); // Optional UV dictionary.
    if(!root || root->id!=0x10) return false;
    std::optional<Chunk> frames,geometry_list;
    for(auto at=root->data;at<root->end;) {
        const auto node=chunk(at,root->end);if(!node) return false;
        if(node->id==0xe) frames=node;
        if(node->id==0x1a) geometry_list=node;
        at=node->end;
    }
    if(!frames || !geometry_list) return false;
    auto structure=chunk(frames->data,frames->end);
    if(!structure || structure->id!=1 || structure->end-structure->data<4) return false;
    const auto frame_count=u32(structure->data);
    if(frame_count>=256 || std::uint64_t(frame_count)*56+4>structure->end-structure->data) return false;
    for(auto at=structure->end;at<frames->end;) {
        const auto extension=chunk(at,frames->end);if(!extension) return false;
        if(extension->id==3) for(auto p=extension->data;p<extension->end;) {
            const auto plugin=chunk(p,extension->end);if(!plugin) return false;
            if(plugin->id==0x253f2fe && plugin->end-plugin->data>=24) return false;
            p=plugin->end;
        }
        at=extension->end;
    }
    structure=chunk(geometry_list->data,geometry_list->end);
    if(!structure || structure->id!=1 || structure->end-structure->data!=4 || u32(structure->data)!=1) return false;
    if(structure->end==geometry_list->end) return true; // Native accepts an absent geometry child.
    const auto geometry=chunk(structure->end,geometry_list->end);
    if(!geometry) return false;
    if(geometry->id!=0xf) return true;
    const auto geometry_data=chunk(geometry->data,geometry->end);
    if(!geometry_data || geometry_data->id!=1 || geometry_data->end-geometry_data->data<16) return false;
    auto at=geometry_data->data;const auto flags=u32(at)&0xffffu;
    const auto triangles=u32(at+4),vertices=u32(at+8);at+=16;
    if(triangles>100000 || vertices>200000) return false;
    const auto skip=[&](std::uint64_t bytes) {
        if(bytes>geometry_data->end-at) return false;
        at+=static_cast<std::size_t>(bytes);return true;
    };
    if((geometry->version>>22)+0x300<0x340 && !skip(12)) return false;
    if((flags&8) && !skip(std::uint64_t(vertices)*4)) return false;
    if((flags&0x84) && !skip(std::uint64_t(vertices)*8)) return false;
    if(!skip(std::uint64_t(triangles)*8+16) || geometry_data->end-at<8) return false;
    const auto positions=u32(at);at+=8;
    if(positions && !skip(std::uint64_t(vertices)*12)) return false;
    if((flags&0x10) && !skip(std::uint64_t(vertices)*12)) return false;
    const auto materials=chunk(geometry_data->end,geometry->end);
    if(!materials || materials->id!=8) return false;
    const auto material_data=chunk(materials->data,materials->end);
    if(!material_data || material_data->id!=1 || material_data->end-material_data->data<4) return false;
    const auto material_count=u32(material_data->data);
    if(material_count==0 || material_count>=256 || std::uint64_t(material_count)*4+4>material_data->end-material_data->data) return false;
    auto material_at=material_data->end;
    for(std::uint32_t i=0;i<material_count;++i) {
        const auto material=chunk(material_at,materials->end);if(!material) return false;
        if(material->id==7) {
            const auto info=chunk(material->data,material->end);
            if(!info || info->id!=1 || info->end-info->data<16) return false;
            if(u32(info->data+12)) {
                const auto texture=chunk(info->end,material->end);
                if(!texture || texture->id!=6) return false;
                for(auto t=texture->data;t<texture->end;) {
                    const auto part=chunk(t,texture->end);if(!part) return false;
                    if(part->id==2 && part->end-part->data>32) return false;
                    t=part->end;
                }
            }
        }
        material_at=material->end;
    }
    const auto extensions=chunk(materials->end,geometry->end);
    if(!extensions || extensions->id!=3) return false;
    for(auto p=extensions->data;p<extensions->end;) {
        const auto plugin=chunk(p,extensions->end);if(!plugin) return false;
        const auto length=plugin->end-plugin->data;
        if(plugin->id==0x116) {
            if(!vertices || length<4) return false;
            const auto bones=data[plugin->data],used=data[plugin->data+1];
            const std::uint64_t required=4+used+std::uint64_t(vertices)*20+std::uint64_t(bones)*64+12;
            if(bones>=64 || used>bones || required!=length) return false;
            if(u32(plugin->end-12) || u32(plugin->end-8) || u32(plugin->end-4)) return false;
        } else if(plugin->id==0x50e) {
            if(length<12) return false;
            const auto meshes=u32(plugin->data+4);if(meshes>=100000) return false;
            auto mesh_at=plugin->data+12;
            for(std::uint32_t i=0;i<meshes;++i) {
                if(plugin->end-mesh_at<8) return false;
                const auto count=u32(mesh_at);mesh_at+=8;
                if(std::uint64_t(count)*4>plugin->end-mesh_at) return false;
                mesh_at+=static_cast<std::size_t>(count)*4;
            }
        } else if(plugin->id!=0x253f2fd && plugin->id!=0x253f2f9 && plugin->id!=0x105 && plugin->id!=0x253f2f8) {
            return false;
        }
        p=plugin->end;
    }
    return true;
}

// bde10/bdd80 require a dictionary, matching declared/parsed texture count;
// bdb60 accepts D3D8/9, terminated 31-byte names and dimensions<=2048.
bool AssetManager::validate_texture_file(const std::filesystem::path& path) {
    std::ifstream file(path,std::ios::binary|std::ios::ate);
    if(!file || file.tellg()<12 || file.tellg()>64*1024*1024) return false;
    std::vector<std::uint8_t> data(static_cast<std::size_t>(file.tellg()));file.seekg(0);
    if(!file.read(reinterpret_cast<char*>(data.data()),data.size())) return false;
    const auto u32=[&](std::size_t at){std::uint32_t value;std::memcpy(&value,data.data()+at,4);return value;};
    const auto u16=[&](std::size_t at){std::uint16_t value;std::memcpy(&value,data.data()+at,2);return value;};
    struct Chunk {std::uint32_t id;std::size_t data,end;};
    const auto chunk=[&](std::size_t at,std::size_t end)->std::optional<Chunk> {
        if(at>end || end-at<12 || u32(at+4)>end-at-12) return {};
        return Chunk{u32(at),at+12,at+12+u32(at+4)};
    };
    const auto root=chunk(0,data.size());if(!root || root->id!=0x16) return false;
    std::uint32_t expected=0,actual=0;bool have_count=false;
    for(auto at=root->data;at<root->end;) {
        const auto node=chunk(at,root->end);if(!node) return false;
        if(node->id==1 && !have_count) {
            if(node->end-node->data<2) return false;
            expected=u16(node->data);have_count=true;if(expected>1024) return false;
        } else if(node->id==0x15) {
            const auto info=chunk(node->data,node->end);
            if(!info || info->id!=1 || info->end-info->data<88) return false;
            const auto platform=u32(info->data);if(platform!=8 && platform!=9) return false;
            if(!std::memchr(data.data()+info->data+8,0,32) || !std::memchr(data.data()+info->data+40,0,32)) return false;
            if(u16(info->data+80)>2048 || u16(info->data+82)>2048) return false;
            ++actual;
        }
        at=node->end;
    }
    return have_count && actual==expected;
}

} // namespace samp::client
