// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GorillaNetworking::Store
namespace GorillaNetworking::Store {
  // Forward declaring type: BundlePurchaseButton
  class BundlePurchaseButton;
  // Forward declaring type: StoreBundleData
  class StoreBundleData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Text
  class Text;
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityEvent
  class UnityEvent;
}
// Completed forward declares
// Type namespace: GorillaNetworking.Store
namespace GorillaNetworking::Store {
  // Forward declaring type: BundleStand
  class BundleStand;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaNetworking::Store::BundleStand);
DEFINE_IL2CPP_ARG_TYPE(::GorillaNetworking::Store::BundleStand*, "GorillaNetworking.Store", "BundleStand");
// Type namespace: GorillaNetworking.Store
namespace GorillaNetworking::Store {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: GorillaNetworking.Store.BundleStand
  // [TokenAttribute] Offset: FFFFFFFF
  class BundleStand : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public GorillaNetworking.Store.BundlePurchaseButton _bundlePurchaseButton
    // Size: 0x8
    // Offset: 0x20
    ::GorillaNetworking::Store::BundlePurchaseButton* bundlePurchaseButton;
    // Field size check
    static_assert(sizeof(::GorillaNetworking::Store::BundlePurchaseButton*) == 0x8);
    // public GorillaNetworking.Store.StoreBundleData _bundleDataReference
    // Size: 0x8
    // Offset: 0x28
    ::GorillaNetworking::Store::StoreBundleData* bundleDataReference;
    // Field size check
    static_assert(sizeof(::GorillaNetworking::Store::StoreBundleData*) == 0x8);
    // public UnityEngine.GameObject[] EditorOnlyObjects
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::UnityEngine::GameObject*> EditorOnlyObjects;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::GameObject*>) == 0x8);
    // public UnityEngine.UI.Text _bundleDescriptionText
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::UI::Text* bundleDescriptionText;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Text*) == 0x8);
    // public UnityEngine.UI.Image _bundleIcon
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::UI::Image* bundleIcon;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Image*) == 0x8);
    // public UnityEngine.Events.UnityEvent AlreadyOwnEvent
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Events::UnityEvent* AlreadyOwnEvent;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityEvent*) == 0x8);
    // public UnityEngine.Events.UnityEvent ErrorHappenedEvent
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::Events::UnityEvent* ErrorHappenedEvent;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityEvent*) == 0x8);
    public:
    // Get instance field reference: public GorillaNetworking.Store.BundlePurchaseButton _bundlePurchaseButton
    [[deprecated("Use field access instead!")]] ::GorillaNetworking::Store::BundlePurchaseButton*& dyn__bundlePurchaseButton();
    // Get instance field reference: public GorillaNetworking.Store.StoreBundleData _bundleDataReference
    [[deprecated("Use field access instead!")]] ::GorillaNetworking::Store::StoreBundleData*& dyn__bundleDataReference();
    // Get instance field reference: public UnityEngine.GameObject[] EditorOnlyObjects
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::GameObject*>& dyn_EditorOnlyObjects();
    // Get instance field reference: public UnityEngine.UI.Text _bundleDescriptionText
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Text*& dyn__bundleDescriptionText();
    // Get instance field reference: public UnityEngine.UI.Image _bundleIcon
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Image*& dyn__bundleIcon();
    // Get instance field reference: public UnityEngine.Events.UnityEvent AlreadyOwnEvent
    [[deprecated("Use field access instead!")]] ::UnityEngine::Events::UnityEvent*& dyn_AlreadyOwnEvent();
    // Get instance field reference: public UnityEngine.Events.UnityEvent ErrorHappenedEvent
    [[deprecated("Use field access instead!")]] ::UnityEngine::Events::UnityEvent*& dyn_ErrorHappenedEvent();
    // public System.String get_playfabBundleID()
    // Offset: 0x28656CC
    ::StringW get_playfabBundleID();
    // public System.Void Awake()
    // Offset: 0x28656E8
    void Awake();
    // public System.Void InitializeEventListeners()
    // Offset: 0x28657EC
    void InitializeEventListeners();
    // public System.Void NotifyAlreadyOwn()
    // Offset: 0x2864460
    void NotifyAlreadyOwn();
    // public System.Void ErrorHappened()
    // Offset: 0x28640DC
    void ErrorHappened();
    // public System.Void UpdatePurchaseButtonText(System.String purchaseText)
    // Offset: 0x28658CC
    void UpdatePurchaseButtonText(::StringW purchaseText);
    // public System.Void UpdateDescriptionText(System.String descriptionText)
    // Offset: 0x2865980
    void UpdateDescriptionText(::StringW descriptionText);
    // public System.Void .ctor()
    // Offset: 0x2865A20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BundleStand* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaNetworking::Store::BundleStand::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BundleStand*, creationType>()));
    }
  }; // GorillaNetworking.Store.BundleStand
  #pragma pack(pop)
  static check_size<sizeof(BundleStand), 80 + sizeof(::UnityEngine::Events::UnityEvent*)> __GorillaNetworking_Store_BundleStandSizeCheck;
  static_assert(sizeof(BundleStand) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaNetworking::Store::BundleStand::get_playfabBundleID
// Il2CppName: get_playfabBundleID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GorillaNetworking::Store::BundleStand::*)()>(&GorillaNetworking::Store::BundleStand::get_playfabBundleID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::Store::BundleStand*), "get_playfabBundleID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaNetworking::Store::BundleStand::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaNetworking::Store::BundleStand::*)()>(&GorillaNetworking::Store::BundleStand::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::Store::BundleStand*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaNetworking::Store::BundleStand::InitializeEventListeners
// Il2CppName: InitializeEventListeners
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaNetworking::Store::BundleStand::*)()>(&GorillaNetworking::Store::BundleStand::InitializeEventListeners)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::Store::BundleStand*), "InitializeEventListeners", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaNetworking::Store::BundleStand::NotifyAlreadyOwn
// Il2CppName: NotifyAlreadyOwn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaNetworking::Store::BundleStand::*)()>(&GorillaNetworking::Store::BundleStand::NotifyAlreadyOwn)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::Store::BundleStand*), "NotifyAlreadyOwn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaNetworking::Store::BundleStand::ErrorHappened
// Il2CppName: ErrorHappened
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaNetworking::Store::BundleStand::*)()>(&GorillaNetworking::Store::BundleStand::ErrorHappened)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::Store::BundleStand*), "ErrorHappened", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaNetworking::Store::BundleStand::UpdatePurchaseButtonText
// Il2CppName: UpdatePurchaseButtonText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaNetworking::Store::BundleStand::*)(::StringW)>(&GorillaNetworking::Store::BundleStand::UpdatePurchaseButtonText)> {
  static const MethodInfo* get() {
    static auto* purchaseText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::Store::BundleStand*), "UpdatePurchaseButtonText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{purchaseText});
  }
};
// Writing MetadataGetter for method: GorillaNetworking::Store::BundleStand::UpdateDescriptionText
// Il2CppName: UpdateDescriptionText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaNetworking::Store::BundleStand::*)(::StringW)>(&GorillaNetworking::Store::BundleStand::UpdateDescriptionText)> {
  static const MethodInfo* get() {
    static auto* descriptionText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::Store::BundleStand*), "UpdateDescriptionText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{descriptionText});
  }
};
// Writing MetadataGetter for method: GorillaNetworking::Store::BundleStand::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
