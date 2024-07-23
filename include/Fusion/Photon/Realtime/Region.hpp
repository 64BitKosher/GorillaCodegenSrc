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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Fusion.Photon.Realtime
namespace Fusion::Photon::Realtime {
  // Forward declaring type: Region
  class Region;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::Photon::Realtime::Region);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Photon::Realtime::Region*, "Fusion.Photon.Realtime", "Region");
// Type namespace: Fusion.Photon.Realtime
namespace Fusion::Photon::Realtime {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.Photon.Realtime.Region
  // [TokenAttribute] Offset: FFFFFFFF
  class Region : public ::Il2CppObject {
    public:
    public:
    // private System.String <Code>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW Code;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <Cluster>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::StringW Cluster;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <HostAndPort>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::StringW HostAndPort;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 <Ping>k__BackingField
    // Size: 0x4
    // Offset: 0x28
    int Ping;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.String <Code>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Code$k__BackingField();
    // Get instance field reference: private System.String <Cluster>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Cluster$k__BackingField();
    // Get instance field reference: private System.String <HostAndPort>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$HostAndPort$k__BackingField();
    // Get instance field reference: private System.Int32 <Ping>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$Ping$k__BackingField();
    // public System.String get_Code()
    // Offset: 0x2AF3120
    ::StringW get_Code();
    // private System.Void set_Code(System.String value)
    // Offset: 0x2AF3128
    void set_Code(::StringW value);
    // public System.String get_Cluster()
    // Offset: 0x2AF3130
    ::StringW get_Cluster();
    // private System.Void set_Cluster(System.String value)
    // Offset: 0x2AF3138
    void set_Cluster(::StringW value);
    // public System.String get_HostAndPort()
    // Offset: 0x2AF3140
    ::StringW get_HostAndPort();
    // protected internal System.Void set_HostAndPort(System.String value)
    // Offset: 0x2AF3148
    void set_HostAndPort(::StringW value);
    // public System.Int32 get_Ping()
    // Offset: 0x2AF3150
    int get_Ping();
    // public System.Void set_Ping(System.Int32 value)
    // Offset: 0x2AF3158
    void set_Ping(int value);
    // public System.Boolean get_WasPinged()
    // Offset: 0x2AF3160
    bool get_WasPinged();
    // public System.Void .ctor(System.String code, System.String address)
    // Offset: 0x2AF3174
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Region* New_ctor(::StringW code, ::StringW address) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::Photon::Realtime::Region::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Region*, creationType>(code, address)));
    }
    // public System.Void .ctor(System.String code, System.Int32 ping)
    // Offset: 0x2AF32BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Region* New_ctor(::StringW code, int ping) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::Photon::Realtime::Region::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Region*, creationType>(code, ping)));
    }
    // private System.Void SetCodeAndCluster(System.String codeAsString)
    // Offset: 0x2AF31C0
    void SetCodeAndCluster(::StringW codeAsString);
    // public System.String ToString(System.Boolean compact)
    // Offset: 0x2AF32FC
    ::StringW ToString(bool compact);
    // public override System.String ToString()
    // Offset: 0x2AF32F4
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // Fusion.Photon.Realtime.Region
  #pragma pack(pop)
  static check_size<sizeof(Region), 40 + sizeof(int)> __Fusion_Photon_Realtime_RegionSizeCheck;
  static_assert(sizeof(Region) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::Photon::Realtime::Region::get_Code
// Il2CppName: get_Code
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Fusion::Photon::Realtime::Region::*)()>(&Fusion::Photon::Realtime::Region::get_Code)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::Region*), "get_Code", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::Region::set_Code
// Il2CppName: set_Code
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Photon::Realtime::Region::*)(::StringW)>(&Fusion::Photon::Realtime::Region::set_Code)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::Region*), "set_Code", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::Region::get_Cluster
// Il2CppName: get_Cluster
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Fusion::Photon::Realtime::Region::*)()>(&Fusion::Photon::Realtime::Region::get_Cluster)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::Region*), "get_Cluster", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::Region::set_Cluster
// Il2CppName: set_Cluster
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Photon::Realtime::Region::*)(::StringW)>(&Fusion::Photon::Realtime::Region::set_Cluster)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::Region*), "set_Cluster", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::Region::get_HostAndPort
// Il2CppName: get_HostAndPort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Fusion::Photon::Realtime::Region::*)()>(&Fusion::Photon::Realtime::Region::get_HostAndPort)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::Region*), "get_HostAndPort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::Region::set_HostAndPort
// Il2CppName: set_HostAndPort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Photon::Realtime::Region::*)(::StringW)>(&Fusion::Photon::Realtime::Region::set_HostAndPort)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::Region*), "set_HostAndPort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::Region::get_Ping
// Il2CppName: get_Ping
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Fusion::Photon::Realtime::Region::*)()>(&Fusion::Photon::Realtime::Region::get_Ping)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::Region*), "get_Ping", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::Region::set_Ping
// Il2CppName: set_Ping
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Photon::Realtime::Region::*)(int)>(&Fusion::Photon::Realtime::Region::set_Ping)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::Region*), "set_Ping", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::Region::get_WasPinged
// Il2CppName: get_WasPinged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::Photon::Realtime::Region::*)()>(&Fusion::Photon::Realtime::Region::get_WasPinged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::Region*), "get_WasPinged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::Region::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::Photon::Realtime::Region::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::Photon::Realtime::Region::SetCodeAndCluster
// Il2CppName: SetCodeAndCluster
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Photon::Realtime::Region::*)(::StringW)>(&Fusion::Photon::Realtime::Region::SetCodeAndCluster)> {
  static const MethodInfo* get() {
    static auto* codeAsString = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::Region*), "SetCodeAndCluster", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{codeAsString});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::Region::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Fusion::Photon::Realtime::Region::*)(bool)>(&Fusion::Photon::Realtime::Region::ToString)> {
  static const MethodInfo* get() {
    static auto* compact = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::Region*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{compact});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::Region::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Fusion::Photon::Realtime::Region::*)()>(&Fusion::Photon::Realtime::Region::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::Region*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
