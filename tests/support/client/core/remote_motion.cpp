#include "samp/client/remote_motion.hpp"
#include <cmath>
#include <algorithm>

namespace samp::client {
// reconstruction-only body helper extracted
PedQuaternion ped_quaternion(const PedMatrix& m) {
    // Explicit float intermediates match the stores in 0x100b48b0.
    float t=m[0]+m[5]+m[10]+1.f;
    const float w=static_cast<float>(std::sqrt(std::max(t,0.f))*.5);
    t=((m[0]+1.f)-m[5])-m[10];
    const float x=static_cast<float>(std::sqrt(std::max(t,0.f))*.5);
    const float rem=1.f-m[0];
    t=(m[5]+rem)-m[10];
    const float y=static_cast<float>(std::sqrt(std::max(t,0.f))*.5);
    t=(rem-m[5])+m[10];
    const float z=static_cast<float>(std::sqrt(std::max(t,0.f))*.5);
    return {w,std::copysign(x,m[9]-m[6]),std::copysign(y,m[2]-m[8]),std::copysign(z,m[4]-m[1])};
}
// reconstruction-only body helper extracted
void ped_rotation(PedMatrix& m,const PedQuaternion& q) {
    const float ww=q.w*q.w,xx=q.x*q.x,yy=q.y*q.y,zz=q.z*q.z;
    m[0]=((xx-yy)-zz)+ww; m[5]=((yy-xx)-zz)+ww; m[10]=(zz-(yy+xx))+ww;
    float t=q.w*q.z+q.x*q.y;m[4]=t+t;
    t=q.x*q.y-q.w*q.z;m[1]=t+t;
    t=q.x*q.z-q.w*q.y;m[8]=t+t;
    t=q.w*q.y+q.x*q.z;m[2]=t+t;
    t=q.w*q.x+q.y*q.z;m[9]=t+t;
    t=q.y*q.z-q.w*q.x;m[6]=t+t;
}
// reconstruction-only body helper extracted
PedQuaternion blend_ped_rotation(const PedQuaternion& target,const PedQuaternion& current) {
    // D3DXQuaternionSlerp(target,current,0.75), called by 0x100b4fc0.
    float dot=target.w*current.w+target.x*current.x+target.y*current.y+target.z*current.z;
    const float sign=dot<0.f?-1.f:1.f;
    dot=std::fabs(dot);
    float a=.25f,b=.75f;
    if(1.f-dot>.001f) {
        const float theta=std::acos(std::clamp(dot,-1.f,1.f));
        const float sine=std::sin(theta);
        a=std::sin(theta*.25f)/sine;b=std::sin(theta*.75f)/sine;
    }
    b*=sign;
    return {a*target.w+b*current.w,a*target.x+b*current.x,a*target.y+b*current.y,a*target.z+b*current.z};
}
}
