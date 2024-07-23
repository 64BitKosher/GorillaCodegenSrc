// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.UInt64
#include "System/UInt64.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: AppDeeplinkUI
  class AppDeeplinkUI;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AppDeeplinkUI);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AppDeeplinkUI*, "", "AppDeeplinkUI");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x49
  #pragma pack(push, 1)
  // Autogenerated type: AppDeeplinkUI
  // [TokenAttribute] Offset: FFFFFFFF
  class AppDeeplinkUI : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.RectTransform deeplinkAppId
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::RectTransform* deeplinkAppId;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    // private UnityEngine.RectTransform deeplinkMessage
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::RectTransform* deeplinkMessage;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    // private UnityEngine.RectTransform uiLaunchType
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::RectTransform* uiLaunchType;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    // private UnityEngine.RectTransform uiLaunchSource
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::RectTransform* uiLaunchSource;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    // private UnityEngine.RectTransform uiDeepLinkMessage
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::RectTransform* uiDeepLinkMessage;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    // private System.Boolean inMenu
    // Size: 0x1
    // Offset: 0x48
    bool inMenu;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // static field const value: static private System.UInt64 UNITY_COMPANION_APP_ID
    static constexpr const uint64_t UNITY_COMPANION_APP_ID = 3535750239844224u;
    // Get static field: static private System.UInt64 UNITY_COMPANION_APP_ID
    static uint64_t _get_UNITY_COMPANION_APP_ID();
    // Set static field: static private System.UInt64 UNITY_COMPANION_APP_ID
    static void _set_UNITY_COMPANION_APP_ID(uint64_t value);
    // static field const value: static private System.UInt64 UNREAL_COMPANION_APP_ID
    static constexpr const uint64_t UNREAL_COMPANION_APP_ID = 4055411724486843u;
    // Get static field: static private System.UInt64 UNREAL_COMPANION_APP_ID
    static uint64_t _get_UNREAL_COMPANION_APP_ID();
    // Set static field: static private System.UInt64 UNREAL_COMPANION_APP_ID
    static void _set_UNREAL_COMPANION_APP_ID(uint64_t value);
    // Get instance field reference: private UnityEngine.RectTransform deeplinkAppId
    [[deprecated("Use field access instead!")]] ::UnityEngine::RectTransform*& dyn_deeplinkAppId();
    // Get instance field reference: private UnityEngine.RectTransform deeplinkMessage
    [[deprecated("Use field access instead!")]] ::UnityEngine::RectTransform*& dyn_deeplinkMessage();
    // Get instance field reference: private UnityEngine.RectTransform uiLaunchType
    [[deprecated("Use field access instead!")]] ::UnityEngine::RectTransform*& dyn_uiLaunchType();
    // Get instance field reference: private UnityEngine.RectTransform uiLaunchSource
    [[deprecated("Use field access instead!")]] ::UnityEngine::RectTransform*& dyn_uiLaunchSource();
    // Get instance field reference: private UnityEngine.RectTransform uiDeepLinkMessage
    [[deprecated("Use field access instead!")]] ::UnityEngine::RectTransform*& dyn_uiDeepLinkMessage();
    // Get instance field reference: private System.Boolean inMenu
    [[deprecated("Use field access instead!")]] bool& dyn_inMenu();
    // private System.Void Start()
    // Offset: 0x292B354
    void Start();
    // private System.Void Update()
    // Offset: 0x292B990
    void Update();
    // private System.Void LaunchUnrealDeeplinkSample()
    // Offset: 0x292BC08
    void LaunchUnrealDeeplinkSample();
    // private System.Void LaunchSelf()
    // Offset: 0x292BD6C
    void LaunchSelf();
    // private System.Void LaunchOtherApp()
    // Offset: 0x292BED4
    void LaunchOtherApp();
    // public System.Void .ctor()
    // Offset: 0x292C050
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AppDeeplinkUI* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AppDeeplinkUI::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AppDeeplinkUI*, creationType>()));
    }
  }; // AppDeeplinkUI
  #pragma pack(pop)
  static check_size<sizeof(AppDeeplinkUI), 72 + sizeof(bool)> __GlobalNamespace_AppDeeplinkUISizeCheck;
  static_assert(sizeof(AppDeeplinkUI) == 0x49);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AppDeeplinkUI::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AppDeeplinkUI::*)()>(&GlobalNamespace::AppDeeplinkUI::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AppDeeplinkUI*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AppDeeplinkUI::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AppDeeplinkUI::*)()>(&GlobalNamespace::AppDeeplinkUI::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AppDeeplinkUI*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AppDeeplinkUI::LaunchUnrealDeeplinkSample
// Il2CppName: LaunchUnrealDeeplinkSample
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AppDeeplinkUI::*)()>(&GlobalNamespace::AppDeeplinkUI::LaunchUnrealDeeplinkSample)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AppDeeplinkUI*), "LaunchUnrealDeeplinkSample", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AppDeeplinkUI::LaunchSelf
// Il2CppName: LaunchSelf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AppDeeplinkUI::*)()>(&GlobalNamespace::AppDeeplinkUI::LaunchSelf)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AppDeeplinkUI*), "LaunchSelf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AppDeeplinkUI::LaunchOtherApp
// Il2CppName: LaunchOtherApp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AppDeeplinkUI::*)()>(&GlobalNamespace::AppDeeplinkUI::LaunchOtherApp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AppDeeplinkUI*), "LaunchOtherApp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AppDeeplinkUI::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
