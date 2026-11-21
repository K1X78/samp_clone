#include "pawn/natives.hpp"

#include <algorithm>
#include <cmath>

namespace samp::pawn {
namespace {

// Official: FUN_0048f000 @ 0x0048f000 (samp-server.exe)
VehicleRotationBasis quaternion_to_basis(double w, double x, double y, double z) {
    const double ww = w * w;
    const double xx = x * x;
    const double yy = y * y;
    const double zz = z * z;
    return {{
        {static_cast<float>(xx - yy - zz + ww), static_cast<float>(2 * (x * y - w * z)),
            static_cast<float>(2 * (w * y + x * z))},
        {static_cast<float>(2 * (w * z + x * y)), static_cast<float>(yy - xx - zz + ww),
            static_cast<float>(2 * (y * z - w * x))},
        {static_cast<float>(2 * (x * z - w * y)), static_cast<float>(2 * (w * x + y * z)),
            static_cast<float>(zz - (yy + xx) + ww)},
    }};
}

// Official: FUN_0048ee60 @ 0x0048ee60 (samp-server.exe)
std::array<float, 4> basis_to_quaternion(const std::array<float, 3>& right,
                                         const std::array<float, 3>& forward,
                                         const std::array<float, 3>& up) {
    const auto magnitude = [](double squared) { return 0.5 * std::sqrt(std::max(squared, 0.0)); };
    const double xx = right[0];
    const double yy = forward[1];
    const double zz = up[2];
    return {
        static_cast<float>(magnitude(xx + yy + zz + 1.0)),
        static_cast<float>(std::copysign(magnitude(xx + 1.0 - yy - zz), double(up[1]) - forward[2])),
        static_cast<float>(std::copysign(magnitude(yy + (1.0 - xx) - zz), double(right[2]) - up[0])),
        static_cast<float>(std::copysign(magnitude(1.0 - xx - yy + zz), double(forward[0]) - right[1])),
    };
}

} // namespace

// Official: FUN_0048f120 @ 0x0048f120 (samp-server.exe)
VehicleRotationBasis vehicle_basis_from_quaternion(const std::array<float, 4>& quaternion) {
    return quaternion_to_basis(quaternion[0], quaternion[1], quaternion[2], quaternion[3]);
}

// Official: FUN_0048f0d0 @ 0x0048f0d0 (samp-server.exe)
std::array<float, 4> vehicle_quaternion_from_basis(const VehicleRotationBasis& basis) {
    return basis_to_quaternion(basis[0], basis[1], basis[2]);
}

} // namespace samp::pawn
