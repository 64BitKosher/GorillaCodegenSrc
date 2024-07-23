// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: XSceneRef
#include "GlobalNamespace/XSceneRef.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GorillaNetworking
namespace GorillaNetworking {
  // Forward declaring type: GorillaNetworkJoinTrigger
  class GorillaNetworkJoinTrigger;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Text
  class Text;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: JoinTriggerUITemplate
  class JoinTriggerUITemplate;
  // Forward declaring type: JoinTriggerVisualState
  struct JoinTriggerVisualState;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: JoinTriggerUI
  class JoinTriggerUI;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::JoinTriggerUI);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::JoinTriggerUI*, "", "JoinTriggerUI");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA9
  #pragma pack(push, 1)
  // Autogenerated type: JoinTriggerUI
  // [TokenAttribute] Offset: FFFFFFFF
  class JoinTriggerUI : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private XSceneRef joinTriggerRef
    // Size: 0x11
    // Offset: 0x20
    ::GlobalNamespace::XSceneRef joinTriggerRef;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::XSceneRef) == 0x11);
    // Padding between fields: joinTriggerRef and: joinTrigger
    char __padding0[0x7] = {};
    // private GorillaNetworking.GorillaNetworkJoinTrigger joinTrigger
    // Size: 0x8
    // Offset: 0x38
    ::GorillaNetworking::GorillaNetworkJoinTrigger* joinTrigger;
    // Field size check
    static_assert(sizeof(::GorillaNetworking::GorillaNetworkJoinTrigger*) == 0x8);
    // private XSceneRef milestoneRendererRef
    // Size: 0x11
    // Offset: 0x40
    ::GlobalNamespace::XSceneRef milestoneRendererRef;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::XSceneRef) == 0x11);
    // Padding between fields: milestoneRendererRef and: milestoneRenderer
    char __padding2[0x7] = {};
    // private UnityEngine.MeshRenderer milestoneRenderer
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::MeshRenderer* milestoneRenderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshRenderer*) == 0x8);
    // private XSceneRef screenBGRendererRef
    // Size: 0x11
    // Offset: 0x60
    ::GlobalNamespace::XSceneRef screenBGRendererRef;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::XSceneRef) == 0x11);
    // Padding between fields: screenBGRendererRef and: screenBGRenderer
    char __padding4[0x7] = {};
    // private UnityEngine.MeshRenderer screenBGRenderer
    // Size: 0x8
    // Offset: 0x78
    ::UnityEngine::MeshRenderer* screenBGRenderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshRenderer*) == 0x8);
    // private XSceneRef screenTextRef
    // Size: 0x11
    // Offset: 0x80
    ::GlobalNamespace::XSceneRef screenTextRef;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::XSceneRef) == 0x11);
    // Padding between fields: screenTextRef and: screenText
    char __padding6[0x7] = {};
    // private UnityEngine.UI.Text screenText
    // Size: 0x8
    // Offset: 0x98
    ::UnityEngine::UI::Text* screenText;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Text*) == 0x8);
    // private JoinTriggerUITemplate template
    // Size: 0x8
    // Offset: 0xA0
    ::GlobalNamespace::JoinTriggerUITemplate* _template;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::JoinTriggerUITemplate*) == 0x8);
    // private System.Boolean didStart
    // Size: 0x1
    // Offset: 0xA8
    bool didStart;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private XSceneRef joinTriggerRef
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::XSceneRef& dyn_joinTriggerRef();
    // Get instance field reference: private GorillaNetworking.GorillaNetworkJoinTrigger joinTrigger
    [[deprecated("Use field access instead!")]] ::GorillaNetworking::GorillaNetworkJoinTrigger*& dyn_joinTrigger();
    // Get instance field reference: private XSceneRef milestoneRendererRef
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::XSceneRef& dyn_milestoneRendererRef();
    // Get instance field reference: private UnityEngine.MeshRenderer milestoneRenderer
    [[deprecated("Use field access instead!")]] ::UnityEngine::MeshRenderer*& dyn_milestoneRenderer();
    // Get instance field reference: private XSceneRef screenBGRendererRef
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::XSceneRef& dyn_screenBGRendererRef();
    // Get instance field reference: private UnityEngine.MeshRenderer screenBGRenderer
    [[deprecated("Use field access instead!")]] ::UnityEngine::MeshRenderer*& dyn_screenBGRenderer();
    // Get instance field reference: private XSceneRef screenTextRef
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::XSceneRef& dyn_screenTextRef();
    // Get instance field reference: private UnityEngine.UI.Text screenText
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Text*& dyn_screenText();
    // Get instance field reference: private JoinTriggerUITemplate template
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::JoinTriggerUITemplate*& dyn_template();
    // Get instance field reference: private System.Boolean didStart
    [[deprecated("Use field access instead!")]] bool& dyn_didStart();
    // private System.Void Awake()
    // Offset: 0x288CE04
    void Awake();
    // private System.Void Start()
    // Offset: 0x288CEB0
    void Start();
    // private System.Void OnEnable()
    // Offset: 0x288CEBC
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x288CEEC
    void OnDisable();
    // public System.Void SetState(JoinTriggerVisualState state, System.Func`1<System.String> oldRoom, System.Func`1<System.String> newRoom)
    // Offset: 0x288CF0C
    void SetState(::GlobalNamespace::JoinTriggerVisualState state, ::System::Func_1<::StringW>* oldRoom, ::System::Func_1<::StringW>* newRoom);
    // public System.Void .ctor()
    // Offset: 0x288D2B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JoinTriggerUI* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::JoinTriggerUI::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JoinTriggerUI*, creationType>()));
    }
  }; // JoinTriggerUI
  #pragma pack(pop)
  static check_size<sizeof(JoinTriggerUI), 168 + sizeof(bool)> __GlobalNamespace_JoinTriggerUISizeCheck;
  static_assert(sizeof(JoinTriggerUI) == 0xA9);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::JoinTriggerUI::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::JoinTriggerUI::*)()>(&GlobalNamespace::JoinTriggerUI::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::JoinTriggerUI*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::JoinTriggerUI::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::JoinTriggerUI::*)()>(&GlobalNamespace::JoinTriggerUI::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::JoinTriggerUI*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::JoinTriggerUI::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::JoinTriggerUI::*)()>(&GlobalNamespace::JoinTriggerUI::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::JoinTriggerUI*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::JoinTriggerUI::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::JoinTriggerUI::*)()>(&GlobalNamespace::JoinTriggerUI::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::JoinTriggerUI*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::JoinTriggerUI::SetState
// Il2CppName: SetState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::JoinTriggerUI::*)(::GlobalNamespace::JoinTriggerVisualState, ::System::Func_1<::StringW>*, ::System::Func_1<::StringW>*)>(&GlobalNamespace::JoinTriggerUI::SetState)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("", "JoinTriggerVisualState")->byval_arg;
    static auto* oldRoom = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    static auto* newRoom = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::JoinTriggerUI*), "SetState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state, oldRoom, newRoom});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::JoinTriggerUI::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
