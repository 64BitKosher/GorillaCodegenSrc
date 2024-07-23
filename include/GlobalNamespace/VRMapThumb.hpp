// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VRMap
#include "GlobalNamespace/VRMap.hpp"
// Including type: UnityEngine.XR.InputFeatureUsage
#include "UnityEngine/XR/InputFeatureUsage.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: VRMapThumb
  class VRMapThumb;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::VRMapThumb);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VRMapThumb*, "", "VRMapThumb");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x124
  #pragma pack(push, 1)
  // Autogenerated type: VRMapThumb
  // [TokenAttribute] Offset: FFFFFFFF
  class VRMapThumb : public ::GlobalNamespace::VRMap {
    public:
    public:
    // public UnityEngine.XR.InputFeatureUsage inputAxis
    // Size: 0xC
    // Offset: 0x98
    ::UnityEngine::XR::InputFeatureUsage inputAxis;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::InputFeatureUsage) == 0xC);
    // Padding between fields: inputAxis and: primaryButtonTouch
    char __padding0[0x4] = {};
    // public System.Boolean primaryButtonTouch
    // Size: 0x1
    // Offset: 0xA8
    bool primaryButtonTouch;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean primaryButtonPress
    // Size: 0x1
    // Offset: 0xA9
    bool primaryButtonPress;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean secondaryButtonTouch
    // Size: 0x1
    // Offset: 0xAA
    bool secondaryButtonTouch;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean secondaryButtonPress
    // Size: 0x1
    // Offset: 0xAB
    bool secondaryButtonPress;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: secondaryButtonPress and: fingerBone1
    char __padding4[0x4] = {};
    // public UnityEngine.Transform fingerBone1
    // Size: 0x8
    // Offset: 0xB0
    ::UnityEngine::Transform* fingerBone1;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform fingerBone2
    // Size: 0x8
    // Offset: 0xB8
    ::UnityEngine::Transform* fingerBone2;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Vector3 closedAngle1
    // Size: 0xC
    // Offset: 0xC0
    ::UnityEngine::Vector3 closedAngle1;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 closedAngle2
    // Size: 0xC
    // Offset: 0xCC
    ::UnityEngine::Vector3 closedAngle2;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 startingAngle1
    // Size: 0xC
    // Offset: 0xD8
    ::UnityEngine::Vector3 startingAngle1;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 startingAngle2
    // Size: 0xC
    // Offset: 0xE4
    ::UnityEngine::Vector3 startingAngle2;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion[] angle1Table
    // Size: 0x8
    // Offset: 0xF0
    ::ArrayW<::UnityEngine::Quaternion> angle1Table;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Quaternion>) == 0x8);
    // public UnityEngine.Quaternion[] angle2Table
    // Size: 0x8
    // Offset: 0xF8
    ::ArrayW<::UnityEngine::Quaternion> angle2Table;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Quaternion>) == 0x8);
    // private System.Single currentAngle1
    // Size: 0x4
    // Offset: 0x100
    float currentAngle1;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single currentAngle2
    // Size: 0x4
    // Offset: 0x104
    float currentAngle2;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 lastAngle1
    // Size: 0x4
    // Offset: 0x108
    int lastAngle1;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 lastAngle2
    // Size: 0x4
    // Offset: 0x10C
    int lastAngle2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.XR.InputDevice tempDevice
    // Size: 0x9
    // Offset: 0x110
    ::UnityEngine::XR::InputDevice tempDevice;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::InputDevice) == 0x9);
    // Padding between fields: tempDevice and: myTempInt
    char __padding17[0x7] = {};
    // private System.Int32 myTempInt
    // Size: 0x4
    // Offset: 0x120
    int myTempInt;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public UnityEngine.XR.InputFeatureUsage inputAxis
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::InputFeatureUsage& dyn_inputAxis();
    // Get instance field reference: public System.Boolean primaryButtonTouch
    [[deprecated("Use field access instead!")]] bool& dyn_primaryButtonTouch();
    // Get instance field reference: public System.Boolean primaryButtonPress
    [[deprecated("Use field access instead!")]] bool& dyn_primaryButtonPress();
    // Get instance field reference: public System.Boolean secondaryButtonTouch
    [[deprecated("Use field access instead!")]] bool& dyn_secondaryButtonTouch();
    // Get instance field reference: public System.Boolean secondaryButtonPress
    [[deprecated("Use field access instead!")]] bool& dyn_secondaryButtonPress();
    // Get instance field reference: public UnityEngine.Transform fingerBone1
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_fingerBone1();
    // Get instance field reference: public UnityEngine.Transform fingerBone2
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_fingerBone2();
    // Get instance field reference: public UnityEngine.Vector3 closedAngle1
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_closedAngle1();
    // Get instance field reference: public UnityEngine.Vector3 closedAngle2
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_closedAngle2();
    // Get instance field reference: public UnityEngine.Vector3 startingAngle1
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_startingAngle1();
    // Get instance field reference: public UnityEngine.Vector3 startingAngle2
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_startingAngle2();
    // Get instance field reference: public UnityEngine.Quaternion[] angle1Table
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Quaternion>& dyn_angle1Table();
    // Get instance field reference: public UnityEngine.Quaternion[] angle2Table
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Quaternion>& dyn_angle2Table();
    // Get instance field reference: private System.Single currentAngle1
    [[deprecated("Use field access instead!")]] float& dyn_currentAngle1();
    // Get instance field reference: private System.Single currentAngle2
    [[deprecated("Use field access instead!")]] float& dyn_currentAngle2();
    // Get instance field reference: private System.Int32 lastAngle1
    [[deprecated("Use field access instead!")]] int& dyn_lastAngle1();
    // Get instance field reference: private System.Int32 lastAngle2
    [[deprecated("Use field access instead!")]] int& dyn_lastAngle2();
    // Get instance field reference: private UnityEngine.XR.InputDevice tempDevice
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::InputDevice& dyn_tempDevice();
    // Get instance field reference: private System.Int32 myTempInt
    [[deprecated("Use field access instead!")]] int& dyn_myTempInt();
    // public override System.Void MapMyFinger(System.Single lerpValue)
    // Offset: 0x26A7DDC
    // Implemented from: VRMap
    // Base method: System.Void VRMap::MapMyFinger(System.Single lerpValue)
    void MapMyFinger(float lerpValue);
    // public override System.Void LerpFinger(System.Single lerpValue, System.Boolean isOther)
    // Offset: 0x26A7F54
    // Implemented from: VRMap
    // Base method: System.Void VRMap::LerpFinger(System.Single lerpValue, System.Boolean isOther)
    void LerpFinger(float lerpValue, bool isOther);
    // public System.Void .ctor()
    // Offset: 0x26A8264
    // Implemented from: VRMap
    // Base method: System.Void VRMap::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRMapThumb* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::VRMapThumb::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRMapThumb*, creationType>()));
    }
  }; // VRMapThumb
  #pragma pack(pop)
  static check_size<sizeof(VRMapThumb), 288 + sizeof(int)> __GlobalNamespace_VRMapThumbSizeCheck;
  static_assert(sizeof(VRMapThumb) == 0x124);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VRMapThumb::MapMyFinger
// Il2CppName: MapMyFinger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRMapThumb::*)(float)>(&GlobalNamespace::VRMapThumb::MapMyFinger)> {
  static const MethodInfo* get() {
    static auto* lerpValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRMapThumb*), "MapMyFinger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lerpValue});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRMapThumb::LerpFinger
// Il2CppName: LerpFinger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRMapThumb::*)(float, bool)>(&GlobalNamespace::VRMapThumb::LerpFinger)> {
  static const MethodInfo* get() {
    static auto* lerpValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* isOther = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRMapThumb*), "LerpFinger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lerpValue, isOther});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRMapThumb::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
