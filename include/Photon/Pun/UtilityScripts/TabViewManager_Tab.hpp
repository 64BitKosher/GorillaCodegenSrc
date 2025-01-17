// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Pun.UtilityScripts.TabViewManager
#include "Photon/Pun/UtilityScripts/TabViewManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Toggle
  class Toggle;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Pun::UtilityScripts::TabViewManager::Tab);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::TabViewManager::Tab*, "Photon.Pun.UtilityScripts", "TabViewManager/Tab");
// Type namespace: Photon.Pun.UtilityScripts
namespace Photon::Pun::UtilityScripts {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Pun.UtilityScripts.TabViewManager/Tab
  // [TokenAttribute] Offset: FFFFFFFF
  class TabViewManager::Tab : public ::Il2CppObject {
    public:
    public:
    // public System.String ID
    // Size: 0x8
    // Offset: 0x10
    ::StringW _ID;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public UnityEngine.UI.Toggle Toggle
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::UI::Toggle* Toggle;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Toggle*) == 0x8);
    // public UnityEngine.RectTransform View
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::RectTransform* View;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    public:
    // Get instance field reference: public System.String ID
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ID();
    // Get instance field reference: public UnityEngine.UI.Toggle Toggle
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Toggle*& dyn_Toggle();
    // Get instance field reference: public UnityEngine.RectTransform View
    [[deprecated("Use field access instead!")]] ::UnityEngine::RectTransform*& dyn_View();
    // public System.Void .ctor()
    // Offset: 0x4A58348
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TabViewManager::Tab* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Pun::UtilityScripts::TabViewManager::Tab::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TabViewManager::Tab*, creationType>()));
    }
  }; // Photon.Pun.UtilityScripts.TabViewManager/Tab
  #pragma pack(pop)
  static check_size<sizeof(TabViewManager::Tab), 32 + sizeof(::UnityEngine::RectTransform*)> __Photon_Pun_UtilityScripts_TabViewManager_TabSizeCheck;
  static_assert(sizeof(TabViewManager::Tab) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::TabViewManager::Tab::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
