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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: WatchableStringSO
  class WatchableStringSO;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Text
  class Text;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: TextWatcher
  class TextWatcher;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TextWatcher);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TextWatcher*, "", "TextWatcher");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: TextWatcher
  // [TokenAttribute] Offset: FFFFFFFF
  class TextWatcher : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public WatchableStringSO textToCopy
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::WatchableStringSO* textToCopy;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::WatchableStringSO*) == 0x8);
    // private UnityEngine.UI.Text myText
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::UI::Text* myText;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Text*) == 0x8);
    public:
    // Get instance field reference: public WatchableStringSO textToCopy
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::WatchableStringSO*& dyn_textToCopy();
    // Get instance field reference: private UnityEngine.UI.Text myText
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Text*& dyn_myText();
    // private System.Void Start()
    // Offset: 0x2732DE0
    void Start();
    // private System.Void OnDestroy()
    // Offset: 0x2732EA4
    void OnDestroy();
    // private System.Void OnTextChanged(System.String newText)
    // Offset: 0x2732F34
    void OnTextChanged(::StringW newText);
    // public System.Void .ctor()
    // Offset: 0x2732F58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextWatcher* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TextWatcher::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextWatcher*, creationType>()));
    }
  }; // TextWatcher
  #pragma pack(pop)
  static check_size<sizeof(TextWatcher), 40 + sizeof(::UnityEngine::UI::Text*)> __GlobalNamespace_TextWatcherSizeCheck;
  static_assert(sizeof(TextWatcher) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TextWatcher::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TextWatcher::*)()>(&GlobalNamespace::TextWatcher::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TextWatcher*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TextWatcher::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TextWatcher::*)()>(&GlobalNamespace::TextWatcher::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TextWatcher*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TextWatcher::OnTextChanged
// Il2CppName: OnTextChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TextWatcher::*)(::StringW)>(&GlobalNamespace::TextWatcher::OnTextChanged)> {
  static const MethodInfo* get() {
    static auto* newText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TextWatcher*), "OnTextChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newText});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TextWatcher::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
