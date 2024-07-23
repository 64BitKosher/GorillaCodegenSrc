// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabResultCommon
#include "PlayFab/SharedModels/PlayFabResultCommon.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: PlayFab::ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: ScriptExecutionError
  class ScriptExecutionError;
  // Forward declaring type: LogStatement
  class LogStatement;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: ExecuteCloudScriptResult
  class ExecuteCloudScriptResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::ExecuteCloudScriptResult);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::ExecuteCloudScriptResult*, "PlayFab.ClientModels", "ExecuteCloudScriptResult");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // WARNING Size may be invalid!
  // Autogenerated type: PlayFab.ClientModels.ExecuteCloudScriptResult
  // [TokenAttribute] Offset: FFFFFFFF
  class ExecuteCloudScriptResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
    public:
    public:
    // public System.Int32 APIRequestsIssued
    // Size: 0x4
    // Offset: 0x20
    int APIRequestsIssued;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public PlayFab.ClientModels.ScriptExecutionError Error
    // Size: 0x8
    // Offset: 0x28
    ::PlayFab::ClientModels::ScriptExecutionError* Error;
    // Field size check
    static_assert(sizeof(::PlayFab::ClientModels::ScriptExecutionError*) == 0x8);
    // public System.Double ExecutionTimeSeconds
    // Size: 0x8
    // Offset: 0x30
    double ExecutionTimeSeconds;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.String FunctionName
    // Size: 0x8
    // Offset: 0x38
    ::StringW FunctionName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Object FunctionResult
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppObject* FunctionResult;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.Nullable`1<System.Boolean> FunctionResultTooLarge
    // Size: 0xFFFFFFFF
    // Offset: 0x48
    ::System::Nullable_1<bool> FunctionResultTooLarge;
    // public System.Int32 HttpRequestsIssued
    // Size: 0x4
    // Offset: 0x4C
    int HttpRequestsIssued;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Collections.Generic.List`1<PlayFab.ClientModels.LogStatement> Logs
    // Size: 0x8
    // Offset: 0x50
    ::System::Collections::Generic::List_1<::PlayFab::ClientModels::LogStatement*>* Logs;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::PlayFab::ClientModels::LogStatement*>*) == 0x8);
    // public System.Nullable`1<System.Boolean> LogsTooLarge
    // Size: 0xFFFFFFFF
    // Offset: 0x58
    ::System::Nullable_1<bool> LogsTooLarge;
    // public System.UInt32 MemoryConsumedBytes
    // Size: 0x4
    // Offset: 0x5C
    uint MemoryConsumedBytes;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.Double ProcessorTimeSeconds
    // Size: 0x8
    // Offset: 0x60
    double ProcessorTimeSeconds;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Int32 Revision
    // Size: 0x4
    // Offset: 0x68
    int Revision;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public System.Int32 APIRequestsIssued
    [[deprecated("Use field access instead!")]] int& dyn_APIRequestsIssued();
    // Get instance field reference: public PlayFab.ClientModels.ScriptExecutionError Error
    [[deprecated("Use field access instead!")]] ::PlayFab::ClientModels::ScriptExecutionError*& dyn_Error();
    // Get instance field reference: public System.Double ExecutionTimeSeconds
    [[deprecated("Use field access instead!")]] double& dyn_ExecutionTimeSeconds();
    // Get instance field reference: public System.String FunctionName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_FunctionName();
    // Get instance field reference: public System.Object FunctionResult
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_FunctionResult();
    // Get instance field reference: public System.Nullable`1<System.Boolean> FunctionResultTooLarge
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<bool>& dyn_FunctionResultTooLarge();
    // Get instance field reference: public System.Int32 HttpRequestsIssued
    [[deprecated("Use field access instead!")]] int& dyn_HttpRequestsIssued();
    // Get instance field reference: public System.Collections.Generic.List`1<PlayFab.ClientModels.LogStatement> Logs
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::PlayFab::ClientModels::LogStatement*>*& dyn_Logs();
    // Get instance field reference: public System.Nullable`1<System.Boolean> LogsTooLarge
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<bool>& dyn_LogsTooLarge();
    // Get instance field reference: public System.UInt32 MemoryConsumedBytes
    [[deprecated("Use field access instead!")]] uint& dyn_MemoryConsumedBytes();
    // Get instance field reference: public System.Double ProcessorTimeSeconds
    [[deprecated("Use field access instead!")]] double& dyn_ProcessorTimeSeconds();
    // Get instance field reference: public System.Int32 Revision
    [[deprecated("Use field access instead!")]] int& dyn_Revision();
    // public System.Void .ctor()
    // Offset: 0x4B6E50C
    // Implemented from: PlayFab.SharedModels.PlayFabResultCommon
    // Base method: System.Void PlayFabResultCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExecuteCloudScriptResult* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::ExecuteCloudScriptResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExecuteCloudScriptResult*, creationType>()));
    }
  }; // PlayFab.ClientModels.ExecuteCloudScriptResult
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::ExecuteCloudScriptResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!