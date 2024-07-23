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
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PrimaryButtonEvent
  class PrimaryButtonEvent;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PrimaryButtonWatcher
  class PrimaryButtonWatcher;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PrimaryButtonWatcher);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PrimaryButtonWatcher*, "", "PrimaryButtonWatcher");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: PrimaryButtonWatcher
  // [TokenAttribute] Offset: FFFFFFFF
  class PrimaryButtonWatcher : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public PrimaryButtonEvent primaryButtonPress
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::PrimaryButtonEvent* primaryButtonPress;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PrimaryButtonEvent*) == 0x8);
    // private System.Boolean lastButtonState
    // Size: 0x1
    // Offset: 0x28
    bool lastButtonState;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: lastButtonState and: devicesWithPrimaryButton
    char __padding1[0x7] = {};
    // private System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> devicesWithPrimaryButton
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>* devicesWithPrimaryButton;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*) == 0x8);
    public:
    // Get instance field reference: public PrimaryButtonEvent primaryButtonPress
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PrimaryButtonEvent*& dyn_primaryButtonPress();
    // Get instance field reference: private System.Boolean lastButtonState
    [[deprecated("Use field access instead!")]] bool& dyn_lastButtonState();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> devicesWithPrimaryButton
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*& dyn_devicesWithPrimaryButton();
    // private System.Void Awake()
    // Offset: 0x26DF480
    void Awake();
    // private System.Void OnEnable()
    // Offset: 0x26DF53C
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x26DF848
    void OnDisable();
    // private System.Void InputDevices_deviceConnected(UnityEngine.XR.InputDevice device)
    // Offset: 0x26DF758
    void InputDevices_deviceConnected(::UnityEngine::XR::InputDevice device);
    // private System.Void InputDevices_deviceDisconnected(UnityEngine.XR.InputDevice device)
    // Offset: 0x26DF92C
    void InputDevices_deviceDisconnected(::UnityEngine::XR::InputDevice device);
    // private System.Void Update()
    // Offset: 0x26DF9D4
    void Update();
    // public System.Void .ctor()
    // Offset: 0x26DFBB8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PrimaryButtonWatcher* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PrimaryButtonWatcher::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PrimaryButtonWatcher*, creationType>()));
    }
  }; // PrimaryButtonWatcher
  #pragma pack(pop)
  static check_size<sizeof(PrimaryButtonWatcher), 48 + sizeof(::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*)> __GlobalNamespace_PrimaryButtonWatcherSizeCheck;
  static_assert(sizeof(PrimaryButtonWatcher) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PrimaryButtonWatcher::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PrimaryButtonWatcher::*)()>(&GlobalNamespace::PrimaryButtonWatcher::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PrimaryButtonWatcher*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PrimaryButtonWatcher::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PrimaryButtonWatcher::*)()>(&GlobalNamespace::PrimaryButtonWatcher::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PrimaryButtonWatcher*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PrimaryButtonWatcher::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PrimaryButtonWatcher::*)()>(&GlobalNamespace::PrimaryButtonWatcher::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PrimaryButtonWatcher*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PrimaryButtonWatcher::InputDevices_deviceConnected
// Il2CppName: InputDevices_deviceConnected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PrimaryButtonWatcher::*)(::UnityEngine::XR::InputDevice)>(&GlobalNamespace::PrimaryButtonWatcher::InputDevices_deviceConnected)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "InputDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PrimaryButtonWatcher*), "InputDevices_deviceConnected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PrimaryButtonWatcher::InputDevices_deviceDisconnected
// Il2CppName: InputDevices_deviceDisconnected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PrimaryButtonWatcher::*)(::UnityEngine::XR::InputDevice)>(&GlobalNamespace::PrimaryButtonWatcher::InputDevices_deviceDisconnected)> {
  static const MethodInfo* get() {
    static auto* device = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "InputDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PrimaryButtonWatcher*), "InputDevices_deviceDisconnected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{device});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PrimaryButtonWatcher::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PrimaryButtonWatcher::*)()>(&GlobalNamespace::PrimaryButtonWatcher::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PrimaryButtonWatcher*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PrimaryButtonWatcher::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
