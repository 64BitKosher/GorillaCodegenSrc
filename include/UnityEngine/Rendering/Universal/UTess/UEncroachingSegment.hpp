// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Unity.Mathematics.float2
#include "Unity/Mathematics/float2.hpp"
// Completed includes
// Type namespace: UnityEngine.Rendering.Universal.UTess
namespace UnityEngine::Rendering::Universal::UTess {
  // Forward declaring type: UEncroachingSegment
  struct UEncroachingSegment;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UTess::UEncroachingSegment, "UnityEngine.Rendering.Universal.UTess", "UEncroachingSegment");
// Type namespace: UnityEngine.Rendering.Universal.UTess
namespace UnityEngine::Rendering::Universal::UTess {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Rendering.Universal.UTess.UEncroachingSegment
  // [TokenAttribute] Offset: FFFFFFFF
  struct UEncroachingSegment/*, public ::System::ValueType*/ {
    public:
    public:
    // public Unity.Mathematics.float2 a
    // Size: 0x8
    // Offset: 0x0
    ::Unity::Mathematics::float2 a;
    // Field size check
    static_assert(sizeof(::Unity::Mathematics::float2) == 0x8);
    // public Unity.Mathematics.float2 b
    // Size: 0x8
    // Offset: 0x8
    ::Unity::Mathematics::float2 b;
    // Field size check
    static_assert(sizeof(::Unity::Mathematics::float2) == 0x8);
    // public System.Int32 index
    // Size: 0x4
    // Offset: 0x10
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: UEncroachingSegment
    constexpr UEncroachingSegment(::Unity::Mathematics::float2 a_ = {}, ::Unity::Mathematics::float2 b_ = {}, int index_ = {}) noexcept : a{a_}, b{b_}, index{index_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public Unity.Mathematics.float2 a
    [[deprecated("Use field access instead!")]] ::Unity::Mathematics::float2& dyn_a();
    // Get instance field reference: public Unity.Mathematics.float2 b
    [[deprecated("Use field access instead!")]] ::Unity::Mathematics::float2& dyn_b();
    // Get instance field reference: public System.Int32 index
    [[deprecated("Use field access instead!")]] int& dyn_index();
  }; // UnityEngine.Rendering.Universal.UTess.UEncroachingSegment
  #pragma pack(pop)
  static check_size<sizeof(UEncroachingSegment), 16 + sizeof(int)> __UnityEngine_Rendering_Universal_UTess_UEncroachingSegmentSizeCheck;
  static_assert(sizeof(UEncroachingSegment) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"