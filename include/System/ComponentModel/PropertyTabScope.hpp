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
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: PropertyTabScope
  struct PropertyTabScope;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::PropertyTabScope, "System.ComponentModel", "PropertyTabScope");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.PropertyTabScope
  // [TokenAttribute] Offset: FFFFFFFF
  struct PropertyTabScope/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: PropertyTabScope
    constexpr PropertyTabScope(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.ComponentModel.PropertyTabScope Static
    static constexpr const int Static = 0;
    // Get static field: static public System.ComponentModel.PropertyTabScope Static
    static ::System::ComponentModel::PropertyTabScope _get_Static();
    // Set static field: static public System.ComponentModel.PropertyTabScope Static
    static void _set_Static(::System::ComponentModel::PropertyTabScope value);
    // static field const value: static public System.ComponentModel.PropertyTabScope Global
    static constexpr const int Global = 1;
    // Get static field: static public System.ComponentModel.PropertyTabScope Global
    static ::System::ComponentModel::PropertyTabScope _get_Global();
    // Set static field: static public System.ComponentModel.PropertyTabScope Global
    static void _set_Global(::System::ComponentModel::PropertyTabScope value);
    // static field const value: static public System.ComponentModel.PropertyTabScope Document
    static constexpr const int Document = 2;
    // Get static field: static public System.ComponentModel.PropertyTabScope Document
    static ::System::ComponentModel::PropertyTabScope _get_Document();
    // Set static field: static public System.ComponentModel.PropertyTabScope Document
    static void _set_Document(::System::ComponentModel::PropertyTabScope value);
    // static field const value: static public System.ComponentModel.PropertyTabScope Component
    static constexpr const int Component = 3;
    // Get static field: static public System.ComponentModel.PropertyTabScope Component
    static ::System::ComponentModel::PropertyTabScope _get_Component();
    // Set static field: static public System.ComponentModel.PropertyTabScope Component
    static void _set_Component(::System::ComponentModel::PropertyTabScope value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.ComponentModel.PropertyTabScope
  #pragma pack(pop)
  static check_size<sizeof(PropertyTabScope), 0 + sizeof(int)> __System_ComponentModel_PropertyTabScopeSizeCheck;
  static_assert(sizeof(PropertyTabScope) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"