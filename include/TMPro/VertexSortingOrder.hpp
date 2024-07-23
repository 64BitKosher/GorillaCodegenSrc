// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // Forward declaring type: VertexSortingOrder
  struct VertexSortingOrder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::TMPro::VertexSortingOrder, "TMPro", "VertexSortingOrder");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.VertexSortingOrder
  // [TokenAttribute] Offset: FFFFFFFF
  struct VertexSortingOrder/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: VertexSortingOrder
    constexpr VertexSortingOrder(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public TMPro.VertexSortingOrder Normal
    static constexpr const int Normal = 0;
    // Get static field: static public TMPro.VertexSortingOrder Normal
    static ::TMPro::VertexSortingOrder _get_Normal();
    // Set static field: static public TMPro.VertexSortingOrder Normal
    static void _set_Normal(::TMPro::VertexSortingOrder value);
    // static field const value: static public TMPro.VertexSortingOrder Reverse
    static constexpr const int Reverse = 1;
    // Get static field: static public TMPro.VertexSortingOrder Reverse
    static ::TMPro::VertexSortingOrder _get_Reverse();
    // Set static field: static public TMPro.VertexSortingOrder Reverse
    static void _set_Reverse(::TMPro::VertexSortingOrder value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // TMPro.VertexSortingOrder
  #pragma pack(pop)
  static check_size<sizeof(VertexSortingOrder), 0 + sizeof(int)> __TMPro_VertexSortingOrderSizeCheck;
  static_assert(sizeof(VertexSortingOrder) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"