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
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: GetStoreItemsRequest
  class GetStoreItemsRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::GetStoreItemsRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::GetStoreItemsRequest*, "PlayFab.ClientModels", "GetStoreItemsRequest");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.GetStoreItemsRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class GetStoreItemsRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    public:
    // public System.String CatalogVersion
    // Size: 0x8
    // Offset: 0x18
    ::StringW CatalogVersion;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String StoreId
    // Size: 0x8
    // Offset: 0x20
    ::StringW StoreId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::PlayFab::PlayFabAuthenticationContext*
    constexpr operator ::PlayFab::PlayFabAuthenticationContext*() const noexcept = delete;
    // Get instance field reference: public System.String CatalogVersion
    [[deprecated("Use field access instead!")]] ::StringW& dyn_CatalogVersion();
    // Get instance field reference: public System.String StoreId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_StoreId();
    // public System.Void .ctor()
    // Offset: 0x4B6E7CC
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GetStoreItemsRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::GetStoreItemsRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GetStoreItemsRequest*, creationType>()));
    }
  }; // PlayFab.ClientModels.GetStoreItemsRequest
  #pragma pack(pop)
  static check_size<sizeof(GetStoreItemsRequest), 32 + sizeof(::StringW)> __PlayFab_ClientModels_GetStoreItemsRequestSizeCheck;
  static_assert(sizeof(GetStoreItemsRequest) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::GetStoreItemsRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!