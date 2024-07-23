// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.InputActionAsset
#include "UnityEngine/InputSystem/InputActionAsset.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: UnityEngine.InputSystem.Utilities.ReadOnlyArray`1
#include "UnityEngine/InputSystem/Utilities/ReadOnlyArray_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem
namespace UnityEngine::InputSystem {
  // Forward declaring type: InputAction
  class InputAction;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::InputActionAsset::$GetEnumerator$d__31);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionAsset::$GetEnumerator$d__31*, "UnityEngine.InputSystem", "InputActionAsset/<GetEnumerator>d__31");
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.InputSystem.InputActionAsset/<GetEnumerator>d__31
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class InputActionAsset::$GetEnumerator$d__31 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>*/ {
    public:
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.InputSystem.InputAction <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::InputSystem::InputAction* $$2__current;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::InputAction*) == 0x8);
    // public UnityEngine.InputSystem.InputActionAsset <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::InputSystem::InputActionAsset* $$4__this;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::InputActionAsset*) == 0x8);
    // private System.Int32 <i>5__2
    // Size: 0x4
    // Offset: 0x28
    int $i$5__2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputAction> <actions>5__3
    // Size: 0xFFFFFFFF
    // Offset: 0x30
    ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction*> $actions$5__3;
    // private System.Int32 <actionCount>5__4
    // Size: 0x4
    // Offset: 0x40
    int $actionCount$5__4;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <n>5__5
    // Size: 0x4
    // Offset: 0x44
    int $n$5__5;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>
    operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private UnityEngine.InputSystem.InputAction <>2__current
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::InputAction*& dyn_$$2__current();
    // Get instance field reference: public UnityEngine.InputSystem.InputActionAsset <>4__this
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::InputActionAsset*& dyn_$$4__this();
    // Get instance field reference: private System.Int32 <i>5__2
    [[deprecated("Use field access instead!")]] int& dyn_$i$5__2();
    // Get instance field reference: private UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputAction> <actions>5__3
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction*>& dyn_$actions$5__3();
    // Get instance field reference: private System.Int32 <actionCount>5__4
    [[deprecated("Use field access instead!")]] int& dyn_$actionCount$5__4();
    // Get instance field reference: private System.Int32 <n>5__5
    [[deprecated("Use field access instead!")]] int& dyn_$n$5__5();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x509214C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InputActionAsset::$GetEnumerator$d__31* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::InputActionAsset::$GetEnumerator$d__31::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InputActionAsset::$GetEnumerator$d__31*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x509380C
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x5093810
    bool MoveNext();
    // private UnityEngine.InputSystem.InputAction System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputAction>.get_Current()
    // Offset: 0x50939A4
    ::UnityEngine::InputSystem::InputAction* System_Collections_Generic_IEnumerator$UnityEngine_InputSystem_InputAction$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x50939AC
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x50939E4
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // UnityEngine.InputSystem.InputActionAsset/<GetEnumerator>d__31
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputActionAsset::$GetEnumerator$d__31::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputActionAsset::$GetEnumerator$d__31::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionAsset::$GetEnumerator$d__31::*)()>(&UnityEngine::InputSystem::InputActionAsset::$GetEnumerator$d__31::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputActionAsset::$GetEnumerator$d__31*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputActionAsset::$GetEnumerator$d__31::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputActionAsset::$GetEnumerator$d__31::*)()>(&UnityEngine::InputSystem::InputActionAsset::$GetEnumerator$d__31::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputActionAsset::$GetEnumerator$d__31*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputActionAsset::$GetEnumerator$d__31::System_Collections_Generic_IEnumerator$UnityEngine_InputSystem_InputAction$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputAction>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction* (UnityEngine::InputSystem::InputActionAsset::$GetEnumerator$d__31::*)()>(&UnityEngine::InputSystem::InputActionAsset::$GetEnumerator$d__31::System_Collections_Generic_IEnumerator$UnityEngine_InputSystem_InputAction$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputActionAsset::$GetEnumerator$d__31*), "System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputAction>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputActionAsset::$GetEnumerator$d__31::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputActionAsset::$GetEnumerator$d__31::*)()>(&UnityEngine::InputSystem::InputActionAsset::$GetEnumerator$d__31::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputActionAsset::$GetEnumerator$d__31*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputActionAsset::$GetEnumerator$d__31::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::InputSystem::InputActionAsset::$GetEnumerator$d__31::*)()>(&UnityEngine::InputSystem::InputActionAsset::$GetEnumerator$d__31::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputActionAsset::$GetEnumerator$d__31*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
