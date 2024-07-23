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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Photon::Pun::UtilityScripts
namespace Photon::Pun::UtilityScripts {
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: ToggleGroup
  class ToggleGroup;
  // Forward declaring type: Toggle
  class Toggle;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: Photon.Pun.UtilityScripts
namespace Photon::Pun::UtilityScripts {
  // Forward declaring type: TabViewManager
  class TabViewManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Pun::UtilityScripts::TabViewManager);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::TabViewManager*, "Photon.Pun.UtilityScripts", "TabViewManager");
// Type namespace: Photon.Pun.UtilityScripts
namespace Photon::Pun::UtilityScripts {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Pun.UtilityScripts.TabViewManager
  // [TokenAttribute] Offset: FFFFFFFF
  class TabViewManager : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::Photon::Pun::UtilityScripts::TabViewManager::TabChangeEvent
    class TabChangeEvent;
    // Nested type: ::Photon::Pun::UtilityScripts::TabViewManager::Tab
    class Tab;
    // Nested type: ::Photon::Pun::UtilityScripts::TabViewManager::$$c__DisplayClass7_0
    class $$c__DisplayClass7_0;
    public:
    // public UnityEngine.UI.ToggleGroup ToggleGroup
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::UI::ToggleGroup* ToggleGroup;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::ToggleGroup*) == 0x8);
    // public Photon.Pun.UtilityScripts.TabViewManager/Tab[] Tabs
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::Photon::Pun::UtilityScripts::TabViewManager::Tab*> Tabs;
    // Field size check
    static_assert(sizeof(::ArrayW<::Photon::Pun::UtilityScripts::TabViewManager::Tab*>) == 0x8);
    // public Photon.Pun.UtilityScripts.TabViewManager/TabChangeEvent OnTabChanged
    // Size: 0x8
    // Offset: 0x30
    ::Photon::Pun::UtilityScripts::TabViewManager::TabChangeEvent* OnTabChanged;
    // Field size check
    static_assert(sizeof(::Photon::Pun::UtilityScripts::TabViewManager::TabChangeEvent*) == 0x8);
    // protected Photon.Pun.UtilityScripts.TabViewManager/Tab CurrentTab
    // Size: 0x8
    // Offset: 0x38
    ::Photon::Pun::UtilityScripts::TabViewManager::Tab* CurrentTab;
    // Field size check
    static_assert(sizeof(::Photon::Pun::UtilityScripts::TabViewManager::Tab*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<UnityEngine.UI.Toggle,Photon.Pun.UtilityScripts.TabViewManager/Tab> Tab_lut
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::UI::Toggle*, ::Photon::Pun::UtilityScripts::TabViewManager::Tab*>* Tab_lut;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::UnityEngine::UI::Toggle*, ::Photon::Pun::UtilityScripts::TabViewManager::Tab*>*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.UI.ToggleGroup ToggleGroup
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::ToggleGroup*& dyn_ToggleGroup();
    // Get instance field reference: public Photon.Pun.UtilityScripts.TabViewManager/Tab[] Tabs
    [[deprecated("Use field access instead!")]] ::ArrayW<::Photon::Pun::UtilityScripts::TabViewManager::Tab*>& dyn_Tabs();
    // Get instance field reference: public Photon.Pun.UtilityScripts.TabViewManager/TabChangeEvent OnTabChanged
    [[deprecated("Use field access instead!")]] ::Photon::Pun::UtilityScripts::TabViewManager::TabChangeEvent*& dyn_OnTabChanged();
    // Get instance field reference: protected Photon.Pun.UtilityScripts.TabViewManager/Tab CurrentTab
    [[deprecated("Use field access instead!")]] ::Photon::Pun::UtilityScripts::TabViewManager::Tab*& dyn_CurrentTab();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<UnityEngine.UI.Toggle,Photon.Pun.UtilityScripts.TabViewManager/Tab> Tab_lut
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::UnityEngine::UI::Toggle*, ::Photon::Pun::UtilityScripts::TabViewManager::Tab*>*& dyn_Tab_lut();
    // private System.Void Start()
    // Offset: 0x4A57EFC
    void Start();
    // public System.Void SelectTab(System.String id)
    // Offset: 0x4A58140
    void SelectTab(::StringW id);
    // private System.Void OnTabSelected(Photon.Pun.UtilityScripts.TabViewManager/Tab tab)
    // Offset: 0x4A581D8
    void OnTabSelected(::Photon::Pun::UtilityScripts::TabViewManager::Tab* tab);
    // public System.Void .ctor()
    // Offset: 0x4A582F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TabViewManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Pun::UtilityScripts::TabViewManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TabViewManager*, creationType>()));
    }
  }; // Photon.Pun.UtilityScripts.TabViewManager
  #pragma pack(pop)
  static check_size<sizeof(TabViewManager), 64 + sizeof(::System::Collections::Generic::Dictionary_2<::UnityEngine::UI::Toggle*, ::Photon::Pun::UtilityScripts::TabViewManager::Tab*>*)> __Photon_Pun_UtilityScripts_TabViewManagerSizeCheck;
  static_assert(sizeof(TabViewManager) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::TabViewManager::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::UtilityScripts::TabViewManager::*)()>(&Photon::Pun::UtilityScripts::TabViewManager::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::TabViewManager*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::TabViewManager::SelectTab
// Il2CppName: SelectTab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::UtilityScripts::TabViewManager::*)(::StringW)>(&Photon::Pun::UtilityScripts::TabViewManager::SelectTab)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::TabViewManager*), "SelectTab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id});
  }
};
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::TabViewManager::OnTabSelected
// Il2CppName: OnTabSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::UtilityScripts::TabViewManager::*)(::Photon::Pun::UtilityScripts::TabViewManager::Tab*)>(&Photon::Pun::UtilityScripts::TabViewManager::OnTabSelected)> {
  static const MethodInfo* get() {
    static auto* tab = &::il2cpp_utils::GetClassFromName("Photon.Pun.UtilityScripts", "TabViewManager/Tab")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::TabViewManager*), "OnTabSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tab});
  }
};
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::TabViewManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!