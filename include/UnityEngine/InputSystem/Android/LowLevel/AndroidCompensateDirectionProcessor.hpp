// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.Processors.CompensateDirectionProcessor
#include "UnityEngine/InputSystem/Processors/CompensateDirectionProcessor.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: UnityEngine::InputSystem
namespace UnityEngine::InputSystem {
  // Forward declaring type: InputControl
  class InputControl;
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem.Android.LowLevel
namespace UnityEngine::InputSystem::Android::LowLevel {
  // Forward declaring type: AndroidCompensateDirectionProcessor
  class AndroidCompensateDirectionProcessor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor*, "UnityEngine.InputSystem.Android.LowLevel", "AndroidCompensateDirectionProcessor");
// Type namespace: UnityEngine.InputSystem.Android.LowLevel
namespace UnityEngine::InputSystem::Android::LowLevel {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.InputSystem.Android.LowLevel.AndroidCompensateDirectionProcessor
  // [TokenAttribute] Offset: FFFFFFFF
  // [DesignTimeVisibleAttribute] Offset: FFFFFFFF
  class AndroidCompensateDirectionProcessor : public ::UnityEngine::InputSystem::Processors::CompensateDirectionProcessor {
    public:
    // static field const value: static private System.Single kSensorStandardGravity
    static constexpr const float kSensorStandardGravity = 9.80665;
    // Get static field: static private System.Single kSensorStandardGravity
    static float _get_kSensorStandardGravity();
    // Set static field: static private System.Single kSensorStandardGravity
    static void _set_kSensorStandardGravity(float value);
    // static field const value: static private System.Single kAccelerationMultiplier
    static constexpr const float kAccelerationMultiplier = -0.10197162;
    // Get static field: static private System.Single kAccelerationMultiplier
    static float _get_kAccelerationMultiplier();
    // Set static field: static private System.Single kAccelerationMultiplier
    static void _set_kAccelerationMultiplier(float value);
    // public override UnityEngine.Vector3 Process(UnityEngine.Vector3 vector, UnityEngine.InputSystem.InputControl control)
    // Offset: 0x51498DC
    // Implemented from: UnityEngine.InputSystem.Processors.CompensateDirectionProcessor
    // Base method: UnityEngine.Vector3 CompensateDirectionProcessor::Process(UnityEngine.Vector3 vector, UnityEngine.InputSystem.InputControl control)
    ::UnityEngine::Vector3 Process(::UnityEngine::Vector3 vector, ::UnityEngine::InputSystem::InputControl* control);
    // public System.Void .ctor()
    // Offset: 0x51498F8
    // Implemented from: UnityEngine.InputSystem.Processors.CompensateDirectionProcessor
    // Base method: System.Void CompensateDirectionProcessor::.ctor()
    // Base method: System.Void InputProcessor_1::.ctor()
    // Base method: System.Void InputProcessor::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AndroidCompensateDirectionProcessor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AndroidCompensateDirectionProcessor*, creationType>()));
    }
  }; // UnityEngine.InputSystem.Android.LowLevel.AndroidCompensateDirectionProcessor
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor::Process
// Il2CppName: Process
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor::*)(::UnityEngine::Vector3, ::UnityEngine::InputSystem::InputControl*)>(&UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor::Process)> {
  static const MethodInfo* get() {
    static auto* vector = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* control = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor*), "Process", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vector, control});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Android::LowLevel::AndroidCompensateDirectionProcessor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!