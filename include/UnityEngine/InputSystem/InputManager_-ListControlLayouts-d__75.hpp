// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.InputManager
#include "UnityEngine/InputSystem/InputManager.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: UnityEngine.InputSystem.Utilities.InternedString
#include "UnityEngine/InputSystem/Utilities/InternedString.hpp"
// Including type: System.Collections.Generic.Dictionary`2/Enumerator
#include "System/Collections/Generic/Dictionary_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Forward declaring namespace: UnityEngine::InputSystem::Layouts
namespace UnityEngine::InputSystem::Layouts {
  // Forward declaring type: InputControlLayout
  class InputControlLayout;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75*, "UnityEngine.InputSystem", "InputManager/<ListControlLayouts>d__75");
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__75
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class InputManager::$ListControlLayouts$d__75 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerable_1<::StringW>, public ::System::Collections::Generic::IEnumerator_1<::StringW>*/ {
    public:
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.String <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::StringW $$2__current;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.String basedOn
    // Size: 0x8
    // Offset: 0x28
    ::StringW basedOn;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String <>3__basedOn
    // Size: 0x8
    // Offset: 0x30
    ::StringW $$3__basedOn;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public UnityEngine.InputSystem.InputManager <>4__this
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::InputSystem::InputManager* $$4__this;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::InputManager*) == 0x8);
    // private UnityEngine.InputSystem.Utilities.InternedString <internedBasedOn>5__2
    // Size: 0x10
    // Offset: 0x40
    ::UnityEngine::InputSystem::Utilities::InternedString $internedBasedOn$5__2;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Utilities::InternedString) == 0x10);
    // private System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.Type> <>7__wrap2
    // Size: 0xFFFFFFFF
    // Offset: 0x50
    typename ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::System::Type*>::Enumerator $$7__wrap2;
    // private System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.String> <>7__wrap3
    // Size: 0xFFFFFFFF
    // Offset: 0x80
    typename ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>::Enumerator $$7__wrap3;
    // private System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>> <>7__wrap4
    // Size: 0xFFFFFFFF
    // Offset: 0xB0
    typename ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>::Enumerator $$7__wrap4;
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<::StringW>
    operator ::System::Collections::Generic::IEnumerable_1<::StringW>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<::StringW>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::StringW>
    operator ::System::Collections::Generic::IEnumerator_1<::StringW>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::StringW>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.String <>2__current
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$$2__current();
    // Get instance field reference: private System.Int32 <>l__initialThreadId
    [[deprecated("Use field access instead!")]] int& dyn_$$l__initialThreadId();
    // Get instance field reference: private System.String basedOn
    [[deprecated("Use field access instead!")]] ::StringW& dyn_basedOn();
    // Get instance field reference: public System.String <>3__basedOn
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$$3__basedOn();
    // Get instance field reference: public UnityEngine.InputSystem.InputManager <>4__this
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::InputManager*& dyn_$$4__this();
    // Get instance field reference: private UnityEngine.InputSystem.Utilities.InternedString <internedBasedOn>5__2
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Utilities::InternedString& dyn_$internedBasedOn$5__2();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.Type> <>7__wrap2
    [[deprecated("Use field access instead!")]] typename ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::System::Type*>::Enumerator& dyn_$$7__wrap2();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.String> <>7__wrap3
    [[deprecated("Use field access instead!")]] typename ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::StringW>::Enumerator& dyn_$$7__wrap3();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>> <>7__wrap4
    [[deprecated("Use field access instead!")]] typename ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Utilities::InternedString, ::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>::Enumerator& dyn_$$7__wrap4();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x5117F10
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InputManager::$ListControlLayouts$d__75* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InputManager::$ListControlLayouts$d__75*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x5117F44
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x5117F88
    bool MoveNext();
    // private System.Void <>m__Finally1()
    // Offset: 0x51186F4
    void $$m__Finally1();
    // private System.Void <>m__Finally2()
    // Offset: 0x5118744
    void $$m__Finally2();
    // private System.Void <>m__Finally3()
    // Offset: 0x5118794
    void $$m__Finally3();
    // private System.Void <>m__Finally4()
    // Offset: 0x51187E4
    void $$m__Finally4();
    // private System.Void <>m__Finally5()
    // Offset: 0x5118834
    void $$m__Finally5();
    // private System.Void <>m__Finally6()
    // Offset: 0x5118884
    void $$m__Finally6();
    // private System.String System.Collections.Generic.IEnumerator<System.String>.get_Current()
    // Offset: 0x51188D4
    ::StringW System_Collections_Generic_IEnumerator$System_String$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x51188DC
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x5118914
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<System.String> System.Collections.Generic.IEnumerable<System.String>.GetEnumerator()
    // Offset: 0x511891C
    ::System::Collections::Generic::IEnumerator_1<::StringW>* System_Collections_Generic_IEnumerable$System_String$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x51189D0
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__75
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75::*)()>(&UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75::*)()>(&UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75::$$m__Finally1
// Il2CppName: <>m__Finally1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75::*)()>(&UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75::$$m__Finally1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75*), "<>m__Finally1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75::$$m__Finally2
// Il2CppName: <>m__Finally2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75::*)()>(&UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75::$$m__Finally2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75*), "<>m__Finally2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75::$$m__Finally3
// Il2CppName: <>m__Finally3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75::*)()>(&UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75::$$m__Finally3)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75*), "<>m__Finally3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75::$$m__Finally4
// Il2CppName: <>m__Finally4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75::*)()>(&UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75::$$m__Finally4)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75*), "<>m__Finally4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75::$$m__Finally5
// Il2CppName: <>m__Finally5
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75::*)()>(&UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75::$$m__Finally5)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75*), "<>m__Finally5", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75::$$m__Finally6
// Il2CppName: <>m__Finally6
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75::*)()>(&UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75::$$m__Finally6)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75*), "<>m__Finally6", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75::System_Collections_Generic_IEnumerator$System_String$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.String>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75::*)()>(&UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75::System_Collections_Generic_IEnumerator$System_String$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75*), "System.Collections.Generic.IEnumerator<System.String>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75::*)()>(&UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75::*)()>(&UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75::System_Collections_Generic_IEnumerable$System_String$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<System.String>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::StringW>* (UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75::*)()>(&UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75::System_Collections_Generic_IEnumerable$System_String$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75*), "System.Collections.Generic.IEnumerable<System.String>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75::*)()>(&UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::InputManager::$ListControlLayouts$d__75*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
