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
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Text
  class Text;
  // Forward declaring type: Selectable
  class Selectable;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Completed forward declares
// Type namespace: Photon.Pun.UtilityScripts
namespace Photon::Pun::UtilityScripts {
  // Forward declaring type: TextButtonTransition
  class TextButtonTransition;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Pun::UtilityScripts::TextButtonTransition);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::TextButtonTransition*, "Photon.Pun.UtilityScripts", "TextButtonTransition");
// Type namespace: Photon.Pun.UtilityScripts
namespace Photon::Pun::UtilityScripts {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Pun.UtilityScripts.TextButtonTransition
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: FFFFFFFF
  class TextButtonTransition : public ::UnityEngine::MonoBehaviour/*, public ::UnityEngine::EventSystems::IPointerEnterHandler, public ::UnityEngine::EventSystems::IPointerExitHandler*/ {
    public:
    public:
    // private UnityEngine.UI.Text _text
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::UI::Text* text;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Text*) == 0x8);
    // public UnityEngine.UI.Selectable Selectable
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::UI::Selectable* Selectable;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Selectable*) == 0x8);
    // public UnityEngine.Color NormalColor
    // Size: 0x10
    // Offset: 0x30
    ::UnityEngine::Color NormalColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public UnityEngine.Color HoverColor
    // Size: 0x10
    // Offset: 0x40
    ::UnityEngine::Color HoverColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::EventSystems::IPointerEnterHandler
    operator ::UnityEngine::EventSystems::IPointerEnterHandler() noexcept {
      return *reinterpret_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::EventSystems::IPointerExitHandler
    operator ::UnityEngine::EventSystems::IPointerExitHandler() noexcept {
      return *reinterpret_cast<::UnityEngine::EventSystems::IPointerExitHandler*>(this);
    }
    // Get instance field reference: private UnityEngine.UI.Text _text
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Text*& dyn__text();
    // Get instance field reference: public UnityEngine.UI.Selectable Selectable
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Selectable*& dyn_Selectable();
    // Get instance field reference: public UnityEngine.Color NormalColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_NormalColor();
    // Get instance field reference: public UnityEngine.Color HoverColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_HoverColor();
    // public System.Void Awake()
    // Offset: 0x4A583C4
    void Awake();
    // public System.Void OnEnable()
    // Offset: 0x4A5841C
    void OnEnable();
    // public System.Void OnDisable()
    // Offset: 0x4A5844C
    void OnDisable();
    // public System.Void OnPointerEnter(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x4A5847C
    void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnPointerExit(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x4A5852C
    void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void .ctor()
    // Offset: 0x4A585DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextButtonTransition* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Pun::UtilityScripts::TextButtonTransition::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextButtonTransition*, creationType>()));
    }
  }; // Photon.Pun.UtilityScripts.TextButtonTransition
  #pragma pack(pop)
  static check_size<sizeof(TextButtonTransition), 64 + sizeof(::UnityEngine::Color)> __Photon_Pun_UtilityScripts_TextButtonTransitionSizeCheck;
  static_assert(sizeof(TextButtonTransition) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::TextButtonTransition::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::UtilityScripts::TextButtonTransition::*)()>(&Photon::Pun::UtilityScripts::TextButtonTransition::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::TextButtonTransition*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::TextButtonTransition::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::UtilityScripts::TextButtonTransition::*)()>(&Photon::Pun::UtilityScripts::TextButtonTransition::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::TextButtonTransition*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::TextButtonTransition::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::UtilityScripts::TextButtonTransition::*)()>(&Photon::Pun::UtilityScripts::TextButtonTransition::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::TextButtonTransition*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::TextButtonTransition::OnPointerEnter
// Il2CppName: OnPointerEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::UtilityScripts::TextButtonTransition::*)(::UnityEngine::EventSystems::PointerEventData*)>(&Photon::Pun::UtilityScripts::TextButtonTransition::OnPointerEnter)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::TextButtonTransition*), "OnPointerEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::TextButtonTransition::OnPointerExit
// Il2CppName: OnPointerExit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::UtilityScripts::TextButtonTransition::*)(::UnityEngine::EventSystems::PointerEventData*)>(&Photon::Pun::UtilityScripts::TextButtonTransition::OnPointerExit)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::TextButtonTransition*), "OnPointerExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::TextButtonTransition::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!