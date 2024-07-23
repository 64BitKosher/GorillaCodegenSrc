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
  // Forward declaring type: StickDeadzoneProcessor
  class StickDeadzoneProcessor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor*, "UnityEngine.InputSystem.Processors", "StickDeadzoneProcessor");
// Type namespace: UnityEngine.InputSystem.Processors
namespace UnityEngine::InputSystem::Processors {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.InputSystem.Processors.StickDeadzoneProcessor
  // [TokenAttribute] Offset: FFFFFFFF
  class StickDeadzoneProcessor : public ::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector2> {
    public:
    public:
    // public System.Single min
    // Size: 0x4
    // Offset: 0x10
    float min;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single max
    // Size: 0x4
    // Offset: 0x14
    float max;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.Single min
    [[deprecated("Use field access instead!")]] float& dyn_min();
    // Get instance field reference: public System.Single max
    [[deprecated("Use field access instead!")]] float& dyn_max();
    // private System.Single get_minOrDefault()
    // Offset: 0x515B540
    float get_minOrDefault();
    // private System.Single get_maxOrDefault()
    // Offset: 0x515B5B0
    float get_maxOrDefault();
    // public UnityEngine.Vector2 Process(UnityEngine.Vector2 value, UnityEngine.InputSystem.InputControl control)
    // Offset: 0x515B620
    ::UnityEngine::Vector2 Process(::UnityEngine::Vector2 value, ::UnityEngine::InputSystem::InputControl* control);
    // private System.Single GetDeadZoneAdjustedValue(System.Single value)
    // Offset: 0x515B6F0
    float GetDeadZoneAdjustedValue(float value);
    // public override System.String ToString()
    // Offset: 0x515B758
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
    // public System.Void .ctor()
    // Offset: 0x515B800
    // Implemented from: UnityEngine.InputSystem.InputProcessor`1
    // Base method: System.Void InputProcessor_1::.ctor()
    // Base method: System.Void InputProcessor::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StickDeadzoneProcessor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Processors::StickDeadzoneProcessor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StickDeadzoneProcessor*, creationType>()));
    }
  }; // UnityEngine.InputSystem.Processors.StickDeadzoneProcessor
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::Processors::StickDeadzoneProcessor::get_minOrDefault
// Il2CppName: get_minOrDefault
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::InputSystem::Processors::StickDeadzoneProcessor::*)()>(&UnityEngine::InputSystem::Processors::StickDeadzoneProcessor::get_minOrDefault)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Processors::StickDeadzoneProcessor*), "get_minOrDefault", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Processors::StickDeadzoneProcessor::get_maxOrDefault
// Il2CppName: get_maxOrDefault
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::InputSystem::Processors::StickDeadzoneProcessor::*)()>(&UnityEngine::InputSystem::Processors::StickDeadzoneProcessor::get_maxOrDefault)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Processors::StickDeadzoneProcessor*), "get_maxOrDefault", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Processors::StickDeadzoneProcessor::Process
// Il2CppName: Process
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::InputSystem::Processors::StickDeadzoneProcessor::*)(::UnityEngine::Vector2, ::UnityEngine::InputSystem::InputControl*)>(&UnityEngine::InputSystem::Processors::StickDeadzoneProcessor::Process)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* control = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Processors::StickDeadzoneProcessor*), "Process", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, control});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Processors::StickDeadzoneProcessor::GetDeadZoneAdjustedValue
// Il2CppName: GetDeadZoneAdjustedValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::InputSystem::Processors::StickDeadzoneProcessor::*)(float)>(&UnityEngine::InputSystem::Processors::StickDeadzoneProcessor::GetDeadZoneAdjustedValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Processors::StickDeadzoneProcessor*), "GetDeadZoneAdjustedValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Processors::StickDeadzoneProcessor::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Processors::StickDeadzoneProcessor::*)()>(&UnityEngine::InputSystem::Processors::StickDeadzoneProcessor::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Processors::StickDeadzoneProcessor*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Processors::StickDeadzoneProcessor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!