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
// Including type: PlayFab.ClientModels.Region
#include "PlayFab/ClientModels/Region.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: PlayFab::ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: CollectionFilter
  class CollectionFilter;
}
// Completed forward declares
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: CurrentGamesRequest
  class CurrentGamesRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::CurrentGamesRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::CurrentGamesRequest*, "PlayFab.ClientModels", "CurrentGamesRequest");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // WARNING Size may be invalid!
  // Autogenerated type: PlayFab.ClientModels.CurrentGamesRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class CurrentGamesRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    public:
    // public System.String BuildVersion
    // Size: 0x8
    // Offset: 0x18
    ::StringW BuildVersion;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String GameMode
    // Size: 0x8
    // Offset: 0x20
    ::StringW GameMode;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Nullable`1<PlayFab.ClientModels.Region> Region
    // Size: 0xFFFFFFFF
    // Offset: 0x28
    ::System::Nullable_1<::PlayFab::ClientModels::Region> Region;
    // public System.String StatisticName
    // Size: 0x8
    // Offset: 0x30
    ::StringW StatisticName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public PlayFab.ClientModels.CollectionFilter TagFilter
    // Size: 0x8
    // Offset: 0x38
    ::PlayFab::ClientModels::CollectionFilter* TagFilter;
    // Field size check
    static_assert(sizeof(::PlayFab::ClientModels::CollectionFilter*) == 0x8);
    public:
    // Deleting conversion operator: operator ::PlayFab::PlayFabAuthenticationContext*
    constexpr operator ::PlayFab::PlayFabAuthenticationContext*() const noexcept = delete;
    // Get instance field reference: public System.String BuildVersion
    [[deprecated("Use field access instead!")]] ::StringW& dyn_BuildVersion();
    // Get instance field reference: public System.String GameMode
    [[deprecated("Use field access instead!")]] ::StringW& dyn_GameMode();
    // Get instance field reference: public System.Nullable`1<PlayFab.ClientModels.Region> Region
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::PlayFab::ClientModels::Region>& dyn_Region();
    // Get instance field reference: public System.String StatisticName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_StatisticName();
    // Get instance field reference: public PlayFab.ClientModels.CollectionFilter TagFilter
    [[deprecated("Use field access instead!")]] ::PlayFab::ClientModels::CollectionFilter*& dyn_TagFilter();
    // public System.Void .ctor()
    // Offset: 0x4B6E4D4
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CurrentGamesRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::CurrentGamesRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CurrentGamesRequest*, creationType>()));
    }
  }; // PlayFab.ClientModels.CurrentGamesRequest
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::CurrentGamesRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!