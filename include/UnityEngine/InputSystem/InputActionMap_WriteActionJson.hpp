// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.InputActionMap
#include "UnityEngine/InputSystem/InputActionMap.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem
namespace UnityEngine::InputSystem {
  // Forward declaring type: InputAction
  class InputAction;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionMap::WriteActionJson, "UnityEngine.InputSystem", "InputActionMap/WriteActionJson");
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Size: 0x31
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.InputSystem.InputActionMap/WriteActionJson
  // [TokenAttribute] Offset: FFFFFFFF
  struct InputActionMap::WriteActionJson/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.String name
    // Size: 0x8
    // Offset: 0x0
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String type
    // Size: 0x8
    // Offset: 0x8
    ::StringW type;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String id
    // Size: 0x8
    // Offset: 0x10
    ::StringW id;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String expectedControlType
    // Size: 0x8
    // Offset: 0x18
    ::StringW expectedControlType;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String processors
    // Size: 0x8
    // Offset: 0x20
    ::StringW processors;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String interactions
    // Size: 0x8
    // Offset: 0x28
    ::StringW interactions;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean initialStateCheck
    // Size: 0x1
    // Offset: 0x30
    bool initialStateCheck;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: WriteActionJson
    constexpr WriteActionJson(::StringW name_ = {}, ::StringW type_ = {}, ::StringW id_ = {}, ::StringW expectedControlType_ = {}, ::StringW processors_ = {}, ::StringW interactions_ = {}, bool initialStateCheck_ = {}) noexcept : name{name_}, type{type_}, id{id_}, expectedControlType{expectedControlType_}, processors{processors_}, interactions{interactions_}, initialStateCheck{initialStateCheck_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
    // Get instance field reference: public System.String type
    [[deprecated("Use field access instead!")]] ::StringW& dyn_type();
    // Get instance field reference: public System.String id
    [[deprecated("Use field access instead!")]] ::StringW& dyn_id();
    // Get instance field reference: public System.String expectedControlType
    [[deprecated("Use field access instead!")]] ::StringW& dyn_expectedControlType();
    // Get instance field reference: public System.String processors
    [[deprecated("Use field access instead!")]] ::StringW& dyn_processors();
    // Get instance field reference: public System.String interactions
    [[deprecated("Use field access instead!")]] ::StringW& dyn_interactions();
    // Get instance field reference: public System.Boolean initialStateCheck
    [[deprecated("Use field access instead!")]] bool& dyn_initialStateCheck();
    // static public UnityEngine.InputSystem.InputActionMap/WriteActionJson FromAction(UnityEngine.InputSystem.InputAction action)
    // Offset: 0x5096AB8
    static ::UnityEngine::InputSystem::InputActionMap::WriteActionJson FromAction(::UnityEngine::InputSystem::InputAction* action);
  }; // UnityEngine.InputSystem.InputActionMap/WriteActionJson
  #pragma pack(pop)
  static check_size<sizeof(InputActionMap::WriteActionJson), 48 + sizeof(bool)> __UnityEngine_InputSystem_InputActionMap_WriteActionJsonSizeCheck;
  static_assert(sizeof(InputActionMap::WriteActionJson) == 0x31);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputActionMap::WriteActionJson::FromAction
// Il2CppName: FromAction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionMap::WriteActionJson (*)(::UnityEngine::InputSystem::InputAction*)>(&UnityEngine::InputSystem::InputActionMap::WriteActionJson::FromAction)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputAction")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputActionMap::WriteActionJson), "FromAction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action});
  }
};