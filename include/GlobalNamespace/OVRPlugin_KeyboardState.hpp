// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVRPlugin/Bool
// Already included the same include: GlobalNamespace/OVRPlugin.hpp
// Including type: OVRPlugin/PoseStatef
#include "GlobalNamespace/OVRPlugin_PoseStatef.hpp"
// Including type: OVRPlugin/Vector4f
#include "GlobalNamespace/OVRPlugin_Vector4f.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::KeyboardState, "", "OVRPlugin/KeyboardState");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x80
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/KeyboardState
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::KeyboardState/*, public ::System::ValueType*/ {
    public:
    public:
    // public OVRPlugin/Bool IsActive
    // Size: 0x4
    // Offset: 0x0
    ::GlobalNamespace::OVRPlugin::Bool IsActive;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::Bool) == 0x4);
    // public OVRPlugin/Bool OrientationValid
    // Size: 0x4
    // Offset: 0x4
    ::GlobalNamespace::OVRPlugin::Bool OrientationValid;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::Bool) == 0x4);
    // public OVRPlugin/Bool PositionValid
    // Size: 0x4
    // Offset: 0x8
    ::GlobalNamespace::OVRPlugin::Bool PositionValid;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::Bool) == 0x4);
    // public OVRPlugin/Bool OrientationTracked
    // Size: 0x4
    // Offset: 0xC
    ::GlobalNamespace::OVRPlugin::Bool OrientationTracked;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::Bool) == 0x4);
    // public OVRPlugin/Bool PositionTracked
    // Size: 0x4
    // Offset: 0x10
    ::GlobalNamespace::OVRPlugin::Bool PositionTracked;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::Bool) == 0x4);
    // Padding between fields: PositionTracked and: PoseState
    char __padding4[0x4] = {};
    // public OVRPlugin/PoseStatef PoseState
    // Size: 0x58
    // Offset: 0x18
    ::GlobalNamespace::OVRPlugin::PoseStatef PoseState;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::PoseStatef) == 0x58);
    // public OVRPlugin/Vector4f ContrastParameters
    // Size: 0x10
    // Offset: 0x70
    ::GlobalNamespace::OVRPlugin::Vector4f ContrastParameters;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::Vector4f) == 0x10);
    public:
    // Creating value type constructor for type: KeyboardState
    constexpr KeyboardState(::GlobalNamespace::OVRPlugin::Bool IsActive_ = {}, ::GlobalNamespace::OVRPlugin::Bool OrientationValid_ = {}, ::GlobalNamespace::OVRPlugin::Bool PositionValid_ = {}, ::GlobalNamespace::OVRPlugin::Bool OrientationTracked_ = {}, ::GlobalNamespace::OVRPlugin::Bool PositionTracked_ = {}, ::GlobalNamespace::OVRPlugin::PoseStatef PoseState_ = {}, ::GlobalNamespace::OVRPlugin::Vector4f ContrastParameters_ = {}) noexcept : IsActive{IsActive_}, OrientationValid{OrientationValid_}, PositionValid{PositionValid_}, OrientationTracked{OrientationTracked_}, PositionTracked{PositionTracked_}, PoseState{PoseState_}, ContrastParameters{ContrastParameters_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public OVRPlugin/Bool IsActive
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRPlugin::Bool& dyn_IsActive();
    // Get instance field reference: public OVRPlugin/Bool OrientationValid
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRPlugin::Bool& dyn_OrientationValid();
    // Get instance field reference: public OVRPlugin/Bool PositionValid
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRPlugin::Bool& dyn_PositionValid();
    // Get instance field reference: public OVRPlugin/Bool OrientationTracked
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRPlugin::Bool& dyn_OrientationTracked();
    // Get instance field reference: public OVRPlugin/Bool PositionTracked
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRPlugin::Bool& dyn_PositionTracked();
    // Get instance field reference: public OVRPlugin/PoseStatef PoseState
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRPlugin::PoseStatef& dyn_PoseState();
    // Get instance field reference: public OVRPlugin/Vector4f ContrastParameters
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRPlugin::Vector4f& dyn_ContrastParameters();
  }; // OVRPlugin/KeyboardState
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::KeyboardState), 112 + sizeof(::GlobalNamespace::OVRPlugin::Vector4f)> __GlobalNamespace_OVRPlugin_KeyboardStateSizeCheck;
  static_assert(sizeof(OVRPlugin::KeyboardState) == 0x80);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
