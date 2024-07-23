// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.XR.InputDevice
#include "UnityEngine/XR/InputDevice.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LegalAgreementTextAsset
  class LegalAgreementTextAsset;
  // Forward declaring type: LegalAgreementBodyText
  class LegalAgreementBodyText;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: ScrollRect
  class ScrollRect;
  // Forward declaring type: Text
  class Text;
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CanvasGroup
  class CanvasGroup;
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LegalAgreements
  class LegalAgreements;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LegalAgreements);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LegalAgreements*, "", "LegalAgreements");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xB8
  #pragma pack(push, 1)
  // Autogenerated type: LegalAgreements
  // [TokenAttribute] Offset: FFFFFFFF
  class LegalAgreements : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::LegalAgreements::$$c
    class $$c;
    // Nested type: ::GlobalNamespace::LegalAgreements::$$c__DisplayClass26_0
    class $$c__DisplayClass26_0;
    // Nested type: ::GlobalNamespace::LegalAgreements::$$c__DisplayClass27_0
    class $$c__DisplayClass27_0;
    // Nested type: ::GlobalNamespace::LegalAgreements::$$c__DisplayClass28_0
    class $$c__DisplayClass28_0;
    // Nested type: ::GlobalNamespace::LegalAgreements::$FadeBackgroundColor$d__25
    struct $FadeBackgroundColor$d__25;
    // Nested type: ::GlobalNamespace::LegalAgreements::$FadeGroup$d__24
    struct $FadeGroup$d__24;
    // Nested type: ::GlobalNamespace::LegalAgreements::$GetAcceptedAgreements$d__27
    struct $GetAcceptedAgreements$d__27;
    // Nested type: ::GlobalNamespace::LegalAgreements::$GetTitleDataAsync$d__26
    struct $GetTitleDataAsync$d__26;
    // Nested type: ::GlobalNamespace::LegalAgreements::$Start$d__20
    struct $Start$d__20;
    // Nested type: ::GlobalNamespace::LegalAgreements::$SubmitAcceptedAgreements$d__28
    struct $SubmitAcceptedAgreements$d__28;
    // Nested type: ::GlobalNamespace::LegalAgreements::$UpdateText$d__23
    struct $UpdateText$d__23;
    // Nested type: ::GlobalNamespace::LegalAgreements::$WaitForAcknowledgement$d__22
    struct $WaitForAcknowledgement$d__22;
    public:
    // private UnityEngine.UI.ScrollRect scrollView
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::UI::ScrollRect* scrollView;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::ScrollRect*) == 0x8);
    // private System.Single scrollSpeed
    // Size: 0x4
    // Offset: 0x28
    float scrollSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single holdTime
    // Size: 0x4
    // Offset: 0x2C
    float holdTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private LegalAgreementTextAsset[] legalAgreementScreens
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::GlobalNamespace::LegalAgreementTextAsset*> legalAgreementScreens;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::LegalAgreementTextAsset*>) == 0x8);
    // private UnityEngine.UI.Text title
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::UI::Text* title;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Text*) == 0x8);
    // private UnityEngine.UI.Text acknowledgementPrompt
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::UI::Text* acknowledgementPrompt;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Text*) == 0x8);
    // private LegalAgreementBodyText body
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::LegalAgreementBodyText* body;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LegalAgreementBodyText*) == 0x8);
    // private UnityEngine.UI.Image progressImage
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::UI::Image* progressImage;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.CanvasGroup canvasGroup
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::CanvasGroup* canvasGroup;
    // Field size check
    static_assert(sizeof(::UnityEngine::CanvasGroup*) == 0x8);
    // private UnityEngine.Camera cam
    // Size: 0x8
    // Offset: 0x60
    ::UnityEngine::Camera* cam;
    // Field size check
    static_assert(sizeof(::UnityEngine::Camera*) == 0x8);
    // public System.Boolean testAgreement
    // Size: 0x1
    // Offset: 0x68
    bool testAgreement;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean testSubmitResult
    // Size: 0x1
    // Offset: 0x69
    bool testSubmitResult;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean testFaceButtonPress
    // Size: 0x1
    // Offset: 0x6A
    bool testFaceButtonPress;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: testFaceButtonPress and: cullingMask
    char __padding12[0x1] = {};
    // private System.Int32 cullingMask
    // Size: 0x4
    // Offset: 0x6C
    int cullingMask;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.GameObject UIParent
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::GameObject* UIParent;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.XR.InputDevice leftHandDevice
    // Size: 0x9
    // Offset: 0x78
    ::UnityEngine::XR::InputDevice leftHandDevice;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::InputDevice) == 0x9);
    // Padding between fields: leftHandDevice and: rightHandDevice
    char __padding15[0x7] = {};
    // private UnityEngine.XR.InputDevice rightHandDevice
    // Size: 0x9
    // Offset: 0x88
    ::UnityEngine::XR::InputDevice rightHandDevice;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::InputDevice) == 0x9);
    // Padding between fields: rightHandDevice and: camBackgroundColor
    char __padding16[0x7] = {};
    // private UnityEngine.Color camBackgroundColor
    // Size: 0x10
    // Offset: 0x98
    ::UnityEngine::Color camBackgroundColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color originalColor
    // Size: 0x10
    // Offset: 0xA8
    ::UnityEngine::Color originalColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    public:
    // Get instance field reference: private UnityEngine.UI.ScrollRect scrollView
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::ScrollRect*& dyn_scrollView();
    // Get instance field reference: private System.Single scrollSpeed
    [[deprecated("Use field access instead!")]] float& dyn_scrollSpeed();
    // Get instance field reference: private System.Single holdTime
    [[deprecated("Use field access instead!")]] float& dyn_holdTime();
    // Get instance field reference: private LegalAgreementTextAsset[] legalAgreementScreens
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::LegalAgreementTextAsset*>& dyn_legalAgreementScreens();
    // Get instance field reference: private UnityEngine.UI.Text title
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Text*& dyn_title();
    // Get instance field reference: private UnityEngine.UI.Text acknowledgementPrompt
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Text*& dyn_acknowledgementPrompt();
    // Get instance field reference: private LegalAgreementBodyText body
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LegalAgreementBodyText*& dyn_body();
    // Get instance field reference: private UnityEngine.UI.Image progressImage
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Image*& dyn_progressImage();
    // Get instance field reference: private UnityEngine.CanvasGroup canvasGroup
    [[deprecated("Use field access instead!")]] ::UnityEngine::CanvasGroup*& dyn_canvasGroup();
    // Get instance field reference: private UnityEngine.Camera cam
    [[deprecated("Use field access instead!")]] ::UnityEngine::Camera*& dyn_cam();
    // Get instance field reference: public System.Boolean testAgreement
    [[deprecated("Use field access instead!")]] bool& dyn_testAgreement();
    // Get instance field reference: public System.Boolean testSubmitResult
    [[deprecated("Use field access instead!")]] bool& dyn_testSubmitResult();
    // Get instance field reference: public System.Boolean testFaceButtonPress
    [[deprecated("Use field access instead!")]] bool& dyn_testFaceButtonPress();
    // Get instance field reference: private System.Int32 cullingMask
    [[deprecated("Use field access instead!")]] int& dyn_cullingMask();
    // Get instance field reference: private UnityEngine.GameObject UIParent
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_UIParent();
    // Get instance field reference: private UnityEngine.XR.InputDevice leftHandDevice
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::InputDevice& dyn_leftHandDevice();
    // Get instance field reference: private UnityEngine.XR.InputDevice rightHandDevice
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::InputDevice& dyn_rightHandDevice();
    // Get instance field reference: private UnityEngine.Color camBackgroundColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_camBackgroundColor();
    // Get instance field reference: private UnityEngine.Color originalColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_originalColor();
    // private System.Void Awake()
    // Offset: 0x2752EF8
    void Awake();
    // private System.Void Start()
    // Offset: 0x2752EFC
    void Start();
    // private System.Void Update()
    // Offset: 0x2752FB0
    void Update();
    // private System.Threading.Tasks.Task WaitForAcknowledgement()
    // Offset: 0x27530F0
    ::System::Threading::Tasks::Task* WaitForAcknowledgement();
    // private System.Threading.Tasks.Task`1<System.Boolean> UpdateText(LegalAgreementTextAsset asset, System.String version)
    // Offset: 0x27531D4
    ::System::Threading::Tasks::Task_1<bool>* UpdateText(::GlobalNamespace::LegalAgreementTextAsset* asset, ::StringW version);
    // private System.Threading.Tasks.Task FadeGroup(UnityEngine.CanvasGroup canvasGroup, System.Single finalAlpha, System.Single time)
    // Offset: 0x2753310
    ::System::Threading::Tasks::Task* FadeGroup(::UnityEngine::CanvasGroup* canvasGroup, float finalAlpha, float time);
    // private System.Threading.Tasks.Task FadeBackgroundColor(UnityEngine.Color targetColor, System.Single time)
    // Offset: 0x2753408
    ::System::Threading::Tasks::Task* FadeBackgroundColor(::UnityEngine::Color targetColor, float time);
    // private System.Threading.Tasks.Task`1<System.String> GetTitleDataAsync(System.String key)
    // Offset: 0x275352C
    ::System::Threading::Tasks::Task_1<::StringW>* GetTitleDataAsync(::StringW key);
    // private System.Threading.Tasks.Task`1<System.Collections.Generic.Dictionary`2<System.String,System.String>> GetAcceptedAgreements(LegalAgreementTextAsset[] agreements)
    // Offset: 0x275362C
    ::System::Threading::Tasks::Task_1<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>* GetAcceptedAgreements(::ArrayW<::GlobalNamespace::LegalAgreementTextAsset*> agreements);
    // private System.Threading.Tasks.Task SubmitAcceptedAgreements(System.Collections.Generic.Dictionary`2<System.String,System.String> agreements)
    // Offset: 0x275372C
    ::System::Threading::Tasks::Task* SubmitAcceptedAgreements(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* agreements);
    // public System.Void .ctor()
    // Offset: 0x2753814
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LegalAgreements* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LegalAgreements::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LegalAgreements*, creationType>()));
    }
  }; // LegalAgreements
  #pragma pack(pop)
  static check_size<sizeof(LegalAgreements), 168 + sizeof(::UnityEngine::Color)> __GlobalNamespace_LegalAgreementsSizeCheck;
  static_assert(sizeof(LegalAgreements) == 0xB8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LegalAgreements::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LegalAgreements::*)()>(&GlobalNamespace::LegalAgreements::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LegalAgreements*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LegalAgreements::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LegalAgreements::*)()>(&GlobalNamespace::LegalAgreements::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LegalAgreements*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LegalAgreements::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LegalAgreements::*)()>(&GlobalNamespace::LegalAgreements::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LegalAgreements*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LegalAgreements::WaitForAcknowledgement
// Il2CppName: WaitForAcknowledgement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (GlobalNamespace::LegalAgreements::*)()>(&GlobalNamespace::LegalAgreements::WaitForAcknowledgement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LegalAgreements*), "WaitForAcknowledgement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LegalAgreements::UpdateText
// Il2CppName: UpdateText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (GlobalNamespace::LegalAgreements::*)(::GlobalNamespace::LegalAgreementTextAsset*, ::StringW)>(&GlobalNamespace::LegalAgreements::UpdateText)> {
  static const MethodInfo* get() {
    static auto* asset = &::il2cpp_utils::GetClassFromName("", "LegalAgreementTextAsset")->byval_arg;
    static auto* version = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LegalAgreements*), "UpdateText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asset, version});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LegalAgreements::FadeGroup
// Il2CppName: FadeGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (GlobalNamespace::LegalAgreements::*)(::UnityEngine::CanvasGroup*, float, float)>(&GlobalNamespace::LegalAgreements::FadeGroup)> {
  static const MethodInfo* get() {
    static auto* canvasGroup = &::il2cpp_utils::GetClassFromName("UnityEngine", "CanvasGroup")->byval_arg;
    static auto* finalAlpha = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LegalAgreements*), "FadeGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{canvasGroup, finalAlpha, time});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LegalAgreements::FadeBackgroundColor
// Il2CppName: FadeBackgroundColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (GlobalNamespace::LegalAgreements::*)(::UnityEngine::Color, float)>(&GlobalNamespace::LegalAgreements::FadeBackgroundColor)> {
  static const MethodInfo* get() {
    static auto* targetColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LegalAgreements*), "FadeBackgroundColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetColor, time});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LegalAgreements::GetTitleDataAsync
// Il2CppName: GetTitleDataAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (GlobalNamespace::LegalAgreements::*)(::StringW)>(&GlobalNamespace::LegalAgreements::GetTitleDataAsync)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LegalAgreements*), "GetTitleDataAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LegalAgreements::GetAcceptedAgreements
// Il2CppName: GetAcceptedAgreements
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>* (GlobalNamespace::LegalAgreements::*)(::ArrayW<::GlobalNamespace::LegalAgreementTextAsset*>)>(&GlobalNamespace::LegalAgreements::GetAcceptedAgreements)> {
  static const MethodInfo* get() {
    static auto* agreements = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "LegalAgreementTextAsset"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LegalAgreements*), "GetAcceptedAgreements", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{agreements});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LegalAgreements::SubmitAcceptedAgreements
// Il2CppName: SubmitAcceptedAgreements
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (GlobalNamespace::LegalAgreements::*)(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(&GlobalNamespace::LegalAgreements::SubmitAcceptedAgreements)> {
  static const MethodInfo* get() {
    static auto* agreements = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LegalAgreements*), "SubmitAcceptedAgreements", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{agreements});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LegalAgreements::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
