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
// Type namespace: Backtrace.Unity.Types
namespace Backtrace::Unity::Types {
  // Forward declaring type: MiniDumpType
  struct MiniDumpType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Backtrace::Unity::Types::MiniDumpType, "Backtrace.Unity.Types", "MiniDumpType");
// Type namespace: Backtrace.Unity.Types
namespace Backtrace::Unity::Types {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Backtrace.Unity.Types.MiniDumpType
  // [TokenAttribute] Offset: FFFFFFFF
  struct MiniDumpType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.UInt32 value__
    // Size: 0x4
    // Offset: 0x0
    uint value;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: MiniDumpType
    constexpr MiniDumpType(uint value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return value;
    }
    // static field const value: static public Backtrace.Unity.Types.MiniDumpType None
    static constexpr const uint None = 524286u;
    // Get static field: static public Backtrace.Unity.Types.MiniDumpType None
    static ::Backtrace::Unity::Types::MiniDumpType _get_None();
    // Set static field: static public Backtrace.Unity.Types.MiniDumpType None
    static void _set_None(::Backtrace::Unity::Types::MiniDumpType value);
    // static field const value: static public Backtrace.Unity.Types.MiniDumpType Normal
    static constexpr const uint Normal = 0u;
    // Get static field: static public Backtrace.Unity.Types.MiniDumpType Normal
    static ::Backtrace::Unity::Types::MiniDumpType _get_Normal();
    // Set static field: static public Backtrace.Unity.Types.MiniDumpType Normal
    static void _set_Normal(::Backtrace::Unity::Types::MiniDumpType value);
    // static field const value: static public Backtrace.Unity.Types.MiniDumpType WithDataSegs
    static constexpr const uint WithDataSegs = 1u;
    // Get static field: static public Backtrace.Unity.Types.MiniDumpType WithDataSegs
    static ::Backtrace::Unity::Types::MiniDumpType _get_WithDataSegs();
    // Set static field: static public Backtrace.Unity.Types.MiniDumpType WithDataSegs
    static void _set_WithDataSegs(::Backtrace::Unity::Types::MiniDumpType value);
    // static field const value: static public Backtrace.Unity.Types.MiniDumpType WithFullMemory
    static constexpr const uint WithFullMemory = 2u;
    // Get static field: static public Backtrace.Unity.Types.MiniDumpType WithFullMemory
    static ::Backtrace::Unity::Types::MiniDumpType _get_WithFullMemory();
    // Set static field: static public Backtrace.Unity.Types.MiniDumpType WithFullMemory
    static void _set_WithFullMemory(::Backtrace::Unity::Types::MiniDumpType value);
    // static field const value: static public Backtrace.Unity.Types.MiniDumpType WithHandleData
    static constexpr const uint WithHandleData = 4u;
    // Get static field: static public Backtrace.Unity.Types.MiniDumpType WithHandleData
    static ::Backtrace::Unity::Types::MiniDumpType _get_WithHandleData();
    // Set static field: static public Backtrace.Unity.Types.MiniDumpType WithHandleData
    static void _set_WithHandleData(::Backtrace::Unity::Types::MiniDumpType value);
    // static field const value: static public Backtrace.Unity.Types.MiniDumpType FilterMemory
    static constexpr const uint FilterMemory = 8u;
    // Get static field: static public Backtrace.Unity.Types.MiniDumpType FilterMemory
    static ::Backtrace::Unity::Types::MiniDumpType _get_FilterMemory();
    // Set static field: static public Backtrace.Unity.Types.MiniDumpType FilterMemory
    static void _set_FilterMemory(::Backtrace::Unity::Types::MiniDumpType value);
    // static field const value: static public Backtrace.Unity.Types.MiniDumpType ScanMemory
    static constexpr const uint ScanMemory = 16u;
    // Get static field: static public Backtrace.Unity.Types.MiniDumpType ScanMemory
    static ::Backtrace::Unity::Types::MiniDumpType _get_ScanMemory();
    // Set static field: static public Backtrace.Unity.Types.MiniDumpType ScanMemory
    static void _set_ScanMemory(::Backtrace::Unity::Types::MiniDumpType value);
    // static field const value: static public Backtrace.Unity.Types.MiniDumpType WithUnloadedModules
    static constexpr const uint WithUnloadedModules = 32u;
    // Get static field: static public Backtrace.Unity.Types.MiniDumpType WithUnloadedModules
    static ::Backtrace::Unity::Types::MiniDumpType _get_WithUnloadedModules();
    // Set static field: static public Backtrace.Unity.Types.MiniDumpType WithUnloadedModules
    static void _set_WithUnloadedModules(::Backtrace::Unity::Types::MiniDumpType value);
    // static field const value: static public Backtrace.Unity.Types.MiniDumpType WithIndirectlyReferencedMemory
    static constexpr const uint WithIndirectlyReferencedMemory = 64u;
    // Get static field: static public Backtrace.Unity.Types.MiniDumpType WithIndirectlyReferencedMemory
    static ::Backtrace::Unity::Types::MiniDumpType _get_WithIndirectlyReferencedMemory();
    // Set static field: static public Backtrace.Unity.Types.MiniDumpType WithIndirectlyReferencedMemory
    static void _set_WithIndirectlyReferencedMemory(::Backtrace::Unity::Types::MiniDumpType value);
    // static field const value: static public Backtrace.Unity.Types.MiniDumpType FilterModulePaths
    static constexpr const uint FilterModulePaths = 128u;
    // Get static field: static public Backtrace.Unity.Types.MiniDumpType FilterModulePaths
    static ::Backtrace::Unity::Types::MiniDumpType _get_FilterModulePaths();
    // Set static field: static public Backtrace.Unity.Types.MiniDumpType FilterModulePaths
    static void _set_FilterModulePaths(::Backtrace::Unity::Types::MiniDumpType value);
    // static field const value: static public Backtrace.Unity.Types.MiniDumpType WithProcessThreadData
    static constexpr const uint WithProcessThreadData = 256u;
    // Get static field: static public Backtrace.Unity.Types.MiniDumpType WithProcessThreadData
    static ::Backtrace::Unity::Types::MiniDumpType _get_WithProcessThreadData();
    // Set static field: static public Backtrace.Unity.Types.MiniDumpType WithProcessThreadData
    static void _set_WithProcessThreadData(::Backtrace::Unity::Types::MiniDumpType value);
    // static field const value: static public Backtrace.Unity.Types.MiniDumpType WithPrivateReadWriteMemory
    static constexpr const uint WithPrivateReadWriteMemory = 512u;
    // Get static field: static public Backtrace.Unity.Types.MiniDumpType WithPrivateReadWriteMemory
    static ::Backtrace::Unity::Types::MiniDumpType _get_WithPrivateReadWriteMemory();
    // Set static field: static public Backtrace.Unity.Types.MiniDumpType WithPrivateReadWriteMemory
    static void _set_WithPrivateReadWriteMemory(::Backtrace::Unity::Types::MiniDumpType value);
    // static field const value: static public Backtrace.Unity.Types.MiniDumpType WithoutOptionalData
    static constexpr const uint WithoutOptionalData = 1024u;
    // Get static field: static public Backtrace.Unity.Types.MiniDumpType WithoutOptionalData
    static ::Backtrace::Unity::Types::MiniDumpType _get_WithoutOptionalData();
    // Set static field: static public Backtrace.Unity.Types.MiniDumpType WithoutOptionalData
    static void _set_WithoutOptionalData(::Backtrace::Unity::Types::MiniDumpType value);
    // static field const value: static public Backtrace.Unity.Types.MiniDumpType WithFullMemoryInfo
    static constexpr const uint WithFullMemoryInfo = 2048u;
    // Get static field: static public Backtrace.Unity.Types.MiniDumpType WithFullMemoryInfo
    static ::Backtrace::Unity::Types::MiniDumpType _get_WithFullMemoryInfo();
    // Set static field: static public Backtrace.Unity.Types.MiniDumpType WithFullMemoryInfo
    static void _set_WithFullMemoryInfo(::Backtrace::Unity::Types::MiniDumpType value);
    // static field const value: static public Backtrace.Unity.Types.MiniDumpType WithThreadInfo
    static constexpr const uint WithThreadInfo = 4096u;
    // Get static field: static public Backtrace.Unity.Types.MiniDumpType WithThreadInfo
    static ::Backtrace::Unity::Types::MiniDumpType _get_WithThreadInfo();
    // Set static field: static public Backtrace.Unity.Types.MiniDumpType WithThreadInfo
    static void _set_WithThreadInfo(::Backtrace::Unity::Types::MiniDumpType value);
    // static field const value: static public Backtrace.Unity.Types.MiniDumpType WithCodeSegs
    static constexpr const uint WithCodeSegs = 8192u;
    // Get static field: static public Backtrace.Unity.Types.MiniDumpType WithCodeSegs
    static ::Backtrace::Unity::Types::MiniDumpType _get_WithCodeSegs();
    // Set static field: static public Backtrace.Unity.Types.MiniDumpType WithCodeSegs
    static void _set_WithCodeSegs(::Backtrace::Unity::Types::MiniDumpType value);
    // static field const value: static public Backtrace.Unity.Types.MiniDumpType WithoutAuxiliaryState
    static constexpr const uint WithoutAuxiliaryState = 16384u;
    // Get static field: static public Backtrace.Unity.Types.MiniDumpType WithoutAuxiliaryState
    static ::Backtrace::Unity::Types::MiniDumpType _get_WithoutAuxiliaryState();
    // Set static field: static public Backtrace.Unity.Types.MiniDumpType WithoutAuxiliaryState
    static void _set_WithoutAuxiliaryState(::Backtrace::Unity::Types::MiniDumpType value);
    // static field const value: static public Backtrace.Unity.Types.MiniDumpType WithFullAuxiliaryState
    static constexpr const uint WithFullAuxiliaryState = 32768u;
    // Get static field: static public Backtrace.Unity.Types.MiniDumpType WithFullAuxiliaryState
    static ::Backtrace::Unity::Types::MiniDumpType _get_WithFullAuxiliaryState();
    // Set static field: static public Backtrace.Unity.Types.MiniDumpType WithFullAuxiliaryState
    static void _set_WithFullAuxiliaryState(::Backtrace::Unity::Types::MiniDumpType value);
    // static field const value: static public Backtrace.Unity.Types.MiniDumpType WithPrivateWriteCopyMemory
    static constexpr const uint WithPrivateWriteCopyMemory = 65536u;
    // Get static field: static public Backtrace.Unity.Types.MiniDumpType WithPrivateWriteCopyMemory
    static ::Backtrace::Unity::Types::MiniDumpType _get_WithPrivateWriteCopyMemory();
    // Set static field: static public Backtrace.Unity.Types.MiniDumpType WithPrivateWriteCopyMemory
    static void _set_WithPrivateWriteCopyMemory(::Backtrace::Unity::Types::MiniDumpType value);
    // static field const value: static public Backtrace.Unity.Types.MiniDumpType IgnoreInaccessibleMemory
    static constexpr const uint IgnoreInaccessibleMemory = 131072u;
    // Get static field: static public Backtrace.Unity.Types.MiniDumpType IgnoreInaccessibleMemory
    static ::Backtrace::Unity::Types::MiniDumpType _get_IgnoreInaccessibleMemory();
    // Set static field: static public Backtrace.Unity.Types.MiniDumpType IgnoreInaccessibleMemory
    static void _set_IgnoreInaccessibleMemory(::Backtrace::Unity::Types::MiniDumpType value);
    // static field const value: static public Backtrace.Unity.Types.MiniDumpType ValidTypeFlags
    static constexpr const uint ValidTypeFlags = 262143u;
    // Get static field: static public Backtrace.Unity.Types.MiniDumpType ValidTypeFlags
    static ::Backtrace::Unity::Types::MiniDumpType _get_ValidTypeFlags();
    // Set static field: static public Backtrace.Unity.Types.MiniDumpType ValidTypeFlags
    static void _set_ValidTypeFlags(::Backtrace::Unity::Types::MiniDumpType value);
    // Get instance field reference: public System.UInt32 value__
    [[deprecated("Use field access instead!")]] uint& dyn_value__();
  }; // Backtrace.Unity.Types.MiniDumpType
  #pragma pack(pop)
  static check_size<sizeof(MiniDumpType), 0 + sizeof(uint)> __Backtrace_Unity_Types_MiniDumpTypeSizeCheck;
  static_assert(sizeof(MiniDumpType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
