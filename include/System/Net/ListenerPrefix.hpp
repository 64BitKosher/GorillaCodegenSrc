// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPAddress
  class IPAddress;
  // Forward declaring type: HttpListener
  class HttpListener;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: ListenerPrefix
  class ListenerPrefix;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::ListenerPrefix);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ListenerPrefix*, "System.Net", "ListenerPrefix");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.ListenerPrefix
  // [TokenAttribute] Offset: FFFFFFFF
  class ListenerPrefix : public ::Il2CppObject {
    public:
    public:
    // private System.String original
    // Size: 0x8
    // Offset: 0x10
    ::StringW original;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String host
    // Size: 0x8
    // Offset: 0x18
    ::StringW host;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.UInt16 port
    // Size: 0x2
    // Offset: 0x20
    uint16_t port;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // Padding between fields: port and: path
    char __padding2[0x6] = {};
    // private System.String path
    // Size: 0x8
    // Offset: 0x28
    ::StringW path;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean secure
    // Size: 0x1
    // Offset: 0x30
    bool secure;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: secure and: addresses
    char __padding4[0x7] = {};
    // private System.Net.IPAddress[] addresses
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::System::Net::IPAddress*> addresses;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Net::IPAddress*>) == 0x8);
    // public System.Net.HttpListener Listener
    // Size: 0x8
    // Offset: 0x40
    ::System::Net::HttpListener* Listener;
    // Field size check
    static_assert(sizeof(::System::Net::HttpListener*) == 0x8);
    public:
    // Get instance field reference: private System.String original
    [[deprecated("Use field access instead!")]] ::StringW& dyn_original();
    // Get instance field reference: private System.String host
    [[deprecated("Use field access instead!")]] ::StringW& dyn_host();
    // Get instance field reference: private System.UInt16 port
    [[deprecated("Use field access instead!")]] uint16_t& dyn_port();
    // Get instance field reference: private System.String path
    [[deprecated("Use field access instead!")]] ::StringW& dyn_path();
    // Get instance field reference: private System.Boolean secure
    [[deprecated("Use field access instead!")]] bool& dyn_secure();
    // Get instance field reference: private System.Net.IPAddress[] addresses
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Net::IPAddress*>& dyn_addresses();
    // Get instance field reference: public System.Net.HttpListener Listener
    [[deprecated("Use field access instead!")]] ::System::Net::HttpListener*& dyn_Listener();
    // public System.Void .ctor(System.String prefix)
    // Offset: 0x4EA99DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ListenerPrefix* New_ctor(::StringW prefix) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::ListenerPrefix::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ListenerPrefix*, creationType>(prefix)));
    }
    // public System.Net.IPAddress[] get_Addresses()
    // Offset: 0x4EA9D50
    ::ArrayW<::System::Net::IPAddress*> get_Addresses();
    // public System.Void set_Addresses(System.Net.IPAddress[] value)
    // Offset: 0x4EA9D58
    void set_Addresses(::ArrayW<::System::Net::IPAddress*> value);
    // public System.Boolean get_Secure()
    // Offset: 0x4EA9D60
    bool get_Secure();
    // public System.String get_Host()
    // Offset: 0x4EA9D68
    ::StringW get_Host();
    // public System.Int32 get_Port()
    // Offset: 0x4EA9D70
    int get_Port();
    // public System.String get_Path()
    // Offset: 0x4EA9D78
    ::StringW get_Path();
    // private System.Void Parse(System.String uri)
    // Offset: 0x4EA9A18
    void Parse(::StringW uri);
    // static public System.Void CheckUri(System.String uri)
    // Offset: 0x4EA9E20
    static void CheckUri(::StringW uri);
    // public override System.String ToString()
    // Offset: 0x4EA9D48
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
    // public override System.Boolean Equals(System.Object o)
    // Offset: 0x4EA9D80
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object o)
    bool Equals(::Il2CppObject* o);
    // public override System.Int32 GetHashCode()
    // Offset: 0x4EA9E00
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.Net.ListenerPrefix
  #pragma pack(pop)
  static check_size<sizeof(ListenerPrefix), 64 + sizeof(::System::Net::HttpListener*)> __System_Net_ListenerPrefixSizeCheck;
  static_assert(sizeof(ListenerPrefix) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::ListenerPrefix::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::ListenerPrefix::get_Addresses
// Il2CppName: get_Addresses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Net::IPAddress*> (System::Net::ListenerPrefix::*)()>(&System::Net::ListenerPrefix::get_Addresses)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ListenerPrefix*), "get_Addresses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ListenerPrefix::set_Addresses
// Il2CppName: set_Addresses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ListenerPrefix::*)(::ArrayW<::System::Net::IPAddress*>)>(&System::Net::ListenerPrefix::set_Addresses)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Net", "IPAddress"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ListenerPrefix*), "set_Addresses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::ListenerPrefix::get_Secure
// Il2CppName: get_Secure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::ListenerPrefix::*)()>(&System::Net::ListenerPrefix::get_Secure)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ListenerPrefix*), "get_Secure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ListenerPrefix::get_Host
// Il2CppName: get_Host
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::ListenerPrefix::*)()>(&System::Net::ListenerPrefix::get_Host)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ListenerPrefix*), "get_Host", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ListenerPrefix::get_Port
// Il2CppName: get_Port
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::ListenerPrefix::*)()>(&System::Net::ListenerPrefix::get_Port)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ListenerPrefix*), "get_Port", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ListenerPrefix::get_Path
// Il2CppName: get_Path
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::ListenerPrefix::*)()>(&System::Net::ListenerPrefix::get_Path)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ListenerPrefix*), "get_Path", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ListenerPrefix::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ListenerPrefix::*)(::StringW)>(&System::Net::ListenerPrefix::Parse)> {
  static const MethodInfo* get() {
    static auto* uri = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ListenerPrefix*), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uri});
  }
};
// Writing MetadataGetter for method: System::Net::ListenerPrefix::CheckUri
// Il2CppName: CheckUri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&System::Net::ListenerPrefix::CheckUri)> {
  static const MethodInfo* get() {
    static auto* uri = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ListenerPrefix*), "CheckUri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uri});
  }
};
// Writing MetadataGetter for method: System::Net::ListenerPrefix::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::ListenerPrefix::*)()>(&System::Net::ListenerPrefix::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ListenerPrefix*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::ListenerPrefix::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::ListenerPrefix::*)(::Il2CppObject*)>(&System::Net::ListenerPrefix::Equals)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ListenerPrefix*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
// Writing MetadataGetter for method: System::Net::ListenerPrefix::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::ListenerPrefix::*)()>(&System::Net::ListenerPrefix::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::ListenerPrefix*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
