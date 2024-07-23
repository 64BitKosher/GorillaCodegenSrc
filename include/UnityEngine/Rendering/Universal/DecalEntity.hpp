// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: DecalEntity
  struct DecalEntity;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalEntity, "UnityEngine.Rendering.Universal", "DecalEntity");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Rendering.Universal.DecalEntity
  // [TokenAttribute] Offset: FFFFFFFF
  struct DecalEntity/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int32 index
    // Size: 0x4
    // Offset: 0x0
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 version
    // Size: 0x4
    // Offset: 0x4
    int version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DecalEntity
    constexpr DecalEntity(int index_ = {}, int version_ = {}) noexcept : index{index_}, version{version_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 index
    [[deprecated("Use field access instead!")]] int& dyn_index();
    // Get instance field reference: public System.Int32 version
    [[deprecated("Use field access instead!")]] int& dyn_version();
  }; // UnityEngine.Rendering.Universal.DecalEntity
  #pragma pack(pop)
  static check_size<sizeof(DecalEntity), 4 + sizeof(int)> __UnityEngine_Rendering_Universal_DecalEntitySizeCheck;
  static_assert(sizeof(DecalEntity) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
