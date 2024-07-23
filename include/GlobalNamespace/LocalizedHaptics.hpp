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
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LocalizedHaptics
  class LocalizedHaptics;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LocalizedHaptics);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalizedHaptics*, "", "LocalizedHaptics");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: LocalizedHaptics
  // [TokenAttribute] Offset: FFFFFFFF
  class LocalizedHaptics : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private OVRInput/Handedness m_handedness
    // Size: 0x4
    // Offset: 0x20
    ::GlobalNamespace::OVRInput::Handedness m_handedness;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRInput::Handedness) == 0x4);
    // private OVRInput/Controller m_controller
    // Size: 0x4
    // Offset: 0x24
    ::GlobalNamespace::OVRInput::Controller m_controller;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRInput::Controller) == 0x4);
    public:
    // Get instance field reference: private OVRInput/Handedness m_handedness
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRInput::Handedness& dyn_m_handedness();
    // Get instance field reference: private OVRInput/Controller m_controller
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRInput::Controller& dyn_m_controller();
    // private System.Void Start()
    // Offset: 0x294CBB0
    void Start();
    // private System.Void Update()
    // Offset: 0x294CBD8
    void Update();
    // public System.Void .ctor()
    // Offset: 0x294CD1C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalizedHaptics* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LocalizedHaptics::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalizedHaptics*, creationType>()));
    }
  }; // LocalizedHaptics
  #pragma pack(pop)
  static check_size<sizeof(LocalizedHaptics), 36 + sizeof(::GlobalNamespace::OVRInput::Controller)> __GlobalNamespace_LocalizedHapticsSizeCheck;
  static_assert(sizeof(LocalizedHaptics) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LocalizedHaptics::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalizedHaptics::*)()>(&GlobalNamespace::LocalizedHaptics::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalizedHaptics*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LocalizedHaptics::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocalizedHaptics::*)()>(&GlobalNamespace::LocalizedHaptics::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocalizedHaptics*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LocalizedHaptics::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
