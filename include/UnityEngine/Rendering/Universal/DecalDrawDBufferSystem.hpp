// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.DecalDrawSystem
#include "UnityEngine/Rendering/Universal/DecalDrawSystem.hpp"
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
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: DecalDrawDBufferSystem
  class DecalDrawDBufferSystem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem*, "UnityEngine.Rendering.Universal", "DecalDrawDBufferSystem");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.DecalDrawDBufferSystem
  // [TokenAttribute] Offset: FFFFFFFF
  class DecalDrawDBufferSystem : public ::UnityEngine::Rendering::Universal::DecalDrawSystem {
    public:
    // public System.Void .ctor(UnityEngine.Rendering.Universal.DecalEntityManager entityManager)
    // Offset: 0x52A0218
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DecalDrawDBufferSystem* New_ctor(::UnityEngine::Rendering::Universal::DecalEntityManager* entityManager) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DecalDrawDBufferSystem*, creationType>(entityManager)));
    }
    // protected override System.Int32 GetPassIndex(UnityEngine.Rendering.Universal.DecalCachedChunk decalCachedChunk)
    // Offset: 0x52A0274
    // Implemented from: UnityEngine.Rendering.Universal.DecalDrawSystem
    // Base method: System.Int32 DecalDrawSystem::GetPassIndex(UnityEngine.Rendering.Universal.DecalCachedChunk decalCachedChunk)
    int GetPassIndex(::UnityEngine::Rendering::Universal::DecalCachedChunk* decalCachedChunk);
  }; // UnityEngine.Rendering.Universal.DecalDrawDBufferSystem
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DecalDrawDBufferSystem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DecalDrawDBufferSystem::GetPassIndex
// Il2CppName: GetPassIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::Universal::DecalDrawDBufferSystem::*)(::UnityEngine::Rendering::Universal::DecalCachedChunk*)>(&UnityEngine::Rendering::Universal::DecalDrawDBufferSystem::GetPassIndex)> {
  static const MethodInfo* get() {
    static auto* decalCachedChunk = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "DecalCachedChunk")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::DecalDrawDBufferSystem*), "GetPassIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{decalCachedChunk});
  }
};
