// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.InputControlExtensions
#include "UnityEngine/InputSystem/InputControlExtensions.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: UnityEngine.InputSystem.LowLevel.InputEventPtr
#include "UnityEngine/InputSystem/LowLevel/InputEventPtr.hpp"
// Including type: UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator
#include "UnityEngine/InputSystem/InputControlExtensions_InputEventControlEnumerator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem
namespace UnityEngine::InputSystem {
  // Forward declaring type: InputControl
  class InputControl;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::InputControlExtensions::$GetAllButtonPresses$d__43);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputControlExtensions::$GetAllButtonPresses$d__43*, "UnityEngine.InputSystem", "InputControlExtensions/<GetAllButtonPresses>d__43");
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Size: 0xB4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.InputControlExtensions/<GetAllButtonPresses>d__43
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class InputControlExtensions::$GetAllButtonPresses$d__43 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>, public ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>*/ {
    public:
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private UnityEngine.InputSystem.InputControl <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::InputSystem::InputControl* $$2__current;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::InputControl*) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$l__initialThreadId and: eventPtr
    char __padding2[0x4] = {};
    // private UnityEngine.InputSystem.LowLevel.InputEventPtr eventPtr
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::LowLevel::InputEventPtr) == 0x8);
    // public UnityEngine.InputSystem.LowLevel.InputEventPtr <>3__eventPtr
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::InputSystem::LowLevel::InputEventPtr $$3__eventPtr;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::LowLevel::InputEventPtr) == 0x8);
    // private System.Single magnitude
    // Size: 0x4
    // Offset: 0x38
    float magnitude;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single <>3__magnitude
    // Size: 0x4
    // Offset: 0x3C
    float $$3__magnitude;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean buttonControlsOnly
    // Size: 0x1
    // Offset: 0x40
    bool buttonControlsOnly;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean <>3__buttonControlsOnly
    // Size: 0x1
    // Offset: 0x41
    bool $$3__buttonControlsOnly;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: $$3__buttonControlsOnly and: $$7__wrap1
    char __padding8[0x6] = {};
    // private UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator <>7__wrap1
    // Size: 0x6C
    // Offset: 0x48
    ::UnityEngine::InputSystem::InputControlExtensions::InputEventControlEnumerator $$7__wrap1;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::InputControlExtensions::InputEventControlEnumerator) == 0x6C);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>
    operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputControl*>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>
    operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private UnityEngine.InputSystem.InputControl <>2__current
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::InputControl*& dyn_$$2__current();
    // Get instance field reference: private System.Int32 <>l__initialThreadId
    [[deprecated("Use field access instead!")]] int& dyn_$$l__initialThreadId();
    // Get instance field reference: private UnityEngine.InputSystem.LowLevel.InputEventPtr eventPtr
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::LowLevel::InputEventPtr& dyn_eventPtr();
    // Get instance field reference: public UnityEngine.InputSystem.LowLevel.InputEventPtr <>3__eventPtr
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::LowLevel::InputEventPtr& dyn_$$3__eventPtr();
    // Get instance field reference: private System.Single magnitude
    [[deprecated("Use field access instead!")]] float& dyn_magnitude();
    // Get instance field reference: public System.Single <>3__magnitude
    [[deprecated("Use field access instead!")]] float& dyn_$$3__magnitude();
    // Get instance field reference: private System.Boolean buttonControlsOnly
    [[deprecated("Use field access instead!")]] bool& dyn_buttonControlsOnly();
    // Get instance field reference: public System.Boolean <>3__buttonControlsOnly
    [[deprecated("Use field access instead!")]] bool& dyn_$$3__buttonControlsOnly();
    // Get instance field reference: private UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator <>7__wrap1
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::InputControlExtensions::InputEventControlEnumerator& dyn_$$7__wrap1();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x50BFE1C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InputControlExtensions::$GetAllButtonPresses$d__43* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::InputControlExtensions::$GetAllButtonPresses$d__43::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InputControlExtensions::$GetAllButtonPresses$d__43*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x50C1180
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x50C11A4
    bool MoveNext();
    // private System.Void <>m__Finally1()
    // Offset: 0x50C1408
    void $$m__Finally1();
    // private UnityEngine.InputSystem.InputControl System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputControl>.get_Current()
    // Offset: 0x50C1418
    ::UnityEngine::InputSystem::InputControl* System_Collections_Generic_IEnumerator$UnityEngine_InputSystem_InputControl$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x50C1420
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x50C1458
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputControl> System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputControl>.GetEnumerator()
    // Offset: 0x50C1460
    ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>* System_Collections_Generic_IEnumerable$UnityEngine_InputSystem_InputControl$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x50C150C
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // UnityEngine.InputSystem.InputControlExtensions/<GetAllButtonPresses>d__43
  #pragma pack(pop)
  static check_size<sizeof(InputControlExtensions::$GetAllButtonPresses$d__43), 72 + sizeof(::UnityEngine::InputSystem::InputControlExtensions::InputEventControlEnumerator)> __UnityEngine_InputSystem_InputControlExtensions_$GetAllButtonPresses$d__43SizeCheck;
  static_assert(sizeof(InputControlExtensions::$GetAllButtonPresses$d__43) == 0xB4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputControlExtensions::$GetAllButtonPresses$d__43::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputControlExtensions::$GetAllButtonPresses$d__43::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputControlExtensions::$GetAllButtonPresses$d__43::*)()>(&UnityEngine::InputSystem::InputControlExtensions::$GetAllButtonPresses$d__43::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputControlExtensions::$GetAllButtonPresses$d__43*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputControlExtensions::$GetAllButtonPresses$d__43::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputControlExtensions::$GetAllButtonPresses$d__43::*)()>(&UnityEngine::InputSystem::InputControlExtensions::$GetAllButtonPresses$d__43::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputControlExtensions::$GetAllButtonPresses$d__43*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputControlExtensions::$GetAllButtonPresses$d__43::$$m__Finally1
// Il2CppName: <>m__Finally1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputControlExtensions::$GetAllButtonPresses$d__43::*)()>(&UnityEngine::InputSystem::InputControlExtensions::$GetAllButtonPresses$d__43::$$m__Finally1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputControlExtensions::$GetAllButtonPresses$d__43*), "<>m__Finally1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputControlExtensions::$GetAllButtonPresses$d__43::System_Collections_Generic_IEnumerator$UnityEngine_InputSystem_InputControl$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputControl>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputControl* (UnityEngine::InputSystem::InputControlExtensions::$GetAllButtonPresses$d__43::*)()>(&UnityEngine::InputSystem::InputControlExtensions::$GetAllButtonPresses$d__43::System_Collections_Generic_IEnumerator$UnityEngine_InputSystem_InputControl$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputControlExtensions::$GetAllButtonPresses$d__43*), "System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputControl>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputControlExtensions::$GetAllButtonPresses$d__43::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputControlExtensions::$GetAllButtonPresses$d__43::*)()>(&UnityEngine::InputSystem::InputControlExtensions::$GetAllButtonPresses$d__43::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputControlExtensions::$GetAllButtonPresses$d__43*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputControlExtensions::$GetAllButtonPresses$d__43::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::InputSystem::InputControlExtensions::$GetAllButtonPresses$d__43::*)()>(&UnityEngine::InputSystem::InputControlExtensions::$GetAllButtonPresses$d__43::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputControlExtensions::$GetAllButtonPresses$d__43*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputControlExtensions::$GetAllButtonPresses$d__43::System_Collections_Generic_IEnumerable$UnityEngine_InputSystem_InputControl$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputControl>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputControl*>* (UnityEngine::InputSystem::InputControlExtensions::$GetAllButtonPresses$d__43::*)()>(&UnityEngine::InputSystem::InputControlExtensions::$GetAllButtonPresses$d__43::System_Collections_Generic_IEnumerable$UnityEngine_InputSystem_InputControl$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputControlExtensions::$GetAllButtonPresses$d__43*), "System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputControl>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputControlExtensions::$GetAllButtonPresses$d__43::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (UnityEngine::InputSystem::InputControlExtensions::$GetAllButtonPresses$d__43::*)()>(&UnityEngine::InputSystem::InputControlExtensions::$GetAllButtonPresses$d__43::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputControlExtensions::$GetAllButtonPresses$d__43*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
