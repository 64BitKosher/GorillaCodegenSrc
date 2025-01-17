// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GorillaUITransformFollow
  class GorillaUITransformFollow;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GorillaHasUITransformFollow
  class GorillaHasUITransformFollow;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GorillaHasUITransformFollow);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GorillaHasUITransformFollow*, "", "GorillaHasUITransformFollow");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: GorillaHasUITransformFollow
  // [TokenAttribute] Offset: FFFFFFFF
  class GorillaHasUITransformFollow : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public GorillaUITransformFollow[] transformFollowers
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::GlobalNamespace::GorillaUITransformFollow*> transformFollowers;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::GorillaUITransformFollow*>) == 0x8);
    public:
    // Get instance field reference: public GorillaUITransformFollow[] transformFollowers
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::GorillaUITransformFollow*>& dyn_transformFollowers();
    // private System.Void Awake()
    // Offset: 0x27086C4
    void Awake();
    // private System.Void OnDestroy()
    // Offset: 0x2708760
    void OnDestroy();
    // private System.Void OnEnable()
    // Offset: 0x2708818
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x2708888
    void OnDisable();
    // public System.Void .ctor()
    // Offset: 0x27088F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GorillaHasUITransformFollow* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GorillaHasUITransformFollow::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GorillaHasUITransformFollow*, creationType>()));
    }
  }; // GorillaHasUITransformFollow
  #pragma pack(pop)
  static check_size<sizeof(GorillaHasUITransformFollow), 32 + sizeof(::ArrayW<::GlobalNamespace::GorillaUITransformFollow*>)> __GlobalNamespace_GorillaHasUITransformFollowSizeCheck;
  static_assert(sizeof(GorillaHasUITransformFollow) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GorillaHasUITransformFollow::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaHasUITransformFollow::*)()>(&GlobalNamespace::GorillaHasUITransformFollow::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaHasUITransformFollow*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaHasUITransformFollow::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaHasUITransformFollow::*)()>(&GlobalNamespace::GorillaHasUITransformFollow::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaHasUITransformFollow*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaHasUITransformFollow::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaHasUITransformFollow::*)()>(&GlobalNamespace::GorillaHasUITransformFollow::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaHasUITransformFollow*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaHasUITransformFollow::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaHasUITransformFollow::*)()>(&GlobalNamespace::GorillaHasUITransformFollow::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaHasUITransformFollow*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaHasUITransformFollow::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
