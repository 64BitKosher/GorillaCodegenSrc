// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Completed forward declares
// Type namespace: Cinemachine
namespace Cinemachine {
  // Forward declaring type: ISignalSource6D
  class ISignalSource6D;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Cinemachine::ISignalSource6D);
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::ISignalSource6D*, "Cinemachine", "ISignalSource6D");
// Type namespace: Cinemachine
namespace Cinemachine {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Cinemachine.ISignalSource6D
  // [TokenAttribute] Offset: FFFFFFFF
  class ISignalSource6D {
    public:
    // public System.Single get_SignalDuration()
    // Offset: 0xFFFFFFFFFFFFFFFF
    float get_SignalDuration();
    // public System.Void GetSignal(System.Single timeSinceSignalStart, out UnityEngine.Vector3 pos, out UnityEngine.Quaternion rot)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void GetSignal(float timeSinceSignalStart, ByRef<::UnityEngine::Vector3> pos, ByRef<::UnityEngine::Quaternion> rot);
  }; // Cinemachine.ISignalSource6D
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Cinemachine::ISignalSource6D::get_SignalDuration
// Il2CppName: get_SignalDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Cinemachine::ISignalSource6D::*)()>(&Cinemachine::ISignalSource6D::get_SignalDuration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::ISignalSource6D*), "get_SignalDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::ISignalSource6D::GetSignal
// Il2CppName: GetSignal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::ISignalSource6D::*)(float, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Quaternion>)>(&Cinemachine::ISignalSource6D::GetSignal)> {
  static const MethodInfo* get() {
    static auto* timeSinceSignalStart = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* pos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* rot = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::ISignalSource6D*), "GetSignal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{timeSinceSignalStart, pos, rot});
  }
};
