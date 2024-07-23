// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.NetworkSceneManagerBase
#include "Fusion/NetworkSceneManagerBase.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: Fusion.SceneRef
#include "Fusion/SceneRef.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::NetworkSceneManagerBase::$SwitchSceneWrapper$d__28);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkSceneManagerBase::$SwitchSceneWrapper$d__28*, "Fusion", "NetworkSceneManagerBase/<SwitchSceneWrapper>d__28");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x49
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.NetworkSceneManagerBase/<SwitchSceneWrapper>d__28
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class NetworkSceneManagerBase::$SwitchSceneWrapper$d__28 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public Fusion.NetworkSceneManagerBase <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::Fusion::NetworkSceneManagerBase* $$4__this;
    // Field size check
    static_assert(sizeof(::Fusion::NetworkSceneManagerBase*) == 0x8);
    // public Fusion.SceneRef prevScene
    // Size: 0x4
    // Offset: 0x28
    ::Fusion::SceneRef prevScene;
    // Field size check
    static_assert(sizeof(::Fusion::SceneRef) == 0x4);
    // public Fusion.SceneRef newScene
    // Size: 0x4
    // Offset: 0x2C
    ::Fusion::SceneRef newScene;
    // Field size check
    static_assert(sizeof(::Fusion::SceneRef) == 0x4);
    // private Fusion.NetworkSceneManagerBase/<>c__DisplayClass28_0 <>8__1
    // Size: 0x8
    // Offset: 0x30
    ::Fusion::NetworkSceneManagerBase::$$c__DisplayClass28_0* $$8__1;
    // Field size check
    static_assert(sizeof(::Fusion::NetworkSceneManagerBase::$$c__DisplayClass28_0*) == 0x8);
    // private System.Exception <error>5__2
    // Size: 0x8
    // Offset: 0x38
    ::System::Exception* $error$5__2;
    // Field size check
    static_assert(sizeof(::System::Exception*) == 0x8);
    // private System.Collections.IEnumerator <coro>5__3
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::IEnumerator* $coro$5__3;
    // Field size check
    static_assert(sizeof(::System::Collections::IEnumerator*) == 0x8);
    // private System.Boolean <next>5__4
    // Size: 0x1
    // Offset: 0x48
    bool $next$5__4;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public Fusion.NetworkSceneManagerBase <>4__this
    [[deprecated("Use field access instead!")]] ::Fusion::NetworkSceneManagerBase*& dyn_$$4__this();
    // Get instance field reference: public Fusion.SceneRef prevScene
    [[deprecated("Use field access instead!")]] ::Fusion::SceneRef& dyn_prevScene();
    // Get instance field reference: public Fusion.SceneRef newScene
    [[deprecated("Use field access instead!")]] ::Fusion::SceneRef& dyn_newScene();
    // Get instance field reference: private Fusion.NetworkSceneManagerBase/<>c__DisplayClass28_0 <>8__1
    [[deprecated("Use field access instead!")]] ::Fusion::NetworkSceneManagerBase::$$c__DisplayClass28_0*& dyn_$$8__1();
    // Get instance field reference: private System.Exception <error>5__2
    [[deprecated("Use field access instead!")]] ::System::Exception*& dyn_$error$5__2();
    // Get instance field reference: private System.Collections.IEnumerator <coro>5__3
    [[deprecated("Use field access instead!")]] ::System::Collections::IEnumerator*& dyn_$coro$5__3();
    // Get instance field reference: private System.Boolean <next>5__4
    [[deprecated("Use field access instead!")]] bool& dyn_$next$5__4();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x281861C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkSceneManagerBase::$SwitchSceneWrapper$d__28* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkSceneManagerBase::$SwitchSceneWrapper$d__28::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkSceneManagerBase::$SwitchSceneWrapper$d__28*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x2818B7C
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x2818B98
    bool MoveNext();
    // private System.Void <>m__Finally1()
    // Offset: 0x2819114
    void $$m__Finally1();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x28191B4
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x28191BC
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x28191F4
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // Fusion.NetworkSceneManagerBase/<SwitchSceneWrapper>d__28
  #pragma pack(pop)
  static check_size<sizeof(NetworkSceneManagerBase::$SwitchSceneWrapper$d__28), 72 + sizeof(bool)> __Fusion_NetworkSceneManagerBase_$SwitchSceneWrapper$d__28SizeCheck;
  static_assert(sizeof(NetworkSceneManagerBase::$SwitchSceneWrapper$d__28) == 0x49);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::NetworkSceneManagerBase::$SwitchSceneWrapper$d__28::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::NetworkSceneManagerBase::$SwitchSceneWrapper$d__28::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkSceneManagerBase::$SwitchSceneWrapper$d__28::*)()>(&Fusion::NetworkSceneManagerBase::$SwitchSceneWrapper$d__28::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkSceneManagerBase::$SwitchSceneWrapper$d__28*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkSceneManagerBase::$SwitchSceneWrapper$d__28::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::NetworkSceneManagerBase::$SwitchSceneWrapper$d__28::*)()>(&Fusion::NetworkSceneManagerBase::$SwitchSceneWrapper$d__28::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkSceneManagerBase::$SwitchSceneWrapper$d__28*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkSceneManagerBase::$SwitchSceneWrapper$d__28::$$m__Finally1
// Il2CppName: <>m__Finally1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkSceneManagerBase::$SwitchSceneWrapper$d__28::*)()>(&Fusion::NetworkSceneManagerBase::$SwitchSceneWrapper$d__28::$$m__Finally1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkSceneManagerBase::$SwitchSceneWrapper$d__28*), "<>m__Finally1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkSceneManagerBase::$SwitchSceneWrapper$d__28::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Fusion::NetworkSceneManagerBase::$SwitchSceneWrapper$d__28::*)()>(&Fusion::NetworkSceneManagerBase::$SwitchSceneWrapper$d__28::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkSceneManagerBase::$SwitchSceneWrapper$d__28*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkSceneManagerBase::$SwitchSceneWrapper$d__28::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkSceneManagerBase::$SwitchSceneWrapper$d__28::*)()>(&Fusion::NetworkSceneManagerBase::$SwitchSceneWrapper$d__28::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkSceneManagerBase::$SwitchSceneWrapper$d__28*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkSceneManagerBase::$SwitchSceneWrapper$d__28::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Fusion::NetworkSceneManagerBase::$SwitchSceneWrapper$d__28::*)()>(&Fusion::NetworkSceneManagerBase::$SwitchSceneWrapper$d__28::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkSceneManagerBase::$SwitchSceneWrapper$d__28*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
