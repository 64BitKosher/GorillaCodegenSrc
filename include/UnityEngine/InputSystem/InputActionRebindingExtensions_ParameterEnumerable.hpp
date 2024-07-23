// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.InputActionRebindingExtensions
#include "UnityEngine/InputSystem/InputActionRebindingExtensions.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: UnityEngine.InputSystem.InputActionRebindingExtensions/Parameter
#include "UnityEngine/InputSystem/InputActionRebindingExtensions_Parameter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem
namespace UnityEngine::InputSystem {
  // Forward declaring type: InputActionState
  class InputActionState;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionRebindingExtensions::ParameterEnumerable, "UnityEngine.InputSystem", "InputActionRebindingExtensions/ParameterEnumerable");
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Size: 0x84
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterEnumerable
  // [TokenAttribute] Offset: FFFFFFFF
  struct InputActionRebindingExtensions::ParameterEnumerable/*, public ::System::ValueType, public ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionRebindingExtensions::Parameter>*/ {
    public:
    public:
    // private UnityEngine.InputSystem.InputActionState m_State
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::InputSystem::InputActionState* m_State;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::InputActionState*) == 0x8);
    // private UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterOverride m_Parameter
    // Size: 0x74
    // Offset: 0x8
    ::UnityEngine::InputSystem::InputActionRebindingExtensions::ParameterOverride m_Parameter;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::InputActionRebindingExtensions::ParameterOverride) == 0x74);
    // Padding between fields: m_Parameter and: m_MapIndex
    char __padding1[0x4] = {};
    // private System.Int32 m_MapIndex
    // Size: 0x4
    // Offset: 0x80
    int m_MapIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ParameterEnumerable
    constexpr ParameterEnumerable(::UnityEngine::InputSystem::InputActionState* m_State_ = {}, ::UnityEngine::InputSystem::InputActionRebindingExtensions::ParameterOverride m_Parameter_ = {}, int m_MapIndex_ = {}) noexcept : m_State{m_State_}, m_Parameter{m_Parameter_}, m_MapIndex{m_MapIndex_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionRebindingExtensions::Parameter>
    operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionRebindingExtensions::Parameter>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionRebindingExtensions::Parameter>*>(this);
    }
    // Get instance field reference: private UnityEngine.InputSystem.InputActionState m_State
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::InputActionState*& dyn_m_State();
    // Get instance field reference: private UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterOverride m_Parameter
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::InputActionRebindingExtensions::ParameterOverride& dyn_m_Parameter();
    // Get instance field reference: private System.Int32 m_MapIndex
    [[deprecated("Use field access instead!")]] int& dyn_m_MapIndex();
    // public System.Void .ctor(UnityEngine.InputSystem.InputActionState state, UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterOverride parameter, System.Int32 mapIndex)
    // Offset: 0x509729C
    // ABORTED: conflicts with another method.  ParameterEnumerable(::UnityEngine::InputSystem::InputActionState* state, ::UnityEngine::InputSystem::InputActionRebindingExtensions::ParameterOverride parameter, int mapIndex);
    // public UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterEnumerator GetEnumerator()
    // Offset: 0x50972F0
    ::UnityEngine::InputSystem::InputActionRebindingExtensions::ParameterEnumerator GetEnumerator();
    // private System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputActionRebindingExtensions/Parameter> System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputActionRebindingExtensions.Parameter>.GetEnumerator()
    // Offset: 0x509CB60
    ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputActionRebindingExtensions::Parameter>* System_Collections_Generic_IEnumerable$UnityEngine_InputSystem_InputActionRebindingExtensions_Parameter$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x509CC18
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterEnumerable
  #pragma pack(pop)
  static check_size<sizeof(InputActionRebindingExtensions::ParameterEnumerable), 128 + sizeof(int)> __UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerableSizeCheck;
  static_assert(sizeof(InputActionRebindingExtensions::ParameterEnumerable) == 0x84);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputActionRebindingExtensions::ParameterEnumerable::ParameterEnumerable
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputActionRebindingExtensions::ParameterEnumerable::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionRebindingExtensions::ParameterEnumerator (UnityEngine::InputSystem::InputActionRebindingExtensions::ParameterEnumerable::*)()>(&UnityEngine::InputSystem::InputActionRebindingExtensions::ParameterEnumerable::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputActionRebindingExtensions::ParameterEnumerable), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputActionRebindingExtensions::ParameterEnumerable::System_Collections_Generic_IEnumerable$UnityEngine_InputSystem_InputActionRebindingExtensions_Parameter$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputActionRebindingExtensions.Parameter>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputActionRebindingExtensions::Parameter>* (UnityEngine::InputSystem::InputActionRebindingExtensions::ParameterEnumerable::*)()>(&UnityEngine::InputSystem::InputActionRebindingExtensions::ParameterEnumerable::System_Collections_Generic_IEnumerable$UnityEngine_InputSystem_InputActionRebindingExtensions_Parameter$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputActionRebindingExtensions::ParameterEnumerable), "System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputActionRebindingExtensions.Parameter>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputActionRebindingExtensions::ParameterEnumerable::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (UnityEngine::InputSystem::InputActionRebindingExtensions::ParameterEnumerable::*)()>(&UnityEngine::InputSystem::InputActionRebindingExtensions::ParameterEnumerable::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputActionRebindingExtensions::ParameterEnumerable), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
