// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController
#include "UnityEngine/InputSystem/LowLevel/InputEventTrace_ReplayController.hpp"
// Including type: UnityEngine.InputSystem.LowLevel.InputEventTrace
#include "UnityEngine/InputSystem/LowLevel/InputEventTrace.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::$$c__DisplayClass43_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::$$c__DisplayClass43_0*, "UnityEngine.InputSystem.LowLevel", "InputEventTrace/ReplayController/<>c__DisplayClass43_0");
// Type namespace: UnityEngine.InputSystem.LowLevel
namespace UnityEngine::InputSystem::LowLevel {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController/<>c__DisplayClass43_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class InputEventTrace::ReplayController::$$c__DisplayClass43_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 originalDeviceId
    // Size: 0x4
    // Offset: 0x10
    int originalDeviceId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return originalDeviceId;
    }
    // Get instance field reference: public System.Int32 originalDeviceId
    [[deprecated("Use field access instead!")]] int& dyn_originalDeviceId();
    // public System.Void .ctor()
    // Offset: 0x51529F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InputEventTrace::ReplayController::$$c__DisplayClass43_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::$$c__DisplayClass43_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InputEventTrace::ReplayController::$$c__DisplayClass43_0*, creationType>()));
    }
    // System.Boolean <ApplyDeviceMapping>b__0(UnityEngine.InputSystem.LowLevel.InputEventTrace/DeviceInfo x)
    // Offset: 0x5152B34
    bool $ApplyDeviceMapping$b__0(::UnityEngine::InputSystem::LowLevel::InputEventTrace::DeviceInfo x);
  }; // UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController/<>c__DisplayClass43_0
  #pragma pack(pop)
  static check_size<sizeof(InputEventTrace::ReplayController::$$c__DisplayClass43_0), 16 + sizeof(int)> __UnityEngine_InputSystem_LowLevel_InputEventTrace_ReplayController_$$c__DisplayClass43_0SizeCheck;
  static_assert(sizeof(InputEventTrace::ReplayController::$$c__DisplayClass43_0) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::$$c__DisplayClass43_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::$$c__DisplayClass43_0::$ApplyDeviceMapping$b__0
// Il2CppName: <ApplyDeviceMapping>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::$$c__DisplayClass43_0::*)(::UnityEngine::InputSystem::LowLevel::InputEventTrace::DeviceInfo)>(&UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::$$c__DisplayClass43_0::$ApplyDeviceMapping$b__0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.LowLevel", "InputEventTrace/DeviceInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputEventTrace::ReplayController::$$c__DisplayClass43_0*), "<ApplyDeviceMapping>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};