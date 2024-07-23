// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.InputActionState
#include "UnityEngine/InputSystem/InputActionState.hpp"
// Including type: UnityEngine.InputSystem.Utilities.SavedStructState`1
#include "UnityEngine/InputSystem/Utilities/SavedStructState_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::InputActionState::$$c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionState::$$c*, "UnityEngine.InputSystem", "InputActionState/<>c");
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.InputActionState/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class InputActionState::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.InputSystem.InputActionState/<>c <>9
    static ::UnityEngine::InputSystem::InputActionState::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.InputSystem.InputActionState/<>c <>9
    static void _set_$$9(::UnityEngine::InputSystem::InputActionState::$$c* value);
    // Get static field: static public UnityEngine.InputSystem.Utilities.SavedStructState`1/TypedRestore<UnityEngine.InputSystem.InputActionState/GlobalState> <>9__135_0
    static typename ::UnityEngine::InputSystem::Utilities::SavedStructState_1<::UnityEngine::InputSystem::InputActionState::GlobalState>::TypedRestore* _get_$$9__135_0();
    // Set static field: static public UnityEngine.InputSystem.Utilities.SavedStructState`1/TypedRestore<UnityEngine.InputSystem.InputActionState/GlobalState> <>9__135_0
    static void _set_$$9__135_0(typename ::UnityEngine::InputSystem::Utilities::SavedStructState_1<::UnityEngine::InputSystem::InputActionState::GlobalState>::TypedRestore* value);
    // Get static field: static public System.Action <>9__135_1
    static ::System::Action* _get_$$9__135_1();
    // Set static field: static public System.Action <>9__135_1
    static void _set_$$9__135_1(::System::Action* value);
    // static private System.Void .cctor()
    // Offset: 0x50AD220
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x50AD288
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InputActionState::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::InputActionState::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InputActionState::$$c*, creationType>()));
    }
    // System.Void <SaveAndResetState>b__135_0(ref UnityEngine.InputSystem.InputActionState/GlobalState state)
    // Offset: 0x50AD290
    void $SaveAndResetState$b__135_0(ByRef<::UnityEngine::InputSystem::InputActionState::GlobalState> state);
    // System.Void <SaveAndResetState>b__135_1()
    // Offset: 0x50AD30C
    void $SaveAndResetState$b__135_1();
  }; // UnityEngine.InputSystem.InputActionState/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputActionState::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::InputSystem::InputActionState::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputActionState::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputActionState::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputActionState::$$c::$SaveAndResetState$b__135_0
// Il2CppName: <SaveAndResetState>b__135_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionState::$$c::*)(ByRef<::UnityEngine::InputSystem::InputActionState::GlobalState>)>(&UnityEngine::InputSystem::InputActionState::$$c::$SaveAndResetState$b__135_0)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputActionState/GlobalState")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputActionState::$$c*), "<SaveAndResetState>b__135_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputActionState::$$c::$SaveAndResetState$b__135_1
// Il2CppName: <SaveAndResetState>b__135_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionState::$$c::*)()>(&UnityEngine::InputSystem::InputActionState::$$c::$SaveAndResetState$b__135_1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputActionState::$$c*), "<SaveAndResetState>b__135_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
