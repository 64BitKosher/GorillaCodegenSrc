// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.CredentialCache
#include "System/Net/CredentialCache.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: ICredentials
  class ICredentials;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::CredentialCache::CredentialEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::CredentialCache::CredentialEnumerator*, "System.Net", "CredentialCache/CredentialEnumerator");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.CredentialCache/CredentialEnumerator
  // [TokenAttribute] Offset: FFFFFFFF
  class CredentialCache::CredentialEnumerator : public ::Il2CppObject/*, public ::System::Collections::IEnumerator*/ {
    public:
    public:
    // private System.Net.CredentialCache m_cache
    // Size: 0x8
    // Offset: 0x10
    ::System::Net::CredentialCache* m_cache;
    // Field size check
    static_assert(sizeof(::System::Net::CredentialCache*) == 0x8);
    // private System.Net.ICredentials[] m_array
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::System::Net::ICredentials*> m_array;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Net::ICredentials*>) == 0x8);
    // private System.Int32 m_index
    // Size: 0x4
    // Offset: 0x20
    int m_index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_version
    // Size: 0x4
    // Offset: 0x24
    int m_version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Collections::IEnumerator
    operator ::System::Collections::IEnumerator() noexcept {
      return *reinterpret_cast<::System::Collections::IEnumerator*>(this);
    }
    // Get instance field reference: private System.Net.CredentialCache m_cache
    [[deprecated("Use field access instead!")]] ::System::Net::CredentialCache*& dyn_m_cache();
    // Get instance field reference: private System.Net.ICredentials[] m_array
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Net::ICredentials*>& dyn_m_array();
    // Get instance field reference: private System.Int32 m_index
    [[deprecated("Use field access instead!")]] int& dyn_m_index();
    // Get instance field reference: private System.Int32 m_version
    [[deprecated("Use field access instead!")]] int& dyn_m_version();
    // System.Void .ctor(System.Net.CredentialCache cache, System.Collections.Hashtable table, System.Collections.Hashtable hostTable, System.Int32 version)
    // Offset: 0x4FD1144
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CredentialCache::CredentialEnumerator* New_ctor(::System::Net::CredentialCache* cache, ::System::Collections::Hashtable* table, ::System::Collections::Hashtable* hostTable, int version) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::CredentialCache::CredentialEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CredentialCache::CredentialEnumerator*, creationType>(cache, table, hostTable, version)));
    }
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x4FD140C
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Boolean System.Collections.IEnumerator.MoveNext()
    // Offset: 0x4FD14C8
    bool System_Collections_IEnumerator_MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x4FD1574
    void System_Collections_IEnumerator_Reset();
  }; // System.Net.CredentialCache/CredentialEnumerator
  #pragma pack(pop)
  static check_size<sizeof(CredentialCache::CredentialEnumerator), 36 + sizeof(int)> __System_Net_CredentialCache_CredentialEnumeratorSizeCheck;
  static_assert(sizeof(CredentialCache::CredentialEnumerator) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::CredentialCache::CredentialEnumerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::CredentialCache::CredentialEnumerator::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Net::CredentialCache::CredentialEnumerator::*)()>(&System::Net::CredentialCache::CredentialEnumerator::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::CredentialCache::CredentialEnumerator*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::CredentialCache::CredentialEnumerator::System_Collections_IEnumerator_MoveNext
// Il2CppName: System.Collections.IEnumerator.MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::CredentialCache::CredentialEnumerator::*)()>(&System::Net::CredentialCache::CredentialEnumerator::System_Collections_IEnumerator_MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::CredentialCache::CredentialEnumerator*), "System.Collections.IEnumerator.MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::CredentialCache::CredentialEnumerator::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::CredentialCache::CredentialEnumerator::*)()>(&System::Net::CredentialCache::CredentialEnumerator::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::CredentialCache::CredentialEnumerator*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
