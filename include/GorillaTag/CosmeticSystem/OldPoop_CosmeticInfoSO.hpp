// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: GorillaNetworking.CosmeticsController/CosmeticItem
#include "GorillaNetworking/CosmeticsController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GorillaTag::CosmeticSystem
namespace GorillaTag::CosmeticSystem {
  // Forward declaring type: OldPoop_SeasonInfoSO
  class OldPoop_SeasonInfoSO;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: GorillaTag.CosmeticSystem
namespace GorillaTag::CosmeticSystem {
  // Forward declaring type: OldPoop_CosmeticInfoSO
  class OldPoop_CosmeticInfoSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaTag::CosmeticSystem::OldPoop_CosmeticInfoSO);
DEFINE_IL2CPP_ARG_TYPE(::GorillaTag::CosmeticSystem::OldPoop_CosmeticInfoSO*, "GorillaTag.CosmeticSystem", "OldPoop_CosmeticInfoSO");
// Type namespace: GorillaTag.CosmeticSystem
namespace GorillaTag::CosmeticSystem {
  // Size: 0xC8
  #pragma pack(push, 1)
  // Autogenerated type: GorillaTag.CosmeticSystem.OldPoop_CosmeticInfoSO
  // [TokenAttribute] Offset: FFFFFFFF
  // [CreateAssetMenuAttribute] Offset: FFFFFFFF
  class OldPoop_CosmeticInfoSO : public ::UnityEngine::ScriptableObject {
    public:
    public:
    // public System.Boolean includeInGame
    // Size: 0x1
    // Offset: 0x18
    bool includeInGame;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: includeInGame and: oldPoopSeason
    char __padding0[0x7] = {};
    // public GorillaTag.CosmeticSystem.OldPoop_SeasonInfoSO oldPoopSeason
    // Size: 0x8
    // Offset: 0x20
    ::GorillaTag::CosmeticSystem::OldPoop_SeasonInfoSO* oldPoopSeason;
    // Field size check
    static_assert(sizeof(::GorillaTag::CosmeticSystem::OldPoop_SeasonInfoSO*) == 0x8);
    // public GorillaNetworking.CosmeticsController/CosmeticItem cosmeticItem
    // Size: 0x79
    // Offset: 0x28
    ::GorillaNetworking::CosmeticsController::CosmeticItem cosmeticItem;
    // Field size check
    static_assert(sizeof(::GorillaNetworking::CosmeticsController::CosmeticItem) == 0x79);
    // Padding between fields: cosmeticItem and: wardrobePrefab
    char __padding2[0x7] = {};
    // public UnityEngine.GameObject wardrobePrefab
    // Size: 0x8
    // Offset: 0xA8
    ::UnityEngine::GameObject* wardrobePrefab;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject functionalPrefab
    // Size: 0x8
    // Offset: 0xB0
    ::UnityEngine::GameObject* functionalPrefab;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject holdableAnchorPrefab
    // Size: 0x8
    // Offset: 0xB8
    ::UnityEngine::GameObject* holdableAnchorPrefab;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject firstPersonAndMirrorPrefab
    // Size: 0x8
    // Offset: 0xC0
    ::UnityEngine::GameObject* firstPersonAndMirrorPrefab;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.String logPrefix
    static constexpr const char* logPrefix = "OldPoop_CosmeticInfoSO: ";
    // Get static field: static private System.String logPrefix
    static ::StringW _get_logPrefix();
    // Set static field: static private System.String logPrefix
    static void _set_logPrefix(::StringW value);
    // Get instance field reference: public System.Boolean includeInGame
    [[deprecated("Use field access instead!")]] bool& dyn_includeInGame();
    // Get instance field reference: public GorillaTag.CosmeticSystem.OldPoop_SeasonInfoSO oldPoopSeason
    [[deprecated("Use field access instead!")]] ::GorillaTag::CosmeticSystem::OldPoop_SeasonInfoSO*& dyn_oldPoopSeason();
    // Get instance field reference: public GorillaNetworking.CosmeticsController/CosmeticItem cosmeticItem
    [[deprecated("Use field access instead!")]] ::GorillaNetworking::CosmeticsController::CosmeticItem& dyn_cosmeticItem();
    // Get instance field reference: public UnityEngine.GameObject wardrobePrefab
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_wardrobePrefab();
    // Get instance field reference: public UnityEngine.GameObject functionalPrefab
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_functionalPrefab();
    // Get instance field reference: public UnityEngine.GameObject holdableAnchorPrefab
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_holdableAnchorPrefab();
    // Get instance field reference: public UnityEngine.GameObject firstPersonAndMirrorPrefab
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_firstPersonAndMirrorPrefab();
    // public System.Void .ctor()
    // Offset: 0x28AD3E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OldPoop_CosmeticInfoSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaTag::CosmeticSystem::OldPoop_CosmeticInfoSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OldPoop_CosmeticInfoSO*, creationType>()));
    }
  }; // GorillaTag.CosmeticSystem.OldPoop_CosmeticInfoSO
  #pragma pack(pop)
  static check_size<sizeof(OldPoop_CosmeticInfoSO), 192 + sizeof(::UnityEngine::GameObject*)> __GorillaTag_CosmeticSystem_OldPoop_CosmeticInfoSOSizeCheck;
  static_assert(sizeof(OldPoop_CosmeticInfoSO) == 0xC8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaTag::CosmeticSystem::OldPoop_CosmeticInfoSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
