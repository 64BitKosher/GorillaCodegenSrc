// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Cinemachine.ClipperLib
#include "Cinemachine/ClipperLib.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::ClipperLib::DoublePoint, "Cinemachine", "ClipperLib/DoublePoint");
// Type namespace: Cinemachine
namespace Cinemachine {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Cinemachine.ClipperLib/DoublePoint
  // [TokenAttribute] Offset: FFFFFFFF
  struct ClipperLib::DoublePoint/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Double X
    // Size: 0x8
    // Offset: 0x0
    double X;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Double Y
    // Size: 0x8
    // Offset: 0x8
    double Y;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    public:
    // Creating value type constructor for type: DoublePoint
    constexpr DoublePoint(double X_ = {}, double Y_ = {}) noexcept : X{X_}, Y{Y_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Double X
    [[deprecated("Use field access instead!")]] double& dyn_X();
    // Get instance field reference: public System.Double Y
    [[deprecated("Use field access instead!")]] double& dyn_Y();
    // public System.Void .ctor(System.Double x, System.Double y)
    // Offset: 0x2ABC114
    // ABORTED: conflicts with another method.  DoublePoint(double x, double y);
    // public System.Void .ctor(Cinemachine.ClipperLib/DoublePoint dp)
    // Offset: 0x2ABC11C
    // ABORTED: is copy constructor.  DoublePoint(::Cinemachine::ClipperLib::DoublePoint dp);
    // public System.Void .ctor(Cinemachine.ClipperLib/IntPoint ip)
    // Offset: 0x2ABC124
    DoublePoint(::Cinemachine::ClipperLib::IntPoint ip);
  }; // Cinemachine.ClipperLib/DoublePoint
  #pragma pack(pop)
  static check_size<sizeof(ClipperLib::DoublePoint), 8 + sizeof(double)> __Cinemachine_ClipperLib_DoublePointSizeCheck;
  static_assert(sizeof(ClipperLib::DoublePoint) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Cinemachine::ClipperLib::DoublePoint::DoublePoint
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Cinemachine::ClipperLib::DoublePoint::DoublePoint
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Cinemachine::ClipperLib::DoublePoint::DoublePoint
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!