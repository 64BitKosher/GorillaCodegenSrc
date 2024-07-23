// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.DecalChunk
#include "UnityEngine/Rendering/Universal/DecalChunk.hpp"
// Including type: UnityEngine.Rendering.Universal.DecalEntity
#include "UnityEngine/Rendering/Universal/DecalEntity.hpp"
// Including type: UnityEngine.Jobs.TransformAccessArray
#include "UnityEngine/Jobs/TransformAccessArray.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Forward declaring namespace: UnityEngine::Rendering::Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: DecalProjector
  class DecalProjector;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: DecalEntityChunk
  class DecalEntityChunk;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DecalEntityChunk);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalEntityChunk*, "UnityEngine.Rendering.Universal", "DecalEntityChunk");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Rendering.Universal.DecalEntityChunk
  // [TokenAttribute] Offset: FFFFFFFF
  class DecalEntityChunk : public ::UnityEngine::Rendering::Universal::DecalChunk {
    public:
    // Writing base type padding for base size: 0x24 to desired offset: 0x28
    char ___base_padding[0x4] = {};
    public:
    // public UnityEngine.Material material
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Material* material;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // public Unity.Collections.NativeArray`1<UnityEngine.Rendering.Universal.DecalEntity> decalEntities
    // Size: 0xFFFFFFFF
    // Offset: 0x30
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::DecalEntity> decalEntities;
    // public UnityEngine.Rendering.Universal.DecalProjector[] decalProjectors
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::UnityEngine::Rendering::Universal::DecalProjector*> decalProjectors;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Rendering::Universal::DecalProjector*>) == 0x8);
    // public UnityEngine.Jobs.TransformAccessArray transformAccessArray
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Jobs::TransformAccessArray transformAccessArray;
    // Field size check
    static_assert(sizeof(::UnityEngine::Jobs::TransformAccessArray) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.Material material
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_material();
    // Get instance field reference: public Unity.Collections.NativeArray`1<UnityEngine.Rendering.Universal.DecalEntity> decalEntities
    [[deprecated("Use field access instead!")]] ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::DecalEntity>& dyn_decalEntities();
    // Get instance field reference: public UnityEngine.Rendering.Universal.DecalProjector[] decalProjectors
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Rendering::Universal::DecalProjector*>& dyn_decalProjectors();
    // Get instance field reference: public UnityEngine.Jobs.TransformAccessArray transformAccessArray
    [[deprecated("Use field access instead!")]] ::UnityEngine::Jobs::TransformAccessArray& dyn_transformAccessArray();
    // public override System.Void Push()
    // Offset: 0x52A4F18
    // Implemented from: UnityEngine.Rendering.Universal.DecalChunk
    // Base method: System.Void DecalChunk::Push()
    void Push();
    // public override System.Void RemoveAtSwapBack(System.Int32 entityIndex)
    // Offset: 0x52A4F28
    // Implemented from: UnityEngine.Rendering.Universal.DecalChunk
    // Base method: System.Void DecalChunk::RemoveAtSwapBack(System.Int32 entityIndex)
    void RemoveAtSwapBack(int entityIndex);
    // public override System.Void SetCapacity(System.Int32 newCapacity)
    // Offset: 0x52A4FD4
    // Implemented from: UnityEngine.Rendering.Universal.DecalChunk
    // Base method: System.Void DecalChunk::SetCapacity(System.Int32 newCapacity)
    void SetCapacity(int newCapacity);
    // public override System.Void Dispose()
    // Offset: 0x52A5068
    // Implemented from: UnityEngine.Rendering.Universal.DecalChunk
    // Base method: System.Void DecalChunk::Dispose()
    void Dispose();
    // public System.Void .ctor()
    // Offset: 0x52A50DC
    // Implemented from: UnityEngine.Rendering.Universal.DecalChunk
    // Base method: System.Void DecalChunk::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DecalEntityChunk* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::DecalEntityChunk::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DecalEntityChunk*, creationType>()));
    }
  }; // UnityEngine.Rendering.Universal.DecalEntityChunk
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DecalEntityChunk::Push
// Il2CppName: Push
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::DecalEntityChunk::*)()>(&UnityEngine::Rendering::Universal::DecalEntityChunk::Push)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::DecalEntityChunk*), "Push", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DecalEntityChunk::RemoveAtSwapBack
// Il2CppName: RemoveAtSwapBack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::DecalEntityChunk::*)(int)>(&UnityEngine::Rendering::Universal::DecalEntityChunk::RemoveAtSwapBack)> {
  static const MethodInfo* get() {
    static auto* entityIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::DecalEntityChunk*), "RemoveAtSwapBack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{entityIndex});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DecalEntityChunk::SetCapacity
// Il2CppName: SetCapacity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::DecalEntityChunk::*)(int)>(&UnityEngine::Rendering::Universal::DecalEntityChunk::SetCapacity)> {
  static const MethodInfo* get() {
    static auto* newCapacity = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::DecalEntityChunk*), "SetCapacity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newCapacity});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DecalEntityChunk::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::DecalEntityChunk::*)()>(&UnityEngine::Rendering::Universal::DecalEntityChunk::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::DecalEntityChunk*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DecalEntityChunk::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
