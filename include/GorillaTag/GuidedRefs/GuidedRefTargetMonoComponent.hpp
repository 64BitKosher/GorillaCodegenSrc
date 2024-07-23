// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: GorillaTag.GuidedRefs.IGuidedRefTargetMono
#include "GorillaTag/GuidedRefs/IGuidedRefTargetMono.hpp"
// Including type: GorillaTag.GuidedRefs.GuidedRefBasicTargetInfo
#include "GorillaTag/GuidedRefs/GuidedRefBasicTargetInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Component because it is already included!
  // Skipping declaration: Object because it is already included!
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: GorillaTag.GuidedRefs
namespace GorillaTag::GuidedRefs {
  // Forward declaring type: GuidedRefTargetMonoComponent
  class GuidedRefTargetMonoComponent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaTag::GuidedRefs::GuidedRefTargetMonoComponent);
DEFINE_IL2CPP_ARG_TYPE(::GorillaTag::GuidedRefs::GuidedRefTargetMonoComponent*, "GorillaTag.GuidedRefs", "GuidedRefTargetMonoComponent");
// Type namespace: GorillaTag.GuidedRefs
namespace GorillaTag::GuidedRefs {
  // Size: 0x39
  #pragma pack(push, 1)
  // Autogenerated type: GorillaTag.GuidedRefs.GuidedRefTargetMonoComponent
  // [TokenAttribute] Offset: FFFFFFFF
  class GuidedRefTargetMonoComponent : public ::UnityEngine::MonoBehaviour/*, public ::GorillaTag::GuidedRefs::IGuidedRefTargetMono*/ {
    public:
    public:
    // private UnityEngine.Component targetComponent
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Component* targetComponent;
    // Field size check
    static_assert(sizeof(::UnityEngine::Component*) == 0x8);
    // private GorillaTag.GuidedRefs.GuidedRefBasicTargetInfo guidedRefTargetInfo
    // Size: 0x11
    // Offset: 0x28
    ::GorillaTag::GuidedRefs::GuidedRefBasicTargetInfo guidedRefTargetInfo;
    // Field size check
    static_assert(sizeof(::GorillaTag::GuidedRefs::GuidedRefBasicTargetInfo) == 0x11);
    public:
    // Creating interface conversion operator: operator ::GorillaTag::GuidedRefs::IGuidedRefTargetMono
    operator ::GorillaTag::GuidedRefs::IGuidedRefTargetMono() noexcept {
      return *reinterpret_cast<::GorillaTag::GuidedRefs::IGuidedRefTargetMono*>(this);
    }
    // Get instance field reference: private UnityEngine.Component targetComponent
    [[deprecated("Use field access instead!")]] ::UnityEngine::Component*& dyn_targetComponent();
    // Get instance field reference: private GorillaTag.GuidedRefs.GuidedRefBasicTargetInfo guidedRefTargetInfo
    [[deprecated("Use field access instead!")]] ::GorillaTag::GuidedRefs::GuidedRefBasicTargetInfo& dyn_guidedRefTargetInfo();
    // private GorillaTag.GuidedRefs.GuidedRefBasicTargetInfo GorillaTag.GuidedRefs.IGuidedRefTargetMono.get_GRefTargetInfo()
    // Offset: 0x28A8B8C
    ::GorillaTag::GuidedRefs::GuidedRefBasicTargetInfo GorillaTag_GuidedRefs_IGuidedRefTargetMono_get_GRefTargetInfo();
    // private System.Void GorillaTag.GuidedRefs.IGuidedRefTargetMono.set_GRefTargetInfo(GorillaTag.GuidedRefs.GuidedRefBasicTargetInfo value)
    // Offset: 0x28A8BA0
    void GorillaTag_GuidedRefs_IGuidedRefTargetMono_set_GRefTargetInfo(::GorillaTag::GuidedRefs::GuidedRefBasicTargetInfo value);
    // public UnityEngine.Object get_GuidedRefTargetObject()
    // Offset: 0x28A8BC0
    ::UnityEngine::Object* get_GuidedRefTargetObject();
    // protected System.Void Awake()
    // Offset: 0x28A8BC8
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x28A8C60
    void OnDestroy();
    // private System.Void GorillaTag.GuidedRefs.IGuidedRefObject.GuidedRefInitialize()
    // Offset: 0x28A8CD0
    void GorillaTag_GuidedRefs_IGuidedRefObject_GuidedRefInitialize();
    // public System.Void .ctor()
    // Offset: 0x28A8D48
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GuidedRefTargetMonoComponent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaTag::GuidedRefs::GuidedRefTargetMonoComponent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GuidedRefTargetMonoComponent*, creationType>()));
    }
    // private UnityEngine.Transform GorillaTag.GuidedRefs.IGuidedRefMonoBehaviour.get_transform()
    // Offset: 0x28A8D50
    ::UnityEngine::Transform* GorillaTag_GuidedRefs_IGuidedRefMonoBehaviour_get_transform();
    // private System.Int32 GorillaTag.GuidedRefs.IGuidedRefObject.GetInstanceID()
    // Offset: 0x28A8D58
    int GorillaTag_GuidedRefs_IGuidedRefObject_GetInstanceID();
  }; // GorillaTag.GuidedRefs.GuidedRefTargetMonoComponent
  #pragma pack(pop)
  static check_size<sizeof(GuidedRefTargetMonoComponent), 40 + sizeof(::GorillaTag::GuidedRefs::GuidedRefBasicTargetInfo)> __GorillaTag_GuidedRefs_GuidedRefTargetMonoComponentSizeCheck;
  static_assert(sizeof(GuidedRefTargetMonoComponent) == 0x39);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaTag::GuidedRefs::GuidedRefTargetMonoComponent::GorillaTag_GuidedRefs_IGuidedRefTargetMono_get_GRefTargetInfo
