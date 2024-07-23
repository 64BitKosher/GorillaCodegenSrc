// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.NetworkRunner
#include "Fusion/NetworkRunner.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.ValueTuple`2
#include "System/ValueTuple_2.hpp"
// Including type: Fusion.NetworkObjectHeaderPtr
#include "Fusion/NetworkObjectHeaderPtr.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator
#include "System/Collections/Generic/Dictionary_2.hpp"
// Including type: Fusion.NetworkId
#include "Fusion/NetworkId.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion
namespace Fusion {
  // Forward declaring type: NetworkObject
  class NetworkObject;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::NetworkRunner::$GetResumeSnapshotNetworkSceneObjects$d__258);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkRunner::$GetResumeSnapshotNetworkSceneObjects$d__258*, "Fusion", "NetworkRunner/<GetResumeSnapshotNetworkSceneObjects>d__258");
// Type namespace: Fusion
namespace Fusion {
  // WARNING Size may be invalid!
  // Autogenerated type: Fusion.NetworkRunner/<GetResumeSnapshotNetworkSceneObjects>d__258
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class NetworkRunner::$GetResumeSnapshotNetworkSceneObjects$d__258 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Fusion::NetworkObject*, ::Fusion::NetworkObjectHeaderPtr>>, public ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Fusion::NetworkObject*, ::Fusion::NetworkObjectHeaderPtr>>*/ {
    public:
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.ValueTuple`2<Fusion.NetworkObject,Fusion.NetworkObjectHeaderPtr> <>2__current
    // Size: 0xFFFFFFFF
    // Offset: 0x18
    ::System::ValueTuple_2<::Fusion::NetworkObject*, ::Fusion::NetworkObjectHeaderPtr> $$2__current;
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x28
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public Fusion.NetworkRunner <>4__this
    // Size: 0x8
    // Offset: 0x30
    ::Fusion::NetworkRunner* $$4__this;
    // Field size check
    static_assert(sizeof(::Fusion::NetworkRunner*) == 0x8);
    // private System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Fusion.NetworkId,Fusion.NetworkObjectHeaderPtr> <>7__wrap1
    // Size: 0xFFFFFFFF
    // Offset: 0x38
    typename ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId, ::Fusion::NetworkObjectHeaderPtr>::ValueCollection::Enumerator $$7__wrap1;
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Fusion::NetworkObject*, ::Fusion::NetworkObjectHeaderPtr>>
    operator ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Fusion::NetworkObject*, ::Fusion::NetworkObjectHeaderPtr>>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::Fusion::NetworkObject*, ::Fusion::NetworkObjectHeaderPtr>>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Fusion::NetworkObject*, ::Fusion::NetworkObjectHeaderPtr>>
    operator ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Fusion::NetworkObject*, ::Fusion::NetworkObjectHeaderPtr>>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Fusion::NetworkObject*, ::Fusion::NetworkObjectHeaderPtr>>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.ValueTuple`2<Fusion.NetworkObject,Fusion.NetworkObjectHeaderPtr> <>2__current
    [[deprecated("Use field access instead!")]] ::System::ValueTuple_2<::Fusion::NetworkObject*, ::Fusion::NetworkObjectHeaderPtr>& dyn_$$2__current();
    // Get instance field reference: private System.Int32 <>l__initialThreadId
    [[deprecated("Use field access instead!")]] int& dyn_$$l__initialThreadId();
    // Get instance field reference: public Fusion.NetworkRunner <>4__this
    [[deprecated("Use field access instead!")]] ::Fusion::NetworkRunner*& dyn_$$4__this();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Fusion.NetworkId,Fusion.NetworkObjectHeaderPtr> <>7__wrap1
    [[deprecated("Use field access instead!")]] typename ::System::Collections::Generic::Dictionary_2<::Fusion::NetworkId, ::Fusion::NetworkObjectHeaderPtr>::ValueCollection::Enumerator& dyn_$$7__wrap1();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x2B67B4C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkRunner::$GetResumeSnapshotNetworkSceneObjects$d__258* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkRunner::$GetResumeSnapshotNetworkSceneObjects$d__258::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkRunner::$GetResumeSnapshotNetworkSceneObjects$d__258*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x2B67B80
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x2B67B9C
    bool MoveNext();
    // private System.Void <>m__Finally1()
    // Offset: 0x2B67EEC
    void $$m__Finally1();
    // private System.ValueTuple`2<Fusion.NetworkObject,Fusion.NetworkObjectHeaderPtr> System.Collections.Generic.IEnumerator<(Fusion.NetworkObject,Fusion.NetworkObjectHeaderPtr)>.get_Current()
    // Offset: 0x2B67F3C
    ::System::ValueTuple_2<::Fusion::NetworkObject*, ::Fusion::NetworkObjectHeaderPtr> System_Collections_Generic_IEnumerator$_Fusion_NetworkObject_Fusion_NetworkObjectHeaderPtr_$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x2B67F48
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x2B67F80
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<System.ValueTuple`2<Fusion.NetworkObject,Fusion.NetworkObjectHeaderPtr>> System.Collections.Generic.IEnumerable<(Fusion.NetworkObject,Fusion.NetworkObjectHeaderPtr)>.GetEnumerator()
    // Offset: 0x2B67FDC
    ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Fusion::NetworkObject*, ::Fusion::NetworkObjectHeaderPtr>>* System_Collections_Generic_IEnumerable$_Fusion_NetworkObject_Fusion_NetworkObjectHeaderPtr_$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x2B68080
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // Fusion.NetworkRunner/<GetResumeSnapshotNetworkSceneObjects>d__258
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::NetworkRunner::$GetResumeSnapshotNetworkSceneObjects$d__258::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::NetworkRunner::$GetResumeSnapshotNetworkSceneObjects$d__258::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkRunner::$GetResumeSnapshotNetworkSceneObjects$d__258::*)()>(&Fusion::NetworkRunner::$GetResumeSnapshotNetworkSceneObjects$d__258::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkRunner::$GetResumeSnapshotNetworkSceneObjects$d__258*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkRunner::$GetResumeSnapshotNetworkSceneObjects$d__258::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::NetworkRunner::$GetResumeSnapshotNetworkSceneObjects$d__258::*)()>(&Fusion::NetworkRunner::$GetResumeSnapshotNetworkSceneObjects$d__258::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkRunner::$GetResumeSnapshotNetworkSceneObjects$d__258*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkRunner::$GetResumeSnapshotNetworkSceneObjects$d__258::$$m__Finally1
// Il2CppName: <>m__Finally1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkRunner::$GetResumeSnapshotNetworkSceneObjects$d__258::*)()>(&Fusion::NetworkRunner::$GetResumeSnapshotNetworkSceneObjects$d__258::$$m__Finally1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkRunner::$GetResumeSnapshotNetworkSceneObjects$d__258*), "<>m__Finally1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkRunner::$GetResumeSnapshotNetworkSceneObjects$d__258::System_Collections_Generic_IEnumerator$_Fusion_NetworkObject_Fusion_NetworkObjectHeaderPtr_$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<(Fusion.NetworkObject,Fusion.NetworkObjectHeaderPtr)>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<::Fusion::NetworkObject*, ::Fusion::NetworkObjectHeaderPtr> (Fusion::NetworkRunner::$GetResumeSnapshotNetworkSceneObjects$d__258::*)()>(&Fusion::NetworkRunner::$GetResumeSnapshotNetworkSceneObjects$d__258::System_Collections_Generic_IEnumerator$_Fusion_NetworkObject_Fusion_NetworkObjectHeaderPtr_$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkRunner::$GetResumeSnapshotNetworkSceneObjects$d__258*), "System.Collections.Generic.IEnumerator<(Fusion.NetworkObject,Fusion.NetworkObjectHeaderPtr)>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkRunner::$GetResumeSnapshotNetworkSceneObjects$d__258::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkRunner::$GetResumeSnapshotNetworkSceneObjects$d__258::*)()>(&Fusion::NetworkRunner::$GetResumeSnapshotNetworkSceneObjects$d__258::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkRunner::$GetResumeSnapshotNetworkSceneObjects$d__258*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkRunner::$GetResumeSnapshotNetworkSceneObjects$d__258::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Fusion::NetworkRunner::$GetResumeSnapshotNetworkSceneObjects$d__258::*)()>(&Fusion::NetworkRunner::$GetResumeSnapshotNetworkSceneObjects$d__258::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkRunner::$GetResumeSnapshotNetworkSceneObjects$d__258*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkRunner::$GetResumeSnapshotNetworkSceneObjects$d__258::System_Collections_Generic_IEnumerable$_Fusion_NetworkObject_Fusion_NetworkObjectHeaderPtr_$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<(Fusion.NetworkObject,Fusion.NetworkObjectHeaderPtr)>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Fusion::NetworkObject*, ::Fusion::NetworkObjectHeaderPtr>>* (Fusion::NetworkRunner::$GetResumeSnapshotNetworkSceneObjects$d__258::*)()>(&Fusion::NetworkRunner::$GetResumeSnapshotNetworkSceneObjects$d__258::System_Collections_Generic_IEnumerable$_Fusion_NetworkObject_Fusion_NetworkObjectHeaderPtr_$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkRunner::$GetResumeSnapshotNetworkSceneObjects$d__258*), "System.Collections.Generic.IEnumerable<(Fusion.NetworkObject,Fusion.NetworkObjectHeaderPtr)>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkRunner::$GetResumeSnapshotNetworkSceneObjects$d__258::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (Fusion::NetworkRunner::$GetResumeSnapshotNetworkSceneObjects$d__258::*)()>(&Fusion::NetworkRunner::$GetResumeSnapshotNetworkSceneObjects$d__258::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkRunner::$GetResumeSnapshotNetworkSceneObjects$d__258*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
