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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: GorillaTag.Rendering
namespace GorillaTag::Rendering {
  // Forward declaring type: FirstPersonMeshCullingDisabler
  class FirstPersonMeshCullingDisabler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaTag::Rendering::FirstPersonMeshCullingDisabler);
DEFINE_IL2CPP_ARG_TYPE(::GorillaTag::Rendering::FirstPersonMeshCullingDisabler*, "GorillaTag.Rendering", "FirstPersonMeshCullingDisabler");
// Type namespace: GorillaTag.Rendering
namespace GorillaTag::Rendering {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: GorillaTag.Rendering.FirstPersonMeshCullingDisabler
  // [TokenAttribute] Offset: FFFFFFFF
  class FirstPersonMeshCullingDisabler : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Mesh[] meshes
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::UnityEngine::Mesh*> meshes;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Mesh*>) == 0x8);
    // private UnityEngine.Transform[] xforms
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::UnityEngine::Transform*> xforms;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Transform*>) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.Mesh[] meshes
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Mesh*>& dyn_meshes();
    // Get instance field reference: private UnityEngine.Transform[] xforms
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Transform*>& dyn_xforms();
    // protected System.Void Awake()
    // Offset: 0x28AE86C
    void Awake();
    // protected System.Void OnEnable()
    // Offset: 0x28AEA08
    void OnEnable();
    // public System.Void .ctor()
    // Offset: 0x28AECC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FirstPersonMeshCullingDisabler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaTag::Rendering::FirstPersonMeshCullingDisabler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FirstPersonMeshCullingDisabler*, creationType>()));
    }
  }; // GorillaTag.Rendering.FirstPersonMeshCullingDisabler
  #pragma pack(pop)
  static check_size<sizeof(FirstPersonMeshCullingDisabler), 40 + sizeof(::ArrayW<::UnityEngine::Transform*>)> __GorillaTag_Rendering_FirstPersonMeshCullingDisablerSizeCheck;
  static_assert(sizeof(FirstPersonMeshCullingDisabler) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaTag::Rendering::FirstPersonMeshCullingDisabler::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTag::Rendering::FirstPersonMeshCullingDisabler::*)()>(&GorillaTag::Rendering::FirstPersonMeshCullingDisabler::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::Rendering::FirstPersonMeshCullingDisabler*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTag::Rendering::FirstPersonMeshCullingDisabler::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTag::Rendering::FirstPersonMeshCullingDisabler::*)()>(&GorillaTag::Rendering::FirstPersonMeshCullingDisabler::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::Rendering::FirstPersonMeshCullingDisabler*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTag::Rendering::FirstPersonMeshCullingDisabler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!