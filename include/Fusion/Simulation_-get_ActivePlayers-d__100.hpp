// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.Simulation
#include "Fusion/Simulation.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: Fusion.PlayerRef
#include "Fusion/PlayerRef.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::Simulation::$get_ActivePlayers$d__100);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Simulation::$get_ActivePlayers$d__100*, "Fusion", "Simulation/<get_ActivePlayers>d__100");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.Simulation/<get_ActivePlayers>d__100
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class Simulation::$get_ActivePlayers$d__100 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerable_1<::Fusion::PlayerRef>, public ::System::Collections::Generic::IEnumerator_1<::Fusion::PlayerRef>*/ {
    public:
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private Fusion.PlayerRef <>2__current
    // Size: 0x4
    // Offset: 0x14
    ::Fusion::PlayerRef $$2__current;
    // Field size check
    static_assert(sizeof(::Fusion::PlayerRef) == 0x4);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x18
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$l__initialThreadId and: $$4__this
    char __padding2[0x4] = {};
    // public Fusion.Simulation <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::Fusion::Simulation* $$4__this;
    // Field size check
    static_assert(sizeof(::Fusion::Simulation*) == 0x8);
    // private System.Int32 <i>5__2
    // Size: 0x4
    // Offset: 0x28
    int $i$5__2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<::Fusion::PlayerRef>
    operator ::System::Collections::Generic::IEnumerable_1<::Fusion::PlayerRef>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<::Fusion::PlayerRef>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Fusion::PlayerRef>
    operator ::System::Collections::Generic::IEnumerator_1<::Fusion::PlayerRef>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Fusion::PlayerRef>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private Fusion.PlayerRef <>2__current
    [[deprecated("Use field access instead!")]] ::Fusion::PlayerRef& dyn_$$2__current();
    // Get instance field reference: private System.Int32 <>l__initialThreadId
    [[deprecated("Use field access instead!")]] int& dyn_$$l__initialThreadId();
    // Get instance field reference: public Fusion.Simulation <>4__this
    [[deprecated("Use field access instead!")]] ::Fusion::Simulation*& dyn_$$4__this();
    // Get instance field reference: private System.Int32 <i>5__2
    [[deprecated("Use field access instead!")]] int& dyn_$i$5__2();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x2B81C00
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Simulation::$get_ActivePlayers$d__100* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::Simulation::$get_ActivePlayers$d__100::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Simulation::$get_ActivePlayers$d__100*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x2B81C34
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x2B81C38
    bool MoveNext();
    // private Fusion.PlayerRef System.Collections.Generic.IEnumerator<Fusion.PlayerRef>.get_Current()
    // Offset: 0x2B81D6C
    ::Fusion::PlayerRef System_Collections_Generic_IEnumerator$Fusion_PlayerRef$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x2B81D74
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x2B81DAC
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<Fusion.PlayerRef> System.Collections.Generic.IEnumerable<Fusion.PlayerRef>.GetEnumerator()
    // Offset: 0x2B81E08
    ::System::Collections::Generic::IEnumerator_1<::Fusion::PlayerRef>* System_Collections_Generic_IEnumerable$Fusion_PlayerRef$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x2B81EAC
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // Fusion.Simulation/<get_ActivePlayers>d__100
  #pragma pack(pop)
  static check_size<sizeof(Simulation::$get_ActivePlayers$d__100), 40 + sizeof(int)> __Fusion_Simulation_$get_ActivePlayers$d__100SizeCheck;
  static_assert(sizeof(Simulation::$get_ActivePlayers$d__100) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::Simulation::$get_ActivePlayers$d__100::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::Simulation::$get_ActivePlayers$d__100::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Simulation::$get_ActivePlayers$d__100::*)()>(&Fusion::Simulation::$get_ActivePlayers$d__100::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::$get_ActivePlayers$d__100*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Simulation::$get_ActivePlayers$d__100::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::Simulation::$get_ActivePlayers$d__100::*)()>(&Fusion::Simulation::$get_ActivePlayers$d__100::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::$get_ActivePlayers$d__100*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Simulation::$get_ActivePlayers$d__100::System_Collections_Generic_IEnumerator$Fusion_PlayerRef$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<Fusion.PlayerRef>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::PlayerRef (Fusion::Simulation::$get_ActivePlayers$d__100::*)()>(&Fusion::Simulation::$get_ActivePlayers$d__100::System_Collections_Generic_IEnumerator$Fusion_PlayerRef$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::$get_ActivePlayers$d__100*), "System.Collections.Generic.IEnumerator<Fusion.PlayerRef>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Simulation::$get_ActivePlayers$d__100::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Simulation::$get_ActivePlayers$d__100::*)()>(&Fusion::Simulation::$get_ActivePlayers$d__100::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::$get_ActivePlayers$d__100*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Simulation::$get_ActivePlayers$d__100::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Fusion::Simulation::$get_ActivePlayers$d__100::*)()>(&Fusion::Simulation::$get_ActivePlayers$d__100::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::$get_ActivePlayers$d__100*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Simulation::$get_ActivePlayers$d__100::System_Collections_Generic_IEnumerable$Fusion_PlayerRef$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<Fusion.PlayerRef>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::Fusion::PlayerRef>* (Fusion::Simulation::$get_ActivePlayers$d__100::*)()>(&Fusion::Simulation::$get_ActivePlayers$d__100::System_Collections_Generic_IEnumerable$Fusion_PlayerRef$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::$get_ActivePlayers$d__100*), "System.Collections.Generic.IEnumerable<Fusion.PlayerRef>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Simulation::$get_ActivePlayers$d__100::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (Fusion::Simulation::$get_ActivePlayers$d__100::*)()>(&Fusion::Simulation::$get_ActivePlayers$d__100::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Simulation::$get_ActivePlayers$d__100*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
