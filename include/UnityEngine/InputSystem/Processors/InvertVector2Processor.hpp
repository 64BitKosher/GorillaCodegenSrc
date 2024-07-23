// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.InputProcessor`1
#include "UnityEngine/InputSystem/InputProcessor_1.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
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
  // Forward declaring type: InvertVector2Processor
  class InvertVector2Processor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::Processors::InvertVector2Processor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Processors::InvertVector2Processor*, "UnityEngine.InputSystem.Processors", "InvertVector2Processor");
// Type namespace: UnityEngine.InputSystem.Processors
namespace UnityEngine::InputSystem::Processors {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.InputSystem.Processors.InvertVector2Processor
  // [TokenAttribute] Offset: FFFFFFFF
  class InvertVector2Processor : public ::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector2> {
    public:
    public:
    // public System.Boolean invertX
    // Size: 0x1
    // Offset: 0x10
    bool invertX;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean invertY
    // Size: 0x1
    // Offset: 0x11
    bool invertY;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public System.Boolean invertX
    [[deprecated("Use field access instead!")]] bool& dyn_invertX();
    // Get instance field reference: public System.Boolean invertY
    [[deprecated("Use field access instead!")]] bool& dyn_invertY();
    // public UnityEngine.Vector2 Process(UnityEngine.Vector2 value, UnityEngine.InputSystem.InputControl control)
    // Offset: 0x515AB04
    ::UnityEngine::Vector2 Process(::UnityEngine::Vector2 value, ::UnityEngine::InputSystem::InputControl* control);
    // public override System.String ToString()
    // Offset: 0x515AB28
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
    // public System.Void .ctor()
    // Offset: 0x515ABC8
    // Implemented from: UnityEngine.InputSystem.InputProcessor`1
    // Base method: System.Void InputProcessor_1::.ctor()
    // Base method: System.Void InputProcessor::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InvertVector2Processor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Processors::InvertVector2Processor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InvertVector2Processor*, creationType>()));
    }
  }; // UnityEngine.InputSystem.Processors.InvertVector2Processor
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::Processors::InvertVector2Processor::Process
// Il2CppName: Process
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::InputSystem::Processors::InvertVector2Processor::*)(::UnityEngine::Vector2, ::UnityEngine::InputSystem::InputControl*)>(&UnityEngine::InputSystem::Processors::InvertVector2Processor::Process)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* control = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Processors::InvertVector2Processor*), "Process", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, control});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Processors::InvertVector2Processor::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Processors::InvertVector2Processor::*)()>(&UnityEngine::InputSystem::Processors::InvertVector2Processor::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Processors::InvertVector2Processor*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Processors::InvertVector2Processor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!