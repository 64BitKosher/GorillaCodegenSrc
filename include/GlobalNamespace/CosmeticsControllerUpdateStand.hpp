// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: GorillaNetworking.CosmeticsController/CosmeticItem
#include "GorillaNetworking/CosmeticsController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: HeadModel
  class HeadModel;
}
// Forward declaring namespace: GorillaNetworking
namespace GorillaNetworking {
  // Skipping declaration: CosmeticsController because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CosmeticsControllerUpdateStand
  class CosmeticsControllerUpdateStand;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CosmeticsControllerUpdateStand);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CosmeticsControllerUpdateStand*, "", "CosmeticsControllerUpdateStand");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xC8
  #pragma pack(push, 1)
  // Autogenerated type: CosmeticsControllerUpdateStand
  // [TokenAttribute] Offset: FFFFFFFF
  class CosmeticsControllerUpdateStand : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::CosmeticsControllerUpdateStand::$$c__DisplayClass14_0
    class $$c__DisplayClass14_0;
    public:
    // public GorillaNetworking.CosmeticsController cosmeticsController
    // Size: 0x8
    // Offset: 0x20
    ::GorillaNetworking::CosmeticsController* cosmeticsController;
    // Field size check
    static_assert(sizeof(::GorillaNetworking::CosmeticsController*) == 0x8);
    // public System.Boolean FailEntitlement
    // Size: 0x1
    // Offset: 0x28
    bool FailEntitlement;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean PlayerUnlocked
    // Size: 0x1
    // Offset: 0x29
    bool PlayerUnlocked;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean ItemNotGrantedYet
    // Size: 0x1
    // Offset: 0x2A
    bool ItemNotGrantedYet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean ItemSuccessfullyGranted
    // Size: 0x1
    // Offset: 0x2B
    bool ItemSuccessfullyGranted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean AttemptToConsumeEntitlement
    // Size: 0x1
    // Offset: 0x2C
    bool AttemptToConsumeEntitlement;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean EntitlementSuccessfullyConsumed
    // Size: 0x1
    // Offset: 0x2D
    bool EntitlementSuccessfullyConsumed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean LockSuccessfullyCleared
    // Size: 0x1
    // Offset: 0x2E
    bool LockSuccessfullyCleared;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean RunDebug
    // Size: 0x1
    // Offset: 0x2F
    bool RunDebug;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public UnityEngine.Transform textParent
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Transform* textParent;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private GorillaNetworking.CosmeticsController/CosmeticItem outItem
    // Size: 0x79
    // Offset: 0x38
    ::GorillaNetworking::CosmeticsController::CosmeticItem outItem;
    // Field size check
    static_assert(sizeof(::GorillaNetworking::CosmeticsController::CosmeticItem) == 0x79);
    // Padding between fields: outItem and: inventoryHeadModels
    char __padding10[0x7] = {};
    // public HeadModel[] inventoryHeadModels
    // Size: 0x8
    // Offset: 0xB8
    ::ArrayW<::GlobalNamespace::HeadModel*> inventoryHeadModels;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::HeadModel*>) == 0x8);
    // public System.String headModelsPrefabPath
    // Size: 0x8
    // Offset: 0xC0
    ::StringW headModelsPrefabPath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public GorillaNetworking.CosmeticsController cosmeticsController
    [[deprecated("Use field access instead!")]] ::GorillaNetworking::CosmeticsController*& dyn_cosmeticsController();
    // Get instance field reference: public System.Boolean FailEntitlement
    [[deprecated("Use field access instead!")]] bool& dyn_FailEntitlement();
    // Get instance field reference: public System.Boolean PlayerUnlocked
    [[deprecated("Use field access instead!")]] bool& dyn_PlayerUnlocked();
    // Get instance field reference: public System.Boolean ItemNotGrantedYet
    [[deprecated("Use field access instead!")]] bool& dyn_ItemNotGrantedYet();
    // Get instance field reference: public System.Boolean ItemSuccessfullyGranted
    [[deprecated("Use field access instead!")]] bool& dyn_ItemSuccessfullyGranted();
    // Get instance field reference: public System.Boolean AttemptToConsumeEntitlement
    [[deprecated("Use field access instead!")]] bool& dyn_AttemptToConsumeEntitlement();
    // Get instance field reference: public System.Boolean EntitlementSuccessfullyConsumed
    [[deprecated("Use field access instead!")]] bool& dyn_EntitlementSuccessfullyConsumed();
    // Get instance field reference: public System.Boolean LockSuccessfullyCleared
    [[deprecated("Use field access instead!")]] bool& dyn_LockSuccessfullyCleared();
    // Get instance field reference: public System.Boolean RunDebug
    [[deprecated("Use field access instead!")]] bool& dyn_RunDebug();
    // Get instance field reference: public UnityEngine.Transform textParent
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_textParent();
    // Get instance field reference: private GorillaNetworking.CosmeticsController/CosmeticItem outItem
    [[deprecated("Use field access instead!")]] ::GorillaNetworking::CosmeticsController::CosmeticItem& dyn_outItem();
    // Get instance field reference: public HeadModel[] inventoryHeadModels
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::HeadModel*>& dyn_inventoryHeadModels();
    // Get instance field reference: public System.String headModelsPrefabPath
    [[deprecated("Use field access instead!")]] ::StringW& dyn_headModelsPrefabPath();
    // public System.Void CallGetIAPPurchases()
    // Offset: 0x26AA78C
    void CallGetIAPPurchases();
    // public UnityEngine.GameObject ReturnChildWithCosmeticNameMatch(UnityEngine.Transform parentTransform)
    // Offset: 0x26AA888
    ::UnityEngine::GameObject* ReturnChildWithCosmeticNameMatch(::UnityEngine::Transform* parentTransform);
    // public System.Void .ctor()
    // Offset: 0x26AAD88
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CosmeticsControllerUpdateStand* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CosmeticsControllerUpdateStand::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CosmeticsControllerUpdateStand*, creationType>()));
    }
  }; // CosmeticsControllerUpdateStand
  #pragma pack(pop)
  static check_size<sizeof(CosmeticsControllerUpdateStand), 192 + sizeof(::StringW)> __GlobalNamespace_CosmeticsControllerUpdateStandSizeCheck;
  static_assert(sizeof(CosmeticsControllerUpdateStand) == 0xC8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CosmeticsControllerUpdateStand::CallGetIAPPurchases
// Il2CppName: CallGetIAPPurchases
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CosmeticsControllerUpdateStand::*)()>(&GlobalNamespace::CosmeticsControllerUpdateStand::CallGetIAPPurchases)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CosmeticsControllerUpdateStand*), "CallGetIAPPurchases", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CosmeticsControllerUpdateStand::ReturnChildWithCosmeticNameMatch
// Il2CppName: ReturnChildWithCosmeticNameMatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (GlobalNamespace::CosmeticsControllerUpdateStand::*)(::UnityEngine::Transform*)>(&GlobalNamespace::CosmeticsControllerUpdateStand::ReturnChildWithCosmeticNameMatch)> {
  static const MethodInfo* get() {
    static auto* parentTransform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CosmeticsControllerUpdateStand*), "ReturnChildWithCosmeticNameMatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parentTransform});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CosmeticsControllerUpdateStand::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
