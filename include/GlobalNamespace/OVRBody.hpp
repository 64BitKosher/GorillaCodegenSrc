// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: OVRSkeleton/IOVRSkeletonDataProvider
#include "GlobalNamespace/OVRSkeleton_IOVRSkeletonDataProvider.hpp"
// Including type: OVRSkeletonRenderer/IOVRSkeletonRendererDataProvider
#include "GlobalNamespace/OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider.hpp"
// Including type: OVRPlugin/BodyState
#include "GlobalNamespace/OVRPlugin_BodyState.hpp"
// Including type: OVRPlugin/Vector3f
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: OVRPermissionsRequester/Permission
#include "GlobalNamespace/OVRPermissionsRequester.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Nullable`1<T>
  template<typename T>
  struct Nullable_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRBody
  class OVRBody;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRBody);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRBody*, "", "OVRBody");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: OVRBody
  // [TokenAttribute] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: FFFFFFFF
  class OVRBody : public ::UnityEngine::MonoBehaviour/*, public ::GlobalNamespace::OVRSkeleton::IOVRSkeletonDataProvider, public ::GlobalNamespace::OVRSkeletonRenderer::IOVRSkeletonRendererDataProvider*/ {
    public:
    public:
    // private OVRPlugin/BodyState _bodyState
    // Size: 0x18
    // Offset: 0x20
    ::GlobalNamespace::OVRPlugin::BodyState bodyState;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::BodyState) == 0x18);
    // private OVRPlugin/Quatf[] _boneRotations
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::GlobalNamespace::OVRPlugin::Quatf> boneRotations;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::OVRPlugin::Quatf>) == 0x8);
    // private OVRPlugin/Vector3f[] _boneTranslations
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::GlobalNamespace::OVRPlugin::Vector3f> boneTranslations;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::OVRPlugin::Vector3f>) == 0x8);
    // private System.Boolean _dataChangedSinceLastQuery
    // Size: 0x1
    // Offset: 0x48
    bool dataChangedSinceLastQuery;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _hasData
    // Size: 0x1
    // Offset: 0x49
    bool hasData;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasData and: onPermissionGranted
    char __padding4[0x6] = {};
    // private System.Action`1<System.String> _onPermissionGranted
    // Size: 0x8
    // Offset: 0x50
    ::System::Action_1<::StringW>* onPermissionGranted;
    // Field size check
    static_assert(sizeof(::System::Action_1<::StringW>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::OVRSkeleton::IOVRSkeletonDataProvider
    operator ::GlobalNamespace::OVRSkeleton::IOVRSkeletonDataProvider() noexcept {
      return *reinterpret_cast<::GlobalNamespace::OVRSkeleton::IOVRSkeletonDataProvider*>(this);
    }
    // Creating interface conversion operator: operator ::GlobalNamespace::OVRSkeletonRenderer::IOVRSkeletonRendererDataProvider
    operator ::GlobalNamespace::OVRSkeletonRenderer::IOVRSkeletonRendererDataProvider() noexcept {
      return *reinterpret_cast<::GlobalNamespace::OVRSkeletonRenderer::IOVRSkeletonRendererDataProvider*>(this);
    }
    // static field const value: static private OVRPermissionsRequester/Permission BodyTrackingPermission
    static constexpr const int BodyTrackingPermission = 1;
    // Get static field: static private OVRPermissionsRequester/Permission BodyTrackingPermission
    static ::GlobalNamespace::OVRPermissionsRequester::Permission _get_BodyTrackingPermission();
    // Set static field: static private OVRPermissionsRequester/Permission BodyTrackingPermission
    static void _set_BodyTrackingPermission(::GlobalNamespace::OVRPermissionsRequester::Permission value);
    // Get static field: static private System.Int32 _trackingInstanceCount
    static int _get__trackingInstanceCount();
    // Set static field: static private System.Int32 _trackingInstanceCount
    static void _set__trackingInstanceCount(int value);
    // Get instance field reference: private OVRPlugin/BodyState _bodyState
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRPlugin::BodyState& dyn__bodyState();
    // Get instance field reference: private OVRPlugin/Quatf[] _boneRotations
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::OVRPlugin::Quatf>& dyn__boneRotations();
    // Get instance field reference: private OVRPlugin/Vector3f[] _boneTranslations
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::OVRPlugin::Vector3f>& dyn__boneTranslations();
    // Get instance field reference: private System.Boolean _dataChangedSinceLastQuery
    [[deprecated("Use field access instead!")]] bool& dyn__dataChangedSinceLastQuery();
    // Get instance field reference: private System.Boolean _hasData
    [[deprecated("Use field access instead!")]] bool& dyn__hasData();
    // Get instance field reference: private System.Action`1<System.String> _onPermissionGranted
    [[deprecated("Use field access instead!")]] ::System::Action_1<::StringW>*& dyn__onPermissionGranted();
    // public System.Nullable`1<OVRPlugin/BodyState> get_BodyState()
    // Offset: 0x48B23E4
    ::System::Nullable_1<::GlobalNamespace::OVRPlugin::BodyState> get_BodyState();
    // private System.Void Awake()
    // Offset: 0x48B246C
    void Awake();
    // private System.Void OnEnable()
    // Offset: 0x48B24F0
    void OnEnable();
    // private System.Void OnPermissionGranted(System.String permissionId)
    // Offset: 0x48B2760
    void OnPermissionGranted(::StringW permissionId);
    // private System.Boolean StartBodyTracking()
    // Offset: 0x48B2604
    bool StartBodyTracking();
    // private System.Void OnDisable()
    // Offset: 0x48B27C0
    void OnDisable();
    // private System.Void OnDestroy()
    // Offset: 0x48B2848
    void OnDestroy();
    // private System.Void Update()
    // Offset: 0x48B2854
    void Update();
    // private System.Void GetBodyState(OVRPlugin/Step step)
    // Offset: 0x48B26DC
    void GetBodyState(::GlobalNamespace::OVRPlugin::Step step);
    // private OVRSkeleton/SkeletonType OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonType()
    // Offset: 0x48B285C
    ::GlobalNamespace::OVRSkeleton::SkeletonType OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonType();
    // private OVRSkeleton/SkeletonPoseData OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonPoseData()
    // Offset: 0x48B2864
    ::GlobalNamespace::OVRSkeleton::SkeletonPoseData OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData();
    // private OVRSkeletonRenderer/SkeletonRendererData OVRSkeletonRenderer.IOVRSkeletonRendererDataProvider.GetSkeletonRendererData()
    // Offset: 0x48B2A98
    ::GlobalNamespace::OVRSkeletonRenderer::SkeletonRendererData OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider_GetSkeletonRendererData();
    // public System.Void .ctor()
    // Offset: 0x48B2AB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRBody* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRBody::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRBody*, creationType>()));
    }
    // private System.Boolean OVRSkeleton.IOVRSkeletonDataProvider.get_enabled()
    // Offset: 0x48B2AB8
    bool OVRSkeleton_IOVRSkeletonDataProvider_get_enabled();
  }; // OVRBody
  #pragma pack(pop)
  static check_size<sizeof(OVRBody), 80 + sizeof(::System::Action_1<::StringW>*)> __GlobalNamespace_OVRBodySizeCheck;
  static_assert(sizeof(OVRBody) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRBody::get_BodyState
// Il2CppName: get_BodyState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::GlobalNamespace::OVRPlugin::BodyState> (GlobalNamespace::OVRBody::*)()>(&GlobalNamespace::OVRBody::get_BodyState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRBody*), "get_BodyState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRBody::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRBody::*)()>(&GlobalNamespace::OVRBody::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRBody*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRBody::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRBody::*)()>(&GlobalNamespace::OVRBody::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRBody*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRBody::OnPermissionGranted
// Il2CppName: OnPermissionGranted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRBody::*)(::StringW)>(&GlobalNamespace::OVRBody::OnPermissionGranted)> {
  static const MethodInfo* get() {
    static auto* permissionId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRBody*), "OnPermissionGranted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{permissionId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRBody::StartBodyTracking
// Il2CppName: StartBodyTracking
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRBody::*)()>(&GlobalNamespace::OVRBody::StartBodyTracking)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRBody*), "StartBodyTracking", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRBody::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRBody::*)()>(&GlobalNamespace::OVRBody::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRBody*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRBody::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRBody::*)()>(&GlobalNamespace::OVRBody::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRBody*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRBody::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRBody::*)()>(&GlobalNamespace::OVRBody::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRBody*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRBody::GetBodyState
// Il2CppName: GetBodyState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRBody::*)(::GlobalNamespace::OVRPlugin::Step)>(&GlobalNamespace::OVRBody::GetBodyState)> {
  static const MethodInfo* get() {
    static auto* step = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Step")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRBody*), "GetBodyState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{step});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRBody::OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonType
// Il2CppName: OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRSkeleton::SkeletonType (GlobalNamespace::OVRBody::*)()>(&GlobalNamespace::OVRBody::OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRBody*), "OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRBody::OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData
// Il2CppName: OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonPoseData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRSkeleton::SkeletonPoseData (GlobalNamespace::OVRBody::*)()>(&GlobalNamespace::OVRBody::OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRBody*), "OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonPoseData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRBody::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider_GetSkeletonRendererData
// Il2CppName: OVRSkeletonRenderer.IOVRSkeletonRendererDataProvider.GetSkeletonRendererData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRSkeletonRenderer::SkeletonRendererData (GlobalNamespace::OVRBody::*)()>(&GlobalNamespace::OVRBody::OVRSkeletonRenderer_IOVRSkeletonRendererDataProvider_GetSkeletonRendererData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRBody*), "OVRSkeletonRenderer.IOVRSkeletonRendererDataProvider.GetSkeletonRendererData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRBody::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRBody::OVRSkeleton_IOVRSkeletonDataProvider_get_enabled
// Il2CppName: OVRSkeleton.IOVRSkeletonDataProvider.get_enabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRBody::*)()>(&GlobalNamespace::OVRBody::OVRSkeleton_IOVRSkeletonDataProvider_get_enabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRBody*), "OVRSkeleton.IOVRSkeletonDataProvider.get_enabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
