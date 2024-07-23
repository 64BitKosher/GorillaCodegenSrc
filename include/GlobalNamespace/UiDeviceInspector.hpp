// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: OVRInput/Handedness
#include "GlobalNamespace/OVRInput_Handedness.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: UiBoolInspector
  class UiBoolInspector;
  // Forward declaring type: UiAxis1dInspector
  class UiAxis1dInspector;
  // Forward declaring type: UiAxis2dInspector
  class UiAxis2dInspector;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: UiDeviceInspector
  class UiDeviceInspector;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::UiDeviceInspector);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UiDeviceInspector*, "", "UiDeviceInspector");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA4
  #pragma pack(push, 1)
  // Autogenerated type: UiDeviceInspector
  // [TokenAttribute] Offset: FFFFFFFF
  class UiDeviceInspector : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private OVRInput/Handedness m_handedness
    // Size: 0x4
    // Offset: 0x20
    ::GlobalNamespace::OVRInput::Handedness m_handedness;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRInput::Handedness) == 0x4);
    // Padding between fields: m_handedness and: m_title
    char __padding0[0x4] = {};
    // private TMPro.TextMeshProUGUI m_title
    // Size: 0x8
    // Offset: 0x28
    ::TMPro::TextMeshProUGUI* m_title;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI m_status
    // Size: 0x8
    // Offset: 0x30
    ::TMPro::TextMeshProUGUI* m_status;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // private UiBoolInspector m_thumbRestTouch
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::UiBoolInspector* m_thumbRestTouch;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::UiBoolInspector*) == 0x8);
    // private UiAxis1dInspector m_thumbRestForce
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::UiAxis1dInspector* m_thumbRestForce;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::UiAxis1dInspector*) == 0x8);
    // private UiAxis1dInspector m_indexTrigger
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::UiAxis1dInspector* m_indexTrigger;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::UiAxis1dInspector*) == 0x8);
    // private UiAxis1dInspector m_gripTrigger
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::UiAxis1dInspector* m_gripTrigger;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::UiAxis1dInspector*) == 0x8);
    // private UiAxis1dInspector m_stylusTipForce
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::UiAxis1dInspector* m_stylusTipForce;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::UiAxis1dInspector*) == 0x8);
    // private UiAxis1dInspector m_indexCurl1d
    // Size: 0x8
    // Offset: 0x60
    ::GlobalNamespace::UiAxis1dInspector* m_indexCurl1d;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::UiAxis1dInspector*) == 0x8);
    // private UiAxis1dInspector m_indexSlider1d
    // Size: 0x8
    // Offset: 0x68
    ::GlobalNamespace::UiAxis1dInspector* m_indexSlider1d;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::UiAxis1dInspector*) == 0x8);
    // private UiBoolInspector m_ax
    // Size: 0x8
    // Offset: 0x70
    ::GlobalNamespace::UiBoolInspector* m_ax;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::UiBoolInspector*) == 0x8);
    // private UiBoolInspector m_axTouch
    // Size: 0x8
    // Offset: 0x78
    ::GlobalNamespace::UiBoolInspector* m_axTouch;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::UiBoolInspector*) == 0x8);
    // private UiBoolInspector m_by
    // Size: 0x8
    // Offset: 0x80
    ::GlobalNamespace::UiBoolInspector* m_by;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::UiBoolInspector*) == 0x8);
    // private UiBoolInspector m_byTouch
    // Size: 0x8
    // Offset: 0x88
    ::GlobalNamespace::UiBoolInspector* m_byTouch;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::UiBoolInspector*) == 0x8);
    // private UiBoolInspector m_indexTouch
    // Size: 0x8
    // Offset: 0x90
    ::GlobalNamespace::UiBoolInspector* m_indexTouch;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::UiBoolInspector*) == 0x8);
    // private UiAxis2dInspector m_thumbstick
    // Size: 0x8
    // Offset: 0x98
    ::GlobalNamespace::UiAxis2dInspector* m_thumbstick;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::UiAxis2dInspector*) == 0x8);
    // private OVRInput/Controller m_controller
    // Size: 0x4
    // Offset: 0xA0
    ::GlobalNamespace::OVRInput::Controller m_controller;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRInput::Controller) == 0x4);
    public:
    // Get instance field reference: private OVRInput/Handedness m_handedness
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRInput::Handedness& dyn_m_handedness();
    // Get instance field reference: private TMPro.TextMeshProUGUI m_title
    [[deprecated("Use field access instead!")]] ::TMPro::TextMeshProUGUI*& dyn_m_title();
    // Get instance field reference: private TMPro.TextMeshProUGUI m_status
    [[deprecated("Use field access instead!")]] ::TMPro::TextMeshProUGUI*& dyn_m_status();
    // Get instance field reference: private UiBoolInspector m_thumbRestTouch
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::UiBoolInspector*& dyn_m_thumbRestTouch();
    // Get instance field reference: private UiAxis1dInspector m_thumbRestForce
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::UiAxis1dInspector*& dyn_m_thumbRestForce();
    // Get instance field reference: private UiAxis1dInspector m_indexTrigger
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::UiAxis1dInspector*& dyn_m_indexTrigger();
    // Get instance field reference: private UiAxis1dInspector m_gripTrigger
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::UiAxis1dInspector*& dyn_m_gripTrigger();
    // Get instance field reference: private UiAxis1dInspector m_stylusTipForce
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::UiAxis1dInspector*& dyn_m_stylusTipForce();
    // Get instance field reference: private UiAxis1dInspector m_indexCurl1d
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::UiAxis1dInspector*& dyn_m_indexCurl1d();
    // Get instance field reference: private UiAxis1dInspector m_indexSlider1d
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::UiAxis1dInspector*& dyn_m_indexSlider1d();
    // Get instance field reference: private UiBoolInspector m_ax
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::UiBoolInspector*& dyn_m_ax();
    // Get instance field reference: private UiBoolInspector m_axTouch
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::UiBoolInspector*& dyn_m_axTouch();
    // Get instance field reference: private UiBoolInspector m_by
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::UiBoolInspector*& dyn_m_by();
    // Get instance field reference: private UiBoolInspector m_byTouch
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::UiBoolInspector*& dyn_m_byTouch();
    // Get instance field reference: private UiBoolInspector m_indexTouch
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::UiBoolInspector*& dyn_m_indexTouch();
    // Get instance field reference: private UiAxis2dInspector m_thumbstick
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::UiAxis2dInspector*& dyn_m_thumbstick();
    // Get instance field reference: private OVRInput/Controller m_controller
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRInput::Controller& dyn_m_controller();
    // private System.Void Start()
    // Offset: 0x294DBA8
    void Start();
    // private System.Void Update()
    // Offset: 0x294DBD0
    void Update();
    // static private System.String ToDeviceModel()
    // Offset: 0x294E0B0
    static ::StringW ToDeviceModel();
    // static private System.String ToHandednessString(OVRInput/Handedness handedness)
    // Offset: 0x294E0F0
    static ::StringW ToHandednessString(::GlobalNamespace::OVRInput::Handedness handedness);
    // public System.Void .ctor()
    // Offset: 0x294E174
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UiDeviceInspector* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::UiDeviceInspector::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UiDeviceInspector*, creationType>()));
    }
  }; // UiDeviceInspector
  #pragma pack(pop)
  static check_size<sizeof(UiDeviceInspector), 160 + sizeof(::GlobalNamespace::OVRInput::Controller)> __GlobalNamespace_UiDeviceInspectorSizeCheck;
  static_assert(sizeof(UiDeviceInspector) == 0xA4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::UiDeviceInspector::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UiDeviceInspector::*)()>(&GlobalNamespace::UiDeviceInspector::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UiDeviceInspector*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UiDeviceInspector::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UiDeviceInspector::*)()>(&GlobalNamespace::UiDeviceInspector::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UiDeviceInspector*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UiDeviceInspector::ToDeviceModel
// Il2CppName: ToDeviceModel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&GlobalNamespace::UiDeviceInspector::ToDeviceModel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UiDeviceInspector*), "ToDeviceModel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UiDeviceInspector::ToHandednessString
// Il2CppName: ToHandednessString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::GlobalNamespace::OVRInput::Handedness)>(&GlobalNamespace::UiDeviceInspector::ToHandednessString)> {
  static const MethodInfo* get() {
    static auto* handedness = &::il2cpp_utils::GetClassFromName("", "OVRInput/Handedness")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UiDeviceInspector*), "ToHandednessString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handedness});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UiDeviceInspector::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
