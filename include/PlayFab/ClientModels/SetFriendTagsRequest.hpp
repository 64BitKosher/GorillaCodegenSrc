// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabRequestCommon
#include "PlayFab/SharedModels/PlayFabRequestCommon.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: SetFriendTagsRequest
  class SetFriendTagsRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::SetFriendTagsRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::SetFriendTagsRequest*, "PlayFab.ClientModels", "SetFriendTagsRequest");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.SetFriendTagsRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class SetFriendTagsRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    public:
    // public System.String FriendPlayFabId
    // Size: 0x8
    // Offset: 0x18
    ::StringW FriendPlayFabId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Collections.Generic.List`1<System.String> Tags
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::StringW>* Tags;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::PlayFab::PlayFabAuthenticationContext*
    constexpr operator ::PlayFab::PlayFabAuthenticationContext*() const noexcept = delete;
    // Get instance field reference: public System.String FriendPlayFabId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_FriendPlayFabId();
    // Get instance field reference: public System.Collections.Generic.List`1<System.String> Tags
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::StringW>*& dyn_Tags();
    // public System.Void .ctor()
    // Offset: 0x4B6EBCC
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SetFriendTagsRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::SetFriendTagsRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SetFriendTagsRequest*, creationType>()));
    }
  }; // PlayFab.ClientModels.SetFriendTagsRequest
  #pragma pack(pop)
  static check_size<sizeof(SetFriendTagsRequest), 32 + sizeof(::System::Collections::Generic::List_1<::StringW>*)> __PlayFab_ClientModels_SetFriendTagsRequestSizeCheck;
  static_assert(sizeof(SetFriendTagsRequest) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::SetFriendTagsRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