// Il2CppName: GorillaTag.GuidedRefs.IGuidedRefTargetMono.get_GRefTargetInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GorillaTag::GuidedRefs::GuidedRefBasicTargetInfo (GorillaTag::GuidedRefs::GuidedRefTargetMonoComponent::*)()>(&GorillaTag::GuidedRefs::GuidedRefTargetMonoComponent::GorillaTag_GuidedRefs_IGuidedRefTargetMono_get_GRefTargetInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::GuidedRefs::GuidedRefTargetMonoComponent*), "GorillaTag.GuidedRefs.IGuidedRefTargetMono.get_GRefTargetInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTag::GuidedRefs::GuidedRefTargetMonoComponent::GorillaTag_GuidedRefs_IGuidedRefTargetMono_set_GRefTargetInfo
// Il2CppName: GorillaTag.GuidedRefs.IGuidedRefTargetMono.set_GRefTargetInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTag::GuidedRefs::GuidedRefTargetMonoComponent::*)(::GorillaTag::GuidedRefs::GuidedRefBasicTargetInfo)>(&GorillaTag::GuidedRefs::GuidedRefTargetMonoComponent::GorillaTag_GuidedRefs_IGuidedRefTargetMono_set_GRefTargetInfo)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("GorillaTag.GuidedRefs", "GuidedRefBasicTargetInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::GuidedRefs::GuidedRefTargetMonoComponent*), "GorillaTag.GuidedRefs.IGuidedRefTargetMono.set_GRefTargetInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GorillaTag::GuidedRefs::GuidedRefTargetMonoComponent::get_GuidedRefTargetObject
// Il2CppName: get_GuidedRefTargetObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object* (GorillaTag::GuidedRefs::GuidedRefTargetMonoComponent::*)()>(&GorillaTag::GuidedRefs::GuidedRefTargetMonoComponent::get_GuidedRefTargetObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::GuidedRefs::GuidedRefTargetMonoComponent*), "get_GuidedRefTargetObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTag::GuidedRefs::GuidedRefTargetMonoComponent::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTag::GuidedRefs::GuidedRefTargetMonoComponent::*)()>(&GorillaTag::GuidedRefs::GuidedRefTargetMonoComponent::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::GuidedRefs::GuidedRefTargetMonoComponent*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTag::GuidedRefs::GuidedRefTargetMonoComponent::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTag::GuidedRefs::GuidedRefTargetMonoComponent::*)()>(&GorillaTag::GuidedRefs::GuidedRefTargetMonoComponent::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::GuidedRefs::GuidedRefTargetMonoComponent*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTag::GuidedRefs::GuidedRefTargetMonoComponent::GorillaTag_GuidedRefs_IGuidedRefObject_GuidedRefInitialize
// Il2CppName: GorillaTag.GuidedRefs.IGuidedRefObject.GuidedRefInitialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTag::GuidedRefs::GuidedRefTargetMonoComponent::*)()>(&GorillaTag::GuidedRefs::GuidedRefTargetMonoComponent::GorillaTag_GuidedRefs_IGuidedRefObject_GuidedRefInitialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::GuidedRefs::GuidedRefTargetMonoComponent*), "GorillaTag.GuidedRefs.IGuidedRefObject.GuidedRefInitialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTag::GuidedRefs::GuidedRefTargetMonoComponent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GorillaTag::GuidedRefs::GuidedRefTargetMonoComponent::GorillaTag_GuidedRefs_IGuidedRefMonoBehaviour_get_transform
// Il2CppName: GorillaTag.GuidedRefs.IGuidedRefMonoBehaviour.get_transform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (GorillaTag::GuidedRefs::GuidedRefTargetMonoComponent::*)()>(&GorillaTag::GuidedRefs::GuidedRefTargetMonoComponent::GorillaTag_GuidedRefs_IGuidedRefMonoBehaviour_get_transform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::GuidedRefs::GuidedRefTargetMonoComponent*), "GorillaTag.GuidedRefs.IGuidedRefMonoBehaviour.get_transform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTag::GuidedRefs::GuidedRefTargetMonoComponent::GorillaTag_GuidedRefs_IGuidedRefObject_GetInstanceID
// Il2CppName: GorillaTag.GuidedRefs.IGuidedRefObject.GetInstanceID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GorillaTag::GuidedRefs::GuidedRefTargetMonoComponent::*)()>(&GorillaTag::GuidedRefs::GuidedRefTargetMonoComponent::GorillaTag_GuidedRefs_IGuidedRefObject_GetInstanceID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::GuidedRefs::GuidedRefTargetMonoComponent*), "GorillaTag.GuidedRefs.IGuidedRefObject.GetInstanceID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
