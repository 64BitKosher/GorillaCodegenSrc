// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.InputRemoting/NewDeviceMsg
#include "UnityEngine/InputSystem/InputRemoting_NewDeviceMsg.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.InputSystem.Layouts.InputDeviceDescription
#include "UnityEngine/InputSystem/Layouts/InputDeviceDescription.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputRemoting::NewDeviceMsg::Data, "UnityEngine.InputSystem", "InputRemoting/NewDeviceMsg/Data");
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Size: 0x58
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.InputSystem.InputRemoting/NewDeviceMsg/Data
  // [TokenAttribute] Offset: FFFFFFFF
  struct InputRemoting::NewDeviceMsg::Data/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.String name
    // Size: 0x8
    // Offset: 0x0
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String layout
    // Size: 0x8
    // Offset: 0x8
    ::StringW layout;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 deviceId
    // Size: 0x4
    // Offset: 0x10
    int deviceId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: deviceId and: usages
    char __padding2[0x4] = {};
    // public System.String[] usages
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::StringW> usages;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // public UnityEngine.InputSystem.Layouts.InputDeviceDescription description
    // Size: 0x38
    // Offset: 0x20
    ::UnityEngine::InputSystem::Layouts::InputDeviceDescription description;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Layouts::InputDeviceDescription) == 0x38);
    public:
    // Creating value type constructor for type: Data
    constexpr Data(::StringW name_ = {}, ::StringW layout_ = {}, int deviceId_ = {}, ::ArrayW<::StringW> usages_ = ::ArrayW<::StringW>(static_cast<void*>(nullptr)), ::UnityEngine::InputSystem::Layouts::InputDeviceDescription description_ = {}) noexcept : name{name_}, layout{layout_}, deviceId{deviceId_}, usages{usages_}, description{description_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
    // Get instance field reference: public System.String layout
    [[deprecated("Use field access instead!")]] ::StringW& dyn_layout();
    // Get instance field reference: public System.Int32 deviceId
    [[deprecated("Use field access instead!")]] int& dyn_deviceId();
    // Get instance field reference: public System.String[] usages
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_usages();
    // Get instance field reference: public UnityEngine.InputSystem.Layouts.InputDeviceDescription description
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Layouts::InputDeviceDescription& dyn_description();
  }; // UnityEngine.InputSystem.InputRemoting/NewDeviceMsg/Data
  #pragma pack(pop)
  static check_size<sizeof(InputRemoting::NewDeviceMsg::Data), 32 + sizeof(::UnityEngine::InputSystem::Layouts::InputDeviceDescription)> __UnityEngine_InputSystem_InputRemoting_NewDeviceMsg_DataSizeCheck;
  static_assert(sizeof(InputRemoting::NewDeviceMsg::Data) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
