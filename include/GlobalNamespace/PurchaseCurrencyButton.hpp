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
  // Forward declaring type: PurchaseCurrencyButton
  class PurchaseCurrencyButton;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PurchaseCurrencyButton);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PurchaseCurrencyButton*, "", "PurchaseCurrencyButton");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x7C
  #pragma pack(push, 1)
  // Autogenerated type: PurchaseCurrencyButton
  // [TokenAttribute] Offset: FFFFFFFF
  class PurchaseCurrencyButton : public ::GlobalNamespace::GorillaPressableButton {
    public:
    // Nested type: ::GlobalNamespace::PurchaseCurrencyButton::$ButtonColorUpdate$d__3
    class $ButtonColorUpdate$d__3;
    public:
    // public System.String purchaseCurrencySize
    // Size: 0x8
    // Offset: 0x70
    ::StringW purchaseCurrencySize;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Single buttonFadeTime
    // Size: 0x4
    // Offset: 0x78
    float buttonFadeTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.String purchaseCurrencySize
    [[deprecated("Use field access instead!")]] ::StringW& dyn_purchaseCurrencySize();
    // Get instance field reference: public System.Single buttonFadeTime
    [[deprecated("Use field access instead!")]] float& dyn_buttonFadeTime();
    // private System.Collections.IEnumerator ButtonColorUpdate()
    // Offset: 0x26CDB74
    ::System::Collections::IEnumerator* ButtonColorUpdate();
    // public override System.Void ButtonActivation()
    // Offset: 0x26CDAEC
    // Implemented from: GorillaPressableButton
    // Base method: System.Void GorillaPressableButton::ButtonActivation()
    void ButtonActivation();
    // public System.Void .ctor()
    // Offset: 0x26CDC08
    // Implemented from: GorillaPressableButton
    // Base method: System.Void GorillaPressableButton::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PurchaseCurrencyButton* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PurchaseCurrencyButton::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PurchaseCurrencyButton*, creationType>()));
    }
  }; // PurchaseCurrencyButton
  #pragma pack(pop)
  static check_size<sizeof(PurchaseCurrencyButton), 120 + sizeof(float)> __GlobalNamespace_PurchaseCurrencyButtonSizeCheck;
  static_assert(sizeof(PurchaseCurrencyButton) == 0x7C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PurchaseCurrencyButton::ButtonColorUpdate
// Il2CppName: ButtonColorUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::PurchaseCurrencyButton::*)()>(&GlobalNamespace::PurchaseCurrencyButton::ButtonColorUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PurchaseCurrencyButton*), "ButtonColorUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PurchaseCurrencyButton::ButtonActivation
// Il2CppName: ButtonActivation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PurchaseCurrencyButton::*)()>(&GlobalNamespace::PurchaseCurrencyButton::ButtonActivation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PurchaseCurrencyButton*), "ButtonActivation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PurchaseCurrencyButton::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
