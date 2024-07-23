// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.EventSystems.IPointerEnterHandler
#include "UnityEngine/EventSystems/IPointerEnterHandler.hpp"
// Including type: UnityEngine.EventSystems.IPointerExitHandler
#include "UnityEngine/EventSystems/IPointerExitHandler.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Completed forward declares
// Type namespace: Photon.Pun.UtilityScripts
namespace Photon::Pun::UtilityScripts {
  // Forward declaring type: OnPointerOverTooltip
  class OnPointerOverTooltip;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Pun::UtilityScripts::OnPointerOverTooltip);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::OnPointerOverTooltip*, "Photon.Pun.UtilityScripts", "OnPointerOverTooltip");
// Type namespace: Photon.Pun.UtilityScripts
namespace Photon::Pun::UtilityScripts {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Pun.UtilityScripts.OnPointerOverTooltip
  // [TokenAttribute] Offset: FFFFFFFF
  class OnPointerOverTooltip : public ::UnityEngine::MonoBehaviour/*, public ::UnityEngine::EventSystems::IPointerEnterHandler, public ::UnityEngine::EventSystems::IPointerExitHandler*/ {
    public:
    // Creating interface conversion operator: operator ::UnityEngine::EventSystems::IPointerEnterHandler
    operator ::UnityEngine::EventSystems::IPointerEnterHandler() noexcept {
      return *reinterpret_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::EventSystems::IPointerExitHandler
    operator ::UnityEngine::EventSystems::IPointerExitHandler() noexcept {
      return *reinterpret_cast<::UnityEngine::EventSystems::IPointerExitHandler*>(this);
    }
    // private System.Void OnDestroy()
    // Offset: 0x4A57D68
    void OnDestroy();
    // private System.Void UnityEngine.EventSystems.IPointerExitHandler.OnPointerExit(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x4A57DEC
    void UnityEngine_EventSystems_IPointerExitHandler_OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData);
    // private System.Void UnityEngine.EventSystems.IPointerEnterHandler.OnPointerEnter(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x4A57E70
    void UnityEngine_EventSystems_IPointerEnterHandler_OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void .ctor()
    // Offset: 0x4A57EF4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OnPointerOverTooltip* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Pun::UtilityScripts::OnPointerOverTooltip::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OnPointerOverTooltip*, creationType>()));
    }
  }; // Photon.Pun.UtilityScripts.OnPointerOverTooltip
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::OnPointerOverTooltip::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::UtilityScripts::OnPointerOverTooltip::*)()>(&Photon::Pun::UtilityScripts::OnPointerOverTooltip::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::OnPointerOverTooltip*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::OnPointerOverTooltip::UnityEngine_EventSystems_IPointerExitHandler_OnPointerExit
// Il2CppName: UnityEngine.EventSystems.IPointerExitHandler.OnPointerExit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::UtilityScripts::OnPointerOverTooltip::*)(::UnityEngine::EventSystems::PointerEventData*)>(&Photon::Pun::UtilityScripts::OnPointerOverTooltip::UnityEngine_EventSystems_IPointerExitHandler_OnPointerExit)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::OnPointerOverTooltip*), "UnityEngine.EventSystems.IPointerExitHandler.OnPointerExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::OnPointerOverTooltip::UnityEngine_EventSystems_IPointerEnterHandler_OnPointerEnter
// Il2CppName: UnityEngine.EventSystems.IPointerEnterHandler.OnPointerEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::UtilityScripts::OnPointerOverTooltip::*)(::UnityEngine::EventSystems::PointerEventData*)>(&Photon::Pun::UtilityScripts::OnPointerOverTooltip::UnityEngine_EventSystems_IPointerEnterHandler_OnPointerEnter)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::OnPointerOverTooltip*), "UnityEngine.EventSystems.IPointerEnterHandler.OnPointerEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::OnPointerOverTooltip::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
