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
  // Forward declaring type: GTShaderTransparencyMode
  struct GTShaderTransparencyMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GTShaderTransparencyMode, "", "GTShaderTransparencyMode");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: GTShaderTransparencyMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct GTShaderTransparencyMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: GTShaderTransparencyMode
    constexpr GTShaderTransparencyMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public GTShaderTransparencyMode Opaque
    static constexpr const int Opaque = 0;
    // Get static field: static public GTShaderTransparencyMode Opaque
    static ::GlobalNamespace::GTShaderTransparencyMode _get_Opaque();
    // Set static field: static public GTShaderTransparencyMode Opaque
    static void _set_Opaque(::GlobalNamespace::GTShaderTransparencyMode value);
    // static field const value: static public GTShaderTransparencyMode AlphaTest
    static constexpr const int AlphaTest = 1;
    // Get static field: static public GTShaderTransparencyMode AlphaTest
    static ::GlobalNamespace::GTShaderTransparencyMode _get_AlphaTest();
    // Set static field: static public GTShaderTransparencyMode AlphaTest
    static void _set_AlphaTest(::GlobalNamespace::GTShaderTransparencyMode value);
    // static field const value: static public GTShaderTransparencyMode Transparent
    static constexpr const int Transparent = 2;
    // Get static field: static public GTShaderTransparencyMode Transparent
    static ::GlobalNamespace::GTShaderTransparencyMode _get_Transparent();
    // Set static field: static public GTShaderTransparencyMode Transparent
    static void _set_Transparent(::GlobalNamespace::GTShaderTransparencyMode value);
    // static field const value: static public GTShaderTransparencyMode Premultiplied
    static constexpr const int Premultiplied = 3;
    // Get static field: static public GTShaderTransparencyMode Premultiplied
    static ::GlobalNamespace::GTShaderTransparencyMode _get_Premultiplied();
    // Set static field: static public GTShaderTransparencyMode Premultiplied
    static void _set_Premultiplied(::GlobalNamespace::GTShaderTransparencyMode value);
    // static field const value: static public GTShaderTransparencyMode Add
    static constexpr const int Add = 4;
    // Get static field: static public GTShaderTransparencyMode Add
    static ::GlobalNamespace::GTShaderTransparencyMode _get_Add();
    // Set static field: static public GTShaderTransparencyMode Add
    static void _set_Add(::GlobalNamespace::GTShaderTransparencyMode value);
    // static field const value: static public GTShaderTransparencyMode Multiply
    static constexpr const int Multiply = 5;
    // Get static field: static public GTShaderTransparencyMode Multiply
    static ::GlobalNamespace::GTShaderTransparencyMode _get_Multiply();
    // Set static field: static public GTShaderTransparencyMode Multiply
    static void _set_Multiply(::GlobalNamespace::GTShaderTransparencyMode value);
    // static field const value: static public GTShaderTransparencyMode DitherBlueLive
    static constexpr const int DitherBlueLive = 6;
    // Get static field: static public GTShaderTransparencyMode DitherBlueLive
    static ::GlobalNamespace::GTShaderTransparencyMode _get_DitherBlueLive();
    // Set static field: static public GTShaderTransparencyMode DitherBlueLive
    static void _set_DitherBlueLive(::GlobalNamespace::GTShaderTransparencyMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // GTShaderTransparencyMode
  #pragma pack(pop)
  static check_size<sizeof(GTShaderTransparencyMode), 0 + sizeof(int)> __GlobalNamespace_GTShaderTransparencyModeSizeCheck;
  static_assert(sizeof(GTShaderTransparencyMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"