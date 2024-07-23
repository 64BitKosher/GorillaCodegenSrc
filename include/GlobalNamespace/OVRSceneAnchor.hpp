// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: OVRSpace
#include "GlobalNamespace/OVRSpace.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
// Including type: OVRAnchor
#include "GlobalNamespace/OVRAnchor.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: OVRPlugin/Posef
#include "GlobalNamespace/OVRPlugin.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IOVRSceneComponent
  class IOVRSceneComponent;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRSceneAnchor
  class OVRSceneAnchor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRSceneAnchor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneAnchor*, "", "OVRSceneAnchor");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: OVRSceneAnchor
  // [TokenAttribute] Offset: FFFFFFFF
  // [DisallowMultipleComponent] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: FFFFFFFF
  class OVRSceneAnchor : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private OVRSpace <Space>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::OVRSpace Space;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRSpace) == 0x8);
    // private System.Guid <Uuid>k__BackingField
    // Size: 0x10
    // Offset: 0x28
    ::System::Guid Uuid;
    // Field size check
    static_assert(sizeof(::System::Guid) == 0x10);
    // private OVRAnchor <Anchor>k__BackingField
    // Size: 0x18
    // Offset: 0x38
    ::GlobalNamespace::OVRAnchor Anchor;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRAnchor) == 0x18);
    // private System.Boolean <IsTracked>k__BackingField
    // Size: 0x1
    // Offset: 0x50
    bool IsTracked;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Nullable`1<OVRPlugin/Posef> _pose
    // Size: 0xFFFFFFFF
    // Offset: 0x54
    ::System::Nullable_1<::GlobalNamespace::OVRPlugin::Posef> pose;
    // private System.Boolean _isLocatable
    // Size: 0x1
    // Offset: 0x74
    bool isLocatable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private readonly System.Collections.Generic.List`1<OVRPlugin/SpaceComponentType> _supportedComponents
    // Size: 0x8
    // Offset: 0x78
    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRPlugin::SpaceComponentType>* supportedComponents;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::OVRPlugin::SpaceComponentType>*) == 0x8);
    public:
    // Get static field: static private readonly UnityEngine.Quaternion RotateY180
    static ::UnityEngine::Quaternion _get_RotateY180();
    // Set static field: static private readonly UnityEngine.Quaternion RotateY180
    static void _set_RotateY180(::UnityEngine::Quaternion value);
    // Get static field: static private readonly System.Collections.Generic.Dictionary`2<OVRSpace,System.Int32> AnchorReferenceCountDictionary
    static ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpace, int>* _get_AnchorReferenceCountDictionary();
    // Set static field: static private readonly System.Collections.Generic.Dictionary`2<OVRSpace,System.Int32> AnchorReferenceCountDictionary
    static void _set_AnchorReferenceCountDictionary(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSpace, int>* value);
    // Get static field: static readonly System.Collections.Generic.Dictionary`2<System.Guid,OVRSceneAnchor> SceneAnchors
    static ::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRSceneAnchor*>* _get_SceneAnchors();
    // Set static field: static readonly System.Collections.Generic.Dictionary`2<System.Guid,OVRSceneAnchor> SceneAnchors
    static void _set_SceneAnchors(::System::Collections::Generic::Dictionary_2<::System::Guid, ::GlobalNamespace::OVRSceneAnchor*>* value);
    // Get static field: static readonly System.Collections.Generic.List`1<OVRSceneAnchor> SceneAnchorsList
    static ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSceneAnchor*>* _get_SceneAnchorsList();
    // Set static field: static readonly System.Collections.Generic.List`1<OVRSceneAnchor> SceneAnchorsList
    static void _set_SceneAnchorsList(::System::Collections::Generic::List_1<::GlobalNamespace::OVRSceneAnchor*>* value);
    // Get instance field reference: private OVRSpace <Space>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRSpace& dyn_$Space$k__BackingField();
    // Get instance field reference: private System.Guid <Uuid>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Guid& dyn_$Uuid$k__BackingField();
    // Get instance field reference: private OVRAnchor <Anchor>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRAnchor& dyn_$Anchor$k__BackingField();
    // Get instance field reference: private System.Boolean <IsTracked>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IsTracked$k__BackingField();
    // Get instance field reference: private System.Nullable`1<OVRPlugin/Posef> _pose
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::GlobalNamespace::OVRPlugin::Posef>& dyn__pose();
    // Get instance field reference: private System.Boolean _isLocatable
    [[deprecated("Use field access instead!")]] bool& dyn__isLocatable();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<OVRPlugin/SpaceComponentType> _supportedComponents
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::OVRPlugin::SpaceComponentType>*& dyn__supportedComponents();
    // public OVRSpace get_Space()
    // Offset: 0x491A484
    ::GlobalNamespace::OVRSpace get_Space();
    // private System.Void set_Space(OVRSpace value)
    // Offset: 0x491A48C
    void set_Space(::GlobalNamespace::OVRSpace value);
    // public System.Guid get_Uuid()
    // Offset: 0x491A494
    ::System::Guid get_Uuid();
    // private System.Void set_Uuid(System.Guid value)
    // Offset: 0x491A4A0
    void set_Uuid(::System::Guid value);
    // public OVRAnchor get_Anchor()
    // Offset: 0x491A4A8
    ::GlobalNamespace::OVRAnchor get_Anchor();
    // private System.Void set_Anchor(OVRAnchor value)
    // Offset: 0x491A4BC
    void set_Anchor(::GlobalNamespace::OVRAnchor value);
    // public System.Boolean get_IsTracked()
    // Offset: 0x491A4D0
    bool get_IsTracked();
    // System.Void set_IsTracked(System.Boolean value)
    // Offset: 0x491A4D8
    void set_IsTracked(bool value);
    // private System.Boolean IsComponentSupported(OVRPlugin/SpaceComponentType spaceComponentType)
    // Offset: 0x491A4E4
    bool IsComponentSupported(::GlobalNamespace::OVRPlugin::SpaceComponentType spaceComponentType);
    // System.Boolean IsComponentEnabled(OVRPlugin/SpaceComponentType spaceComponentType)
    // Offset: 0x491A59C
    bool IsComponentEnabled(::GlobalNamespace::OVRPlugin::SpaceComponentType spaceComponentType);
    // private System.Void SyncComponent(OVRPlugin/SpaceComponentType spaceComponentType)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    void SyncComponent(::GlobalNamespace::OVRPlugin::SpaceComponentType spaceComponentType) {
      static_assert(std::is_convertible_v<T, ::UnityEngine::MonoBehaviour*> && std::is_convertible_v<std::remove_pointer_t<T>, ::GlobalNamespace::IOVRSceneComponent>);
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRSceneAnchor::SyncComponent");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SyncComponent", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(spaceComponentType)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method, spaceComponentType);
    }
    // System.Void ClearPoseCache()
    // Offset: 0x491A644
    void ClearPoseCache();
    // public System.Void Initialize(OVRAnchor anchor)
    // Offset: 0x491A654
    void Initialize(::GlobalNamespace::OVRAnchor anchor);
    // public System.Void InitializeFrom(OVRSceneAnchor other)
    // Offset: 0x491AD00
    void InitializeFrom(::GlobalNamespace::OVRSceneAnchor* other);
    // static public System.Void GetSceneAnchors(System.Collections.Generic.List`1<OVRSceneAnchor> anchors)
    // Offset: 0x491ADE4
    static void GetSceneAnchors(::System::Collections::Generic::List_1<::GlobalNamespace::OVRSceneAnchor*>* anchors);
    // System.Boolean TryUpdateTransform(System.Boolean useCache)
    // Offset: 0x491A9EC
    bool TryUpdateTransform(bool useCache);
    // private System.Void OnDestroy()
    // Offset: 0x491AED8
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0x491B0B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRSceneAnchor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRSceneAnchor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRSceneAnchor*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x491B140
    static void _cctor();
  }; // OVRSceneAnchor
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneAnchor::get_Space
// Il2CppName: get_Space
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRSpace (GlobalNamespace::OVRSceneAnchor::*)()>(&GlobalNamespace::OVRSceneAnchor::get_Space)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneAnchor*), "get_Space", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneAnchor::set_Space
// Il2CppName: set_Space
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneAnchor::*)(::GlobalNamespace::OVRSpace)>(&GlobalNamespace::OVRSceneAnchor::set_Space)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "OVRSpace")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneAnchor*), "set_Space", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneAnchor::get_Uuid
// Il2CppName: get_Uuid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (GlobalNamespace::OVRSceneAnchor::*)()>(&GlobalNamespace::OVRSceneAnchor::get_Uuid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneAnchor*), "get_Uuid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneAnchor::set_Uuid
// Il2CppName: set_Uuid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneAnchor::*)(::System::Guid)>(&GlobalNamespace::OVRSceneAnchor::set_Uuid)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Guid")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneAnchor*), "set_Uuid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneAnchor::get_Anchor
// Il2CppName: get_Anchor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRAnchor (GlobalNamespace::OVRSceneAnchor::*)()>(&GlobalNamespace::OVRSceneAnchor::get_Anchor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneAnchor*), "get_Anchor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneAnchor::set_Anchor
// Il2CppName: set_Anchor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneAnchor::*)(::GlobalNamespace::OVRAnchor)>(&GlobalNamespace::OVRSceneAnchor::set_Anchor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "OVRAnchor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneAnchor*), "set_Anchor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneAnchor::get_IsTracked
// Il2CppName: get_IsTracked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRSceneAnchor::*)()>(&GlobalNamespace::OVRSceneAnchor::get_IsTracked)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneAnchor*), "get_IsTracked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneAnchor::set_IsTracked
// Il2CppName: set_IsTracked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneAnchor::*)(bool)>(&GlobalNamespace::OVRSceneAnchor::set_IsTracked)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneAnchor*), "set_IsTracked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneAnchor::IsComponentSupported
// Il2CppName: IsComponentSupported
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRSceneAnchor::*)(::GlobalNamespace::OVRPlugin::SpaceComponentType)>(&GlobalNamespace::OVRSceneAnchor::IsComponentSupported)> {
  static const MethodInfo* get() {
    static auto* spaceComponentType = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/SpaceComponentType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneAnchor*), "IsComponentSupported", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{spaceComponentType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneAnchor::IsComponentEnabled
// Il2CppName: IsComponentEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRSceneAnchor::*)(::GlobalNamespace::OVRPlugin::SpaceComponentType)>(&GlobalNamespace::OVRSceneAnchor::IsComponentEnabled)> {
  static const MethodInfo* get() {
    static auto* spaceComponentType = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/SpaceComponentType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneAnchor*), "IsComponentEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{spaceComponentType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneAnchor::SyncComponent
// Il2CppName: SyncComponent
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneAnchor::ClearPoseCache
// Il2CppName: ClearPoseCache
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneAnchor::*)()>(&GlobalNamespace::OVRSceneAnchor::ClearPoseCache)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneAnchor*), "ClearPoseCache", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneAnchor::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneAnchor::*)(::GlobalNamespace::OVRAnchor)>(&GlobalNamespace::OVRSceneAnchor::Initialize)> {
  static const MethodInfo* get() {
    static auto* anchor = &::il2cpp_utils::GetClassFromName("", "OVRAnchor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneAnchor*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{anchor});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneAnchor::InitializeFrom
// Il2CppName: InitializeFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneAnchor::*)(::GlobalNamespace::OVRSceneAnchor*)>(&GlobalNamespace::OVRSceneAnchor::InitializeFrom)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("", "OVRSceneAnchor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneAnchor*), "InitializeFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneAnchor::GetSceneAnchors
// Il2CppName: GetSceneAnchors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::GlobalNamespace::OVRSceneAnchor*>*)>(&GlobalNamespace::OVRSceneAnchor::GetSceneAnchors)> {
  static const MethodInfo* get() {
    static auto* anchors = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "OVRSceneAnchor")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneAnchor*), "GetSceneAnchors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{anchors});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneAnchor::TryUpdateTransform
// Il2CppName: TryUpdateTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRSceneAnchor::*)(bool)>(&GlobalNamespace::OVRSceneAnchor::TryUpdateTransform)> {
  static const MethodInfo* get() {
    static auto* useCache = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneAnchor*), "TryUpdateTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{useCache});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneAnchor::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneAnchor::*)()>(&GlobalNamespace::OVRSceneAnchor::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneAnchor*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneAnchor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneAnchor::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRSceneAnchor::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneAnchor*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};