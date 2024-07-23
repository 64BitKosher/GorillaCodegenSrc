// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
  // Forward declaring type: DecalCulledChunk
  class DecalCulledChunk;
  // Forward declaring type: DecalDrawCallChunk
  class DecalDrawCallChunk;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: ProfilingSampler
  class ProfilingSampler;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: DecalCreateDrawCallSystem
  class DecalCreateDrawCallSystem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem*, "UnityEngine.Rendering.Universal", "DecalCreateDrawCallSystem");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.DecalCreateDrawCallSystem
  // [TokenAttribute] Offset: FFFFFFFF
  class DecalCreateDrawCallSystem : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::DrawCallJob
    struct DrawCallJob;
    public:
    // private UnityEngine.Rendering.Universal.DecalEntityManager m_EntityManager
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Rendering::Universal::DecalEntityManager* m_EntityManager;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::DecalEntityManager*) == 0x8);
    // private UnityEngine.Rendering.ProfilingSampler m_Sampler
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Rendering::ProfilingSampler* m_Sampler;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::ProfilingSampler*) == 0x8);
    // private System.Single m_MaxDrawDistance
    // Size: 0x4
    // Offset: 0x20
    float m_MaxDrawDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private UnityEngine.Rendering.Universal.DecalEntityManager m_EntityManager
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::DecalEntityManager*& dyn_m_EntityManager();
    // Get instance field reference: private UnityEngine.Rendering.ProfilingSampler m_Sampler
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::ProfilingSampler*& dyn_m_Sampler();
    // Get instance field reference: private System.Single m_MaxDrawDistance
    [[deprecated("Use field access instead!")]] float& dyn_m_MaxDrawDistance();
    // public System.Single get_maxDrawDistance()
    // Offset: 0x52A2F0C
    float get_maxDrawDistance();
    // public System.Void set_maxDrawDistance(System.Single value)
    // Offset: 0x52A2F14
    void set_maxDrawDistance(float value);
    // public System.Void .ctor(UnityEngine.Rendering.Universal.DecalEntityManager entityManager, System.Single maxDrawDistance)
    // Offset: 0x52A2F1C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DecalCreateDrawCallSystem* New_ctor(::UnityEngine::Rendering::Universal::DecalEntityManager* entityManager, float maxDrawDistance) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DecalCreateDrawCallSystem*, creationType>(entityManager, maxDrawDistance)));
    }
    // public System.Void Execute()
    // Offset: 0x52A2FD0
    void Execute();
    // private System.Void Execute(UnityEngine.Rendering.Universal.DecalCachedChunk cachedChunk, UnityEngine.Rendering.Universal.DecalCulledChunk culledChunk, UnityEngine.Rendering.Universal.DecalDrawCallChunk drawCallChunk, System.Int32 count)
    // Offset: 0x52A31E4
    void Execute(::UnityEngine::Rendering::Universal::DecalCachedChunk* cachedChunk, ::UnityEngine::Rendering::Universal::DecalCulledChunk* culledChunk, ::UnityEngine::Rendering::Universal::DecalDrawCallChunk* drawCallChunk, int count);
  }; // UnityEngine.Rendering.Universal.DecalCreateDrawCallSystem
  #pragma pack(pop)
  static check_size<sizeof(DecalCreateDrawCallSystem), 32 + sizeof(float)> __UnityEngine_Rendering_Universal_DecalCreateDrawCallSystemSizeCheck;
  static_assert(sizeof(DecalCreateDrawCallSystem) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::get_maxDrawDistance
// Il2CppName: get_maxDrawDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::*)()>(&UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::get_maxDrawDistance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem*), "get_maxDrawDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::set_maxDrawDistance
// Il2CppName: set_maxDrawDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::*)(float)>(&UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::set_maxDrawDistance)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem*), "set_maxDrawDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::Execute
// Il2CppName: Execute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::*)()>(&UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::Execute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem*), "Execute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::Execute
// Il2CppName: Execute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::*)(::UnityEngine::Rendering::Universal::DecalCachedChunk*, ::UnityEngine::Rendering::Universal::DecalCulledChunk*, ::UnityEngine::Rendering::Universal::DecalDrawCallChunk*, int)>(&UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem::Execute)> {
  static const MethodInfo* get() {
    static auto* cachedChunk = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "DecalCachedChunk")->byval_arg;
    static auto* culledChunk = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "DecalCulledChunk")->byval_arg;
    static auto* drawCallChunk = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "DecalDrawCallChunk")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem*), "Execute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cachedChunk, culledChunk, drawCallChunk, count});
  }
};
