// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.InputProcessor`1
#include "UnityEngine/InputSystem/InputProcessor_1.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem
namespace UnityEngine::InputSystem {
  // Forward declaring type: InputControl
  class InputControl;
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem.Processors
namespace UnityEngine::InputSystem::Processors {
  // Forward declaring type: CompensateRotationProcessor
  class CompensateRotationProcessor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::Processors::CompensateRotationProcessor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Processors::CompensateRotationProcessor*, "UnityEngine.InputSystem.Processors", "CompensateRotationProcessor");
// Type namespace: UnityEngine.InputSystem.Processors
namespace UnityEngine::InputSystem::Processors {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.InputSystem.Processors.CompensateRotationProcessor
  // [TokenAttribute] Offset: FFFFFFFF
  // [DesignTimeVisibleAttribute] Offset: FFFFFFFF
  class CompensateRotationProcessor : public ::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Quaternion> {
    public:
    // public UnityEngine.Quaternion Process(UnityEngine.Quaternion value, UnityEngine.InputSystem.InputControl control)
    // Offset: 0x515A7D4
    ::UnityEngine::Quaternion Process(::UnityEngine::Quaternion value, ::UnityEngine::InputSystem::InputControl* control);
    // public override System.String ToString()
    // Offset: 0x515A9E4
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
    // public override UnityEngine.InputSystem.InputProcessor/CachingPolicy get_cachingPolicy()
    // Offset: 0x515AA24
    // Implemented from: UnityEngine.InputSystem.InputProcessor
    // Base method: UnityEngine.InputSystem.InputProcessor/CachingPolicy InputProcessor::get_cachingPolicy()
    ::UnityEngine::InputSystem::InputProcessor::CachingPolicy get_cachingPolicy();
    // public System.Void .ctor()
    // Offset: 0x515AA2C
    // Implemented from: UnityEngine.InputSystem.InputProcessor`1
    // Base method: System.Void InputProcessor_1::.ctor()
    // Base method: System.Void InputProcessor::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CompensateRotationProcessor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Processors::CompensateRotationProcessor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CompensateRotationProcessor*, creationType>()));
    }
  }; // UnityEngine.InputSystem.Processors.CompensateRotationProcessor
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::Processors::CompensateRotationProcessor::Process
// Il2CppName: Process
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (UnityEngine::InputSystem::Processors::CompensateRotationProcessor::*)(::UnityEngine::Quaternion, ::UnityEngine::InputSystem::InputControl*)>(&UnityEngine::InputSystem::Processors::CompensateRotationProcessor::Process)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* control = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Processors::CompensateRotationProcessor*), "Process", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, control});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Processors::CompensateRotationProcessor::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Processors::CompensateRotationProcessor::*)()>(&UnityEngine::InputSystem::Processors::CompensateRotationProcessor::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Processors::CompensateRotationProcessor*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Processors::CompensateRotationProcessor::get_cachingPolicy
// Il2CppName: get_cachingPolicy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputProcessor::CachingPolicy (UnityEngine::InputSystem::Processors::CompensateRotationProcessor::*)()>(&UnityEngine::InputSystem::Processors::CompensateRotationProcessor::get_cachingPolicy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Processors::CompensateRotationProcessor*), "get_cachingPolicy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Processors::CompensateRotationProcessor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!