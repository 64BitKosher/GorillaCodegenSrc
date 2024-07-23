// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GorillaPressableButton
#include "GlobalNamespace/GorillaPressableButton.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: WardrobeFunctionButton
  class WardrobeFunctionButton;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::WardrobeFunctionButton);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::WardrobeFunctionButton*, "", "WardrobeFunctionButton");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x7C
  #pragma pack(push, 1)
  // Autogenerated type: WardrobeFunctionButton
  // [TokenAttribute] Offset: FFFFFFFF
  class WardrobeFunctionButton : public ::GlobalNamespace::GorillaPressableButton {
    public:
    // Nested type: ::GlobalNamespace::WardrobeFunctionButton::$ButtonColorUpdate$d__4
    class $ButtonColorUpdate$d__4;
    public:
    // public System.String function
    // Size: 0x8
    // Offset: 0x70
    ::StringW function;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Single buttonFadeTime
    // Size: 0x4
    // Offset: 0x78
    float buttonFadeTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.String function
    [[deprecated("Use field access instead!")]] ::StringW& dyn_function();
    // Get instance field reference: public System.Single buttonFadeTime
    [[deprecated("Use field access instead!")]] float& dyn_buttonFadeTime();
    // private System.Collections.IEnumerator ButtonColorUpdate()
    // Offset: 0x26D4BB8
    ::System::Collections::IEnumerator* ButtonColorUpdate();
    // public override System.Void ButtonActivation()
    // Offset: 0x26D4B30
    // Implemented from: GorillaPressableButton
    // Base method: System.Void GorillaPressableButton::ButtonActivation()
    void ButtonActivation();
    // public override System.Void UpdateColor()
    // Offset: 0x26D4C24
    // Implemented from: GorillaPressableButton
    // Base method: System.Void GorillaPressableButton::UpdateColor()
    void UpdateColor();
    // public System.Void .ctor()
    // Offset: 0x26D4C50
    // Implemented from: GorillaPressableButton
    // Base method: System.Void GorillaPressableButton::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WardrobeFunctionButton* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::WardrobeFunctionButton::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WardrobeFunctionButton*, creationType>()));
    }
  }; // WardrobeFunctionButton
  #pragma pack(pop)
  static check_size<sizeof(WardrobeFunctionButton), 120 + sizeof(float)> __GlobalNamespace_WardrobeFunctionButtonSizeCheck;
  static_assert(sizeof(WardrobeFunctionButton) == 0x7C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::WardrobeFunctionButton::ButtonColorUpdate
// Il2CppName: ButtonColorUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::WardrobeFunctionButton::*)()>(&GlobalNamespace::WardrobeFunctionButton::ButtonColorUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WardrobeFunctionButton*), "ButtonColorUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WardrobeFunctionButton::ButtonActivation
// Il2CppName: ButtonActivation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WardrobeFunctionButton::*)()>(&GlobalNamespace::WardrobeFunctionButton::ButtonActivation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WardrobeFunctionButton*), "ButtonActivation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WardrobeFunctionButton::UpdateColor
// Il2CppName: UpdateColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WardrobeFunctionButton::*)()>(&GlobalNamespace::WardrobeFunctionButton::UpdateColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WardrobeFunctionButton*), "UpdateColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WardrobeFunctionButton::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
