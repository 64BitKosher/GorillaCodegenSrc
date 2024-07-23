// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.Behaviour
#include "Fusion/Behaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: FusionStats
  class FusionStats;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: FusionStatsBillboard
  class FusionStatsBillboard;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::FusionStatsBillboard);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FusionStatsBillboard*, "", "FusionStatsBillboard");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: FusionStatsBillboard
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteAlways] Offset: FFFFFFFF
  // [ScriptHelpAttribute] Offset: FFFFFFFF
  class FusionStatsBillboard : public ::Fusion::Behaviour {
    public:
    public:
    // public UnityEngine.Camera Camera
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Camera* Camera;
    // Field size check
    static_assert(sizeof(::UnityEngine::Camera*) == 0x8);
    // private FusionStats _fusionStats
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::FusionStats* fusionStats;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::FusionStats*) == 0x8);
    public:
    // Get static field: static private System.Single _lastCameraFindTime
    static float _get__lastCameraFindTime();
    // Set static field: static private System.Single _lastCameraFindTime
    static void _set__lastCameraFindTime(float value);
    // Get static field: static private UnityEngine.Camera _currentCam
    static ::UnityEngine::Camera* _get__currentCam();
    // Set static field: static private UnityEngine.Camera _currentCam
    static void _set__currentCam(::UnityEngine::Camera* value);
    // Get instance field reference: public UnityEngine.Camera Camera
    [[deprecated("Use field access instead!")]] ::UnityEngine::Camera*& dyn_Camera();
    // Get instance field reference: private FusionStats _fusionStats
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::FusionStats*& dyn__fusionStats();
    // private System.Void Awake()
    // Offset: 0x29589F4
    void Awake();
    // private System.Void OnEnable()
    // Offset: 0x2958A4C
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x2958B70
    void OnDisable();
    // private System.Void set_MainCamera(UnityEngine.Camera value)
    // Offset: 0x2958BA0
    void set_MainCamera(::UnityEngine::Camera* value);
    // private UnityEngine.Camera get_MainCamera()
    // Offset: 0x2958BF0
    ::UnityEngine::Camera* get_MainCamera();
    // private System.Void LateUpdate()
    // Offset: 0x2958C7C
    void LateUpdate();
    // public System.Void UpdateLookAt()
    // Offset: 0x2958A50
    void UpdateLookAt();
    // static private System.Void ResetStatics()
    // Offset: 0x2958C80
    static void ResetStatics();
    // public System.Void .ctor()
    // Offset: 0x2958CDC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FusionStatsBillboard* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FusionStatsBillboard::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FusionStatsBillboard*, creationType>()));
    }
  }; // FusionStatsBillboard
  #pragma pack(pop)
  static check_size<sizeof(FusionStatsBillboard), 40 + sizeof(::GlobalNamespace::FusionStats*)> __GlobalNamespace_FusionStatsBillboardSizeCheck;
  static_assert(sizeof(FusionStatsBillboard) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FusionStatsBillboard::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FusionStatsBillboard::*)()>(&GlobalNamespace::FusionStatsBillboard::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FusionStatsBillboard*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FusionStatsBillboard::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FusionStatsBillboard::*)()>(&GlobalNamespace::FusionStatsBillboard::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FusionStatsBillboard*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FusionStatsBillboard::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FusionStatsBillboard::*)()>(&GlobalNamespace::FusionStatsBillboard::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FusionStatsBillboard*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FusionStatsBillboard::set_MainCamera
// Il2CppName: set_MainCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FusionStatsBillboard::*)(::UnityEngine::Camera*)>(&GlobalNamespace::FusionStatsBillboard::set_MainCamera)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FusionStatsBillboard*), "set_MainCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FusionStatsBillboard::get_MainCamera
// Il2CppName: get_MainCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Camera* (GlobalNamespace::FusionStatsBillboard::*)()>(&GlobalNamespace::FusionStatsBillboard::get_MainCamera)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FusionStatsBillboard*), "get_MainCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FusionStatsBillboard::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FusionStatsBillboard::*)()>(&GlobalNamespace::FusionStatsBillboard::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FusionStatsBillboard*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FusionStatsBillboard::UpdateLookAt
// Il2CppName: UpdateLookAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FusionStatsBillboard::*)()>(&GlobalNamespace::FusionStatsBillboard::UpdateLookAt)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FusionStatsBillboard*), "UpdateLookAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FusionStatsBillboard::ResetStatics
// Il2CppName: ResetStatics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::FusionStatsBillboard::ResetStatics)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FusionStatsBillboard*), "ResetStatics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FusionStatsBillboard::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
