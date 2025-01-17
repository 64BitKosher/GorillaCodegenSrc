// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.InputRemoting
#include "UnityEngine/InputSystem/InputRemoting.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem
namespace UnityEngine::InputSystem {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Nullable`1<T>
  template<typename T>
  struct Nullable_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::InputRemoting::NewLayoutMsg);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputRemoting::NewLayoutMsg*, "UnityEngine.InputSystem", "InputRemoting/NewLayoutMsg");
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.InputRemoting/NewLayoutMsg
  // [TokenAttribute] Offset: FFFFFFFF
  class InputRemoting::NewLayoutMsg : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::InputSystem::InputRemoting::NewLayoutMsg::Data
    struct Data;
    // static public System.Nullable`1<UnityEngine.InputSystem.InputRemoting/Message> Create(UnityEngine.InputSystem.InputRemoting sender, System.String layoutName)
    // Offset: 0x5105F40
    static ::System::Nullable_1<::UnityEngine::InputSystem::InputRemoting::Message> Create(::UnityEngine::InputSystem::InputRemoting* sender, ::StringW layoutName);
    // static public System.Void Process(UnityEngine.InputSystem.InputRemoting receiver, UnityEngine.InputSystem.InputRemoting/Message msg)
    // Offset: 0x5105008
    static void Process(::UnityEngine::InputSystem::InputRemoting* receiver, ::UnityEngine::InputSystem::InputRemoting::Message msg);
  }; // UnityEngine.InputSystem.InputRemoting/NewLayoutMsg
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputRemoting::NewLayoutMsg::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::InputRemoting::Message> (*)(::UnityEngine::InputSystem::InputRemoting*, ::StringW)>(&UnityEngine::InputSystem::InputRemoting::NewLayoutMsg::Create)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputRemoting")->byval_arg;
    static auto* layoutName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputRemoting::NewLayoutMsg*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, layoutName});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputRemoting::NewLayoutMsg::Process
// Il2CppName: Process
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputRemoting*, ::UnityEngine::InputSystem::InputRemoting::Message)>(&UnityEngine::InputSystem::InputRemoting::NewLayoutMsg::Process)> {
  static const MethodInfo* get() {
    static auto* receiver = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputRemoting")->byval_arg;
    static auto* msg = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputRemoting/Message")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputRemoting::NewLayoutMsg*), "Process", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{receiver, msg});
  }
};
