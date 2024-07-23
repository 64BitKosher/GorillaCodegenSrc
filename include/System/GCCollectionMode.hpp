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
  // Forward declaring type: GCCollectionMode
  struct GCCollectionMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::GCCollectionMode, "System", "GCCollectionMode");
// Type namespace: System
namespace System {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.GCCollectionMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct GCCollectionMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: GCCollectionMode
    constexpr GCCollectionMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.GCCollectionMode Default
    static constexpr const int Default = 0;
    // Get static field: static public System.GCCollectionMode Default
    static ::System::GCCollectionMode _get_Default();
    // Set static field: static public System.GCCollectionMode Default
    static void _set_Default(::System::GCCollectionMode value);
    // static field const value: static public System.GCCollectionMode Forced
    static constexpr const int Forced = 1;
    // Get static field: static public System.GCCollectionMode Forced
    static ::System::GCCollectionMode _get_Forced();
    // Set static field: static public System.GCCollectionMode Forced
    static void _set_Forced(::System::GCCollectionMode value);
    // static field const value: static public System.GCCollectionMode Optimized
    static constexpr const int Optimized = 2;
    // Get static field: static public System.GCCollectionMode Optimized
    static ::System::GCCollectionMode _get_Optimized();
    // Set static field: static public System.GCCollectionMode Optimized
    static void _set_Optimized(::System::GCCollectionMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.GCCollectionMode
  #pragma pack(pop)
  static check_size<sizeof(GCCollectionMode), 0 + sizeof(int)> __System_GCCollectionModeSizeCheck;
  static_assert(sizeof(GCCollectionMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
