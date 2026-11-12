// The vehicle and map object RPCs of the SA-MP 0.3.DL client.
//
// The pool guards are the ones of the official handlers: a vehicle that the
// server has not streamed in is left untouched, and the object handlers only
// update an object the RPC 44 created.
#include <algorithm>

#include "samp/client/server_rpc.hpp"

namespace samp::client {
namespace {


}  // namespace

// 0x100111c0: the 16 component bytes of a vehicle.  The official handler
// reads the vehicle id (16) and then sixteen raw bytes, each one a 0/1 state
// for one tunable part of the vehicle.
// Official: FUN_100111c0 @ 0x100111c0 (samp.dll)
bool rpc_set_vehicle_component_states(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint16_t id = 0;
    std::uint8_t states[16] = {};
    if (!in.read(&(id),2)) {
        return false;
    }
    for (std::uint8_t& state : states) {
        if (!in.read(&(state),1)) {
            return false;
        }
    }
    WorldVehicle* vehicle = ((id < 2000 && context.world.vehicles_.contains(id)) ? &context.world.vehicles_.at(id) : nullptr);
    if (vehicle == nullptr) {
        return true;
    }
    std::copy(std::begin(states), std::end(states), vehicle->component_states.begin());
    return true;
}

// 0x1001c0f0: RemoveVehicleComponent, vehicleid (16) and component (16).
// Official: FUN_1001c0f0 @ 0x1001c0f0 (samp.dll)
bool rpc_remove_vehicle_component(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint16_t vehicle_id = 0, component = 0;
    if (!in.read(&(vehicle_id),2) || !in.read(&(component),2)) {
        return false;
    }
    WorldVehicle* vehicle = ((vehicle_id < 2000 && context.world.vehicles_.contains(vehicle_id)) ? &context.world.vehicles_.at(vehicle_id) : nullptr);
    if (vehicle == nullptr) {
        return true;
    }
    if (std::find(vehicle->removed_components.begin(), vehicle->removed_components.end(),
                  component) == vehicle->removed_components.end()) {
        vehicle->removed_components.push_back(component);
    }
    if (component < vehicle->component_states.size()) {
        vehicle->component_states[component] = 0;
    }
    return true;
}

// 0x10019a60: LinkVehicleToInterior, vehicleid (16) and interior (8).  The
// official handler hands the interior to the game, which looks the vehicle up.
// Official: FUN_10019a60 @ 0x10019a60 (samp.dll)
bool rpc_link_vehicle_interior(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint16_t id = 0;
    std::uint8_t interior = 0;
    if (!in.read(&(id),2) || !in.read(&(interior),1)) {
        return false;
    }
    if (WorldVehicle* vehicle = ((id < 2000 && context.world.vehicles_.contains(id)) ? &context.world.vehicles_.at(id) : nullptr)) {
        vehicle->interior = interior;
        if(context.commands) {
            VehicleAttributeCommand command{VehicleAttributeCommand::Kind::Interior};command.id=id;command.interior=interior;
            context.commands->emplace_back(command);
        }
    }
    return true;
}

// 0x10018450: SetVehicleVelocity, a flag byte (0 linear, 1 angular) and the
// three components.  The official handler reads them and applies them to the
// vehicle of the local player, when there is one.
// Official: FUN_10018450 @ 0x10018450 (samp.dll)
bool rpc_set_vehicle_velocity(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint8_t flag = 0;
    float x = 0.0f, y = 0.0f, z = 0.0f;
    if (!in.read(&(flag),1) || !in.read(&(x),4) || !in.read(&(y),4) || !in.read(&(z),4)) {
        return false;
    }
    auto& local = context.world.stream.local;
    if (!local.in_vehicle) {
        return true;
    }
    WorldVehicle* vehicle = ((local.vehicle_id < 2000 && context.world.vehicles_.contains(local.vehicle_id)) ? &context.world.vehicles_.at(local.vehicle_id) : nullptr);
    if (vehicle == nullptr) {
        return true;
    }
    vehicle->angular_velocity = flag == 1;
    vehicle->velocity_x = x;
    vehicle->velocity_y = y;
    vehicle->velocity_z = z;
    return true;
}

// 0x10018670: the vehicle status byte.  The official handler reads the vehicle
// id (16) and one status byte, then calls FUN_100b7480, which stores the four
// tyre flags of the vehicle.  Only a streamed in vehicle is updated.
// Official: FUN_10018670 @ 0x10018670 (samp.dll)
bool rpc_set_vehicle_tire_status(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint16_t id = 0;
    std::uint8_t status = 0;
    if (!in.read(&(id),2) || !in.read(&(status),1)) {
        return false;
    }
    if (WorldVehicle* vehicle = ((id < 2000 && context.world.vehicles_.contains(id)) ? &context.world.vehicles_.at(id) : nullptr)) {
        vehicle->damage_tires = status;
    }
    return true;
}

// 0x10011090: SetVehicleDamageStatus, vehicleid (16), panels (32),
// doors (32), lights (8), tyres (8).
// Official: FUN_10011090 @ 0x10011090 (samp.dll)
bool rpc_set_vehicle_damage_status(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint16_t id = 0;
    std::uint32_t panels = 0, doors = 0;
    std::uint8_t lights = 0, tires = 0;
    if (!in.read(&(id),2) || !in.read(&(panels),4) || !in.read(&(doors),4) ||
        !in.read(&(lights),1) || !in.read(&(tires),1)) {
        return false;
    }
    WorldVehicle* vehicle = ((id < 2000 && context.world.vehicles_.contains(id)) ? &context.world.vehicles_.at(id) : nullptr);
    if (vehicle == nullptr) {
        return true;
    }
    vehicle->damage_panels = panels;
    vehicle->damage_doors = doors;
    vehicle->damage_lights = lights;
    vehicle->damage_tires = tires;
    return true;
}

// 0x1001b540: SetObjectPos, objectid (16), x, y, z and one ignored float.
// Official: FUN_1001b540 @ 0x1001b540 (samp.dll)
bool rpc_set_object_position(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint16_t id = 0;
    float x = 0.0f, y = 0.0f, z = 0.0f, ignored = 0.0f;
    if (!in.read(&(id),2) || !in.read(&(x),4) || !in.read(&(y),4) ||
        !in.read(&(z),4)) {
        return false;
    }
    static_cast<void>(in.read(&ignored,4)); // Native ignores failure of its unused fourth read.
    MapObject* object = (context.world.objects_.contains(id) ? &context.world.objects_.at(id) : nullptr);
    if (object != nullptr) {
        object->x = x;
        object->y = y;
        object->z = z;
        object->moving = false;
    }
    return true;
}

// 0x1001b650: SetObjectRot, objectid (16), rx, ry, rz.
// Official: FUN_1001b650 @ 0x1001b650 (samp.dll)
bool rpc_set_object_rotation(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint16_t id = 0;
    float rx = 0.0f, ry = 0.0f, rz = 0.0f;
    if (!in.read(&(id),2) || !in.read(&(rx),4) || !in.read(&(ry),4) || !in.read(&(rz),4)) {
        return false;
    }
    MapObject* object = (context.world.objects_.contains(id) ? &context.world.objects_.at(id) : nullptr);
    if (object != nullptr) {
        object->rotation_x = rx;
        object->rotation_y = ry;
        object->rotation_z = rz;
    }
    return true;
}

// 0x1001b750: DestroyObject, objectid (16).
// Official: FUN_1001b750 @ 0x1001b750 (samp.dll)
bool rpc_destroy_object(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint16_t id = 0;
    if (!in.read(&(id),2)) {
        return false;
    }
    context.world.objects_.erase(id);
    return true;
}

// 0x1001ba30: MoveObject.  The official handler reads ten words: the current
// position, the target position, the target rotation and the speed, and hands
// the last seven to FUN_100a97c0.  The first three are read and dropped.
// Official: FUN_1001ba30 @ 0x1001ba30 (samp.dll)
bool rpc_move_object(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint16_t id = 0;
    float current[3] = {};
    float target[3] = {};
    float rotation[3] = {};
    float speed = 0.0f;
    if (!in.read(&(id),2)) {
        return false;
    }
    for (float& value : current) {
        if (!in.read(&(value),4)) {
            return false;
        }
    }
    for (float& value : target) {
        if (!in.read(&(value),4)) {
            return false;
        }
    }
    for (float& value : rotation) {
        if (!in.read(&(value),4)) {
            return false;
        }
    }
    if (!in.read(&(speed),4)) {
        return false;
    }
    (void)current;
    MapObject* object = (context.world.objects_.contains(id) ? &context.world.objects_.at(id) : nullptr);
    if (object != nullptr) {
        object->moving = true;
        object->target_x = target[0];
        object->target_y = target[1];
        object->target_z = target[2];
        object->rotation_x = rotation[0];
        object->rotation_y = rotation[1];
        object->rotation_z = rotation[2];
        object->speed = speed;
    }
    return true;
}

// 0x1001bbe0: StopObject, objectid (16).
// Official: FUN_1001bbe0 @ 0x1001bbe0 (samp.dll)
bool rpc_stop_object(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint16_t id = 0;
    if (!in.read(&(id),2)) {
        return false;
    }
    MapObject* object = (context.world.objects_.contains(id) ? &context.world.objects_.at(id) : nullptr);
    if (object != nullptr) {
        object->moving = false;
        object->x = object->target_x;
        object->y = object->target_y;
        object->z = object->target_z;
    }
    return true;
}

// Official: FUN_1001a8a0 @ 0x1001a8a0 (samp.dll)
bool rpc_set_vehicle_health(ServerRpcContext& context,samp::proto::BitStream& input) {
    std::uint16_t id=0;float health=0;
    if(!input.read(&id,2) || !input.read(&health,4)) return false;
    const auto found=context.world.vehicles_.find(id);
    if(id>=2000 || found==context.world.vehicles_.end()) return true;
    found->second.health=health;
    if(context.commands) {
        VehicleAttributeCommand command{VehicleAttributeCommand::Kind::Health};command.id=id;command.health=health;
        context.commands->emplace_back(command);
    }
    return true;
}

// Official: FUN_100197a0 @ 0x100197a0 (samp.dll)
bool rpc_set_vehicle_position(ServerRpcContext& context,samp::proto::BitStream& input) {
    std::uint16_t id=0;std::array<float,3> position{};
    if(!input.read(&id,2) || !input.read(position.data(),12)) return false;
    const auto found=context.world.vehicles_.find(id);
    if(id>=2000 || found==context.world.vehicles_.end()) return true;
    auto& vehicle=found->second;vehicle.x=position[0];vehicle.y=position[1];vehicle.z=position[2];
    if(context.commands) {
        VehicleAttributeCommand command{VehicleAttributeCommand::Kind::Position};command.id=id;command.position=position;
        context.commands->emplace_back(command);
    }
    return true;
}

}  // namespace samp::client
