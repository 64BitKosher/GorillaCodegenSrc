// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.TunnelingVignetteController
#include "UnityEngine/XR/Interaction/Toolkit/TunnelingVignetteController.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.EaseState
#include "UnityEngine/XR/Interaction/Toolkit/EaseState.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: ITunnelingVignetteProvider
  class ITunnelingVignetteProvider;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::ProviderRecord);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::ProviderRecord*, "UnityEngine.XR.Interaction.Toolkit", "TunnelingVignetteController/ProviderRecord");
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.TunnelingVignetteController/ProviderRecord
  // [TokenAttribute] Offset: FFFFFFFF
  class TunnelingVignetteController::ProviderRecord : public ::Il2CppObject {
    public:
    public:
    // private readonly UnityEngine.XR.Interaction.Toolkit.ITunnelingVignetteProvider <provider>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::XR::Interaction::Toolkit::ITunnelingVignetteProvider* provider;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::ITunnelingVignetteProvider*) == 0x8);
    // private UnityEngine.XR.Interaction.Toolkit.EaseState <easeState>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    ::UnityEngine::XR::Interaction::Toolkit::EaseState easeState;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::EaseState) == 0x4);
    // private System.Single <dynamicApertureSize>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    float dynamicApertureSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean <easeInLockEnded>k__BackingField
    // Size: 0x1
    // Offset: 0x20
    bool easeInLockEnded;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: easeInLockEnded and: dynamicEaseOutDelayTime
    char __padding3[0x3] = {};
    // private System.Single <dynamicEaseOutDelayTime>k__BackingField
    // Size: 0x4
    // Offset: 0x24
    float dynamicEaseOutDelayTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private readonly UnityEngine.XR.Interaction.Toolkit.ITunnelingVignetteProvider <provider>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::Interaction::Toolkit::ITunnelingVignetteProvider*& dyn_$provider$k__BackingField();
    // Get instance field reference: private UnityEngine.XR.Interaction.Toolkit.EaseState <easeState>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::Interaction::Toolkit::EaseState& dyn_$easeState$k__BackingField();
    // Get instance field reference: private System.Single <dynamicApertureSize>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$dynamicApertureSize$k__BackingField();
    // Get instance field reference: private System.Boolean <easeInLockEnded>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$easeInLockEnded$k__BackingField();
    // Get instance field reference: private System.Single <dynamicEaseOutDelayTime>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$dynamicEaseOutDelayTime$k__BackingField();
    // public UnityEngine.XR.Interaction.Toolkit.ITunnelingVignetteProvider get_provider()
    // Offset: 0x5412FE8
    ::UnityEngine::XR::Interaction::Toolkit::ITunnelingVignetteProvider* get_provider();
    // public UnityEngine.XR.Interaction.Toolkit.EaseState get_easeState()
    // Offset: 0x5412FF0
    ::UnityEngine::XR::Interaction::Toolkit::EaseState get_easeState();
    // public System.Void set_easeState(UnityEngine.XR.Interaction.Toolkit.EaseState value)
    // Offset: 0x5412FF8
    void set_easeState(::UnityEngine::XR::Interaction::Toolkit::EaseState value);
    // public System.Single get_dynamicApertureSize()
    // Offset: 0x5413000
    float get_dynamicApertureSize();
    // public System.Void set_dynamicApertureSize(System.Single value)
    // Offset: 0x5413008
    void set_dynamicApertureSize(float value);
    // public System.Boolean get_easeInLockEnded()
    // Offset: 0x5413010
    bool get_easeInLockEnded();
    // public System.Void set_easeInLockEnded(System.Boolean value)
    // Offset: 0x5413018
    void set_easeInLockEnded(bool value);
    // public System.Single get_dynamicEaseOutDelayTime()
    // Offset: 0x5413024
    float get_dynamicEaseOutDelayTime();
    // public System.Void set_dynamicEaseOutDelayTime(System.Single value)
    // Offset: 0x541302C
    void set_dynamicEaseOutDelayTime(float value);
    // public System.Void .ctor(UnityEngine.XR.Interaction.Toolkit.ITunnelingVignetteProvider provider)
    // Offset: 0x5411B40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TunnelingVignetteController::ProviderRecord* New_ctor(::UnityEngine::XR::Interaction::Toolkit::ITunnelingVignetteProvider* provider) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::ProviderRecord::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TunnelingVignetteController::ProviderRecord*, creationType>(provider)));
    }
  }; // UnityEngine.XR.Interaction.Toolkit.TunnelingVignetteController/ProviderRecord
  #pragma pack(pop)
  static check_size<sizeof(TunnelingVignetteController::ProviderRecord), 36 + sizeof(float)> __UnityEngine_XR_Interaction_Toolkit_TunnelingVignetteController_ProviderRecordSizeCheck;
  static_assert(sizeof(TunnelingVignetteController::ProviderRecord) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::ProviderRecord::get_provider
// Il2CppName: get_provider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::ITunnelingVignetteProvider* (UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::ProviderRecord::*)()>(&UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::ProviderRecord::get_provider)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::ProviderRecord*), "get_provider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::ProviderRecord::get_easeState
// Il2CppName: get_easeState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::EaseState (UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::ProviderRecord::*)()>(&UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::ProviderRecord::get_easeState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::ProviderRecord*), "get_easeState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::ProviderRecord::set_easeState
// Il2CppName: set_easeState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::ProviderRecord::*)(::UnityEngine::XR::Interaction::Toolkit::EaseState)>(&UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::ProviderRecord::set_easeState)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "EaseState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::ProviderRecord*), "set_easeState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::ProviderRecord::get_dynamicApertureSize
// Il2CppName: get_dynamicApertureSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::ProviderRecord::*)()>(&UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::ProviderRecord::get_dynamicApertureSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::ProviderRecord*), "get_dynamicApertureSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::ProviderRecord::set_dynamicApertureSize
// Il2CppName: set_dynamicApertureSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::ProviderRecord::*)(float)>(&UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::ProviderRecord::set_dynamicApertureSize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::ProviderRecord*), "set_dynamicApertureSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::ProviderRecord::get_easeInLockEnded
// Il2CppName: get_easeInLockEnded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::ProviderRecord::*)()>(&UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::ProviderRecord::get_easeInLockEnded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::ProviderRecord*), "get_easeInLockEnded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::ProviderRecord::set_easeInLockEnded
// Il2CppName: set_easeInLockEnded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::ProviderRecord::*)(bool)>(&UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::ProviderRecord::set_easeInLockEnded)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::ProviderRecord*), "set_easeInLockEnded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::ProviderRecord::get_dynamicEaseOutDelayTime
// Il2CppName: get_dynamicEaseOutDelayTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::ProviderRecord::*)()>(&UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::ProviderRecord::get_dynamicEaseOutDelayTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::ProviderRecord*), "get_dynamicEaseOutDelayTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::ProviderRecord::set_dynamicEaseOutDelayTime
// Il2CppName: set_dynamicEaseOutDelayTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::ProviderRecord::*)(float)>(&UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::ProviderRecord::set_dynamicEaseOutDelayTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::ProviderRecord*), "set_dynamicEaseOutDelayTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::TunnelingVignetteController::ProviderRecord::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
