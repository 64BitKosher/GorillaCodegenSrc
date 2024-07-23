// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRVirtualKeyboard
#include "GlobalNamespace/OVRVirtualKeyboard.hpp"
// Including type: OVRVirtualKeyboard/IInputSource
#include "GlobalNamespace/OVRVirtualKeyboard_IInputSource.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRCameraRig
  class OVRCameraRig;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRVirtualKeyboard::BaseInputSource);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVirtualKeyboard::BaseInputSource*, "", "OVRVirtualKeyboard/BaseInputSource");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: OVRVirtualKeyboard/BaseInputSource
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRVirtualKeyboard::BaseInputSource : public ::Il2CppObject/*, public ::GlobalNamespace::OVRVirtualKeyboard::IInputSource, public ::System::IDisposable*/ {
    public:
    public:
    // protected readonly System.Boolean _operatingWithoutOVRCameraRig
    // Size: 0x1
    // Offset: 0x10
    bool operatingWithoutOVRCameraRig;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: operatingWithoutOVRCameraRig and: rig
    char __padding0[0x7] = {};
    // private readonly OVRCameraRig _rig
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::OVRCameraRig* rig;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRCameraRig*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::OVRVirtualKeyboard::IInputSource
    operator ::GlobalNamespace::OVRVirtualKeyboard::IInputSource() noexcept {
      return *reinterpret_cast<::GlobalNamespace::OVRVirtualKeyboard::IInputSource*>(this);
    }
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: protected readonly System.Boolean _operatingWithoutOVRCameraRig
    [[deprecated("Use field access instead!")]] bool& dyn__operatingWithoutOVRCameraRig();
    // Get instance field reference: private readonly OVRCameraRig _rig
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRCameraRig*& dyn__rig();
    // protected System.Void .ctor()
    // Offset: 0x493B504
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRVirtualKeyboard::BaseInputSource* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRVirtualKeyboard::BaseInputSource::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRVirtualKeyboard::BaseInputSource*, creationType>()));
    }
    // private System.Void OnUpdatedAnchors(OVRCameraRig obj)
    // Offset: 0x493B608
    void OnUpdatedAnchors(::GlobalNamespace::OVRCameraRig* obj);
    // public System.Void Update()
    // Offset: 0x493B614
    void Update();
    // protected System.Void UpdateInput()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void UpdateInput();
    // public System.Void Dispose()
    // Offset: 0x493B62C
    void Dispose();
  }; // OVRVirtualKeyboard/BaseInputSource
  #pragma pack(pop)
  static check_size<sizeof(OVRVirtualKeyboard::BaseInputSource), 24 + sizeof(::GlobalNamespace::OVRCameraRig*)> __GlobalNamespace_OVRVirtualKeyboard_BaseInputSourceSizeCheck;
  static_assert(sizeof(OVRVirtualKeyboard::BaseInputSource) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRVirtualKeyboard::BaseInputSource::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRVirtualKeyboard::BaseInputSource::OnUpdatedAnchors
// Il2CppName: OnUpdatedAnchors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRVirtualKeyboard::BaseInputSource::*)(::GlobalNamespace::OVRCameraRig*)>(&GlobalNamespace::OVRVirtualKeyboard::BaseInputSource::OnUpdatedAnchors)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("", "OVRCameraRig")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVirtualKeyboard::BaseInputSource*), "OnUpdatedAnchors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVirtualKeyboard::BaseInputSource::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRVirtualKeyboard::BaseInputSource::*)()>(&GlobalNamespace::OVRVirtualKeyboard::BaseInputSource::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVirtualKeyboard::BaseInputSource*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVirtualKeyboard::BaseInputSource::UpdateInput
// Il2CppName: UpdateInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRVirtualKeyboard::BaseInputSource::*)()>(&GlobalNamespace::OVRVirtualKeyboard::BaseInputSource::UpdateInput)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVirtualKeyboard::BaseInputSource*), "UpdateInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVirtualKeyboard::BaseInputSource::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRVirtualKeyboard::BaseInputSource::*)()>(&GlobalNamespace::OVRVirtualKeyboard::BaseInputSource::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVirtualKeyboard::BaseInputSource*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
