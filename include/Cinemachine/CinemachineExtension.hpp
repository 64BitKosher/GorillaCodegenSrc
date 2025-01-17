// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Cinemachine.CinemachineCore
#include "Cinemachine/CinemachineCore.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Cinemachine
namespace Cinemachine {
  // Forward declaring type: CinemachineVirtualCameraBase
  class CinemachineVirtualCameraBase;
  // Forward declaring type: ICinemachineCamera
  class ICinemachineCamera;
  // Forward declaring type: CameraState
  struct CameraState;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: Cinemachine
namespace Cinemachine {
  // Forward declaring type: CinemachineExtension
  class CinemachineExtension;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Cinemachine::CinemachineExtension);
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::CinemachineExtension*, "Cinemachine", "CinemachineExtension");
// Type namespace: Cinemachine
namespace Cinemachine {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Cinemachine.CinemachineExtension
  // [TokenAttribute] Offset: FFFFFFFF
  // [DocumentationSortingAttribute] Offset: FFFFFFFF
  class CinemachineExtension : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private Cinemachine.CinemachineVirtualCameraBase m_vcamOwner
    // Size: 0x8
    // Offset: 0x20
    ::Cinemachine::CinemachineVirtualCameraBase* m_vcamOwner;
    // Field size check
    static_assert(sizeof(::Cinemachine::CinemachineVirtualCameraBase*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<Cinemachine.ICinemachineCamera,System.Object> mExtraState
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::Dictionary_2<::Cinemachine::ICinemachineCamera*, ::Il2CppObject*>* mExtraState;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::Cinemachine::ICinemachineCamera*, ::Il2CppObject*>*) == 0x8);
    public:
    // static field const value: static protected System.Single Epsilon
    static constexpr const float Epsilon = 0.0001;
    // Get static field: static protected System.Single Epsilon
    static float _get_Epsilon();
    // Set static field: static protected System.Single Epsilon
    static void _set_Epsilon(float value);
    // Get instance field reference: private Cinemachine.CinemachineVirtualCameraBase m_vcamOwner
    [[deprecated("Use field access instead!")]] ::Cinemachine::CinemachineVirtualCameraBase*& dyn_m_vcamOwner();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<Cinemachine.ICinemachineCamera,System.Object> mExtraState
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::Cinemachine::ICinemachineCamera*, ::Il2CppObject*>*& dyn_mExtraState();
    // public Cinemachine.CinemachineVirtualCameraBase get_VirtualCamera()
    // Offset: 0x2AADC68
    ::Cinemachine::CinemachineVirtualCameraBase* get_VirtualCamera();
    // protected System.Void Awake()
    // Offset: 0x2AADD10
    void Awake();
    // protected System.Void OnEnable()
    // Offset: 0x2AADD20
    void OnEnable();
    // protected System.Void OnDestroy()
    // Offset: 0x2AADD24
    void OnDestroy();
    // System.Void EnsureStarted()
    // Offset: 0x2AADD34
    void EnsureStarted();
    // protected System.Void ConnectToVcam(System.Boolean connect)
    // Offset: 0x2AADD44
    void ConnectToVcam(bool connect);
    // public System.Void PrePipelineMutateCameraStateCallback(Cinemachine.CinemachineVirtualCameraBase vcam, ref Cinemachine.CameraState curState, System.Single deltaTime)
    // Offset: 0x2AADE80
    void PrePipelineMutateCameraStateCallback(::Cinemachine::CinemachineVirtualCameraBase* vcam, ByRef<::Cinemachine::CameraState> curState, float deltaTime);
    // public System.Void InvokePostPipelineStageCallback(Cinemachine.CinemachineVirtualCameraBase vcam, Cinemachine.CinemachineCore/Stage stage, ref Cinemachine.CameraState state, System.Single deltaTime)
    // Offset: 0x2AADE84
    void InvokePostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* vcam, ::Cinemachine::CinemachineCore::Stage stage, ByRef<::Cinemachine::CameraState> state, float deltaTime);
    // protected System.Void PostPipelineStageCallback(Cinemachine.CinemachineVirtualCameraBase vcam, Cinemachine.CinemachineCore/Stage stage, ref Cinemachine.CameraState state, System.Single deltaTime)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void PostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* vcam, ::Cinemachine::CinemachineCore::Stage stage, ByRef<::Cinemachine::CameraState> state, float deltaTime);
    // public System.Void OnTargetObjectWarped(UnityEngine.Transform target, UnityEngine.Vector3 positionDelta)
    // Offset: 0x2AADE90
    void OnTargetObjectWarped(::UnityEngine::Transform* target, ::UnityEngine::Vector3 positionDelta);
    // public System.Void ForceCameraPosition(UnityEngine.Vector3 pos, UnityEngine.Quaternion rot)
    // Offset: 0x2AADE94
    void ForceCameraPosition(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot);
    // public System.Boolean OnTransitionFromCamera(Cinemachine.ICinemachineCamera fromCam, UnityEngine.Vector3 worldUp, System.Single deltaTime)
    // Offset: 0x2AADE98
    bool OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* fromCam, ::UnityEngine::Vector3 worldUp, float deltaTime);
    // public System.Single GetMaxDampTime()
    // Offset: 0x2AADEA0
    float GetMaxDampTime();
    // public System.Boolean get_RequiresUserInput()
    // Offset: 0x2AADEA8
    bool get_RequiresUserInput();
    // protected T GetExtraState(Cinemachine.ICinemachineCamera vcam)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    T GetExtraState(::Cinemachine::ICinemachineCamera* vcam) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cinemachine::CinemachineExtension::GetExtraState");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetExtraState", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(vcam)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___generic__method, vcam);
    }
    // protected System.Collections.Generic.List`1<T> GetAllExtraStates()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    ::System::Collections::Generic::List_1<T>* GetAllExtraStates() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cinemachine::CinemachineExtension::GetAllExtraStates");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetAllExtraStates", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::List_1<T>*, false>(this, ___generic__method);
    }
    // protected System.Void .ctor()
    // Offset: 0x2AADEB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CinemachineExtension* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cinemachine::CinemachineExtension::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CinemachineExtension*, creationType>()));
    }
  }; // Cinemachine.CinemachineExtension
  #pragma pack(pop)
  static check_size<sizeof(CinemachineExtension), 40 + sizeof(::System::Collections::Generic::Dictionary_2<::Cinemachine::ICinemachineCamera*, ::Il2CppObject*>*)> __Cinemachine_CinemachineExtensionSizeCheck;
  static_assert(sizeof(CinemachineExtension) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Cinemachine::CinemachineExtension::get_VirtualCamera
// Il2CppName: get_VirtualCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Cinemachine::CinemachineVirtualCameraBase* (Cinemachine::CinemachineExtension::*)()>(&Cinemachine::CinemachineExtension::get_VirtualCamera)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineExtension*), "get_VirtualCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineExtension::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineExtension::*)()>(&Cinemachine::CinemachineExtension::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineExtension*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineExtension::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineExtension::*)()>(&Cinemachine::CinemachineExtension::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineExtension*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineExtension::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineExtension::*)()>(&Cinemachine::CinemachineExtension::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineExtension*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineExtension::EnsureStarted
// Il2CppName: EnsureStarted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineExtension::*)()>(&Cinemachine::CinemachineExtension::EnsureStarted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineExtension*), "EnsureStarted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineExtension::ConnectToVcam
// Il2CppName: ConnectToVcam
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineExtension::*)(bool)>(&Cinemachine::CinemachineExtension::ConnectToVcam)> {
  static const MethodInfo* get() {
    static auto* connect = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineExtension*), "ConnectToVcam", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{connect});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineExtension::PrePipelineMutateCameraStateCallback
