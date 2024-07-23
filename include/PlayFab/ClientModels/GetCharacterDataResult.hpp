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
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: PlayFab::ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: UserDataRecord
  class UserDataRecord;
}
// Completed forward declares
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: GetCharacterDataResult
  class GetCharacterDataResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::GetCharacterDataResult);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::GetCharacterDataResult*, "PlayFab.ClientModels", "GetCharacterDataResult");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.GetCharacterDataResult
  // [TokenAttribute] Offset: FFFFFFFF
  class GetCharacterDataResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
    public:
    public:
    // public System.String CharacterId
    // Size: 0x8
    // Offset: 0x20
    ::StringW CharacterId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Collections.Generic.Dictionary`2<System.String,PlayFab.ClientModels.UserDataRecord> Data
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::Dictionary_2<::StringW, ::PlayFab::ClientModels::UserDataRecord*>* Data;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::PlayFab::ClientModels::UserDataRecord*>*) == 0x8);
    // public System.UInt32 DataVersion
    // Size: 0x4
    // Offset: 0x30
    uint DataVersion;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Get instance field reference: public System.String CharacterId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_CharacterId();
    // Get instance field reference: public System.Collections.Generic.Dictionary`2<System.String,PlayFab.ClientModels.UserDataRecord> Data
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::PlayFab::ClientModels::UserDataRecord*>*& dyn_Data();
    // Get instance field reference: public System.UInt32 DataVersion
    [[deprecated("Use field access instead!")]] uint& dyn_DataVersion();
    // public System.Void .ctor()
    // Offset: 0x4B6E594
    // Implemented from: PlayFab.SharedModels.PlayFabResultCommon
    // Base method: System.Void PlayFabResultCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GetCharacterDataResult* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::GetCharacterDataResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GetCharacterDataResult*, creationType>()));
    }
  }; // PlayFab.ClientModels.GetCharacterDataResult
  #pragma pack(pop)
  static check_size<sizeof(GetCharacterDataResult), 48 + sizeof(uint)> __PlayFab_ClientModels_GetCharacterDataResultSizeCheck;
  static_assert(sizeof(GetCharacterDataResult) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::GetCharacterDataResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
