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
  // Forward declaring type: VRMapMiddle
  class VRMapMiddle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::VRMapMiddle);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VRMapMiddle*, "", "VRMapMiddle");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x15C
  #pragma pack(push, 1)
  // Autogenerated type: VRMapMiddle
  // [TokenAttribute] Offset: FFFFFFFF
  class VRMapMiddle : public ::GlobalNamespace::VRMap {
    public:
    public:
    // public UnityEngine.XR.InputFeatureUsage inputAxis
    // Size: 0xC
    // Offset: 0x98
    ::UnityEngine::XR::InputFeatureUsage inputAxis;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::InputFeatureUsage) == 0xC);
    // Padding between fields: inputAxis and: gripValue
    char __padding0[0x4] = {};
    // public System.Single gripValue
    // Size: 0x4
    // Offset: 0xA8
    float gripValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: gripValue and: fingerBone1
    char __padding1[0x4] = {};
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
    // public UnityEngine.Transform fingerBone3
    // Size: 0x8
    // Offset: 0xC0
    ::UnityEngine::Transform* fingerBone3;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public System.Single closedAngles
    // Size: 0x4
    // Offset: 0xC8
    float closedAngles;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector3 closedAngle1
    // Size: 0xC
    // Offset: 0xCC
    ::UnityEngine::Vector3 closedAngle1;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 closedAngle2
    // Size: 0xC
    // Offset: 0xD8
    ::UnityEngine::Vector3 closedAngle2;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 closedAngle3
    // Size: 0xC
    // Offset: 0xE4
    ::UnityEngine::Vector3 closedAngle3;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 startingAngle1
    // Size: 0xC
    // Offset: 0xF0
    ::UnityEngine::Vector3 startingAngle1;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 startingAngle2
    // Size: 0xC
    // Offset: 0xFC
    ::UnityEngine::Vector3 startingAngle2;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 startingAngle3
    // Size: 0xC
    // Offset: 0x108
    ::UnityEngine::Vector3 startingAngle3;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // Padding between fields: startingAngle3 and: angle1Table
    char __padding11[0x4] = {};
    // public UnityEngine.Quaternion[] angle1Table
    // Size: 0x8
    // Offset: 0x118
    ::ArrayW<::UnityEngine::Quaternion> angle1Table;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Quaternion>) == 0x8);
    // public UnityEngine.Quaternion[] angle2Table
    // Size: 0x8
    // Offset: 0x120
    ::ArrayW<::UnityEngine::Quaternion> angle2Table;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Quaternion>) == 0x8);
    // public UnityEngine.Quaternion[] angle3Table
    // Size: 0x8
    // Offset: 0x128
    ::ArrayW<::UnityEngine::Quaternion> angle3Table;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Quaternion>) == 0x8);
    // private System.Int32 lastAngle1
    // Size: 0x4
    // Offset: 0x130
    int lastAngle1;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 lastAngle2
    // Size: 0x4
    // Offset: 0x134
    int lastAngle2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 lastAngle3
    // Size: 0x4
    // Offset: 0x138
    int lastAngle3;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single currentAngle1
    // Size: 0x4
    // Offset: 0x13C
    float currentAngle1;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single currentAngle2
    // Size: 0x4
    // Offset: 0x140
    float currentAngle2;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single currentAngle3
    // Size: 0x4
    // Offset: 0x144
    float currentAngle3;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.XR.InputDevice tempDevice
    // Size: 0x9
    // Offset: 0x148
    ::UnityEngine::XR::InputDevice tempDevice;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::InputDevice) == 0x9);
    // Padding between fields: tempDevice and: myTempInt
    char __padding21[0x7] = {};
    // private System.Int32 myTempInt
    // Size: 0x4
    // Offset: 0x158
    int myTempInt;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public UnityEngine.XR.InputFeatureUsage inputAxis
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::InputFeatureUsage& dyn_inputAxis();
    // Get instance field reference: public System.Single gripValue
    [[deprecated("Use field access instead!")]] float& dyn_gripValue();
    // Get instance field reference: public UnityEngine.Transform fingerBone1
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_fingerBone1();
    // Get instance field reference: public UnityEngine.Transform fingerBone2
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_fingerBone2();
    // Get instance field reference: public UnityEngine.Transform fingerBone3
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_fingerBone3();
    // Get instance field reference: public System.Single closedAngles
    [[deprecated("Use field access instead!")]] float& dyn_closedAngles();
    // Get instance field reference: public UnityEngine.Vector3 closedAngle1
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_closedAngle1();
    // Get instance field reference: public UnityEngine.Vector3 closedAngle2
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_closedAngle2();
    // Get instance field reference: public UnityEngine.Vector3 closedAngle3
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_closedAngle3();
    // Get instance field reference: public UnityEngine.Vector3 startingAngle1
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_startingAngle1();
    // Get instance field reference: public UnityEngine.Vector3 startingAngle2
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_startingAngle2();
    // Get instance field reference: public UnityEngine.Vector3 startingAngle3
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_startingAngle3();
    // Get instance field reference: public UnityEngine.Quaternion[] angle1Table
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Quaternion>& dyn_angle1Table();
    // Get instance field reference: public UnityEngine.Quaternion[] angle2Table
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Quaternion>& dyn_angle2Table();
    // Get instance field reference: public UnityEngine.Quaternion[] angle3Table
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Quaternion>& dyn_angle3Table();
    // Get instance field reference: private System.Int32 lastAngle1
    [[deprecated("Use field access instead!")]] int& dyn_lastAngle1();
    // Get instance field reference: private System.Int32 lastAngle2
    [[deprecated("Use field access instead!")]] int& dyn_lastAngle2();
    // Get instance field reference: private System.Int32 lastAngle3
    [[deprecated("Use field access instead!")]] int& dyn_lastAngle3();
    // Get instance field reference: private System.Single currentAngle1
    [[deprecated("Use field access instead!")]] float& dyn_currentAngle1();
    // Get instance field reference: private System.Single currentAngle2
    [[deprecated("Use field access instead!")]] float& dyn_currentAngle2();
    // Get instance field reference: private System.Single currentAngle3
    [[deprecated("Use field access instead!")]] float& dyn_currentAngle3();
    // Get instance field reference: private UnityEngine.XR.InputDevice tempDevice
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::InputDevice& dyn_tempDevice();
    // Get instance field reference: private System.Int32 myTempInt
    [[deprecated("Use field access instead!")]] int& dyn_myTempInt();
    // public override System.Void MapMyFinger(System.Single lerpValue)
    // Offset: 0x26A7910
    // Implemented from: VRMap
    // Base method: System.Void VRMap::MapMyFinger(System.Single lerpValue)
    void MapMyFinger(float lerpValue);
    // public override System.Void LerpFinger(System.Single lerpValue, System.Boolean isOther)
    // Offset: 0x26A7958
    // Implemented from: VRMap
    // Base method: System.Void VRMap::LerpFinger(System.Single lerpValue, System.Boolean isOther)
    void LerpFinger(float lerpValue, bool isOther);
    // public System.Void .ctor()
    // Offset: 0x26A7DD4
    // Implemented from: VRMap
    // Base method: System.Void VRMap::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRMapMiddle* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::VRMapMiddle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRMapMiddle*, creationType>()));
    }
  }; // VRMapMiddle
  #pragma pack(pop)
  static check_size<sizeof(VRMapMiddle), 344 + sizeof(int)> __GlobalNamespace_VRMapMiddleSizeCheck;
  static_assert(sizeof(VRMapMiddle) == 0x15C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VRMapMiddle::MapMyFinger
// Il2CppName: MapMyFinger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRMapMiddle::*)(float)>(&GlobalNamespace::VRMapMiddle::MapMyFinger)> {
  static const MethodInfo* get() {
    static auto* lerpValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRMapMiddle*), "MapMyFinger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lerpValue});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRMapMiddle::LerpFinger
// Il2CppName: LerpFinger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VRMapMiddle::*)(float, bool)>(&GlobalNamespace::VRMapMiddle::LerpFinger)> {
  static const MethodInfo* get() {
    static auto* lerpValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* isOther = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VRMapMiddle*), "LerpFinger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lerpValue, isOther});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VRMapMiddle::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
