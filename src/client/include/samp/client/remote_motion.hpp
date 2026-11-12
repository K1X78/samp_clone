#pragma once
#include <array>
#include "samp/proto/remote_sync.hpp"

namespace samp::client {
using PedMatrix=std::array<float,16>;
using PedVector=samp::proto::sync::Vector3;
using PedQuaternion=samp::proto::remote::Quaternion;
// 0x100b48b0 / 0x100b4a50 use SA-MP's W,X,Y,Z order and GTA's matrix signs.
PedQuaternion ped_quaternion(const PedMatrix& matrix);
void ped_rotation(PedMatrix& matrix,const PedQuaternion& quaternion);
PedQuaternion blend_ped_rotation(const PedQuaternion& target,const PedQuaternion& current);
}
