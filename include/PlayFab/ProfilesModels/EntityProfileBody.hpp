// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabBaseModel
#include "PlayFab/SharedModels/PlayFabBaseModel.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: PlayFab::ProfilesModels
namespace PlayFab::ProfilesModels {
  // Forward declaring type: EntityKey
  class EntityKey;
  // Forward declaring type: EntityProfileFileMetadata
  class EntityProfileFileMetadata;
  // Forward declaring type: EntityLineage
  class EntityLineage;
  // Forward declaring type: EntityDataObject
  class EntityDataObject;
  // Forward declaring type: EntityPermissionStatement
  class EntityPermissionStatement;
  // Forward declaring type: EntityStatisticValue
  class EntityStatisticValue;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: PlayFab.ProfilesModels
namespace PlayFab::ProfilesModels {
  // Forward declaring type: EntityProfileBody
  class EntityProfileBody;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ProfilesModels::EntityProfileBody);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ProfilesModels::EntityProfileBody*, "PlayFab.ProfilesModels", "EntityProfileBody");
// Type namespace: PlayFab.ProfilesModels
namespace PlayFab::ProfilesModels {
  // Size: 0x7C
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ProfilesModels.EntityProfileBody
  // [TokenAttribute] Offset: FFFFFFFF
  class EntityProfileBody : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public System.String AvatarUrl
    // Size: 0x8
    // Offset: 0x10
    ::StringW AvatarUrl;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.DateTime Created
    // Size: 0x8
    // Offset: 0x18
    ::System::DateTime Created;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    // public System.String DisplayName
    // Size: 0x8
    // Offset: 0x20
    ::StringW DisplayName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public PlayFab.ProfilesModels.EntityKey Entity
    // Size: 0x8
    // Offset: 0x28
    ::PlayFab::ProfilesModels::EntityKey* Entity;
    // Field size check
    static_assert(sizeof(::PlayFab::ProfilesModels::EntityKey*) == 0x8);
    // public System.String EntityChain
    // Size: 0x8
    // Offset: 0x30
    ::StringW EntityChain;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Collections.Generic.List`1<System.String> ExperimentVariants
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::List_1<::StringW>* ExperimentVariants;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    // public System.Collections.Generic.Dictionary`2<System.String,PlayFab.ProfilesModels.EntityProfileFileMetadata> Files
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::Dictionary_2<::StringW, ::PlayFab::ProfilesModels::EntityProfileFileMetadata*>* Files;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::PlayFab::ProfilesModels::EntityProfileFileMetadata*>*) == 0x8);
    // public System.String Language
    // Size: 0x8
    // Offset: 0x48
    ::StringW Language;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String LeaderboardMetadata
    // Size: 0x8
    // Offset: 0x50
    ::StringW LeaderboardMetadata;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public PlayFab.ProfilesModels.EntityLineage Lineage
    // Size: 0x8
    // Offset: 0x58
    ::PlayFab::ProfilesModels::EntityLineage* Lineage;
    // Field size check
    static_assert(sizeof(::PlayFab::ProfilesModels::EntityLineage*) == 0x8);
    // public System.Collections.Generic.Dictionary`2<System.String,PlayFab.ProfilesModels.EntityDataObject> Objects
    // Size: 0x8
    // Offset: 0x60
    ::System::Collections::Generic::Dictionary_2<::StringW, ::PlayFab::ProfilesModels::EntityDataObject*>* Objects;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::PlayFab::ProfilesModels::EntityDataObject*>*) == 0x8);
    // public System.Collections.Generic.List`1<PlayFab.ProfilesModels.EntityPermissionStatement> Permissions
    // Size: 0x8
    // Offset: 0x68
    ::System::Collections::Generic::List_1<::PlayFab::ProfilesModels::EntityPermissionStatement*>* Permissions;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::PlayFab::ProfilesModels::EntityPermissionStatement*>*) == 0x8);
    // public System.Collections.Generic.Dictionary`2<System.String,PlayFab.ProfilesModels.EntityStatisticValue> Statistics
    // Size: 0x8
    // Offset: 0x70
    ::System::Collections::Generic::Dictionary_2<::StringW, ::PlayFab::ProfilesModels::EntityStatisticValue*>* Statistics;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::PlayFab::ProfilesModels::EntityStatisticValue*>*) == 0x8);
    // public System.Int32 VersionNumber
    // Size: 0x4
    // Offset: 0x78
    int VersionNumber;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public System.String AvatarUrl
    [[deprecated("Use field access instead!")]] ::StringW& dyn_AvatarUrl();
    // Get instance field reference: public System.DateTime Created
    [[deprecated("Use field access instead!")]] ::System::DateTime& dyn_Created();
    // Get instance field reference: public System.String DisplayName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_DisplayName();
    // Get instance field reference: public PlayFab.ProfilesModels.EntityKey Entity
    [[deprecated("Use field access instead!")]] ::PlayFab::ProfilesModels::EntityKey*& dyn_Entity();
    // Get instance field reference: public System.String EntityChain
    [[deprecated("Use field access instead!")]] ::StringW& dyn_EntityChain();
    // Get instance field reference: public System.Collections.Generic.List`1<System.String> ExperimentVariants
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::StringW>*& dyn_ExperimentVariants();
    // Get instance field reference: public System.Collections.Generic.Dictionary`2<System.String,PlayFab.ProfilesModels.EntityProfileFileMetadata> Files
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::PlayFab::ProfilesModels::EntityProfileFileMetadata*>*& dyn_Files();
    // Get instance field reference: public System.String Language
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Language();
    // Get instance field reference: public System.String LeaderboardMetadata
    [[deprecated("Use field access instead!")]] ::StringW& dyn_LeaderboardMetadata();
    // Get instance field reference: public PlayFab.ProfilesModels.EntityLineage Lineage
    [[deprecated("Use field access instead!")]] ::PlayFab::ProfilesModels::EntityLineage*& dyn_Lineage();
    // Get instance field reference: public System.Collections.Generic.Dictionary`2<System.String,PlayFab.ProfilesModels.EntityDataObject> Objects
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::PlayFab::ProfilesModels::EntityDataObject*>*& dyn_Objects();
    // Get instance field reference: public System.Collections.Generic.List`1<PlayFab.ProfilesModels.EntityPermissionStatement> Permissions
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::PlayFab::ProfilesModels::EntityPermissionStatement*>*& dyn_Permissions();
    // Get instance field reference: public System.Collections.Generic.Dictionary`2<System.String,PlayFab.ProfilesModels.EntityStatisticValue> Statistics
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::PlayFab::ProfilesModels::EntityStatisticValue*>*& dyn_Statistics();
    // Get instance field reference: public System.Int32 VersionNumber
    [[deprecated("Use field access instead!")]] int& dyn_VersionNumber();
    // public System.Void .ctor()
    // Offset: 0x4B60C2C
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EntityProfileBody* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ProfilesModels::EntityProfileBody::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EntityProfileBody*, creationType>()));
    }
  }; // PlayFab.ProfilesModels.EntityProfileBody
  #pragma pack(pop)
  static check_size<sizeof(EntityProfileBody), 120 + sizeof(int)> __PlayFab_ProfilesModels_EntityProfileBodySizeCheck;
  static_assert(sizeof(EntityProfileBody) == 0x7C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ProfilesModels::EntityProfileBody::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
