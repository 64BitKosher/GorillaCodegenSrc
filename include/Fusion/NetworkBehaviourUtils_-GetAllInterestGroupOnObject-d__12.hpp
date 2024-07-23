// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.NetworkBehaviourUtils
#include "Fusion/NetworkBehaviourUtils.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion
namespace Fusion {
  // Forward declaring type: NetworkObject
  class NetworkObject;
  // Forward declaring type: NetworkBehaviour
  class NetworkBehaviour;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: PropertyInfo
  class PropertyInfo;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::NetworkBehaviourUtils::$GetAllInterestGroupOnObject$d__12);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkBehaviourUtils::$GetAllInterestGroupOnObject$d__12*, "Fusion", "NetworkBehaviourUtils/<GetAllInterestGroupOnObject>d__12");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x5C
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.NetworkBehaviourUtils/<GetAllInterestGroupOnObject>d__12
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class NetworkBehaviourUtils::$GetAllInterestGroupOnObject$d__12 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerable_1<::StringW>, public ::System::Collections::Generic::IEnumerator_1<::StringW>*/ {
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
    // Padding between fields: $$l__initialThreadId and: obj
    char __padding2[0x4] = {};
    // private Fusion.NetworkObject obj
    // Size: 0x8
    // Offset: 0x28
    ::Fusion::NetworkObject* obj;
    // Field size check
    static_assert(sizeof(::Fusion::NetworkObject*) == 0x8);
    // public Fusion.NetworkObject <>3__obj
    // Size: 0x8
    // Offset: 0x30
    ::Fusion::NetworkObject* $$3__obj;
    // Field size check
    static_assert(sizeof(::Fusion::NetworkObject*) == 0x8);
    // private Fusion.NetworkBehaviour[] <>7__wrap1
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::Fusion::NetworkBehaviour*> $$7__wrap1;
    // Field size check
    static_assert(sizeof(::ArrayW<::Fusion::NetworkBehaviour*>) == 0x8);
    // private System.Int32 <>7__wrap2
    // Size: 0x4
    // Offset: 0x40
    int $$7__wrap2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$7__wrap2 and: $currentType$5__4
    char __padding6[0x4] = {};
    // private System.Type <currentType>5__4
    // Size: 0x8
    // Offset: 0x48
    ::System::Type* $currentType$5__4;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private System.Reflection.PropertyInfo[] <>7__wrap4
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<::System::Reflection::PropertyInfo*> $$7__wrap4;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Reflection::PropertyInfo*>) == 0x8);
    // private System.Int32 <>7__wrap5
    // Size: 0x4
    // Offset: 0x58
    int $$7__wrap5;
    // Field size check
    static_assert(sizeof(int) == 0x4);
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
    // Get instance field reference: private Fusion.NetworkObject obj
    [[deprecated("Use field access instead!")]] ::Fusion::NetworkObject*& dyn_obj();
    // Get instance field reference: public Fusion.NetworkObject <>3__obj
    [[deprecated("Use field access instead!")]] ::Fusion::NetworkObject*& dyn_$$3__obj();
    // Get instance field reference: private Fusion.NetworkBehaviour[] <>7__wrap1
    [[deprecated("Use field access instead!")]] ::ArrayW<::Fusion::NetworkBehaviour*>& dyn_$$7__wrap1();
    // Get instance field reference: private System.Int32 <>7__wrap2
    [[deprecated("Use field access instead!")]] int& dyn_$$7__wrap2();
    // Get instance field reference: private System.Type <currentType>5__4
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_$currentType$5__4();
    // Get instance field reference: private System.Reflection.PropertyInfo[] <>7__wrap4
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Reflection::PropertyInfo*>& dyn_$$7__wrap4();
    // Get instance field reference: private System.Int32 <>7__wrap5
    [[deprecated("Use field access instead!")]] int& dyn_$$7__wrap5();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x2B0D5F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkBehaviourUtils::$GetAllInterestGroupOnObject$d__12* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkBehaviourUtils::$GetAllInterestGroupOnObject$d__12::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkBehaviourUtils::$GetAllInterestGroupOnObject$d__12*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x2B0FDA4
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x2B0FDA8
    bool MoveNext();
    // private System.String System.Collections.Generic.IEnumerator<System.String>.get_Current()
    // Offset: 0x2B10060
    ::StringW System_Collections_Generic_IEnumerator$System_String$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x2B10068
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x2B100A0
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<System.String> System.Collections.Generic.IEnumerable<System.String>.GetEnumerator()
    // Offset: 0x2B100A8
    ::System::Collections::Generic::IEnumerator_1<::StringW>* System_Collections_Generic_IEnumerable$System_String$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x2B1014C
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // Fusion.NetworkBehaviourUtils/<GetAllInterestGroupOnObject>d__12
  #pragma pack(pop)
  static check_size<sizeof(NetworkBehaviourUtils::$GetAllInterestGroupOnObject$d__12), 88 + sizeof(int)> __Fusion_NetworkBehaviourUtils_$GetAllInterestGroupOnObject$d__12SizeCheck;
  static_assert(sizeof(NetworkBehaviourUtils::$GetAllInterestGroupOnObject$d__12) == 0x5C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::NetworkBehaviourUtils::$GetAllInterestGroupOnObject$d__12::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::NetworkBehaviourUtils::$GetAllInterestGroupOnObject$d__12::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkBehaviourUtils::$GetAllInterestGroupOnObject$d__12::*)()>(&Fusion::NetworkBehaviourUtils::$GetAllInterestGroupOnObject$d__12::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkBehaviourUtils::$GetAllInterestGroupOnObject$d__12*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkBehaviourUtils::$GetAllInterestGroupOnObject$d__12::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::NetworkBehaviourUtils::$GetAllInterestGroupOnObject$d__12::*)()>(&Fusion::NetworkBehaviourUtils::$GetAllInterestGroupOnObject$d__12::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkBehaviourUtils::$GetAllInterestGroupOnObject$d__12*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkBehaviourUtils::$GetAllInterestGroupOnObject$d__12::System_Collections_Generic_IEnumerator$System_String$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.String>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Fusion::NetworkBehaviourUtils::$GetAllInterestGroupOnObject$d__12::*)()>(&Fusion::NetworkBehaviourUtils::$GetAllInterestGroupOnObject$d__12::System_Collections_Generic_IEnumerator$System_String$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkBehaviourUtils::$GetAllInterestGroupOnObject$d__12*), "System.Collections.Generic.IEnumerator<System.String>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkBehaviourUtils::$GetAllInterestGroupOnObject$d__12::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkBehaviourUtils::$GetAllInterestGroupOnObject$d__12::*)()>(&Fusion::NetworkBehaviourUtils::$GetAllInterestGroupOnObject$d__12::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkBehaviourUtils::$GetAllInterestGroupOnObject$d__12*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkBehaviourUtils::$GetAllInterestGroupOnObject$d__12::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Fusion::NetworkBehaviourUtils::$GetAllInterestGroupOnObject$d__12::*)()>(&Fusion::NetworkBehaviourUtils::$GetAllInterestGroupOnObject$d__12::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkBehaviourUtils::$GetAllInterestGroupOnObject$d__12*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkBehaviourUtils::$GetAllInterestGroupOnObject$d__12::System_Collections_Generic_IEnumerable$System_String$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<System.String>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::StringW>* (Fusion::NetworkBehaviourUtils::$GetAllInterestGroupOnObject$d__12::*)()>(&Fusion::NetworkBehaviourUtils::$GetAllInterestGroupOnObject$d__12::System_Collections_Generic_IEnumerable$System_String$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkBehaviourUtils::$GetAllInterestGroupOnObject$d__12*), "System.Collections.Generic.IEnumerable<System.String>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkBehaviourUtils::$GetAllInterestGroupOnObject$d__12::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (Fusion::NetworkBehaviourUtils::$GetAllInterestGroupOnObject$d__12::*)()>(&Fusion::NetworkBehaviourUtils::$GetAllInterestGroupOnObject$d__12::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkBehaviourUtils::$GetAllInterestGroupOnObject$d__12*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
