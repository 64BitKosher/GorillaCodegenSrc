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
  // Forward declaring type: GameCenterPlayFabIdPair
  class GameCenterPlayFabIdPair;
}
// Completed forward declares
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: GetPlayFabIDsFromGameCenterIDsResult
  class GetPlayFabIDsFromGameCenterIDsResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::GetPlayFabIDsFromGameCenterIDsResult);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::GetPlayFabIDsFromGameCenterIDsResult*, "PlayFab.ClientModels", "GetPlayFabIDsFromGameCenterIDsResult");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.GetPlayFabIDsFromGameCenterIDsResult
  // [TokenAttribute] Offset: FFFFFFFF
  class GetPlayFabIDsFromGameCenterIDsResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
    public:
    public:
    // public System.Collections.Generic.List`1<PlayFab.ClientModels.GameCenterPlayFabIdPair> Data
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::PlayFab::ClientModels::GameCenterPlayFabIdPair*>* Data;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::PlayFab::ClientModels::GameCenterPlayFabIdPair*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::List_1<::PlayFab::ClientModels::GameCenterPlayFabIdPair*>*
    constexpr operator ::System::Collections::Generic::List_1<::PlayFab::ClientModels::GameCenterPlayFabIdPair*>*() const noexcept {
      return Data;
    }
    // Get instance field reference: public System.Collections.Generic.List`1<PlayFab.ClientModels.GameCenterPlayFabIdPair> Data
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::PlayFab::ClientModels::GameCenterPlayFabIdPair*>*& dyn_Data();
    // public System.Void .ctor()
    // Offset: 0x4B6E70C
    // Implemented from: PlayFab.SharedModels.PlayFabResultCommon
    // Base method: System.Void PlayFabResultCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GetPlayFabIDsFromGameCenterIDsResult* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::GetPlayFabIDsFromGameCenterIDsResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GetPlayFabIDsFromGameCenterIDsResult*, creationType>()));
    }
  }; // PlayFab.ClientModels.GetPlayFabIDsFromGameCenterIDsResult
  #pragma pack(pop)
  static check_size<sizeof(GetPlayFabIDsFromGameCenterIDsResult), 32 + sizeof(::System::Collections::Generic::List_1<::PlayFab::ClientModels::GameCenterPlayFabIdPair*>*)> __PlayFab_ClientModels_GetPlayFabIDsFromGameCenterIDsResultSizeCheck;
  static_assert(sizeof(GetPlayFabIDsFromGameCenterIDsResult) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::GetPlayFabIDsFromGameCenterIDsResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!