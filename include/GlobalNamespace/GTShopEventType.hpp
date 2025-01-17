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
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GTShopEventType
  struct GTShopEventType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GTShopEventType, "", "GTShopEventType");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: GTShopEventType
  // [TokenAttribute] Offset: FFFFFFFF
  struct GTShopEventType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: GTShopEventType
    constexpr GTShopEventType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public GTShopEventType item_select
    static constexpr const int item_select = 0;
    // Get static field: static public GTShopEventType item_select
    static ::GlobalNamespace::GTShopEventType _get_item_select();
    // Set static field: static public GTShopEventType item_select
    static void _set_item_select(::GlobalNamespace::GTShopEventType value);
    // static field const value: static public GTShopEventType item_try_on
    static constexpr const int item_try_on = 1;
    // Get static field: static public GTShopEventType item_try_on
    static ::GlobalNamespace::GTShopEventType _get_item_try_on();
    // Set static field: static public GTShopEventType item_try_on
    static void _set_item_try_on(::GlobalNamespace::GTShopEventType value);
    // static field const value: static public GTShopEventType cart_item_add
    static constexpr const int cart_item_add = 2;
    // Get static field: static public GTShopEventType cart_item_add
    static ::GlobalNamespace::GTShopEventType _get_cart_item_add();
    // Set static field: static public GTShopEventType cart_item_add
    static void _set_cart_item_add(::GlobalNamespace::GTShopEventType value);
    // static field const value: static public GTShopEventType cart_item_remove
    static constexpr const int cart_item_remove = 3;
    // Get static field: static public GTShopEventType cart_item_remove
    static ::GlobalNamespace::GTShopEventType _get_cart_item_remove();
    // Set static field: static public GTShopEventType cart_item_remove
    static void _set_cart_item_remove(::GlobalNamespace::GTShopEventType value);
    // static field const value: static public GTShopEventType checkout_start
    static constexpr const int checkout_start = 4;
    // Get static field: static public GTShopEventType checkout_start
    static ::GlobalNamespace::GTShopEventType _get_checkout_start();
    // Set static field: static public GTShopEventType checkout_start
    static void _set_checkout_start(::GlobalNamespace::GTShopEventType value);
    // static field const value: static public GTShopEventType checkout_cancel
    static constexpr const int checkout_cancel = 5;
    // Get static field: static public GTShopEventType checkout_cancel
    static ::GlobalNamespace::GTShopEventType _get_checkout_cancel();
    // Set static field: static public GTShopEventType checkout_cancel
    static void _set_checkout_cancel(::GlobalNamespace::GTShopEventType value);
    // static field const value: static public GTShopEventType register_visit
    static constexpr const int register_visit = 6;
    // Get static field: static public GTShopEventType register_visit
    static ::GlobalNamespace::GTShopEventType _get_register_visit();
    // Set static field: static public GTShopEventType register_visit
    static void _set_register_visit(::GlobalNamespace::GTShopEventType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // GTShopEventType
  #pragma pack(pop)
  static check_size<sizeof(GTShopEventType), 0 + sizeof(int)> __GlobalNamespace_GTShopEventTypeSizeCheck;
  static_assert(sizeof(GTShopEventType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