// Il2CppName: PrePipelineMutateCameraStateCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineExtension::*)(::Cinemachine::CinemachineVirtualCameraBase*, ByRef<::Cinemachine::CameraState>, float)>(&Cinemachine::CinemachineExtension::PrePipelineMutateCameraStateCallback)> {
  static const MethodInfo* get() {
    static auto* vcam = &::il2cpp_utils::GetClassFromName("Cinemachine", "CinemachineVirtualCameraBase")->byval_arg;
    static auto* curState = &::il2cpp_utils::GetClassFromName("Cinemachine", "CameraState")->this_arg;
    static auto* deltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineExtension*), "PrePipelineMutateCameraStateCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vcam, curState, deltaTime});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineExtension::InvokePostPipelineStageCallback
// Il2CppName: InvokePostPipelineStageCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineExtension::*)(::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CinemachineCore::Stage, ByRef<::Cinemachine::CameraState>, float)>(&Cinemachine::CinemachineExtension::InvokePostPipelineStageCallback)> {
  static const MethodInfo* get() {
    static auto* vcam = &::il2cpp_utils::GetClassFromName("Cinemachine", "CinemachineVirtualCameraBase")->byval_arg;
    static auto* stage = &::il2cpp_utils::GetClassFromName("Cinemachine", "CinemachineCore/Stage")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("Cinemachine", "CameraState")->this_arg;
    static auto* deltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineExtension*), "InvokePostPipelineStageCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vcam, stage, state, deltaTime});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineExtension::PostPipelineStageCallback
