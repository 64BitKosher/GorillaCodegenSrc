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
// Type namespace: System
namespace System {
  // Forward declaring type: TypeNameFormatFlags
  struct TypeNameFormatFlags;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::TypeNameFormatFlags, "System", "TypeNameFormatFlags");
// Type namespace: System
namespace System {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.TypeNameFormatFlags
  // [TokenAttribute] Offset: FFFFFFFF
  struct TypeNameFormatFlags/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: TypeNameFormatFlags
    constexpr TypeNameFormatFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.TypeNameFormatFlags FormatBasic
    static constexpr const int FormatBasic = 0;
    // Get static field: static public System.TypeNameFormatFlags FormatBasic
    static ::System::TypeNameFormatFlags _get_FormatBasic();
    // Set static field: static public System.TypeNameFormatFlags FormatBasic
    static void _set_FormatBasic(::System::TypeNameFormatFlags value);
    // static field const value: static public System.TypeNameFormatFlags FormatNamespace
    static constexpr const int FormatNamespace = 1;
    // Get static field: static public System.TypeNameFormatFlags FormatNamespace
    static ::System::TypeNameFormatFlags _get_FormatNamespace();
    // Set static field: static public System.TypeNameFormatFlags FormatNamespace
    static void _set_FormatNamespace(::System::TypeNameFormatFlags value);
    // static field const value: static public System.TypeNameFormatFlags FormatFullInst
    static constexpr const int FormatFullInst = 2;
    // Get static field: static public System.TypeNameFormatFlags FormatFullInst
    static ::System::TypeNameFormatFlags _get_FormatFullInst();
    // Set static field: static public System.TypeNameFormatFlags FormatFullInst
    static void _set_FormatFullInst(::System::TypeNameFormatFlags value);
    // static field const value: static public System.TypeNameFormatFlags FormatAssembly
    static constexpr const int FormatAssembly = 4;
    // Get static field: static public System.TypeNameFormatFlags FormatAssembly
    static ::System::TypeNameFormatFlags _get_FormatAssembly();
    // Set static field: static public System.TypeNameFormatFlags FormatAssembly
    static void _set_FormatAssembly(::System::TypeNameFormatFlags value);
    // static field const value: static public System.TypeNameFormatFlags FormatSignature
    static constexpr const int FormatSignature = 8;
    // Get static field: static public System.TypeNameFormatFlags FormatSignature
    static ::System::TypeNameFormatFlags _get_FormatSignature();
    // Set static field: static public System.TypeNameFormatFlags FormatSignature
    static void _set_FormatSignature(::System::TypeNameFormatFlags value);
    // static field const value: static public System.TypeNameFormatFlags FormatNoVersion
    static constexpr const int FormatNoVersion = 16;
    // Get static field: static public System.TypeNameFormatFlags FormatNoVersion
    static ::System::TypeNameFormatFlags _get_FormatNoVersion();
    // Set static field: static public System.TypeNameFormatFlags FormatNoVersion
    static void _set_FormatNoVersion(::System::TypeNameFormatFlags value);
    // static field const value: static public System.TypeNameFormatFlags FormatAngleBrackets
    static constexpr const int FormatAngleBrackets = 64;
    // Get static field: static public System.TypeNameFormatFlags FormatAngleBrackets
    static ::System::TypeNameFormatFlags _get_FormatAngleBrackets();
    // Set static field: static public System.TypeNameFormatFlags FormatAngleBrackets
    static void _set_FormatAngleBrackets(::System::TypeNameFormatFlags value);
    // static field const value: static public System.TypeNameFormatFlags FormatStubInfo
    static constexpr const int FormatStubInfo = 128;
    // Get static field: static public System.TypeNameFormatFlags FormatStubInfo
    static ::System::TypeNameFormatFlags _get_FormatStubInfo();
    // Set static field: static public System.TypeNameFormatFlags FormatStubInfo
    static void _set_FormatStubInfo(::System::TypeNameFormatFlags value);
    // static field const value: static public System.TypeNameFormatFlags FormatGenericParam
    static constexpr const int FormatGenericParam = 256;
    // Get static field: static public System.TypeNameFormatFlags FormatGenericParam
    static ::System::TypeNameFormatFlags _get_FormatGenericParam();
    // Set static field: static public System.TypeNameFormatFlags FormatGenericParam
    static void _set_FormatGenericParam(::System::TypeNameFormatFlags value);
    // static field const value: static public System.TypeNameFormatFlags FormatSerialization
    static constexpr const int FormatSerialization = 259;
    // Get static field: static public System.TypeNameFormatFlags FormatSerialization
    static ::System::TypeNameFormatFlags _get_FormatSerialization();
    // Set static field: static public System.TypeNameFormatFlags FormatSerialization
    static void _set_FormatSerialization(::System::TypeNameFormatFlags value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.TypeNameFormatFlags
  #pragma pack(pop)
  static check_size<sizeof(TypeNameFormatFlags), 0 + sizeof(int)> __System_TypeNameFormatFlagsSizeCheck;
  static_assert(sizeof(TypeNameFormatFlags) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"