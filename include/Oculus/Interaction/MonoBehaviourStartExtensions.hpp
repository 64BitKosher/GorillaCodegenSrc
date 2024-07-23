// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MonoBehaviour
  class MonoBehaviour;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Forward declaring type: MonoBehaviourStartExtensions
  class MonoBehaviourStartExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::MonoBehaviourStartExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::MonoBehaviourStartExtensions*, "Oculus.Interaction", "MonoBehaviourStartExtensions");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.MonoBehaviourStartExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class MonoBehaviourStartExtensions : public ::Il2CppObject {
    public:
    // static public System.Void BeginStart(UnityEngine.MonoBehaviour monoBehaviour, ref System.Boolean started, System.Action baseStart)
    // Offset: 0x4772814
    static void BeginStart(::UnityEngine::MonoBehaviour* monoBehaviour, ByRef<bool> started, ::System::Action* baseStart);
    // static public System.Void EndStart(UnityEngine.MonoBehaviour monoBehaviour, ref System.Boolean started)
    // Offset: 0x4772888
    static void EndStart(::UnityEngine::MonoBehaviour* monoBehaviour, ByRef<bool> started);
  }; // Oculus.Interaction.MonoBehaviourStartExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::MonoBehaviourStartExtensions::BeginStart
// Il2CppName: BeginStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::MonoBehaviour*, ByRef<bool>, ::System::Action*)>(&Oculus::Interaction::MonoBehaviourStartExtensions::BeginStart)> {
  static const MethodInfo* get() {
    static auto* monoBehaviour = &::il2cpp_utils::GetClassFromName("UnityEngine", "MonoBehaviour")->byval_arg;
    static auto* started = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    static auto* baseStart = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::MonoBehaviourStartExtensions*), "BeginStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{monoBehaviour, started, baseStart});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::MonoBehaviourStartExtensions::EndStart
// Il2CppName: EndStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::MonoBehaviour*, ByRef<bool>)>(&Oculus::Interaction::MonoBehaviourStartExtensions::EndStart)> {
  static const MethodInfo* get() {
    static auto* monoBehaviour = &::il2cpp_utils::GetClassFromName("UnityEngine", "MonoBehaviour")->byval_arg;
    static auto* started = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::MonoBehaviourStartExtensions*), "EndStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{monoBehaviour, started});
  }
};