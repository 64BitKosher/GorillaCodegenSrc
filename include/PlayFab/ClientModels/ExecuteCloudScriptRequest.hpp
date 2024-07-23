// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabRequestCommon
#include "PlayFab/SharedModels/PlayFabRequestCommon.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: PlayFab.ClientModels.CloudScriptRevisionOption
#include "PlayFab/ClientModels/CloudScriptRevisionOption.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: ExecuteCloudScriptRequest
  class ExecuteCloudScriptRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::ExecuteCloudScriptRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::ExecuteCloudScriptRequest*, "PlayFab.ClientModels", "ExecuteCloudScriptRequest");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // WARNING Size may be invalid!
  // Autogenerated type: PlayFab.ClientModels.ExecuteCloudScriptRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class ExecuteCloudScriptRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    public:
    // public System.String FunctionName
    // Size: 0x8
    // Offset: 0x18
    ::StringW FunctionName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Object FunctionParameter
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* FunctionParameter;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.Nullable`1<System.Boolean> GeneratePlayStreamEvent
    // Size: 0xFFFFFFFF
    // Offset: 0x28
    ::System::Nullable_1<bool> GeneratePlayStreamEvent;
    // public System.Nullable`1<PlayFab.ClientModels.CloudScriptRevisionOption> RevisionSelection
    // Size: 0xFFFFFFFF
    // Offset: 0x2C
    ::System::Nullable_1<::PlayFab::ClientModels::CloudScriptRevisionOption> RevisionSelection;
    // public System.Nullable`1<System.Int32> SpecificRevision
    // Size: 0xFFFFFFFF
    // Offset: 0x34
    ::System::Nullable_1<int> SpecificRevision;
    public:
    // Deleting conversion operator: operator ::PlayFab::PlayFabAuthenticationContext*
    constexpr operator ::PlayFab::PlayFabAuthenticationContext*() const noexcept = delete;
    // Get instance field reference: public System.String FunctionName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_FunctionName();
    // Get instance field reference: public System.Object FunctionParameter
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_FunctionParameter();
    // Get instance field reference: public System.Nullable`1<System.Boolean> GeneratePlayStreamEvent
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<bool>& dyn_GeneratePlayStreamEvent();
    // Get instance field reference: public System.Nullable`1<PlayFab.ClientModels.CloudScriptRevisionOption> RevisionSelection
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::PlayFab::ClientModels::CloudScriptRevisionOption>& dyn_RevisionSelection();
    // Get instance field reference: public System.Nullable`1<System.Int32> SpecificRevision
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<int>& dyn_SpecificRevision();
    // public System.Void .ctor()
    // Offset: 0x4B6E504
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExecuteCloudScriptRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::ExecuteCloudScriptRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExecuteCloudScriptRequest*, creationType>()));
    }
  }; // PlayFab.ClientModels.ExecuteCloudScriptRequest
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::ExecuteCloudScriptRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
