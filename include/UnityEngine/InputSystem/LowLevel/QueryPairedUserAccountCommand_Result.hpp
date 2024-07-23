// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand
#include "UnityEngine/InputSystem/LowLevel/QueryPairedUserAccountCommand.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::Result, "UnityEngine.InputSystem.LowLevel", "QueryPairedUserAccountCommand/Result");
// Type namespace: UnityEngine.InputSystem.LowLevel
namespace UnityEngine::InputSystem::LowLevel {
  // Size: 0x8
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand/Result
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct QueryPairedUserAccountCommand::Result/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int64 value__
    // Size: 0x8
    // Offset: 0x0
    int64_t value;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    public:
    // Creating value type constructor for type: Result
    constexpr Result(int64_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int64_t
    constexpr operator int64_t() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand/Result DevicePairedToUserAccount
    static constexpr const int64_t DevicePairedToUserAccount = 2;
    // Get static field: static public UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand/Result DevicePairedToUserAccount
    static ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::Result _get_DevicePairedToUserAccount();
    // Set static field: static public UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand/Result DevicePairedToUserAccount
    static void _set_DevicePairedToUserAccount(::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::Result value);
    // static field const value: static public UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand/Result UserAccountSelectionInProgress
    static constexpr const int64_t UserAccountSelectionInProgress = 4;
    // Get static field: static public UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand/Result UserAccountSelectionInProgress
    static ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::Result _get_UserAccountSelectionInProgress();
    // Set static field: static public UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand/Result UserAccountSelectionInProgress
    static void _set_UserAccountSelectionInProgress(::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::Result value);
    // static field const value: static public UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand/Result UserAccountSelectionComplete
    static constexpr const int64_t UserAccountSelectionComplete = 8;
    // Get static field: static public UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand/Result UserAccountSelectionComplete
    static ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::Result _get_UserAccountSelectionComplete();
    // Set static field: static public UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand/Result UserAccountSelectionComplete
    static void _set_UserAccountSelectionComplete(::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::Result value);
    // static field const value: static public UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand/Result UserAccountSelectionCanceled
    static constexpr const int64_t UserAccountSelectionCanceled = 16;
    // Get static field: static public UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand/Result UserAccountSelectionCanceled
    static ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::Result _get_UserAccountSelectionCanceled();
    // Set static field: static public UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand/Result UserAccountSelectionCanceled
    static void _set_UserAccountSelectionCanceled(::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::Result value);
    // Get instance field reference: public System.Int64 value__
    [[deprecated("Use field access instead!")]] int64_t& dyn_value__();
  }; // UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand/Result
  #pragma pack(pop)
  static check_size<sizeof(QueryPairedUserAccountCommand::Result), 0 + sizeof(int64_t)> __UnityEngine_InputSystem_LowLevel_QueryPairedUserAccountCommand_ResultSizeCheck;
  static_assert(sizeof(QueryPairedUserAccountCommand::Result) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
