// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.EndPoint
#include "System/Net/EndPoint.hpp"
// Including type: System.Net.Sockets.AddressFamily
#include "System/Net/Sockets/AddressFamily.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: DnsEndPoint
  class DnsEndPoint;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::DnsEndPoint);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::DnsEndPoint*, "System.Net", "DnsEndPoint");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.DnsEndPoint
  // [TokenAttribute] Offset: FFFFFFFF
  class DnsEndPoint : public ::System::Net::EndPoint {
    public:
    public:
    // private System.String m_Host
    // Size: 0x8
    // Offset: 0x10
    ::StringW m_Host;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 m_Port
    // Size: 0x4
    // Offset: 0x18
    int m_Port;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Net.Sockets.AddressFamily m_Family
    // Size: 0x4
    // Offset: 0x1C
    ::System::Net::Sockets::AddressFamily m_Family;
    // Field size check
    static_assert(sizeof(::System::Net::Sockets::AddressFamily) == 0x4);
    public:
    // Get instance field reference: private System.String m_Host
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_Host();
    // Get instance field reference: private System.Int32 m_Port
    [[deprecated("Use field access instead!")]] int& dyn_m_Port();
    // Get instance field reference: private System.Net.Sockets.AddressFamily m_Family
    [[deprecated("Use field access instead!")]] ::System::Net::Sockets::AddressFamily& dyn_m_Family();
    // public System.Void .ctor(System.String host, System.Int32 port)
    // Offset: 0x4FD21D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DnsEndPoint* New_ctor(::StringW host, int port) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::DnsEndPoint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DnsEndPoint*, creationType>(host, port)));
    }
    // public System.Void .ctor(System.String host, System.Int32 port, System.Net.Sockets.AddressFamily addressFamily)
    // Offset: 0x4FD21DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DnsEndPoint* New_ctor(::StringW host, int port, ::System::Net::Sockets::AddressFamily addressFamily) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::DnsEndPoint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DnsEndPoint*, creationType>(host, port, addressFamily)));
    }
    // public System.String get_Host()
    // Offset: 0x4FD26C0
    ::StringW get_Host();
    // public System.Int32 get_Port()
    // Offset: 0x4FD26D0
    int get_Port();
    // public override System.Boolean Equals(System.Object comparand)
    // Offset: 0x4FD23D8
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object comparand)
    bool Equals(::Il2CppObject* comparand);
    // public override System.Int32 GetHashCode()
    // Offset: 0x4FD2494
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x4FD2548
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
    // public override System.Net.Sockets.AddressFamily get_AddressFamily()
    // Offset: 0x4FD26C8
    // Implemented from: System.Net.EndPoint
    // Base method: System.Net.Sockets.AddressFamily EndPoint::get_AddressFamily()
    ::System::Net::Sockets::AddressFamily get_AddressFamily();
  }; // System.Net.DnsEndPoint
  #pragma pack(pop)
  static check_size<sizeof(DnsEndPoint), 28 + sizeof(::System::Net::Sockets::AddressFamily)> __System_Net_DnsEndPointSizeCheck;
  static_assert(sizeof(DnsEndPoint) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::DnsEndPoint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::DnsEndPoint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::DnsEndPoint::get_Host
// Il2CppName: get_Host
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::DnsEndPoint::*)()>(&System::Net::DnsEndPoint::get_Host)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::DnsEndPoint*), "get_Host", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::DnsEndPoint::get_Port
// Il2CppName: get_Port
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::DnsEndPoint::*)()>(&System::Net::DnsEndPoint::get_Port)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::DnsEndPoint*), "get_Port", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::DnsEndPoint::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::DnsEndPoint::*)(::Il2CppObject*)>(&System::Net::DnsEndPoint::Equals)> {
  static const MethodInfo* get() {
    static auto* comparand = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::DnsEndPoint*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{comparand});
  }
};
// Writing MetadataGetter for method: System::Net::DnsEndPoint::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::DnsEndPoint::*)()>(&System::Net::DnsEndPoint::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::DnsEndPoint*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::DnsEndPoint::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::DnsEndPoint::*)()>(&System::Net::DnsEndPoint::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::DnsEndPoint*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::DnsEndPoint::get_AddressFamily
// Il2CppName: get_AddressFamily
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::AddressFamily (System::Net::DnsEndPoint::*)()>(&System::Net::DnsEndPoint::get_AddressFamily)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::DnsEndPoint*), "get_AddressFamily", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};