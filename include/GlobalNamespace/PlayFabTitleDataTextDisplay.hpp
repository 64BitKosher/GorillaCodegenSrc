// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Text
  class Text;
}
// Forward declaring namespace: PlayFab
namespace PlayFab {
  // Forward declaring type: PlayFabError
  class PlayFabError;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PlayFabTitleDataTextDisplay
  class PlayFabTitleDataTextDisplay;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PlayFabTitleDataTextDisplay);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayFabTitleDataTextDisplay*, "", "PlayFabTitleDataTextDisplay");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: PlayFabTitleDataTextDisplay
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayFabTitleDataTextDisplay : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.UI.Text textBox
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::UI::Text* textBox;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Text*) == 0x8);
    // private UnityEngine.Color newUpdateColor
    // Size: 0x10
    // Offset: 0x28
    ::UnityEngine::Color newUpdateColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color defaultTextColor
    // Size: 0x10
    // Offset: 0x38
    ::UnityEngine::Color defaultTextColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.String playfabKey
    // Size: 0x8
    // Offset: 0x48
    ::StringW playfabKey;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String fallbackText
    // Size: 0x8
    // Offset: 0x50
    ::StringW fallbackText;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.UI.Text textBox
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Text*& dyn_textBox();
    // Get instance field reference: private UnityEngine.Color newUpdateColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_newUpdateColor();
    // Get instance field reference: private UnityEngine.Color defaultTextColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_defaultTextColor();
    // Get instance field reference: private System.String playfabKey
    [[deprecated("Use field access instead!")]] ::StringW& dyn_playfabKey();
    // Get instance field reference: private System.String fallbackText
    [[deprecated("Use field access instead!")]] ::StringW& dyn_fallbackText();
    // private System.Void Start()
    // Offset: 0x274144C
    void Start();
    // private System.Void OnPlayFabError(PlayFab.PlayFabError error)
    // Offset: 0x2741628
    void OnPlayFabError(::PlayFab::PlayFabError* error);
    // private System.Void OnTitleDataRequestComplete(System.String titleDataResult)
    // Offset: 0x2741654
    void OnTitleDataRequestComplete(::StringW titleDataResult);
    // private System.Void OnNewTitleDataAdded(System.String key)
    // Offset: 0x2741778
    void OnNewTitleDataAdded(::StringW key);
    // private System.Void OnDestroy()
    // Offset: 0x27417C8
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0x274189C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayFabTitleDataTextDisplay* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlayFabTitleDataTextDisplay::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayFabTitleDataTextDisplay*, creationType>()));
    }
  }; // PlayFabTitleDataTextDisplay
  #pragma pack(pop)
  static check_size<sizeof(PlayFabTitleDataTextDisplay), 80 + sizeof(::StringW)> __GlobalNamespace_PlayFabTitleDataTextDisplaySizeCheck;
  static_assert(sizeof(PlayFabTitleDataTextDisplay) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayFabTitleDataTextDisplay::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayFabTitleDataTextDisplay::*)()>(&GlobalNamespace::PlayFabTitleDataTextDisplay::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayFabTitleDataTextDisplay*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayFabTitleDataTextDisplay::OnPlayFabError
// Il2CppName: OnPlayFabError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayFabTitleDataTextDisplay::*)(::PlayFab::PlayFabError*)>(&GlobalNamespace::PlayFabTitleDataTextDisplay::OnPlayFabError)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("PlayFab", "PlayFabError")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayFabTitleDataTextDisplay*), "OnPlayFabError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayFabTitleDataTextDisplay::OnTitleDataRequestComplete
// Il2CppName: OnTitleDataRequestComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayFabTitleDataTextDisplay::*)(::StringW)>(&GlobalNamespace::PlayFabTitleDataTextDisplay::OnTitleDataRequestComplete)> {
  static const MethodInfo* get() {
    static auto* titleDataResult = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayFabTitleDataTextDisplay*), "OnTitleDataRequestComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{titleDataResult});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayFabTitleDataTextDisplay::OnNewTitleDataAdded
// Il2CppName: OnNewTitleDataAdded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayFabTitleDataTextDisplay::*)(::StringW)>(&GlobalNamespace::PlayFabTitleDataTextDisplay::OnNewTitleDataAdded)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayFabTitleDataTextDisplay*), "OnNewTitleDataAdded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayFabTitleDataTextDisplay::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayFabTitleDataTextDisplay::*)()>(&GlobalNamespace::PlayFabTitleDataTextDisplay::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayFabTitleDataTextDisplay*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayFabTitleDataTextDisplay::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
