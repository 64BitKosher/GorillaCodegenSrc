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
  // Forward declaring type: GooglePlayFabIdPair
  class GooglePlayFabIdPair;
}
// Completed forward declares
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: GetPlayFabIDsFromGoogleIDsResult
  class GetPlayFabIDsFromGoogleIDsResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::GetPlayFabIDsFromGoogleIDsResult);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::GetPlayFabIDsFromGoogleIDsResult*, "PlayFab.ClientModels", "GetPlayFabIDsFromGoogleIDsResult");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.GetPlayFabIDsFromGoogleIDsResult
  // [TokenAttribute] Offset: FFFFFFFF
  class GetPlayFabIDsFromGoogleIDsResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
    public:
    public:
    // public System.Collections.Generic.List`1<PlayFab.ClientModels.GooglePlayFabIdPair> Data
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::PlayFab::ClientModels::GooglePlayFabIdPair*>* Data;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::PlayFab::ClientModels::GooglePlayFabIdPair*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::List_1<::PlayFab::ClientModels::GooglePlayFabIdPair*>*
    constexpr operator ::System::Collections::Generic::List_1<::PlayFab::ClientModels::GooglePlayFabIdPair*>*() const noexcept {
      return Data;
    }
    // Get instance field reference: public System.Collections.Generic.List`1<PlayFab.ClientModels.GooglePlayFabIdPair> Data
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::PlayFab::ClientModels::GooglePlayFabIdPair*>*& dyn_Data();
    // public System.Void .ctor()
    // Offset: 0x4B6E72C
    // Implemented from: PlayFab.SharedModels.PlayFabResultCommon
    // Base method: System.Void PlayFabResultCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GetPlayFabIDsFromGoogleIDsResult* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::GetPlayFabIDsFromGoogleIDsResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GetPlayFabIDsFromGoogleIDsResult*, creationType>()));
    }
  }; // PlayFab.ClientModels.GetPlayFabIDsFromGoogleIDsResult
  #pragma pack(pop)
  static check_size<sizeof(GetPlayFabIDsFromGoogleIDsResult), 32 + sizeof(::System::Collections::Generic::List_1<::PlayFab::ClientModels::GooglePlayFabIdPair*>*)> __PlayFab_ClientModels_GetPlayFabIDsFromGoogleIDsResultSizeCheck;
  static_assert(sizeof(GetPlayFabIDsFromGoogleIDsResult) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::GetPlayFabIDsFromGoogleIDsResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
