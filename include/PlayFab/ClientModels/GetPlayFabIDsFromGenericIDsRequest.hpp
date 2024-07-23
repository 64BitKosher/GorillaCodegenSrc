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
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: PlayFab::ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: GenericServiceId
  class GenericServiceId;
}
// Completed forward declares
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: GetPlayFabIDsFromGenericIDsRequest
  class GetPlayFabIDsFromGenericIDsRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::GetPlayFabIDsFromGenericIDsRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::GetPlayFabIDsFromGenericIDsRequest*, "PlayFab.ClientModels", "GetPlayFabIDsFromGenericIDsRequest");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.GetPlayFabIDsFromGenericIDsRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class GetPlayFabIDsFromGenericIDsRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    public:
    // public System.Collections.Generic.List`1<PlayFab.ClientModels.GenericServiceId> GenericIDs
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::PlayFab::ClientModels::GenericServiceId*>* GenericIDs;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::PlayFab::ClientModels::GenericServiceId*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::PlayFab::PlayFabAuthenticationContext*
    constexpr operator ::PlayFab::PlayFabAuthenticationContext*() const noexcept = delete;
    // Get instance field reference: public System.Collections.Generic.List`1<PlayFab.ClientModels.GenericServiceId> GenericIDs
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::PlayFab::ClientModels::GenericServiceId*>*& dyn_GenericIDs();
    // public System.Void .ctor()
    // Offset: 0x4B6E714
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GetPlayFabIDsFromGenericIDsRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::GetPlayFabIDsFromGenericIDsRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GetPlayFabIDsFromGenericIDsRequest*, creationType>()));
    }
  }; // PlayFab.ClientModels.GetPlayFabIDsFromGenericIDsRequest
  #pragma pack(pop)
  static check_size<sizeof(GetPlayFabIDsFromGenericIDsRequest), 24 + sizeof(::System::Collections::Generic::List_1<::PlayFab::ClientModels::GenericServiceId*>*)> __PlayFab_ClientModels_GetPlayFabIDsFromGenericIDsRequestSizeCheck;
  static_assert(sizeof(GetPlayFabIDsFromGenericIDsRequest) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::GetPlayFabIDsFromGenericIDsRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
