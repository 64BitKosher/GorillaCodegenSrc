// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem
namespace UnityEngine::InputSystem {
  // Forward declaring type: InputActionState
  class InputActionState;
  // Forward declaring type: InputActionPhase
  struct InputActionPhase;
  // Forward declaring type: InputAction
  class InputAction;
  // Forward declaring type: InputControl
  class InputControl;
  // Forward declaring type: IInputInteraction
  class IInputInteraction;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Forward declaring type: CallbackContext
  struct InputAction_CallbackContext;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputAction_CallbackContext, "UnityEngine.InputSystem", "InputAction/CallbackContext");
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.InputSystem.InputAction/CallbackContext
  // [TokenAttribute] Offset: FFFFFFFF
  struct InputAction_CallbackContext/*, public ::System::ValueType*/ {
    public:
    public:
    // UnityEngine.InputSystem.InputActionState m_State
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::InputSystem::InputActionState* m_State;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::InputActionState*) == 0x8);
    // System.Int32 m_ActionIndex
    // Size: 0x4
    // Offset: 0x8
    int m_ActionIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: InputAction_CallbackContext
    constexpr InputAction_CallbackContext(::UnityEngine::InputSystem::InputActionState* m_State_ = {}, int m_ActionIndex_ = {}) noexcept : m_State{m_State_}, m_ActionIndex{m_ActionIndex_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: UnityEngine.InputSystem.InputActionState m_State
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::InputActionState*& dyn_m_State();
    // Get instance field reference: System.Int32 m_ActionIndex
    [[deprecated("Use field access instead!")]] int& dyn_m_ActionIndex();
    // private System.Int32 get_actionIndex()
    // Offset: 0x508F754
    int get_actionIndex();
    // private System.Int32 get_bindingIndex()
    // Offset: 0x508F75C
    int get_bindingIndex();
    // private System.Int32 get_controlIndex()
    // Offset: 0x508F790
    int get_controlIndex();
    // private System.Int32 get_interactionIndex()
    // Offset: 0x508F7C4
    int get_interactionIndex();
    // public UnityEngine.InputSystem.InputActionPhase get_phase()
    // Offset: 0x508F7F8
    ::UnityEngine::InputSystem::InputActionPhase get_phase();
    // public System.Boolean get_started()
    // Offset: 0x508F828
    bool get_started();
    // public System.Boolean get_performed()
    // Offset: 0x508F860
    bool get_performed();
    // public System.Boolean get_canceled()
    // Offset: 0x508F898
    bool get_canceled();
    // public UnityEngine.InputSystem.InputAction get_action()
    // Offset: 0x508F8D0
    ::UnityEngine::InputSystem::InputAction* get_action();
    // public UnityEngine.InputSystem.InputControl get_control()
    // Offset: 0x508F900
    ::UnityEngine::InputSystem::InputControl* get_control();
    // public UnityEngine.InputSystem.IInputInteraction get_interaction()
    // Offset: 0x508F944
    ::UnityEngine::InputSystem::IInputInteraction* get_interaction();
    // public System.Double get_time()
    // Offset: 0x508F99C
    double get_time();
    // public System.Double get_startTime()
    // Offset: 0x508F9D4
    double get_startTime();
    // public System.Double get_duration()
    // Offset: 0x508FA0C
    double get_duration();
    // public System.Type get_valueType()
    // Offset: 0x508FA74
    ::System::Type* get_valueType();
    // public System.Int32 get_valueSizeInBytes()
    // Offset: 0x508FAC4
    int get_valueSizeInBytes();
    // public System.Void ReadValue(System.Void* buffer, System.Int32 bufferSize)
    // Offset: 0x508FB14
    void ReadValue(void* buffer, int bufferSize);
    // public TValue ReadValue()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TValue>
    TValue ReadValue() {
      static_assert(std::is_convertible_v<TValue, ::System::ValueType*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::InputAction_CallbackContext::ReadValue");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "ReadValue", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<TValue, false>(this, ___generic__method);
    }
    // public System.Boolean ReadValueAsButton()
    // Offset: 0x508FCD4
    bool ReadValueAsButton();
    // public System.Object ReadValueAsObject()
    // Offset: 0x508FD58
    ::Il2CppObject* ReadValueAsObject();
    // public override System.String ToString()
    // Offset: 0x508FDE0
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // UnityEngine.InputSystem.InputAction/CallbackContext
  #pragma pack(pop)
  static check_size<sizeof(InputAction_CallbackContext), 8 + sizeof(int)> __UnityEngine_InputSystem_InputAction_CallbackContextSizeCheck;
  static_assert(sizeof(InputAction_CallbackContext) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputAction_CallbackContext::get_actionIndex
// Il2CppName: get_actionIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::InputSystem::InputAction_CallbackContext::*)()>(&UnityEngine::InputSystem::InputAction_CallbackContext::get_actionIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputAction_CallbackContext), "get_actionIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputAction_CallbackContext::get_bindingIndex
// Il2CppName: get_bindingIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::InputSystem::InputAction_CallbackContext::*)()>(&UnityEngine::InputSystem::InputAction_CallbackContext::get_bindingIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputAction_CallbackContext), "get_bindingIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputAction_CallbackContext::get_controlIndex
// Il2CppName: get_controlIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::InputSystem::InputAction_CallbackContext::*)()>(&UnityEngine::InputSystem::InputAction_CallbackContext::get_controlIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputAction_CallbackContext), "get_controlIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputAction_CallbackContext::get_interactionIndex
// Il2CppName: get_interactionIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::InputSystem::InputAction_CallbackContext::*)()>(&UnityEngine::InputSystem::InputAction_CallbackContext::get_interactionIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputAction_CallbackContext), "get_interactionIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputAction_CallbackContext::get_phase
// Il2CppName: get_phase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionPhase (UnityEngine::InputSystem::InputAction_CallbackContext::*)()>(&UnityEngine::InputSystem::InputAction_CallbackContext::get_phase)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputAction_CallbackContext), "get_phase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputAction_CallbackContext::get_started
// Il2CppName: get_started
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputAction_CallbackContext::*)()>(&UnityEngine::InputSystem::InputAction_CallbackContext::get_started)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputAction_CallbackContext), "get_started", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputAction_CallbackContext::get_performed
// Il2CppName: get_performed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputAction_CallbackContext::*)()>(&UnityEngine::InputSystem::InputAction_CallbackContext::get_performed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputAction_CallbackContext), "get_performed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputAction_CallbackContext::get_canceled
// Il2CppName: get_canceled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputAction_CallbackContext::*)()>(&UnityEngine::InputSystem::InputAction_CallbackContext::get_canceled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputAction_CallbackContext), "get_canceled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputAction_CallbackContext::get_action
// Il2CppName: get_action
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction* (UnityEngine::InputSystem::InputAction_CallbackContext::*)()>(&UnityEngine::InputSystem::InputAction_CallbackContext::get_action)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputAction_CallbackContext), "get_action", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputAction_CallbackContext::get_control
// Il2CppName: get_control
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputControl* (UnityEngine::InputSystem::InputAction_CallbackContext::*)()>(&UnityEngine::InputSystem::InputAction_CallbackContext::get_control)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputAction_CallbackContext), "get_control", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputAction_CallbackContext::get_interaction
// Il2CppName: get_interaction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::IInputInteraction* (UnityEngine::InputSystem::InputAction_CallbackContext::*)()>(&UnityEngine::InputSystem::InputAction_CallbackContext::get_interaction)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputAction_CallbackContext), "get_interaction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputAction_CallbackContext::get_time
// Il2CppName: get_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (UnityEngine::InputSystem::InputAction_CallbackContext::*)()>(&UnityEngine::InputSystem::InputAction_CallbackContext::get_time)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputAction_CallbackContext), "get_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputAction_CallbackContext::get_startTime
// Il2CppName: get_startTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (UnityEngine::InputSystem::InputAction_CallbackContext::*)()>(&UnityEngine::InputSystem::InputAction_CallbackContext::get_startTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputAction_CallbackContext), "get_startTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputAction_CallbackContext::get_duration
// Il2CppName: get_duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (UnityEngine::InputSystem::InputAction_CallbackContext::*)()>(&UnityEngine::InputSystem::InputAction_CallbackContext::get_duration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputAction_CallbackContext), "get_duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputAction_CallbackContext::get_valueType
// Il2CppName: get_valueType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (UnityEngine::InputSystem::InputAction_CallbackContext::*)()>(&UnityEngine::InputSystem::InputAction_CallbackContext::get_valueType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputAction_CallbackContext), "get_valueType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputAction_CallbackContext::get_valueSizeInBytes
// Il2CppName: get_valueSizeInBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::InputSystem::InputAction_CallbackContext::*)()>(&UnityEngine::InputSystem::InputAction_CallbackContext::get_valueSizeInBytes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputAction_CallbackContext), "get_valueSizeInBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputAction_CallbackContext::ReadValue
// Il2CppName: ReadValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputAction_CallbackContext::*)(void*, int)>(&UnityEngine::InputSystem::InputAction_CallbackContext::ReadValue)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Void"))->byval_arg;
    static auto* bufferSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputAction_CallbackContext), "ReadValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, bufferSize});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputAction_CallbackContext::ReadValue
// Il2CppName: ReadValue
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputAction_CallbackContext::ReadValueAsButton
// Il2CppName: ReadValueAsButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputAction_CallbackContext::*)()>(&UnityEngine::InputSystem::InputAction_CallbackContext::ReadValueAsButton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputAction_CallbackContext), "ReadValueAsButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputAction_CallbackContext::ReadValueAsObject
// Il2CppName: ReadValueAsObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::InputSystem::InputAction_CallbackContext::*)()>(&UnityEngine::InputSystem::InputAction_CallbackContext::ReadValueAsObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputAction_CallbackContext), "ReadValueAsObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputAction_CallbackContext::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::InputAction_CallbackContext::*)()>(&UnityEngine::InputSystem::InputAction_CallbackContext::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputAction_CallbackContext), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};