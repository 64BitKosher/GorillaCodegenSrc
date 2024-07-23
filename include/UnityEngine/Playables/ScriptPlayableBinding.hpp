// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableBinding
  struct PlayableBinding;
  // Forward declaring type: PlayableOutput
  struct PlayableOutput;
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Forward declaring type: ScriptPlayableBinding
  class ScriptPlayableBinding;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Playables::ScriptPlayableBinding);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::ScriptPlayableBinding*, "UnityEngine.Playables", "ScriptPlayableBinding");
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Playables.ScriptPlayableBinding
  // [TokenAttribute] Offset: FFFFFFFF
  class ScriptPlayableBinding : public ::Il2CppObject {
    public:
    // static public UnityEngine.Playables.PlayableBinding Create(System.String name, UnityEngine.Object key, System.Type type)
    // Offset: 0x54F40B4
    static ::UnityEngine::Playables::PlayableBinding Create(::StringW name, ::UnityEngine::Object* key, ::System::Type* type);
    // static private UnityEngine.Playables.PlayableOutput CreateScriptOutput(UnityEngine.Playables.PlayableGraph graph, System.String name)
    // Offset: 0x54F4198
    static ::UnityEngine::Playables::PlayableOutput CreateScriptOutput(::UnityEngine::Playables::PlayableGraph graph, ::StringW name);
  }; // UnityEngine.Playables.ScriptPlayableBinding
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Playables::ScriptPlayableBinding::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayableBinding (*)(::StringW, ::UnityEngine::Object*, ::System::Type*)>(&UnityEngine::Playables::ScriptPlayableBinding::Create)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* key = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::ScriptPlayableBinding*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, key, type});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::ScriptPlayableBinding::CreateScriptOutput
// Il2CppName: CreateScriptOutput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayableOutput (*)(::UnityEngine::Playables::PlayableGraph, ::StringW)>(&UnityEngine::Playables::ScriptPlayableBinding::CreateScriptOutput)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::ScriptPlayableBinding*), "CreateScriptOutput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, name});
  }
};
