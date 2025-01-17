// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.NetworkPrefabTable
#include "Fusion/NetworkPrefabTable.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.ValueTuple`2
#include "System/ValueTuple_2.hpp"
// Including type: Fusion.NetworkPrefabId
#include "Fusion/NetworkPrefabId.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: System.Collections.Generic.Dictionary`2/Enumerator
#include "System/Collections/Generic/Dictionary_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion
namespace Fusion {
  // Forward declaring type: INetworkPrefabSource
  class INetworkPrefabSource;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::NetworkPrefabTable::$GetEntries$d__9);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkPrefabTable::$GetEntries$d__9*, "Fusion", "NetworkPrefabTable/<GetEntries>d__9");
// Type namespace: Fusion
namespace Fusion {
  // WARNING Size may be invalid!
  // Autogenerated type: Fusion.NetworkPrefabTable/<GetEntries>d__9
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class NetworkPrefabTable::$GetEntries$d__9 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Fusion::NetworkPrefabId, ::Fusion::INetworkPrefabSource*>>, public ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Fusion::NetworkPrefabId, ::Fusion::INetworkPrefabSource*>>*/ {
    public:
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.ValueTuple`2<Fusion.NetworkPrefabId,Fusion.INetworkPrefabSource> <>2__current
    // Size: 0xFFFFFFFF
    // Offset: 0x18
    ::System::ValueTuple_2<::Fusion::NetworkPrefabId, ::Fusion::INetworkPrefabSource*> $$2__current;
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x28
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public Fusion.NetworkPrefabTable <>4__this
    // Size: 0x8
    // Offset: 0x30
    ::Fusion::NetworkPrefabTable* $$4__this;
    // Field size check
    static_assert(sizeof(::Fusion::NetworkPrefabTable*) == 0x8);
    // private System.Collections.Generic.Dictionary`2/Enumerator<Fusion.NetworkPrefabId,Fusion.NetworkPrefabTable/PrefabEntry> <>7__wrap1
    // Size: 0xFFFFFFFF
    // Offset: 0x38
    typename ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkPrefabId, ::Fusion::NetworkPrefabTable::PrefabEntry*>::Enumerator $$7__wrap1;
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Fusion::NetworkPrefabId, ::Fusion::INetworkPrefabSource*>>
    operator ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Fusion::NetworkPrefabId, ::Fusion::INetworkPrefabSource*>>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Fusion::NetworkPrefabId, ::Fusion::INetworkPrefabSource*>>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Fusion::NetworkPrefabId, ::Fusion::INetworkPrefabSource*>>
    operator ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Fusion::NetworkPrefabId, ::Fusion::INetworkPrefabSource*>>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Fusion::NetworkPrefabId, ::Fusion::INetworkPrefabSource*>>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.ValueTuple`2<Fusion.NetworkPrefabId,Fusion.INetworkPrefabSource> <>2__current
    [[deprecated("Use field access instead!")]] ::System::ValueTuple_2<::Fusion::NetworkPrefabId, ::Fusion::INetworkPrefabSource*>& dyn_$$2__current();
    // Get instance field reference: private System.Int32 <>l__initialThreadId
    [[deprecated("Use field access instead!")]] int& dyn_$$l__initialThreadId();
    // Get instance field reference: public Fusion.NetworkPrefabTable <>4__this
    [[deprecated("Use field access instead!")]] ::Fusion::NetworkPrefabTable*& dyn_$$4__this();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2/Enumerator<Fusion.NetworkPrefabId,Fusion.NetworkPrefabTable/PrefabEntry> <>7__wrap1
    [[deprecated("Use field access instead!")]] typename ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkPrefabId, ::Fusion::NetworkPrefabTable::PrefabEntry*>::Enumerator& dyn_$$7__wrap1();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x2B4F8A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkPrefabTable::$GetEntries$d__9* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkPrefabTable::$GetEntries$d__9::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkPrefabTable::$GetEntries$d__9*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x2B50118
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x2B50134
    bool MoveNext();
    // private System.Void <>m__Finally1()
    // Offset: 0x2B5034C
    void $$m__Finally1();
    // private System.ValueTuple`2<Fusion.NetworkPrefabId,Fusion.INetworkPrefabSource> System.Collections.Generic.IEnumerator<(Fusion.NetworkPrefabId,Fusion.INetworkPrefabSource)>.get_Current()
    // Offset: 0x2B5039C
    ::System::ValueTuple_2<::Fusion::NetworkPrefabId, ::Fusion::INetworkPrefabSource*> System_Collections_Generic_IEnumerator$_Fusion_NetworkPrefabId_Fusion_INetworkPrefabSource_$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x2B503A8
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x2B503E0
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<System.ValueTuple`2<Fusion.NetworkPrefabId,Fusion.INetworkPrefabSource>> System.Collections.Generic.IEnumerable<(Fusion.NetworkPrefabId,Fusion.INetworkPrefabSource)>.GetEnumerator()
    // Offset: 0x2B5043C
    ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Fusion::NetworkPrefabId, ::Fusion::INetworkPrefabSource*>>* System_Collections_Generic_IEnumerable$_Fusion_NetworkPrefabId_Fusion_INetworkPrefabSource_$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x2B504E0
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // Fusion.NetworkPrefabTable/<GetEntries>d__9
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::NetworkPrefabTable::$GetEntries$d__9::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::NetworkPrefabTable::$GetEntries$d__9::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkPrefabTable::$GetEntries$d__9::*)()>(&Fusion::NetworkPrefabTable::$GetEntries$d__9::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkPrefabTable::$GetEntries$d__9*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkPrefabTable::$GetEntries$d__9::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::NetworkPrefabTable::$GetEntries$d__9::*)()>(&Fusion::NetworkPrefabTable::$GetEntries$d__9::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkPrefabTable::$GetEntries$d__9*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkPrefabTable::$GetEntries$d__9::$$m__Finally1
// Il2CppName: <>m__Finally1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkPrefabTable::$GetEntries$d__9::*)()>(&Fusion::NetworkPrefabTable::$GetEntries$d__9::$$m__Finally1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkPrefabTable::$GetEntries$d__9*), "<>m__Finally1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkPrefabTable::$GetEntries$d__9::System_Collections_Generic_IEnumerator$_Fusion_NetworkPrefabId_Fusion_INetworkPrefabSource_$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<(Fusion.NetworkPrefabId,Fusion.INetworkPrefabSource)>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<::Fusion::NetworkPrefabId, ::Fusion::INetworkPrefabSource*> (Fusion::NetworkPrefabTable::$GetEntries$d__9::*)()>(&Fusion::NetworkPrefabTable::$GetEntries$d__9::System_Collections_Generic_IEnumerator$_Fusion_NetworkPrefabId_Fusion_INetworkPrefabSource_$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkPrefabTable::$GetEntries$d__9*), "System.Collections.Generic.IEnumerator<(Fusion.NetworkPrefabId,Fusion.INetworkPrefabSource)>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkPrefabTable::$GetEntries$d__9::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkPrefabTable::$GetEntries$d__9::*)()>(&Fusion::NetworkPrefabTable::$GetEntries$d__9::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkPrefabTable::$GetEntries$d__9*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkPrefabTable::$GetEntries$d__9::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Fusion::NetworkPrefabTable::$GetEntries$d__9::*)()>(&Fusion::NetworkPrefabTable::$GetEntries$d__9::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkPrefabTable::$GetEntries$d__9*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkPrefabTable::$GetEntries$d__9::System_Collections_Generic_IEnumerable$_Fusion_NetworkPrefabId_Fusion_INetworkPrefabSource_$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<(Fusion.NetworkPrefabId,Fusion.INetworkPrefabSource)>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Fusion::NetworkPrefabId, ::Fusion::INetworkPrefabSource*>>* (Fusion::NetworkPrefabTable::$GetEntries$d__9::*)()>(&Fusion::NetworkPrefabTable::$GetEntries$d__9::System_Collections_Generic_IEnumerable$_Fusion_NetworkPrefabId_Fusion_INetworkPrefabSource_$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkPrefabTable::$GetEntries$d__9*), "System.Collections.Generic.IEnumerable<(Fusion.NetworkPrefabId,Fusion.INetworkPrefabSource)>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkPrefabTable::$GetEntries$d__9::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (Fusion::NetworkPrefabTable::$GetEntries$d__9::*)()>(&Fusion::NetworkPrefabTable::$GetEntries$d__9::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkPrefabTable::$GetEntries$d__9*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
