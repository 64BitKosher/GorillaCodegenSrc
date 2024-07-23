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
// Type namespace: System.Reflection
namespace System::Reflection {
  // Forward declaring type: MethodImplAttributes
  struct MethodImplAttributes;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::MethodImplAttributes, "System.Reflection", "MethodImplAttributes");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.MethodImplAttributes
  // [TokenAttribute] Offset: FFFFFFFF
  struct MethodImplAttributes/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: MethodImplAttributes
    constexpr MethodImplAttributes(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Reflection.MethodImplAttributes CodeTypeMask
    static constexpr const int CodeTypeMask = 3;
    // Get static field: static public System.Reflection.MethodImplAttributes CodeTypeMask
    static ::System::Reflection::MethodImplAttributes _get_CodeTypeMask();
    // Set static field: static public System.Reflection.MethodImplAttributes CodeTypeMask
    static void _set_CodeTypeMask(::System::Reflection::MethodImplAttributes value);
    // static field const value: static public System.Reflection.MethodImplAttributes IL
    static constexpr const int IL = 0;
    // Get static field: static public System.Reflection.MethodImplAttributes IL
    static ::System::Reflection::MethodImplAttributes _get_IL();
    // Set static field: static public System.Reflection.MethodImplAttributes IL
    static void _set_IL(::System::Reflection::MethodImplAttributes value);
    // static field const value: static public System.Reflection.MethodImplAttributes Native
    static constexpr const int Native = 1;
    // Get static field: static public System.Reflection.MethodImplAttributes Native
    static ::System::Reflection::MethodImplAttributes _get_Native();
    // Set static field: static public System.Reflection.MethodImplAttributes Native
    static void _set_Native(::System::Reflection::MethodImplAttributes value);
    // static field const value: static public System.Reflection.MethodImplAttributes OPTIL
    static constexpr const int OPTIL = 2;
    // Get static field: static public System.Reflection.MethodImplAttributes OPTIL
    static ::System::Reflection::MethodImplAttributes _get_OPTIL();
    // Set static field: static public System.Reflection.MethodImplAttributes OPTIL
    static void _set_OPTIL(::System::Reflection::MethodImplAttributes value);
    // static field const value: static public System.Reflection.MethodImplAttributes Runtime
    static constexpr const int Runtime = 3;
    // Get static field: static public System.Reflection.MethodImplAttributes Runtime
    static ::System::Reflection::MethodImplAttributes _get_Runtime();
    // Set static field: static public System.Reflection.MethodImplAttributes Runtime
    static void _set_Runtime(::System::Reflection::MethodImplAttributes value);
    // static field const value: static public System.Reflection.MethodImplAttributes ManagedMask
    static constexpr const int ManagedMask = 4;
    // Get static field: static public System.Reflection.MethodImplAttributes ManagedMask
    static ::System::Reflection::MethodImplAttributes _get_ManagedMask();
    // Set static field: static public System.Reflection.MethodImplAttributes ManagedMask
    static void _set_ManagedMask(::System::Reflection::MethodImplAttributes value);
    // static field const value: static public System.Reflection.MethodImplAttributes Unmanaged
    static constexpr const int Unmanaged = 4;
    // Get static field: static public System.Reflection.MethodImplAttributes Unmanaged
    static ::System::Reflection::MethodImplAttributes _get_Unmanaged();
    // Set static field: static public System.Reflection.MethodImplAttributes Unmanaged
    static void _set_Unmanaged(::System::Reflection::MethodImplAttributes value);
    // static field const value: static public System.Reflection.MethodImplAttributes Managed
    static constexpr const int Managed = 0;
    // Get static field: static public System.Reflection.MethodImplAttributes Managed
    static ::System::Reflection::MethodImplAttributes _get_Managed();
    // Set static field: static public System.Reflection.MethodImplAttributes Managed
    static void _set_Managed(::System::Reflection::MethodImplAttributes value);
    // static field const value: static public System.Reflection.MethodImplAttributes ForwardRef
    static constexpr const int ForwardRef = 16;
    // Get static field: static public System.Reflection.MethodImplAttributes ForwardRef
    static ::System::Reflection::MethodImplAttributes _get_ForwardRef();
    // Set static field: static public System.Reflection.MethodImplAttributes ForwardRef
    static void _set_ForwardRef(::System::Reflection::MethodImplAttributes value);
    // static field const value: static public System.Reflection.MethodImplAttributes PreserveSig
    static constexpr const int PreserveSig = 128;
    // Get static field: static public System.Reflection.MethodImplAttributes PreserveSig
    static ::System::Reflection::MethodImplAttributes _get_PreserveSig();
    // Set static field: static public System.Reflection.MethodImplAttributes PreserveSig
    static void _set_PreserveSig(::System::Reflection::MethodImplAttributes value);
    // static field const value: static public System.Reflection.MethodImplAttributes InternalCall
    static constexpr const int InternalCall = 4096;
    // Get static field: static public System.Reflection.MethodImplAttributes InternalCall
    static ::System::Reflection::MethodImplAttributes _get_InternalCall();
    // Set static field: static public System.Reflection.MethodImplAttributes InternalCall
    static void _set_InternalCall(::System::Reflection::MethodImplAttributes value);
    // static field const value: static public System.Reflection.MethodImplAttributes Synchronized
    static constexpr const int Synchronized = 32;
    // Get static field: static public System.Reflection.MethodImplAttributes Synchronized
    static ::System::Reflection::MethodImplAttributes _get_Synchronized();
    // Set static field: static public System.Reflection.MethodImplAttributes Synchronized
    static void _set_Synchronized(::System::Reflection::MethodImplAttributes value);
    // static field const value: static public System.Reflection.MethodImplAttributes NoInlining
    static constexpr const int NoInlining = 8;
    // Get static field: static public System.Reflection.MethodImplAttributes NoInlining
    static ::System::Reflection::MethodImplAttributes _get_NoInlining();
    // Set static field: static public System.Reflection.MethodImplAttributes NoInlining
    static void _set_NoInlining(::System::Reflection::MethodImplAttributes value);
    // static field const value: static public System.Reflection.MethodImplAttributes AggressiveInlining
    static constexpr const int AggressiveInlining = 256;
    // Get static field: static public System.Reflection.MethodImplAttributes AggressiveInlining
    static ::System::Reflection::MethodImplAttributes _get_AggressiveInlining();
    // Set static field: static public System.Reflection.MethodImplAttributes AggressiveInlining
    static void _set_AggressiveInlining(::System::Reflection::MethodImplAttributes value);
    // static field const value: static public System.Reflection.MethodImplAttributes NoOptimization
    static constexpr const int NoOptimization = 64;
    // Get static field: static public System.Reflection.MethodImplAttributes NoOptimization
    static ::System::Reflection::MethodImplAttributes _get_NoOptimization();
    // Set static field: static public System.Reflection.MethodImplAttributes NoOptimization
    static void _set_NoOptimization(::System::Reflection::MethodImplAttributes value);
    // static field const value: static public System.Reflection.MethodImplAttributes MaxMethodImplVal
    static constexpr const int MaxMethodImplVal = 65535;
    // Get static field: static public System.Reflection.MethodImplAttributes MaxMethodImplVal
    static ::System::Reflection::MethodImplAttributes _get_MaxMethodImplVal();
    // Set static field: static public System.Reflection.MethodImplAttributes MaxMethodImplVal
    static void _set_MaxMethodImplVal(::System::Reflection::MethodImplAttributes value);
    // static field const value: static public System.Reflection.MethodImplAttributes SecurityMitigations
    static constexpr const int SecurityMitigations = 1024;
    // Get static field: static public System.Reflection.MethodImplAttributes SecurityMitigations
    static ::System::Reflection::MethodImplAttributes _get_SecurityMitigations();
    // Set static field: static public System.Reflection.MethodImplAttributes SecurityMitigations
    static void _set_SecurityMitigations(::System::Reflection::MethodImplAttributes value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Reflection.MethodImplAttributes
  #pragma pack(pop)
  static check_size<sizeof(MethodImplAttributes), 0 + sizeof(int)> __System_Reflection_MethodImplAttributesSizeCheck;
  static_assert(sizeof(MethodImplAttributes) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
