// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Cinemachine.CinemachineBrain
#include "Cinemachine/CinemachineBrain.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Cinemachine::CinemachineBrain::$AfterPhysics$d__38);
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::CinemachineBrain::$AfterPhysics$d__38*, "Cinemachine", "CinemachineBrain/<AfterPhysics>d__38");
// Type namespace: Cinemachine
namespace Cinemachine {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Cinemachine.CinemachineBrain/<AfterPhysics>d__38
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class CinemachineBrain::$AfterPhysics$d__38 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public Cinemachine.CinemachineBrain <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::Cinemachine::CinemachineBrain* $$4__this;
    // Field size check
    static_assert(sizeof(::Cinemachine::CinemachineBrain*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public Cinemachine.CinemachineBrain <>4__this
    [[deprecated("Use field access instead!")]] ::Cinemachine::CinemachineBrain*& dyn_$$4__this();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x2A81CE4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CinemachineBrain::$AfterPhysics$d__38* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cinemachine::CinemachineBrain::$AfterPhysics$d__38::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CinemachineBrain::$AfterPhysics$d__38*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x2A83E80
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x2A83E84
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x2A83F88
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x2A83F90
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x2A83FC8
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // Cinemachine.CinemachineBrain/<AfterPhysics>d__38
  #pragma pack(pop)
  static check_size<sizeof(CinemachineBrain::$AfterPhysics$d__38), 32 + sizeof(::Cinemachine::CinemachineBrain*)> __Cinemachine_CinemachineBrain_$AfterPhysics$d__38SizeCheck;
  static_assert(sizeof(CinemachineBrain::$AfterPhysics$d__38) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Cinemachine::CinemachineBrain::$AfterPhysics$d__38::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Cinemachine::CinemachineBrain::$AfterPhysics$d__38::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineBrain::$AfterPhysics$d__38::*)()>(&Cinemachine::CinemachineBrain::$AfterPhysics$d__38::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineBrain::$AfterPhysics$d__38*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineBrain::$AfterPhysics$d__38::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Cinemachine::CinemachineBrain::$AfterPhysics$d__38::*)()>(&Cinemachine::CinemachineBrain::$AfterPhysics$d__38::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineBrain::$AfterPhysics$d__38*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineBrain::$AfterPhysics$d__38::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Cinemachine::CinemachineBrain::$AfterPhysics$d__38::*)()>(&Cinemachine::CinemachineBrain::$AfterPhysics$d__38::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineBrain::$AfterPhysics$d__38*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineBrain::$AfterPhysics$d__38::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineBrain::$AfterPhysics$d__38::*)()>(&Cinemachine::CinemachineBrain::$AfterPhysics$d__38::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineBrain::$AfterPhysics$d__38*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineBrain::$AfterPhysics$d__38::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Cinemachine::CinemachineBrain::$AfterPhysics$d__38::*)()>(&Cinemachine::CinemachineBrain::$AfterPhysics$d__38::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineBrain::$AfterPhysics$d__38*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
