// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Forward declaring type: CacheIndex
  struct CacheIndex;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::Rigging::CacheIndex, "UnityEngine.Animations.Rigging", "CacheIndex");
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Animations.Rigging.CacheIndex
  // [TokenAttribute] Offset: FFFFFFFF
  struct CacheIndex/*, public ::System::ValueType*/ {
    public:
    public:
    // System.Int32 idx
    // Size: 0x4
    // Offset: 0x0
    int idx;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: CacheIndex
    constexpr CacheIndex(int idx_ = {}) noexcept : idx{idx_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return idx;
    }
    // Get instance field reference: System.Int32 idx
    [[deprecated("Use field access instead!")]] int& dyn_idx();
  }; // UnityEngine.Animations.Rigging.CacheIndex
  #pragma pack(pop)
  static check_size<sizeof(CacheIndex), 0 + sizeof(int)> __UnityEngine_Animations_Rigging_CacheIndexSizeCheck;
  static_assert(sizeof(CacheIndex) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
