// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UI.DefaultControls
#include "UnityEngine/UI/DefaultControls.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::DefaultControls::Resources, "UnityEngine.UI", "DefaultControls/Resources");
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x38
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.UI.DefaultControls/Resources
  // [TokenAttribute] Offset: FFFFFFFF
  struct DefaultControls::Resources/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityEngine.Sprite standard
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::Sprite* standard;
    // Field size check
    static_assert(sizeof(::UnityEngine::Sprite*) == 0x8);
    // public UnityEngine.Sprite background
    // Size: 0x8
    // Offset: 0x8
    ::UnityEngine::Sprite* background;
    // Field size check
    static_assert(sizeof(::UnityEngine::Sprite*) == 0x8);
    // public UnityEngine.Sprite inputField
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Sprite* inputField;
    // Field size check
    static_assert(sizeof(::UnityEngine::Sprite*) == 0x8);
    // public UnityEngine.Sprite knob
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Sprite* knob;
    // Field size check
    static_assert(sizeof(::UnityEngine::Sprite*) == 0x8);
    // public UnityEngine.Sprite checkmark
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Sprite* checkmark;
    // Field size check
    static_assert(sizeof(::UnityEngine::Sprite*) == 0x8);
    // public UnityEngine.Sprite dropdown
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Sprite* dropdown;
    // Field size check
    static_assert(sizeof(::UnityEngine::Sprite*) == 0x8);
    // public UnityEngine.Sprite mask
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Sprite* mask;
    // Field size check
    static_assert(sizeof(::UnityEngine::Sprite*) == 0x8);
    public:
    // Creating value type constructor for type: Resources
    constexpr Resources(::UnityEngine::Sprite* standard_ = {}, ::UnityEngine::Sprite* background_ = {}, ::UnityEngine::Sprite* inputField_ = {}, ::UnityEngine::Sprite* knob_ = {}, ::UnityEngine::Sprite* checkmark_ = {}, ::UnityEngine::Sprite* dropdown_ = {}, ::UnityEngine::Sprite* mask_ = {}) noexcept : standard{standard_}, background{background_}, inputField{inputField_}, knob{knob_}, checkmark{checkmark_}, dropdown{dropdown_}, mask{mask_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public UnityEngine.Sprite standard
    [[deprecated("Use field access instead!")]] ::UnityEngine::Sprite*& dyn_standard();
    // Get instance field reference: public UnityEngine.Sprite background
    [[deprecated("Use field access instead!")]] ::UnityEngine::Sprite*& dyn_background();
    // Get instance field reference: public UnityEngine.Sprite inputField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Sprite*& dyn_inputField();
    // Get instance field reference: public UnityEngine.Sprite knob
    [[deprecated("Use field access instead!")]] ::UnityEngine::Sprite*& dyn_knob();
    // Get instance field reference: public UnityEngine.Sprite checkmark
    [[deprecated("Use field access instead!")]] ::UnityEngine::Sprite*& dyn_checkmark();
    // Get instance field reference: public UnityEngine.Sprite dropdown
    [[deprecated("Use field access instead!")]] ::UnityEngine::Sprite*& dyn_dropdown();
    // Get instance field reference: public UnityEngine.Sprite mask
    [[deprecated("Use field access instead!")]] ::UnityEngine::Sprite*& dyn_mask();
  }; // UnityEngine.UI.DefaultControls/Resources
  #pragma pack(pop)
  static check_size<sizeof(DefaultControls::Resources), 48 + sizeof(::UnityEngine::Sprite*)> __UnityEngine_UI_DefaultControls_ResourcesSizeCheck;
  static_assert(sizeof(DefaultControls::Resources) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
