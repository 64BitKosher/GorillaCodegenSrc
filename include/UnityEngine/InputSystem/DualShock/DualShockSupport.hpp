// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: UnityEngine.InputSystem.DualShock
namespace UnityEngine::InputSystem::DualShock {
  // Forward declaring type: DualShockSupport
  class DualShockSupport;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::DualShock::DualShockSupport);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::DualShock::DualShockSupport*, "UnityEngine.InputSystem.DualShock", "DualShockSupport");
// Type namespace: UnityEngine.InputSystem.DualShock
namespace UnityEngine::InputSystem::DualShock {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.DualShock.DualShockSupport
  // [TokenAttribute] Offset: FFFFFFFF
  class DualShockSupport : public ::Il2CppObject {
    public:
    // static public System.Void Initialize()
    // Offset: 0x514822C
    static void Initialize();
  }; // UnityEngine.InputSystem.DualShock.DualShockSupport
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::DualShock::DualShockSupport::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::InputSystem::DualShock::DualShockSupport::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::DualShock::DualShockSupport*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