// Il2CppName: PostPipelineStageCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineExtension::*)(::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CinemachineCore::Stage, ByRef<::Cinemachine::CameraState>, float)>(&Cinemachine::CinemachineExtension::PostPipelineStageCallback)> {
  static const MethodInfo* get() {
    static auto* vcam = &::il2cpp_utils::GetClassFromName("Cinemachine", "CinemachineVirtualCameraBase")->byval_arg;
    static auto* stage = &::il2cpp_utils::GetClassFromName("Cinemachine", "CinemachineCore/Stage")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("Cinemachine", "CameraState")->this_arg;
    static auto* deltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineExtension*), "PostPipelineStageCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vcam, stage, state, deltaTime});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineExtension::OnTargetObjectWarped
// Il2CppName: OnTargetObjectWarped
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineExtension::*)(::UnityEngine::Transform*, ::UnityEngine::Vector3)>(&Cinemachine::CinemachineExtension::OnTargetObjectWarped)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* positionDelta = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineExtension*), "OnTargetObjectWarped", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, positionDelta});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineExtension::ForceCameraPosition
// Il2CppName: ForceCameraPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineExtension::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&Cinemachine::CinemachineExtension::ForceCameraPosition)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rot = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineExtension*), "ForceCameraPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos, rot});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineExtension::OnTransitionFromCamera
// Il2CppName: OnTransitionFromCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Cinemachine::CinemachineExtension::*)(::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, float)>(&Cinemachine::CinemachineExtension::OnTransitionFromCamera)> {
  static const MethodInfo* get() {
    static auto* fromCam = &::il2cpp_utils::GetClassFromName("Cinemachine", "ICinemachineCamera")->byval_arg;
    static auto* worldUp = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* deltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineExtension*), "OnTransitionFromCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fromCam, worldUp, deltaTime});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineExtension::GetMaxDampTime
// Il2CppName: GetMaxDampTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Cinemachine::CinemachineExtension::*)()>(&Cinemachine::CinemachineExtension::GetMaxDampTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineExtension*), "GetMaxDampTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineExtension::get_RequiresUserInput
// Il2CppName: get_RequiresUserInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Cinemachine::CinemachineExtension::*)()>(&Cinemachine::CinemachineExtension::get_RequiresUserInput)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineExtension*), "get_RequiresUserInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineExtension::GetExtraState
// Il2CppName: GetExtraState
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Cinemachine::CinemachineExtension::GetAllExtraStates
// Il2CppName: GetAllExtraStates
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Cinemachine::CinemachineExtension::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
