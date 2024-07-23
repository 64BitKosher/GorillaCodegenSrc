// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: HttpAbortDelegate
  class HttpAbortDelegate;
  // Forward declaring type: HttpWebRequest
  class HttpWebRequest;
  // Forward declaring type: WebException
  class WebException;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: ProxyChain
  class ProxyChain;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::ProxyChain);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ProxyChain*, "System.Net", "ProxyChain");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.ProxyChain
  // [TokenAttribute] Offset: FFFFFFFF
  class ProxyChain : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerable_1<::System::Uri*>, public ::System::IDisposable*/ {
    public:
    // Nested type: ::System::Net::ProxyChain::ProxyEnumerator
    class ProxyEnumerator;
    public:
    // private System.Collections.Generic.List`1<System.Uri> m_Cache
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::System::Uri*>* m_Cache;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::System::Uri*>*) == 0x8);
    // private System.Boolean m_CacheComplete
    // Size: 0x1
    // Offset: 0x18
    bool m_CacheComplete;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_CacheComplete and: m_MainEnumerator
    char __padding1[0x7] = {};
    // private System.Net.ProxyChain/ProxyEnumerator m_MainEnumerator
    // Size: 0x8
    // Offset: 0x20
    ::System::Net::ProxyChain::ProxyEnumerator* m_MainEnumerator;
    // Field size check
    static_assert(sizeof(::System::Net::ProxyChain::ProxyEnumerator*) == 0x8);
    // private System.Uri m_Destination
    // Size: 0x8
    // Offset: 0x28
    ::System::Uri* m_Destination;
    // Field size check
    static_assert(sizeof(::System::Uri*) == 0x8);
    // private System.Net.HttpAbortDelegate m_HttpAbortDelegate
    // Size: 0x8
    // Offset: 0x30
    ::System::Net::HttpAbortDelegate* m_HttpAbortDelegate;
    // Field size check
    static_assert(sizeof(::System::Net::HttpAbortDelegate*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<::System::Uri*>
    operator ::System::Collections::Generic::IEnumerable_1<::System::Uri*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<::System::Uri*>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: private System.Collections.Generic.List`1<System.Uri> m_Cache
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::System::Uri*>*& dyn_m_Cache();
    // Get instance field reference: private System.Boolean m_CacheComplete
    [[deprecated("Use field access instead!")]] bool& dyn_m_CacheComplete();
    // Get instance field reference: private System.Net.ProxyChain/ProxyEnumerator m_MainEnumerator
    [[deprecated("Use field access instead!")]] ::System::Net::ProxyChain::ProxyEnumerator*& dyn_m_MainEnumerator();
    // Get instance field reference: private System.Uri m_Destination
    [[deprecated("Use field access instead!")]] ::System::Uri*& dyn_m_Destination();
    // Get instance field reference: private System.Net.HttpAbortDelegate m_HttpAbortDelegate
    [[deprecated("Use field access instead!")]] ::System::Net::HttpAbortDelegate*& dyn_m_HttpAbortDelegate();
    // protected System.Void .ctor(System.Uri destination)
    // Offset: 0x4FEEF40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProxyChain* New_ctor(::System::Uri* destination) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::ProxyChain::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProxyChain*, creationType>(destination)));
    }
    // public System.Collections.Generic.IEnumerator`1<System.Uri> GetEnumerator()
    // Offset: 0x4FEEFDC
    ::System::Collections::Generic::IEnumerator_1<::System::Uri*>* GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x4FEF09C
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public System.Void Dispose()
    // Offset: 0x4FEF0A0
    void Dispose();
    // System.Collections.Generic.IEnumerator`1<System.Uri> get_Enumerator()
    // Offset: 0x4FEF0A4
    ::System::Collections::Generic::IEnumerator_1<::System::Uri*>* get_Enumerator();
    // System.Uri get_Destination()
    // Offset: 0x4FEF0BC
    ::System::Uri* get_Destination();
    // System.Void Abort()
    // Offset: 0x4FEF0C4
    void Abort();
    // System.Boolean HttpAbort(System.Net.HttpWebRequest request, System.Net.WebException webException)
    // Offset: 0x4FEF0C8
    bool HttpAbort(::System::Net::HttpWebRequest* request, ::System::Net::WebException* webException);
    // System.Net.HttpAbortDelegate get_HttpAbortDelegate()
    // Offset: 0x4FEF0E4
    ::System::Net::HttpAbortDelegate* get_HttpAbortDelegate();
    // protected System.Boolean GetNextProxy(out System.Uri proxy)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool GetNextProxy(ByRef<::System::Uri*> proxy);
  }; // System.Net.ProxyChain
  #pragma pack(pop)
  static check_size<sizeof(ProxyChain), 48 + sizeof(::System::Net::HttpAbortDelegate*)> __System_Net_ProxyChainSizeCheck;
  static_assert(sizeof(ProxyChain) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::ProxyChain::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::ProxyChain::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::Uri*>* (System::Net::ProxyChain::*)()>(&System::Net::ProxyChain::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ProxyChain*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ProxyChain::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (System::Net::ProxyChain::*)()>(&System::Net::ProxyChain::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ProxyChain*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ProxyChain::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ProxyChain::*)()>(&System::Net::ProxyChain::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ProxyChain*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ProxyChain::get_Enumerator
// Il2CppName: get_Enumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::Uri*>* (System::Net::ProxyChain::*)()>(&System::Net::ProxyChain::get_Enumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ProxyChain*), "get_Enumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ProxyChain::get_Destination
// Il2CppName: get_Destination
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (System::Net::ProxyChain::*)()>(&System::Net::ProxyChain::get_Destination)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ProxyChain*), "get_Destination", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ProxyChain::Abort
// Il2CppName: Abort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ProxyChain::*)()>(&System::Net::ProxyChain::Abort)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ProxyChain*), "Abort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ProxyChain::HttpAbort
// Il2CppName: HttpAbort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::ProxyChain::*)(::System::Net::HttpWebRequest*, ::System::Net::WebException*)>(&System::Net::ProxyChain::HttpAbort)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("System.Net", "HttpWebRequest")->byval_arg;
    static auto* webException = &::il2cpp_utils::GetClassFromName("System.Net", "WebException")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ProxyChain*), "HttpAbort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request, webException});
  }
};
// Writing MetadataGetter for method: System::Net::ProxyChain::get_HttpAbortDelegate
// Il2CppName: get_HttpAbortDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::HttpAbortDelegate* (System::Net::ProxyChain::*)()>(&System::Net::ProxyChain::get_HttpAbortDelegate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ProxyChain*), "get_HttpAbortDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ProxyChain::GetNextProxy
// Il2CppName: GetNextProxy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::ProxyChain::*)(ByRef<::System::Uri*>)>(&System::Net::ProxyChain::GetNextProxy)> {
  static const MethodInfo* get() {
    static auto* proxy = &::il2cpp_utils::GetClassFromName("System", "Uri")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ProxyChain*), "GetNextProxy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{proxy});
  }
};
