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
  // Forward declaring type: ValidateWindowsReceiptRequest
  class ValidateWindowsReceiptRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::ValidateWindowsReceiptRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::ValidateWindowsReceiptRequest*, "PlayFab.ClientModels", "ValidateWindowsReceiptRequest");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.ValidateWindowsReceiptRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class ValidateWindowsReceiptRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    public:
    // public System.String CatalogVersion
    // Size: 0x8
    // Offset: 0x18
    ::StringW CatalogVersion;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String CurrencyCode
    // Size: 0x8
    // Offset: 0x20
    ::StringW CurrencyCode;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.UInt32 PurchasePrice
    // Size: 0x4
    // Offset: 0x28
    uint PurchasePrice;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: PurchasePrice and: Receipt
    char __padding2[0x4] = {};
    // public System.String Receipt
    // Size: 0x8
    // Offset: 0x30
    ::StringW Receipt;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::PlayFab::PlayFabAuthenticationContext*
    constexpr operator ::PlayFab::PlayFabAuthenticationContext*() const noexcept = delete;
    // Get instance field reference: public System.String CatalogVersion
    [[deprecated("Use field access instead!")]] ::StringW& dyn_CatalogVersion();
    // Get instance field reference: public System.String CurrencyCode
    [[deprecated("Use field access instead!")]] ::StringW& dyn_CurrencyCode();
    // Get instance field reference: public System.UInt32 PurchasePrice
    [[deprecated("Use field access instead!")]] uint& dyn_PurchasePrice();
    // Get instance field reference: public System.String Receipt
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Receipt();
    // public System.Void .ctor()
    // Offset: 0x4B6EEDC
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ValidateWindowsReceiptRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::ValidateWindowsReceiptRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ValidateWindowsReceiptRequest*, creationType>()));
    }
  }; // PlayFab.ClientModels.ValidateWindowsReceiptRequest
  #pragma pack(pop)
  static check_size<sizeof(ValidateWindowsReceiptRequest), 48 + sizeof(::StringW)> __PlayFab_ClientModels_ValidateWindowsReceiptRequestSizeCheck;
  static_assert(sizeof(ValidateWindowsReceiptRequest) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::ValidateWindowsReceiptRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!