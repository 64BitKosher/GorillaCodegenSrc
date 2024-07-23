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
  // Forward declaring type: FriendInfo
  class FriendInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::Photon::Realtime::FriendInfo);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Photon::Realtime::FriendInfo*, "Fusion.Photon.Realtime", "FriendInfo");
// Type namespace: Fusion.Photon.Realtime
namespace Fusion::Photon::Realtime {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.Photon.Realtime.FriendInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class FriendInfo : public ::Il2CppObject {
    public:
    public:
    // private System.String <UserId>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW UserId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean <IsOnline>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    bool IsOnline;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: IsOnline and: Room
    char __padding1[0x7] = {};
    // private System.String <Room>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::StringW Room;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.String <UserId>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$UserId$k__BackingField();
    // Get instance field reference: private System.Boolean <IsOnline>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IsOnline$k__BackingField();
    // Get instance field reference: private System.String <Room>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Room$k__BackingField();
    // public System.String get_Name()
    // Offset: 0x2AE2B50
    ::StringW get_Name();
    // public System.String get_UserId()
    // Offset: 0x2AE2B58
    ::StringW get_UserId();
    // protected internal System.Void set_UserId(System.String value)
    // Offset: 0x2AE2B60
    void set_UserId(::StringW value);
    // public System.Boolean get_IsOnline()
    // Offset: 0x2AE2B68
    bool get_IsOnline();
    // protected internal System.Void set_IsOnline(System.Boolean value)
    // Offset: 0x2AE2B70
    void set_IsOnline(bool value);
    // public System.String get_Room()
    // Offset: 0x2AE2B7C
    ::StringW get_Room();
    // protected internal System.Void set_Room(System.String value)
    // Offset: 0x2AE2B84
    void set_Room(::StringW value);
    // public System.Boolean get_IsInRoom()
    // Offset: 0x2AE2B8C
    bool get_IsInRoom();
    // public System.Void .ctor()
    // Offset: 0x2AE2C70
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FriendInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::Photon::Realtime::FriendInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FriendInfo*, creationType>()));
    }
    // public override System.String ToString()
    // Offset: 0x2AE2BB4
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // Fusion.Photon.Realtime.FriendInfo
  #pragma pack(pop)
  static check_size<sizeof(FriendInfo), 32 + sizeof(::StringW)> __Fusion_Photon_Realtime_FriendInfoSizeCheck;
  static_assert(sizeof(FriendInfo) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::Photon::Realtime::FriendInfo::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Fusion::Photon::Realtime::FriendInfo::*)()>(&Fusion::Photon::Realtime::FriendInfo::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::FriendInfo*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::FriendInfo::get_UserId
// Il2CppName: get_UserId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Fusion::Photon::Realtime::FriendInfo::*)()>(&Fusion::Photon::Realtime::FriendInfo::get_UserId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::FriendInfo*), "get_UserId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::FriendInfo::set_UserId
// Il2CppName: set_UserId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Photon::Realtime::FriendInfo::*)(::StringW)>(&Fusion::Photon::Realtime::FriendInfo::set_UserId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::FriendInfo*), "set_UserId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::FriendInfo::get_IsOnline
// Il2CppName: get_IsOnline
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::Photon::Realtime::FriendInfo::*)()>(&Fusion::Photon::Realtime::FriendInfo::get_IsOnline)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::FriendInfo*), "get_IsOnline", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::FriendInfo::set_IsOnline
// Il2CppName: set_IsOnline
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Photon::Realtime::FriendInfo::*)(bool)>(&Fusion::Photon::Realtime::FriendInfo::set_IsOnline)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::FriendInfo*), "set_IsOnline", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::FriendInfo::get_Room
// Il2CppName: get_Room
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Fusion::Photon::Realtime::FriendInfo::*)()>(&Fusion::Photon::Realtime::FriendInfo::get_Room)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::FriendInfo*), "get_Room", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::FriendInfo::set_Room
// Il2CppName: set_Room
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Photon::Realtime::FriendInfo::*)(::StringW)>(&Fusion::Photon::Realtime::FriendInfo::set_Room)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::FriendInfo*), "set_Room", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::FriendInfo::get_IsInRoom
// Il2CppName: get_IsInRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::Photon::Realtime::FriendInfo::*)()>(&Fusion::Photon::Realtime::FriendInfo::get_IsInRoom)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::FriendInfo*), "get_IsInRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::FriendInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::Photon::Realtime::FriendInfo::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Fusion::Photon::Realtime::FriendInfo::*)()>(&Fusion::Photon::Realtime::FriendInfo::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::FriendInfo*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
