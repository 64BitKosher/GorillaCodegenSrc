// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabResultCommon
#include "PlayFab/SharedModels/PlayFabResultCommon.hpp"
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
// Forward declaring namespace: PlayFab::MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: QosServer
  class QosServer;
}
// Completed forward declares
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: ListPartyQosServersResponse
  class ListPartyQosServersResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::MultiplayerModels::ListPartyQosServersResponse);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::MultiplayerModels::ListPartyQosServersResponse*, "PlayFab.MultiplayerModels", "ListPartyQosServersResponse");
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.MultiplayerModels.ListPartyQosServersResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class ListPartyQosServersResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
    public:
    public:
    // public System.Int32 PageSize
    // Size: 0x4
    // Offset: 0x20
    int PageSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: PageSize and: QosServers
    char __padding0[0x4] = {};
    // public System.Collections.Generic.List`1<PlayFab.MultiplayerModels.QosServer> QosServers
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::QosServer*>* QosServers;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::QosServer*>*) == 0x8);
    // public System.String SkipToken
    // Size: 0x8
    // Offset: 0x30
    ::StringW SkipToken;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.Int32 PageSize
    [[deprecated("Use field access instead!")]] int& dyn_PageSize();
    // Get instance field reference: public System.Collections.Generic.List`1<PlayFab.MultiplayerModels.QosServer> QosServers
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::QosServer*>*& dyn_QosServers();
    // Get instance field reference: public System.String SkipToken
    [[deprecated("Use field access instead!")]] ::StringW& dyn_SkipToken();
    // public System.Void .ctor()
    // Offset: 0x4B6102C
    // Implemented from: PlayFab.SharedModels.PlayFabResultCommon
    // Base method: System.Void PlayFabResultCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ListPartyQosServersResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::MultiplayerModels::ListPartyQosServersResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ListPartyQosServersResponse*, creationType>()));
    }
  }; // PlayFab.MultiplayerModels.ListPartyQosServersResponse
  #pragma pack(pop)
  static check_size<sizeof(ListPartyQosServersResponse), 48 + sizeof(::StringW)> __PlayFab_MultiplayerModels_ListPartyQosServersResponseSizeCheck;
  static_assert(sizeof(ListPartyQosServersResponse) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::MultiplayerModels::ListPartyQosServersResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
