// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Rendering.MaterialHelperBase
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Rendering/MaterialHelperBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MaterialPropertyBlock
  class MaterialPropertyBlock;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Rendering
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering {
  // Forward declaring type: MaterialPropertyBlockHelper
  class MaterialPropertyBlockHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper*, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Rendering", "MaterialPropertyBlockHelper");
// Type namespace: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Rendering
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering {
  // Size: 0x39
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Rendering.MaterialPropertyBlockHelper
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: FFFFFFFF
  class MaterialPropertyBlockHelper : public ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialHelperBase {
    public:
    // Writing base type padding for base size: 0x2D to desired offset: 0x30
    char ___base_padding[0x3] = {};
    public:
    // private UnityEngine.MaterialPropertyBlock m_PropertyBlock
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::MaterialPropertyBlock* m_PropertyBlock;
    // Field size check
    static_assert(sizeof(::UnityEngine::MaterialPropertyBlock*) == 0x8);
    // private System.Boolean m_IsDirty
    // Size: 0x1
    // Offset: 0x38
    bool m_IsDirty;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private UnityEngine.MaterialPropertyBlock m_PropertyBlock
    [[deprecated("Use field access instead!")]] ::UnityEngine::MaterialPropertyBlock*& dyn_m_PropertyBlock();
    // Get instance field reference: private System.Boolean m_IsDirty
    [[deprecated("Use field access instead!")]] bool& dyn_m_IsDirty();
    // protected System.Void OnDestroy()
    // Offset: 0x5441C44
    void OnDestroy();
    // protected System.Void LateUpdate()
    // Offset: 0x5441C50
    void LateUpdate();
    // public UnityEngine.MaterialPropertyBlock GetMaterialPropertyBlock(System.Boolean markPropertyBlockAsDirty)
    // Offset: 0x5441C90
    ::UnityEngine::MaterialPropertyBlock* GetMaterialPropertyBlock(bool markPropertyBlockAsDirty);
    // protected override System.Void Initialize()
    // Offset: 0x5441CA4
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Rendering.MaterialHelperBase
    // Base method: System.Void MaterialHelperBase::Initialize()
    void Initialize();
    // public System.Void .ctor()
    // Offset: 0x5441D2C
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Rendering.MaterialHelperBase
    // Base method: System.Void MaterialHelperBase::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MaterialPropertyBlockHelper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MaterialPropertyBlockHelper*, creationType>()));
    }
  }; // UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Rendering.MaterialPropertyBlockHelper
  #pragma pack(pop)
  static check_size<sizeof(MaterialPropertyBlockHelper), 56 + sizeof(bool)> __UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Rendering_MaterialPropertyBlockHelperSizeCheck;
  static_assert(sizeof(MaterialPropertyBlockHelper) == 0x39);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper::*)()>(&UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper::*)()>(&UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper::GetMaterialPropertyBlock
// Il2CppName: GetMaterialPropertyBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::MaterialPropertyBlock* (UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper::*)(bool)>(&UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper::GetMaterialPropertyBlock)> {
  static const MethodInfo* get() {
    static auto* markPropertyBlockAsDirty = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper*), "GetMaterialPropertyBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{markPropertyBlockAsDirty});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper::*)()>(&UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
