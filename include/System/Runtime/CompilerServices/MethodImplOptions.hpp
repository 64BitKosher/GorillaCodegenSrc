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
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Forward declaring type: MethodImplOptions
  struct MethodImplOptions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::MethodImplOptions, "System.Runtime.CompilerServices", "MethodImplOptions");
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.CompilerServices.MethodImplOptions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct MethodImplOptions/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: MethodImplOptions
    constexpr MethodImplOptions(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Runtime.CompilerServices.MethodImplOptions Unmanaged
    static constexpr const int Unmanaged = 4;
    // Get static field: static public System.Runtime.CompilerServices.MethodImplOptions Unmanaged
    static ::System::Runtime::CompilerServices::MethodImplOptions _get_Unmanaged();
    // Set static field: static public System.Runtime.CompilerServices.MethodImplOptions Unmanaged
    static void _set_Unmanaged(::System::Runtime::CompilerServices::MethodImplOptions value);
    // static field const value: static public System.Runtime.CompilerServices.MethodImplOptions ForwardRef
    static constexpr const int ForwardRef = 16;
    // Get static field: static public System.Runtime.CompilerServices.MethodImplOptions ForwardRef
    static ::System::Runtime::CompilerServices::MethodImplOptions _get_ForwardRef();
    // Set static field: static public System.Runtime.CompilerServices.MethodImplOptions ForwardRef
    static void _set_ForwardRef(::System::Runtime::CompilerServices::MethodImplOptions value);
    // static field const value: static public System.Runtime.CompilerServices.MethodImplOptions PreserveSig
    static constexpr const int PreserveSig = 128;
    // Get static field: static public System.Runtime.CompilerServices.MethodImplOptions PreserveSig
    static ::System::Runtime::CompilerServices::MethodImplOptions _get_PreserveSig();
    // Set static field: static public System.Runtime.CompilerServices.MethodImplOptions PreserveSig
    static void _set_PreserveSig(::System::Runtime::CompilerServices::MethodImplOptions value);
    // static field const value: static public System.Runtime.CompilerServices.MethodImplOptions InternalCall
    static constexpr const int InternalCall = 4096;
    // Get static field: static public System.Runtime.CompilerServices.MethodImplOptions InternalCall
    static ::System::Runtime::CompilerServices::MethodImplOptions _get_InternalCall();
    // Set static field: static public System.Runtime.CompilerServices.MethodImplOptions InternalCall
    static void _set_InternalCall(::System::Runtime::CompilerServices::MethodImplOptions value);
    // static field const value: static public System.Runtime.CompilerServices.MethodImplOptions Synchronized
    static constexpr const int Synchronized = 32;
    // Get static field: static public System.Runtime.CompilerServices.MethodImplOptions Synchronized
    static ::System::Runtime::CompilerServices::MethodImplOptions _get_Synchronized();
    // Set static field: static public System.Runtime.CompilerServices.MethodImplOptions Synchronized
    static void _set_Synchronized(::System::Runtime::CompilerServices::MethodImplOptions value);
    // static field const value: static public System.Runtime.CompilerServices.MethodImplOptions NoInlining
    static constexpr const int NoInlining = 8;
    // Get static field: static public System.Runtime.CompilerServices.MethodImplOptions NoInlining
    static ::System::Runtime::CompilerServices::MethodImplOptions _get_NoInlining();
    // Set static field: static public System.Runtime.CompilerServices.MethodImplOptions NoInlining
    static void _set_NoInlining(::System::Runtime::CompilerServices::MethodImplOptions value);
    // static field const value: static public System.Runtime.CompilerServices.MethodImplOptions AggressiveInlining
    static constexpr const int AggressiveInlining = 256;
    // Get static field: static public System.Runtime.CompilerServices.MethodImplOptions AggressiveInlining
    static ::System::Runtime::CompilerServices::MethodImplOptions _get_AggressiveInlining();
    // Set static field: static public System.Runtime.CompilerServices.MethodImplOptions AggressiveInlining
    static void _set_AggressiveInlining(::System::Runtime::CompilerServices::MethodImplOptions value);
    // static field const value: static public System.Runtime.CompilerServices.MethodImplOptions NoOptimization
    static constexpr const int NoOptimization = 64;
    // Get static field: static public System.Runtime.CompilerServices.MethodImplOptions NoOptimization
    static ::System::Runtime::CompilerServices::MethodImplOptions _get_NoOptimization();
    // Set static field: static public System.Runtime.CompilerServices.MethodImplOptions NoOptimization
    static void _set_NoOptimization(::System::Runtime::CompilerServices::MethodImplOptions value);
    // static field const value: static public System.Runtime.CompilerServices.MethodImplOptions SecurityMitigations
    static constexpr const int SecurityMitigations = 1024;
    // Get static field: static public System.Runtime.CompilerServices.MethodImplOptions SecurityMitigations
    static ::System::Runtime::CompilerServices::MethodImplOptions _get_SecurityMitigations();
    // Set static field: static public System.Runtime.CompilerServices.MethodImplOptions SecurityMitigations
    static void _set_SecurityMitigations(::System::Runtime::CompilerServices::MethodImplOptions value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Runtime.CompilerServices.MethodImplOptions
  #pragma pack(pop)
  static check_size<sizeof(MethodImplOptions), 0 + sizeof(int)> __System_Runtime_CompilerServices_MethodImplOptionsSizeCheck;
  static_assert(sizeof(MethodImplOptions) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
