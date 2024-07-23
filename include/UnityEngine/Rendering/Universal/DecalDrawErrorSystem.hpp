// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.DecalDrawSystem
#include "UnityEngine/Rendering/Universal/DecalDrawSystem.hpp"
// Including type: UnityEngine.Rendering.Universal.DecalTechnique
#include "UnityEngine/Rendering/Universal/DecalTechnique.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering::Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: DecalEntityManager
  class DecalEntityManager;
  // Forward declaring type: DecalCachedChunk
  class DecalCachedChunk;
  // Forward declaring type: DecalEntityChunk
  class DecalEntityChunk;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: DecalDrawErrorSystem
  class DecalDrawErrorSystem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DecalDrawErrorSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalDrawErrorSystem*, "UnityEngine.Rendering.Universal", "DecalDrawErrorSystem");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.DecalDrawErrorSystem
  // [TokenAttribute] Offset: FFFFFFFF
  class DecalDrawErrorSystem : public ::UnityEngine::Rendering::Universal::DecalDrawSystem {
    public:
    public:
    // private UnityEngine.Rendering.Universal.DecalTechnique m_Technique
    // Size: 0x4
    // Offset: 0x40
    ::UnityEngine::Rendering::Universal::DecalTechnique m_Technique;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::DecalTechnique) == 0x4);
    public:
    // Creating conversion operator: operator ::UnityEngine::Rendering::Universal::DecalTechnique
    constexpr operator ::UnityEngine::Rendering::Universal::DecalTechnique() const noexcept {
      return m_Technique;
    }
    // Get instance field reference: private UnityEngine.Rendering.Universal.DecalTechnique m_Technique
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::DecalTechnique& dyn_m_Technique();
    // public System.Void .ctor(UnityEngine.Rendering.Universal.DecalEntityManager entityManager, UnityEngine.Rendering.Universal.DecalTechnique technique)
    // Offset: 0x52A1710
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DecalDrawErrorSystem* New_ctor(::UnityEngine::Rendering::Universal::DecalEntityManager* entityManager, ::UnityEngine::Rendering::Universal::DecalTechnique technique) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::DecalDrawErrorSystem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DecalDrawErrorSystem*, creationType>(entityManager, technique)));
    }
    // protected override System.Int32 GetPassIndex(UnityEngine.Rendering.Universal.DecalCachedChunk decalCachedChunk)
    // Offset: 0x52A1778
    // Implemented from: UnityEngine.Rendering.Universal.DecalDrawSystem
    // Base method: System.Int32 DecalDrawSystem::GetPassIndex(UnityEngine.Rendering.Universal.DecalCachedChunk decalCachedChunk)
    int GetPassIndex(::UnityEngine::Rendering::Universal::DecalCachedChunk* decalCachedChunk);
    // protected override UnityEngine.Material GetMaterial(UnityEngine.Rendering.Universal.DecalEntityChunk decalEntityChunk)
    // Offset: 0x52A17E8
    // Implemented from: UnityEngine.Rendering.Universal.DecalDrawSystem
    // Base method: UnityEngine.Material DecalDrawSystem::GetMaterial(UnityEngine.Rendering.Universal.DecalEntityChunk decalEntityChunk)
    ::UnityEngine::Material* GetMaterial(::UnityEngine::Rendering::Universal::DecalEntityChunk* decalEntityChunk);
  }; // UnityEngine.Rendering.Universal.DecalDrawErrorSystem
  #pragma pack(pop)
  static check_size<sizeof(DecalDrawErrorSystem), 64 + sizeof(::UnityEngine::Rendering::Universal::DecalTechnique)> __UnityEngine_Rendering_Universal_DecalDrawErrorSystemSizeCheck;
  static_assert(sizeof(DecalDrawErrorSystem) == 0x44);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DecalDrawErrorSystem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DecalDrawErrorSystem::GetPassIndex
// Il2CppName: GetPassIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::Universal::DecalDrawErrorSystem::*)(::UnityEngine::Rendering::Universal::DecalCachedChunk*)>(&UnityEngine::Rendering::Universal::DecalDrawErrorSystem::GetPassIndex)> {
  static const MethodInfo* get() {
    static auto* decalCachedChunk = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "DecalCachedChunk")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::DecalDrawErrorSystem*), "GetPassIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{decalCachedChunk});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DecalDrawErrorSystem::GetMaterial
// Il2CppName: GetMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (UnityEngine::Rendering::Universal::DecalDrawErrorSystem::*)(::UnityEngine::Rendering::Universal::DecalEntityChunk*)>(&UnityEngine::Rendering::Universal::DecalDrawErrorSystem::GetMaterial)> {
  static const MethodInfo* get() {
    static auto* decalEntityChunk = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "DecalEntityChunk")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::DecalDrawErrorSystem*), "GetMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{decalEntityChunk});
  }
};
