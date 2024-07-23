// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Cinemachine.CinemachineImpulseDefinition
#include "Cinemachine/CinemachineImpulseDefinition.hpp"
// Including type: Cinemachine.ISignalSource6D
#include "Cinemachine/ISignalSource6D.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Cinemachine::CinemachineImpulseDefinition::SignalSource);
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::CinemachineImpulseDefinition::SignalSource*, "Cinemachine", "CinemachineImpulseDefinition/SignalSource");
// Type namespace: Cinemachine
namespace Cinemachine {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: Cinemachine.CinemachineImpulseDefinition/SignalSource
  // [TokenAttribute] Offset: FFFFFFFF
  class CinemachineImpulseDefinition::SignalSource : public ::Il2CppObject/*, public ::Cinemachine::ISignalSource6D*/ {
    public:
    public:
    // private Cinemachine.CinemachineImpulseDefinition m_Def
    // Size: 0x8
    // Offset: 0x10
    ::Cinemachine::CinemachineImpulseDefinition* m_Def;
    // Field size check
    static_assert(sizeof(::Cinemachine::CinemachineImpulseDefinition*) == 0x8);
    // private UnityEngine.Vector3 m_Velocity
    // Size: 0xC
    // Offset: 0x18
    ::UnityEngine::Vector3 m_Velocity;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Creating interface conversion operator: operator ::Cinemachine::ISignalSource6D
    operator ::Cinemachine::ISignalSource6D() noexcept {
      return *reinterpret_cast<::Cinemachine::ISignalSource6D*>(this);
    }
    // Get instance field reference: private Cinemachine.CinemachineImpulseDefinition m_Def
    [[deprecated("Use field access instead!")]] ::Cinemachine::CinemachineImpulseDefinition*& dyn_m_Def();
    // Get instance field reference: private UnityEngine.Vector3 m_Velocity
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_Velocity();
    // public System.Void .ctor(Cinemachine.CinemachineImpulseDefinition def, UnityEngine.Vector3 velocity)
    // Offset: 0x2AB9DEC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CinemachineImpulseDefinition::SignalSource* New_ctor(::Cinemachine::CinemachineImpulseDefinition* def, ::UnityEngine::Vector3 velocity) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cinemachine::CinemachineImpulseDefinition::SignalSource::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CinemachineImpulseDefinition::SignalSource*, creationType>(def, velocity)));
    }
    // public System.Single get_SignalDuration()
    // Offset: 0x2ABA148
    float get_SignalDuration();
    // public System.Void GetSignal(System.Single timeSinceSignalStart, out UnityEngine.Vector3 pos, out UnityEngine.Quaternion rot)
    // Offset: 0x2ABA164
    void GetSignal(float timeSinceSignalStart, ByRef<::UnityEngine::Vector3> pos, ByRef<::UnityEngine::Quaternion> rot);
  }; // Cinemachine.CinemachineImpulseDefinition/SignalSource
  #pragma pack(pop)
  static check_size<sizeof(CinemachineImpulseDefinition::SignalSource), 24 + sizeof(::UnityEngine::Vector3)> __Cinemachine_CinemachineImpulseDefinition_SignalSourceSizeCheck;
  static_assert(sizeof(CinemachineImpulseDefinition::SignalSource) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Cinemachine::CinemachineImpulseDefinition::SignalSource::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Cinemachine::CinemachineImpulseDefinition::SignalSource::get_SignalDuration
// Il2CppName: get_SignalDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Cinemachine::CinemachineImpulseDefinition::SignalSource::*)()>(&Cinemachine::CinemachineImpulseDefinition::SignalSource::get_SignalDuration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineImpulseDefinition::SignalSource*), "get_SignalDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineImpulseDefinition::SignalSource::GetSignal
// Il2CppName: GetSignal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineImpulseDefinition::SignalSource::*)(float, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Quaternion>)>(&Cinemachine::CinemachineImpulseDefinition::SignalSource::GetSignal)> {
  static const MethodInfo* get() {
    static auto* timeSinceSignalStart = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* pos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* rot = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineImpulseDefinition::SignalSource*), "GetSignal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{timeSinceSignalStart, pos, rot});
  }
};