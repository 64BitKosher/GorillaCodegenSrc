// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRLocatable
#include "GlobalNamespace/OVRLocatable.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Including type: OVRPlugin/SpaceLocationFlags
#include "GlobalNamespace/OVRPlugin_SpaceLocationFlags.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRLocatable::TrackingSpacePose, "", "OVRLocatable/TrackingSpacePose");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRLocatable/TrackingSpacePose
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct OVRLocatable::TrackingSpacePose/*, public ::System::ValueType*/ {
    public:
    public:
    // private readonly System.Nullable`1<UnityEngine.Vector3> <Position>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    ::System::Nullable_1<::UnityEngine::Vector3> Position;
    // private readonly System.Nullable`1<UnityEngine.Quaternion> <Rotation>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x10
    ::System::Nullable_1<::UnityEngine::Quaternion> Rotation;
    // private readonly OVRPlugin/SpaceLocationFlags _flags
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::OVRPlugin::SpaceLocationFlags flags;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::SpaceLocationFlags) == 0x8);
    public:
    // Creating value type constructor for type: TrackingSpacePose
    constexpr TrackingSpacePose(::System::Nullable_1<::UnityEngine::Vector3> Position_ = {}, ::System::Nullable_1<::UnityEngine::Quaternion> Rotation_ = {}, ::GlobalNamespace::OVRPlugin::SpaceLocationFlags flags_ = {}) noexcept : Position{Position_}, Rotation{Rotation_}, flags{flags_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private readonly System.Nullable`1<UnityEngine.Vector3> <Position>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::UnityEngine::Vector3>& dyn_$Position$k__BackingField();
    // Get instance field reference: private readonly System.Nullable`1<UnityEngine.Quaternion> <Rotation>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::UnityEngine::Quaternion>& dyn_$Rotation$k__BackingField();
    // Get instance field reference: private readonly OVRPlugin/SpaceLocationFlags _flags
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRPlugin::SpaceLocationFlags& dyn__flags();
    // public System.Nullable`1<UnityEngine.Vector3> get_Position()
    // Offset: 0x48AF310
    ::System::Nullable_1<::UnityEngine::Vector3> get_Position();
    // public System.Nullable`1<UnityEngine.Quaternion> get_Rotation()
    // Offset: 0x48AF31C
    ::System::Nullable_1<::UnityEngine::Quaternion> get_Rotation();
    // public System.Boolean get_IsPositionTracked()
    // Offset: 0x48AF330
    bool get_IsPositionTracked();
    // public System.Boolean get_IsRotationTracked()
    // Offset: 0x48AF38C
    bool get_IsRotationTracked();
    // System.Void .ctor(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, OVRPlugin/SpaceLocationFlags flags)
    // Offset: 0x48AF07C
    TrackingSpacePose(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::GlobalNamespace::OVRPlugin::SpaceLocationFlags flags);
    // public System.Nullable`1<UnityEngine.Vector3> ComputeWorldPosition(UnityEngine.Camera camera)
    // Offset: 0x48AF3E8
    ::System::Nullable_1<::UnityEngine::Vector3> ComputeWorldPosition(::UnityEngine::Camera* camera);
    // public System.Nullable`1<UnityEngine.Quaternion> ComputeWorldRotation(UnityEngine.Camera camera)
    // Offset: 0x48AFC00
    ::System::Nullable_1<::UnityEngine::Quaternion> ComputeWorldRotation(::UnityEngine::Camera* camera);
  }; // OVRLocatable/TrackingSpacePose
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRLocatable::TrackingSpacePose::get_Position
// Il2CppName: get_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::Vector3> (GlobalNamespace::OVRLocatable::TrackingSpacePose::*)()>(&GlobalNamespace::OVRLocatable::TrackingSpacePose::get_Position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLocatable::TrackingSpacePose), "get_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLocatable::TrackingSpacePose::get_Rotation
// Il2CppName: get_Rotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::Quaternion> (GlobalNamespace::OVRLocatable::TrackingSpacePose::*)()>(&GlobalNamespace::OVRLocatable::TrackingSpacePose::get_Rotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLocatable::TrackingSpacePose), "get_Rotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLocatable::TrackingSpacePose::get_IsPositionTracked
// Il2CppName: get_IsPositionTracked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRLocatable::TrackingSpacePose::*)()>(&GlobalNamespace::OVRLocatable::TrackingSpacePose::get_IsPositionTracked)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLocatable::TrackingSpacePose), "get_IsPositionTracked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLocatable::TrackingSpacePose::get_IsRotationTracked
// Il2CppName: get_IsRotationTracked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRLocatable::TrackingSpacePose::*)()>(&GlobalNamespace::OVRLocatable::TrackingSpacePose::get_IsRotationTracked)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLocatable::TrackingSpacePose), "get_IsRotationTracked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLocatable::TrackingSpacePose::TrackingSpacePose
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRLocatable::TrackingSpacePose::ComputeWorldPosition
// Il2CppName: ComputeWorldPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::Vector3> (GlobalNamespace::OVRLocatable::TrackingSpacePose::*)(::UnityEngine::Camera*)>(&GlobalNamespace::OVRLocatable::TrackingSpacePose::ComputeWorldPosition)> {
  static const MethodInfo* get() {
    static auto* camera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLocatable::TrackingSpacePose), "ComputeWorldPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{camera});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLocatable::TrackingSpacePose::ComputeWorldRotation
// Il2CppName: ComputeWorldRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::Quaternion> (GlobalNamespace::OVRLocatable::TrackingSpacePose::*)(::UnityEngine::Camera*)>(&GlobalNamespace::OVRLocatable::TrackingSpacePose::ComputeWorldRotation)> {
  static const MethodInfo* get() {
    static auto* camera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLocatable::TrackingSpacePose), "ComputeWorldRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{camera});
  }
};
