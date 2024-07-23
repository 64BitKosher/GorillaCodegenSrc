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
  // Forward declaring type: TryOnPurchaseButton
  class TryOnPurchaseButton;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TryOnPurchaseButton);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TryOnPurchaseButton*, "", "TryOnPurchaseButton");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: TryOnPurchaseButton
  // [TokenAttribute] Offset: FFFFFFFF
  class TryOnPurchaseButton : public ::GlobalNamespace::GorillaPressableButton {
    public:
    // Nested type: ::GlobalNamespace::TryOnPurchaseButton::$ButtonColorUpdate$d__7
    class $ButtonColorUpdate$d__7;
    public:
    // public System.Boolean bError
    // Size: 0x1
    // Offset: 0x70
    bool bError;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: bError and: ErrorText
    char __padding0[0x7] = {};
    // public System.String ErrorText
    // Size: 0x8
    // Offset: 0x78
    ::StringW ErrorText;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String AlreadyOwnText
    // Size: 0x8
    // Offset: 0x80
    ::StringW AlreadyOwnText;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.Boolean bError
    [[deprecated("Use field access instead!")]] bool& dyn_bError();
    // Get instance field reference: public System.String ErrorText
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ErrorText();
    // Get instance field reference: public System.String AlreadyOwnText
    [[deprecated("Use field access instead!")]] ::StringW& dyn_AlreadyOwnText();
    // public System.Void Update()
    // Offset: 0x26D0290
    void Update();
    // public System.Void AlreadyOwn()
    // Offset: 0x26D04EC
    void AlreadyOwn();
    // public System.Void ResetButton()
    // Offset: 0x26D059C
    void ResetButton();
    // private System.Collections.IEnumerator ButtonColorUpdate()
    // Offset: 0x26D0480
    ::System::Collections::IEnumerator* ButtonColorUpdate();
    // public System.Void ErrorHappened()
    // Offset: 0x26D0674
    void ErrorHappened();
    // public override System.Void ButtonActivation()
    // Offset: 0x26D03E8
    // Implemented from: GorillaPressableButton
    // Base method: System.Void GorillaPressableButton::ButtonActivation()
    void ButtonActivation();
    // public System.Void .ctor()
    // Offset: 0x26D06D4
    // Implemented from: GorillaPressableButton
    // Base method: System.Void GorillaPressableButton::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TryOnPurchaseButton* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TryOnPurchaseButton::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TryOnPurchaseButton*, creationType>()));
    }
  }; // TryOnPurchaseButton
  #pragma pack(pop)
  static check_size<sizeof(TryOnPurchaseButton), 128 + sizeof(::StringW)> __GlobalNamespace_TryOnPurchaseButtonSizeCheck;
  static_assert(sizeof(TryOnPurchaseButton) == 0x88);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TryOnPurchaseButton::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TryOnPurchaseButton::*)()>(&GlobalNamespace::TryOnPurchaseButton::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TryOnPurchaseButton*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TryOnPurchaseButton::AlreadyOwn
// Il2CppName: AlreadyOwn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TryOnPurchaseButton::*)()>(&GlobalNamespace::TryOnPurchaseButton::AlreadyOwn)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TryOnPurchaseButton*), "AlreadyOwn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TryOnPurchaseButton::ResetButton
// Il2CppName: ResetButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TryOnPurchaseButton::*)()>(&GlobalNamespace::TryOnPurchaseButton::ResetButton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TryOnPurchaseButton*), "ResetButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TryOnPurchaseButton::ButtonColorUpdate
// Il2CppName: ButtonColorUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::TryOnPurchaseButton::*)()>(&GlobalNamespace::TryOnPurchaseButton::ButtonColorUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TryOnPurchaseButton*), "ButtonColorUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TryOnPurchaseButton::ErrorHappened
// Il2CppName: ErrorHappened
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TryOnPurchaseButton::*)()>(&GlobalNamespace::TryOnPurchaseButton::ErrorHappened)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TryOnPurchaseButton*), "ErrorHappened", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TryOnPurchaseButton::ButtonActivation
// Il2CppName: ButtonActivation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TryOnPurchaseButton::*)()>(&GlobalNamespace::TryOnPurchaseButton::ButtonActivation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TryOnPurchaseButton*), "ButtonActivation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TryOnPurchaseButton::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
