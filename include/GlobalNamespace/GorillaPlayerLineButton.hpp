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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: Collider
  class Collider;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GorillaPlayerScoreboardLine
  class GorillaPlayerScoreboardLine;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Text
  class Text;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GorillaPlayerLineButton
  class GorillaPlayerLineButton;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GorillaPlayerLineButton);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GorillaPlayerLineButton*, "", "GorillaPlayerLineButton");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x71
  #pragma pack(push, 1)
  // Autogenerated type: GorillaPlayerLineButton
  // [TokenAttribute] Offset: FFFFFFFF
  class GorillaPlayerLineButton : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::GorillaPlayerLineButton::ButtonType
    struct ButtonType;
    // Nested type: ::GlobalNamespace::GorillaPlayerLineButton::$TestPressCheck$d__17
    class $TestPressCheck$d__17;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: GorillaPlayerLineButton/ButtonType
    // [TokenAttribute] Offset: FFFFFFFF
    struct ButtonType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: ButtonType
      constexpr ButtonType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public GorillaPlayerLineButton/ButtonType HateSpeech
      static constexpr const int HateSpeech = 0;
      // Get static field: static public GorillaPlayerLineButton/ButtonType HateSpeech
      static ::GlobalNamespace::GorillaPlayerLineButton::ButtonType _get_HateSpeech();
      // Set static field: static public GorillaPlayerLineButton/ButtonType HateSpeech
      static void _set_HateSpeech(::GlobalNamespace::GorillaPlayerLineButton::ButtonType value);
      // static field const value: static public GorillaPlayerLineButton/ButtonType Cheating
      static constexpr const int Cheating = 1;
      // Get static field: static public GorillaPlayerLineButton/ButtonType Cheating
      static ::GlobalNamespace::GorillaPlayerLineButton::ButtonType _get_Cheating();
      // Set static field: static public GorillaPlayerLineButton/ButtonType Cheating
      static void _set_Cheating(::GlobalNamespace::GorillaPlayerLineButton::ButtonType value);
      // static field const value: static public GorillaPlayerLineButton/ButtonType Toxicity
      static constexpr const int Toxicity = 2;
      // Get static field: static public GorillaPlayerLineButton/ButtonType Toxicity
      static ::GlobalNamespace::GorillaPlayerLineButton::ButtonType _get_Toxicity();
      // Set static field: static public GorillaPlayerLineButton/ButtonType Toxicity
      static void _set_Toxicity(::GlobalNamespace::GorillaPlayerLineButton::ButtonType value);
      // static field const value: static public GorillaPlayerLineButton/ButtonType Mute
      static constexpr const int Mute = 3;
      // Get static field: static public GorillaPlayerLineButton/ButtonType Mute
      static ::GlobalNamespace::GorillaPlayerLineButton::ButtonType _get_Mute();
      // Set static field: static public GorillaPlayerLineButton/ButtonType Mute
      static void _set_Mute(::GlobalNamespace::GorillaPlayerLineButton::ButtonType value);
      // static field const value: static public GorillaPlayerLineButton/ButtonType Report
      static constexpr const int Report = 4;
      // Get static field: static public GorillaPlayerLineButton/ButtonType Report
      static ::GlobalNamespace::GorillaPlayerLineButton::ButtonType _get_Report();
      // Set static field: static public GorillaPlayerLineButton/ButtonType Report
      static void _set_Report(::GlobalNamespace::GorillaPlayerLineButton::ButtonType value);
      // static field const value: static public GorillaPlayerLineButton/ButtonType Cancel
      static constexpr const int Cancel = 5;
      // Get static field: static public GorillaPlayerLineButton/ButtonType Cancel
      static ::GlobalNamespace::GorillaPlayerLineButton::ButtonType _get_Cancel();
      // Set static field: static public GorillaPlayerLineButton/ButtonType Cancel
      static void _set_Cancel(::GlobalNamespace::GorillaPlayerLineButton::ButtonType value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // GorillaPlayerLineButton/ButtonType
    #pragma pack(pop)
    static check_size<sizeof(GorillaPlayerLineButton::ButtonType), 0 + sizeof(int)> __GlobalNamespace_GorillaPlayerLineButton_ButtonTypeSizeCheck;
    static_assert(sizeof(GorillaPlayerLineButton::ButtonType) == 0x4);
    public:
    // public GorillaPlayerScoreboardLine parentLine
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::GorillaPlayerScoreboardLine* parentLine;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GorillaPlayerScoreboardLine*) == 0x8);
    // public GorillaPlayerLineButton/ButtonType buttonType
    // Size: 0x4
    // Offset: 0x28
    ::GlobalNamespace::GorillaPlayerLineButton::ButtonType buttonType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GorillaPlayerLineButton::ButtonType) == 0x4);
    // public System.Boolean isOn
    // Size: 0x1
    // Offset: 0x2C
    bool isOn;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean isAutoOn
    // Size: 0x1
    // Offset: 0x2D
    bool isAutoOn;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isAutoOn and: offMaterial
    char __padding3[0x2] = {};
    // public UnityEngine.Material offMaterial
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Material* offMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // public UnityEngine.Material onMaterial
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Material* onMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // public UnityEngine.Material autoOnMaterial
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Material* autoOnMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // public System.String offText
    // Size: 0x8
    // Offset: 0x48
    ::StringW offText;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String onText
    // Size: 0x8
    // Offset: 0x50
    ::StringW onText;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String autoOnText
    // Size: 0x8
    // Offset: 0x58
    ::StringW autoOnText;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public UnityEngine.UI.Text myText
    // Size: 0x8
    // Offset: 0x60
    ::UnityEngine::UI::Text* myText;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Text*) == 0x8);
    // public System.Single debounceTime
    // Size: 0x4
    // Offset: 0x68
    float debounceTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single touchTime
    // Size: 0x4
    // Offset: 0x6C
    float touchTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean testPress
    // Size: 0x1
    // Offset: 0x70
    bool testPress;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public GorillaPlayerScoreboardLine parentLine
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GorillaPlayerScoreboardLine*& dyn_parentLine();
    // Get instance field reference: public GorillaPlayerLineButton/ButtonType buttonType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GorillaPlayerLineButton::ButtonType& dyn_buttonType();
    // Get instance field reference: public System.Boolean isOn
    [[deprecated("Use field access instead!")]] bool& dyn_isOn();
    // Get instance field reference: public System.Boolean isAutoOn
    [[deprecated("Use field access instead!")]] bool& dyn_isAutoOn();
    // Get instance field reference: public UnityEngine.Material offMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_offMaterial();
    // Get instance field reference: public UnityEngine.Material onMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_onMaterial();
    // Get instance field reference: public UnityEngine.Material autoOnMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_autoOnMaterial();
    // Get instance field reference: public System.String offText
    [[deprecated("Use field access instead!")]] ::StringW& dyn_offText();
    // Get instance field reference: public System.String onText
    [[deprecated("Use field access instead!")]] ::StringW& dyn_onText();
    // Get instance field reference: public System.String autoOnText
    [[deprecated("Use field access instead!")]] ::StringW& dyn_autoOnText();
    // Get instance field reference: public UnityEngine.UI.Text myText
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Text*& dyn_myText();
    // Get instance field reference: public System.Single debounceTime
    [[deprecated("Use field access instead!")]] float& dyn_debounceTime();
    // Get instance field reference: public System.Single touchTime
    [[deprecated("Use field access instead!")]] float& dyn_touchTime();
    // Get instance field reference: public System.Boolean testPress
    [[deprecated("Use field access instead!")]] bool& dyn_testPress();
    // private System.Void OnEnable()
    // Offset: 0x273ABD4
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x273ACBC
    void OnDisable();
    // private System.Collections.IEnumerator TestPressCheck()
    // Offset: 0x273AC50
    ::System::Collections::IEnumerator* TestPressCheck();
    // private System.Void OnTriggerEnter(UnityEngine.Collider collider)
    // Offset: 0x273AD54
    void OnTriggerEnter(::UnityEngine::Collider* collider);
    // private System.Void OnTriggerExit(UnityEngine.Collider other)
    // Offset: 0x273B390
    void OnTriggerExit(::UnityEngine::Collider* other);
    // public System.Void UpdateColor()
    // Offset: 0x273B444
    void UpdateColor();
    // public System.Void .ctor()
    // Offset: 0x273B520
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GorillaPlayerLineButton* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GorillaPlayerLineButton::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GorillaPlayerLineButton*, creationType>()));
    }
  }; // GorillaPlayerLineButton
  #pragma pack(pop)
  static check_size<sizeof(GorillaPlayerLineButton), 112 + sizeof(bool)> __GlobalNamespace_GorillaPlayerLineButtonSizeCheck;
  static_assert(sizeof(GorillaPlayerLineButton) == 0x71);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GorillaPlayerLineButton::ButtonType, "", "GorillaPlayerLineButton/ButtonType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GorillaPlayerLineButton::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaPlayerLineButton::*)()>(&GlobalNamespace::GorillaPlayerLineButton::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaPlayerLineButton*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaPlayerLineButton::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaPlayerLineButton::*)()>(&GlobalNamespace::GorillaPlayerLineButton::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaPlayerLineButton*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaPlayerLineButton::TestPressCheck
// Il2CppName: TestPressCheck
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::GorillaPlayerLineButton::*)()>(&GlobalNamespace::GorillaPlayerLineButton::TestPressCheck)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaPlayerLineButton*), "TestPressCheck", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaPlayerLineButton::OnTriggerEnter
// Il2CppName: OnTriggerEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaPlayerLineButton::*)(::UnityEngine::Collider*)>(&GlobalNamespace::GorillaPlayerLineButton::OnTriggerEnter)> {
  static const MethodInfo* get() {
    static auto* collider = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaPlayerLineButton*), "OnTriggerEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{collider});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaPlayerLineButton::OnTriggerExit
// Il2CppName: OnTriggerExit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaPlayerLineButton::*)(::UnityEngine::Collider*)>(&GlobalNamespace::GorillaPlayerLineButton::OnTriggerExit)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaPlayerLineButton*), "OnTriggerExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaPlayerLineButton::UpdateColor
// Il2CppName: UpdateColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaPlayerLineButton::*)()>(&GlobalNamespace::GorillaPlayerLineButton::UpdateColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaPlayerLineButton*), "UpdateColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaPlayerLineButton::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
