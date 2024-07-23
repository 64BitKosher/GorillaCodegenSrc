// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: CosmeticButton
#include "GlobalNamespace/CosmeticButton.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CosmeticCategoryButton
  class CosmeticCategoryButton;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CosmeticCategoryButton);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CosmeticCategoryButton*, "", "CosmeticCategoryButton");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xB8
  #pragma pack(push, 1)
  // Autogenerated type: CosmeticCategoryButton
  // [TokenAttribute] Offset: FFFFFFFF
  class CosmeticCategoryButton : public ::GlobalNamespace::CosmeticButton {
    public:
    public:
    // private UnityEngine.UI.Image equippedIcon
    // Size: 0x8
    // Offset: 0xA0
    ::UnityEngine::UI::Image* equippedIcon;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.UI.Image equippedLeftIcon
    // Size: 0x8
    // Offset: 0xA8
    ::UnityEngine::UI::Image* equippedLeftIcon;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.UI.Image equippedRightIcon
    // Size: 0x8
    // Offset: 0xB0
    ::UnityEngine::UI::Image* equippedRightIcon;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Image*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.UI.Image equippedIcon
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Image*& dyn_equippedIcon();
    // Get instance field reference: private UnityEngine.UI.Image equippedLeftIcon
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Image*& dyn_equippedLeftIcon();
    // Get instance field reference: private UnityEngine.UI.Image equippedRightIcon
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Image*& dyn_equippedRightIcon();
    // public System.Void SetIcon(UnityEngine.Sprite sprite)
    // Offset: 0x26D0A68
    void SetIcon(::UnityEngine::Sprite* sprite);
    // public System.Void SetDualIcon(UnityEngine.Sprite leftSprite, UnityEngine.Sprite rightSprite)
    // Offset: 0x26D0B20
    void SetDualIcon(::UnityEngine::Sprite* leftSprite, ::UnityEngine::Sprite* rightSprite);
    // public System.Void .ctor()
    // Offset: 0x26D0C0C
    // Implemented from: CosmeticButton
    // Base method: System.Void CosmeticButton::.ctor()
    // Base method: System.Void GorillaPressableButton::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CosmeticCategoryButton* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CosmeticCategoryButton::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CosmeticCategoryButton*, creationType>()));
    }
  }; // CosmeticCategoryButton
  #pragma pack(pop)
  static check_size<sizeof(CosmeticCategoryButton), 176 + sizeof(::UnityEngine::UI::Image*)> __GlobalNamespace_CosmeticCategoryButtonSizeCheck;
  static_assert(sizeof(CosmeticCategoryButton) == 0xB8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CosmeticCategoryButton::SetIcon
// Il2CppName: SetIcon
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CosmeticCategoryButton::*)(::UnityEngine::Sprite*)>(&GlobalNamespace::CosmeticCategoryButton::SetIcon)> {
  static const MethodInfo* get() {
    static auto* sprite = &::il2cpp_utils::GetClassFromName("UnityEngine", "Sprite")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CosmeticCategoryButton*), "SetIcon", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sprite});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CosmeticCategoryButton::SetDualIcon
// Il2CppName: SetDualIcon
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CosmeticCategoryButton::*)(::UnityEngine::Sprite*, ::UnityEngine::Sprite*)>(&GlobalNamespace::CosmeticCategoryButton::SetDualIcon)> {
  static const MethodInfo* get() {
    static auto* leftSprite = &::il2cpp_utils::GetClassFromName("UnityEngine", "Sprite")->byval_arg;
    static auto* rightSprite = &::il2cpp_utils::GetClassFromName("UnityEngine", "Sprite")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CosmeticCategoryButton*), "SetDualIcon", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{leftSprite, rightSprite});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CosmeticCategoryButton::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
