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
// Type namespace: Unity.Properties
namespace Unity::Properties {
  // Forward declaring type: InstantiationKind
  struct InstantiationKind;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::InstantiationKind, "Unity.Properties", "InstantiationKind");
// Type namespace: Unity.Properties
namespace Unity::Properties {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Unity.Properties.InstantiationKind
  // [TokenAttribute] Offset: FFFFFFFF
  struct InstantiationKind/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: InstantiationKind
    constexpr InstantiationKind(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Unity.Properties.InstantiationKind Activator
    static constexpr const int Activator = 0;
    // Get static field: static public Unity.Properties.InstantiationKind Activator
    static ::Unity::Properties::InstantiationKind _get_Activator();
    // Set static field: static public Unity.Properties.InstantiationKind Activator
    static void _set_Activator(::Unity::Properties::InstantiationKind value);
    // static field const value: static public Unity.Properties.InstantiationKind PropertyBagOverride
    static constexpr const int PropertyBagOverride = 1;
    // Get static field: static public Unity.Properties.InstantiationKind PropertyBagOverride
    static ::Unity::Properties::InstantiationKind _get_PropertyBagOverride();
    // Set static field: static public Unity.Properties.InstantiationKind PropertyBagOverride
    static void _set_PropertyBagOverride(::Unity::Properties::InstantiationKind value);
    // static field const value: static public Unity.Properties.InstantiationKind NotInstantiatable
    static constexpr const int NotInstantiatable = 2;
    // Get static field: static public Unity.Properties.InstantiationKind NotInstantiatable
    static ::Unity::Properties::InstantiationKind _get_NotInstantiatable();
    // Set static field: static public Unity.Properties.InstantiationKind NotInstantiatable
    static void _set_NotInstantiatable(::Unity::Properties::InstantiationKind value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Unity.Properties.InstantiationKind
  #pragma pack(pop)
  static check_size<sizeof(InstantiationKind), 0 + sizeof(int)> __Unity_Properties_InstantiationKindSizeCheck;
  static_assert(sizeof(InstantiationKind) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
