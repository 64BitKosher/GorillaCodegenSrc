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
  // Forward declaring type: LazyState
  struct LazyState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::LazyState, "System", "LazyState");
// Type namespace: System
namespace System {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.LazyState
  // [TokenAttribute] Offset: FFFFFFFF
  struct LazyState/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: LazyState
    constexpr LazyState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.LazyState NoneViaConstructor
    static constexpr const int NoneViaConstructor = 0;
    // Get static field: static public System.LazyState NoneViaConstructor
    static ::System::LazyState _get_NoneViaConstructor();
    // Set static field: static public System.LazyState NoneViaConstructor
    static void _set_NoneViaConstructor(::System::LazyState value);
    // static field const value: static public System.LazyState NoneViaFactory
    static constexpr const int NoneViaFactory = 1;
    // Get static field: static public System.LazyState NoneViaFactory
    static ::System::LazyState _get_NoneViaFactory();
    // Set static field: static public System.LazyState NoneViaFactory
    static void _set_NoneViaFactory(::System::LazyState value);
    // static field const value: static public System.LazyState NoneException
    static constexpr const int NoneException = 2;
    // Get static field: static public System.LazyState NoneException
    static ::System::LazyState _get_NoneException();
    // Set static field: static public System.LazyState NoneException
    static void _set_NoneException(::System::LazyState value);
    // static field const value: static public System.LazyState PublicationOnlyViaConstructor
    static constexpr const int PublicationOnlyViaConstructor = 3;
    // Get static field: static public System.LazyState PublicationOnlyViaConstructor
    static ::System::LazyState _get_PublicationOnlyViaConstructor();
    // Set static field: static public System.LazyState PublicationOnlyViaConstructor
    static void _set_PublicationOnlyViaConstructor(::System::LazyState value);
    // static field const value: static public System.LazyState PublicationOnlyViaFactory
    static constexpr const int PublicationOnlyViaFactory = 4;
    // Get static field: static public System.LazyState PublicationOnlyViaFactory
    static ::System::LazyState _get_PublicationOnlyViaFactory();
    // Set static field: static public System.LazyState PublicationOnlyViaFactory
    static void _set_PublicationOnlyViaFactory(::System::LazyState value);
    // static field const value: static public System.LazyState PublicationOnlyWait
    static constexpr const int PublicationOnlyWait = 5;
    // Get static field: static public System.LazyState PublicationOnlyWait
    static ::System::LazyState _get_PublicationOnlyWait();
    // Set static field: static public System.LazyState PublicationOnlyWait
    static void _set_PublicationOnlyWait(::System::LazyState value);
    // static field const value: static public System.LazyState PublicationOnlyException
    static constexpr const int PublicationOnlyException = 6;
    // Get static field: static public System.LazyState PublicationOnlyException
    static ::System::LazyState _get_PublicationOnlyException();
    // Set static field: static public System.LazyState PublicationOnlyException
    static void _set_PublicationOnlyException(::System::LazyState value);
    // static field const value: static public System.LazyState ExecutionAndPublicationViaConstructor
    static constexpr const int ExecutionAndPublicationViaConstructor = 7;
    // Get static field: static public System.LazyState ExecutionAndPublicationViaConstructor
    static ::System::LazyState _get_ExecutionAndPublicationViaConstructor();
    // Set static field: static public System.LazyState ExecutionAndPublicationViaConstructor
    static void _set_ExecutionAndPublicationViaConstructor(::System::LazyState value);
    // static field const value: static public System.LazyState ExecutionAndPublicationViaFactory
    static constexpr const int ExecutionAndPublicationViaFactory = 8;
    // Get static field: static public System.LazyState ExecutionAndPublicationViaFactory
    static ::System::LazyState _get_ExecutionAndPublicationViaFactory();
    // Set static field: static public System.LazyState ExecutionAndPublicationViaFactory
    static void _set_ExecutionAndPublicationViaFactory(::System::LazyState value);
    // static field const value: static public System.LazyState ExecutionAndPublicationException
    static constexpr const int ExecutionAndPublicationException = 9;
    // Get static field: static public System.LazyState ExecutionAndPublicationException
    static ::System::LazyState _get_ExecutionAndPublicationException();
    // Set static field: static public System.LazyState ExecutionAndPublicationException
    static void _set_ExecutionAndPublicationException(::System::LazyState value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.LazyState
  #pragma pack(pop)
  static check_size<sizeof(LazyState), 0 + sizeof(int)> __System_LazyStateSizeCheck;
  static_assert(sizeof(LazyState) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"