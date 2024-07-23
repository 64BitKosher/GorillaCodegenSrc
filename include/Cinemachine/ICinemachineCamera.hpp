// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Vector3
  struct Vector3;
}
// Forward declaring namespace: Cinemachine
namespace Cinemachine {
  // Forward declaring type: CameraState
  struct CameraState;
}
// Completed forward declares
// Type namespace: Cinemachine
namespace Cinemachine {
  // Forward declaring type: ICinemachineCamera
  class ICinemachineCamera;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Cinemachine::ICinemachineCamera);
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::ICinemachineCamera*, "Cinemachine", "ICinemachineCamera");
// Type namespace: Cinemachine
namespace Cinemachine {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Cinemachine.ICinemachineCamera
  // [TokenAttribute] Offset: FFFFFFFF
  class ICinemachineCamera {
    public:
    // public System.String get_Name()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_Name();
    // public System.String get_Description()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_Description();
    // public System.Int32 get_Priority()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_Priority();
    // public System.Void set_Priority(System.Int32 value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Priority(int value);
    // public UnityEngine.Transform get_LookAt()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Transform* get_LookAt();
    // public System.Void set_LookAt(UnityEngine.Transform value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_LookAt(::UnityEngine::Transform* value);
    // public UnityEngine.Transform get_Follow()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Transform* get_Follow();
    // public System.Void set_Follow(UnityEngine.Transform value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Follow(::UnityEngine::Transform* value);
    // public Cinemachine.CameraState get_State()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Cinemachine::CameraState get_State();
    // public UnityEngine.GameObject get_VirtualCameraGameObject()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::GameObject* get_VirtualCameraGameObject();
    // public System.Boolean get_IsValid()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_IsValid();
    // public Cinemachine.ICinemachineCamera get_ParentCamera()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Cinemachine::ICinemachineCamera* get_ParentCamera();
    // public System.Boolean IsLiveChild(Cinemachine.ICinemachineCamera vcam, System.Boolean dominantChildOnly)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool IsLiveChild(::Cinemachine::ICinemachineCamera* vcam, bool dominantChildOnly);
    // public System.Void UpdateCameraState(UnityEngine.Vector3 worldUp, System.Single deltaTime)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void UpdateCameraState(::UnityEngine::Vector3 worldUp, float deltaTime);
    // public System.Void InternalUpdateCameraState(UnityEngine.Vector3 worldUp, System.Single deltaTime)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void InternalUpdateCameraState(::UnityEngine::Vector3 worldUp, float deltaTime);
    // public System.Void OnTransitionFromCamera(Cinemachine.ICinemachineCamera fromCam, UnityEngine.Vector3 worldUp, System.Single deltaTime)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* fromCam, ::UnityEngine::Vector3 worldUp, float deltaTime);
    // public System.Void OnTargetObjectWarped(UnityEngine.Transform target, UnityEngine.Vector3 positionDelta)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnTargetObjectWarped(::UnityEngine::Transform* target, ::UnityEngine::Vector3 positionDelta);
  }; // Cinemachine.ICinemachineCamera
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Cinemachine::ICinemachineCamera::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Cinemachine::ICinemachineCamera::*)()>(&Cinemachine::ICinemachineCamera::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::ICinemachineCamera*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::ICinemachineCamera::get_Description
// Il2CppName: get_Description
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Cinemachine::ICinemachineCamera::*)()>(&Cinemachine::ICinemachineCamera::get_Description)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::ICinemachineCamera*), "get_Description", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::ICinemachineCamera::get_Priority
// Il2CppName: get_Priority
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Cinemachine::ICinemachineCamera::*)()>(&Cinemachine::ICinemachineCamera::get_Priority)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::ICinemachineCamera*), "get_Priority", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::ICinemachineCamera::set_Priority
// Il2CppName: set_Priority
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::ICinemachineCamera::*)(int)>(&Cinemachine::ICinemachineCamera::set_Priority)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::ICinemachineCamera*), "set_Priority", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Cinemachine::ICinemachineCamera::get_LookAt
// Il2CppName: get_LookAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (Cinemachine::ICinemachineCamera::*)()>(&Cinemachine::ICinemachineCamera::get_LookAt)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::ICinemachineCamera*), "get_LookAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::ICinemachineCamera::set_LookAt
// Il2CppName: set_LookAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::ICinemachineCamera::*)(::UnityEngine::Transform*)>(&Cinemachine::ICinemachineCamera::set_LookAt)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::ICinemachineCamera*), "set_LookAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Cinemachine::ICinemachineCamera::get_Follow
// Il2CppName: get_Follow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (Cinemachine::ICinemachineCamera::*)()>(&Cinemachine::ICinemachineCamera::get_Follow)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::ICinemachineCamera*), "get_Follow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::ICinemachineCamera::set_Follow
// Il2CppName: set_Follow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::ICinemachineCamera::*)(::UnityEngine::Transform*)>(&Cinemachine::ICinemachineCamera::set_Follow)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::ICinemachineCamera*), "set_Follow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Cinemachine::ICinemachineCamera::get_State
// Il2CppName: get_State
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Cinemachine::CameraState (Cinemachine::ICinemachineCamera::*)()>(&Cinemachine::ICinemachineCamera::get_State)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::ICinemachineCamera*), "get_State", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::ICinemachineCamera::get_VirtualCameraGameObject
// Il2CppName: get_VirtualCameraGameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (Cinemachine::ICinemachineCamera::*)()>(&Cinemachine::ICinemachineCamera::get_VirtualCameraGameObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::ICinemachineCamera*), "get_VirtualCameraGameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::ICinemachineCamera::get_IsValid
// Il2CppName: get_IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Cinemachine::ICinemachineCamera::*)()>(&Cinemachine::ICinemachineCamera::get_IsValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::ICinemachineCamera*), "get_IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::ICinemachineCamera::get_ParentCamera
// Il2CppName: get_ParentCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Cinemachine::ICinemachineCamera* (Cinemachine::ICinemachineCamera::*)()>(&Cinemachine::ICinemachineCamera::get_ParentCamera)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::ICinemachineCamera*), "get_ParentCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::ICinemachineCamera::IsLiveChild
// Il2CppName: IsLiveChild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Cinemachine::ICinemachineCamera::*)(::Cinemachine::ICinemachineCamera*, bool)>(&Cinemachine::ICinemachineCamera::IsLiveChild)> {
  static const MethodInfo* get() {
    static auto* vcam = &::il2cpp_utils::GetClassFromName("Cinemachine", "ICinemachineCamera")->byval_arg;
    static auto* dominantChildOnly = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::ICinemachineCamera*), "IsLiveChild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vcam, dominantChildOnly});
  }
};
// Writing MetadataGetter for method: Cinemachine::ICinemachineCamera::UpdateCameraState
// Il2CppName: UpdateCameraState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::ICinemachineCamera::*)(::UnityEngine::Vector3, float)>(&Cinemachine::ICinemachineCamera::UpdateCameraState)> {
  static const MethodInfo* get() {
    static auto* worldUp = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* deltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::ICinemachineCamera*), "UpdateCameraState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{worldUp, deltaTime});
  }
};
// Writing MetadataGetter for method: Cinemachine::ICinemachineCamera::InternalUpdateCameraState
// Il2CppName: InternalUpdateCameraState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::ICinemachineCamera::*)(::UnityEngine::Vector3, float)>(&Cinemachine::ICinemachineCamera::InternalUpdateCameraState)> {
  static const MethodInfo* get() {
    static auto* worldUp = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* deltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::ICinemachineCamera*), "InternalUpdateCameraState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{worldUp, deltaTime});
  }
};
// Writing MetadataGetter for method: Cinemachine::ICinemachineCamera::OnTransitionFromCamera
// Il2CppName: OnTransitionFromCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::ICinemachineCamera::*)(::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, float)>(&Cinemachine::ICinemachineCamera::OnTransitionFromCamera)> {
  static const MethodInfo* get() {
    static auto* fromCam = &::il2cpp_utils::GetClassFromName("Cinemachine", "ICinemachineCamera")->byval_arg;
    static auto* worldUp = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* deltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::ICinemachineCamera*), "OnTransitionFromCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fromCam, worldUp, deltaTime});
  }
};
// Writing MetadataGetter for method: Cinemachine::ICinemachineCamera::OnTargetObjectWarped
// Il2CppName: OnTargetObjectWarped
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::ICinemachineCamera::*)(::UnityEngine::Transform*, ::UnityEngine::Vector3)>(&Cinemachine::ICinemachineCamera::OnTargetObjectWarped)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* positionDelta = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::ICinemachineCamera*), "OnTargetObjectWarped", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, positionDelta});
  }
};
