// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: User
  class User;
  // Forward declaring type: BlockedUserList
  class BlockedUserList;
  // Forward declaring type: UserList
  class UserList;
  // Forward declaring type: OrgScopedID
  class OrgScopedID;
  // Forward declaring type: SdkAccountList
  class SdkAccountList;
  // Forward declaring type: UserProof
  class UserProof;
  // Forward declaring type: LaunchBlockFlowResult
  class LaunchBlockFlowResult;
  // Forward declaring type: LaunchFriendRequestFlowResult
  class LaunchFriendRequestFlowResult;
  // Forward declaring type: LaunchUnblockFlowResult
  class LaunchUnblockFlowResult;
  // Forward declaring type: UserCapabilityList
  class UserCapabilityList;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: Users
  class Users;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Users);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Users*, "Oculus.Platform", "Users");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Users
  // [TokenAttribute] Offset: FFFFFFFF
  class Users : public ::Il2CppObject {
    public:
    // static public System.String GetLoggedInUserLocale()
    // Offset: 0x487BD00
    static ::StringW GetLoggedInUserLocale();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.User> Get(System.UInt64 userID)
    // Offset: 0x484FE90
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::User*>* Get(uint64_t userID);
    // static public Oculus.Platform.Request`1<System.String> GetAccessToken()
    // Offset: 0x487BDD4
    static ::Oculus::Platform::Request_1<::StringW>* GetAccessToken();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.BlockedUserList> GetBlockedUsers()
    // Offset: 0x487BF24
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::BlockedUserList*>* GetBlockedUsers();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.User> GetLoggedInUser()
    // Offset: 0x484F9B4
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::User*>* GetLoggedInUser();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.UserList> GetLoggedInUserFriends()
    // Offset: 0x487C074
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserList*>* GetLoggedInUserFriends();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.OrgScopedID> GetOrgScopedID(System.UInt64 userID)
    // Offset: 0x487C1C4
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::OrgScopedID*>* GetOrgScopedID(uint64_t userID);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.SdkAccountList> GetSdkAccounts()
    // Offset: 0x487C31C
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::SdkAccountList*>* GetSdkAccounts();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.UserProof> GetUserProof()
    // Offset: 0x487C46C
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserProof*>* GetUserProof();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.LaunchBlockFlowResult> LaunchBlockFlow(System.UInt64 userID)
    // Offset: 0x487C5BC
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LaunchBlockFlowResult*>* LaunchBlockFlow(uint64_t userID);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.LaunchFriendRequestFlowResult> LaunchFriendRequestFlow(System.UInt64 userID)
    // Offset: 0x487C714
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LaunchFriendRequestFlowResult*>* LaunchFriendRequestFlow(uint64_t userID);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.LaunchUnblockFlowResult> LaunchUnblockFlow(System.UInt64 userID)
    // Offset: 0x487C86C
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LaunchUnblockFlowResult*>* LaunchUnblockFlow(uint64_t userID);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.BlockedUserList> GetNextBlockedUserListPage(Oculus.Platform.Models.BlockedUserList list)
    // Offset: 0x487C9C4
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::BlockedUserList*>* GetNextBlockedUserListPage(::Oculus::Platform::Models::BlockedUserList* list);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.UserList> GetNextUserListPage(Oculus.Platform.Models.UserList list)
    // Offset: 0x487CB9C
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserList*>* GetNextUserListPage(::Oculus::Platform::Models::UserList* list);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.UserCapabilityList> GetNextUserCapabilityListPage(Oculus.Platform.Models.UserCapabilityList list)
    // Offset: 0x487CD74
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserCapabilityList*>* GetNextUserCapabilityListPage(::Oculus::Platform::Models::UserCapabilityList* list);
  }; // Oculus.Platform.Users
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Users::GetLoggedInUserLocale
// Il2CppName: GetLoggedInUserLocale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&Oculus::Platform::Users::GetLoggedInUserLocale)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Users*), "GetLoggedInUserLocale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Users::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::User*>* (*)(uint64_t)>(&Oculus::Platform::Users::Get)> {
  static const MethodInfo* get() {
    static auto* userID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Users*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userID});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Users::GetAccessToken
// Il2CppName: GetAccessToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::StringW>* (*)()>(&Oculus::Platform::Users::GetAccessToken)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Users*), "GetAccessToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Users::GetBlockedUsers
// Il2CppName: GetBlockedUsers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::BlockedUserList*>* (*)()>(&Oculus::Platform::Users::GetBlockedUsers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Users*), "GetBlockedUsers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Users::GetLoggedInUser
// Il2CppName: GetLoggedInUser
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::User*>* (*)()>(&Oculus::Platform::Users::GetLoggedInUser)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Users*), "GetLoggedInUser", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Users::GetLoggedInUserFriends
// Il2CppName: GetLoggedInUserFriends
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserList*>* (*)()>(&Oculus::Platform::Users::GetLoggedInUserFriends)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Users*), "GetLoggedInUserFriends", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Users::GetOrgScopedID
// Il2CppName: GetOrgScopedID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::OrgScopedID*>* (*)(uint64_t)>(&Oculus::Platform::Users::GetOrgScopedID)> {
  static const MethodInfo* get() {
    static auto* userID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Users*), "GetOrgScopedID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userID});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Users::GetSdkAccounts
// Il2CppName: GetSdkAccounts
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::SdkAccountList*>* (*)()>(&Oculus::Platform::Users::GetSdkAccounts)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Users*), "GetSdkAccounts", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Users::GetUserProof
// Il2CppName: GetUserProof
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserProof*>* (*)()>(&Oculus::Platform::Users::GetUserProof)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Users*), "GetUserProof", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Users::LaunchBlockFlow
// Il2CppName: LaunchBlockFlow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::LaunchBlockFlowResult*>* (*)(uint64_t)>(&Oculus::Platform::Users::LaunchBlockFlow)> {
  static const MethodInfo* get() {
    static auto* userID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Users*), "LaunchBlockFlow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userID});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Users::LaunchFriendRequestFlow
// Il2CppName: LaunchFriendRequestFlow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::LaunchFriendRequestFlowResult*>* (*)(uint64_t)>(&Oculus::Platform::Users::LaunchFriendRequestFlow)> {
  static const MethodInfo* get() {
    static auto* userID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Users*), "LaunchFriendRequestFlow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userID});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Users::LaunchUnblockFlow
// Il2CppName: LaunchUnblockFlow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::LaunchUnblockFlowResult*>* (*)(uint64_t)>(&Oculus::Platform::Users::LaunchUnblockFlow)> {
  static const MethodInfo* get() {
    static auto* userID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Users*), "LaunchUnblockFlow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userID});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Users::GetNextBlockedUserListPage
// Il2CppName: GetNextBlockedUserListPage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::BlockedUserList*>* (*)(::Oculus::Platform::Models::BlockedUserList*)>(&Oculus::Platform::Users::GetNextBlockedUserListPage)> {
  static const MethodInfo* get() {
    static auto* list = &::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "BlockedUserList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Users*), "GetNextBlockedUserListPage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{list});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Users::GetNextUserListPage
// Il2CppName: GetNextUserListPage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserList*>* (*)(::Oculus::Platform::Models::UserList*)>(&Oculus::Platform::Users::GetNextUserListPage)> {
  static const MethodInfo* get() {
    static auto* list = &::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "UserList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Users*), "GetNextUserListPage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{list});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Users::GetNextUserCapabilityListPage
// Il2CppName: GetNextUserCapabilityListPage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserCapabilityList*>* (*)(::Oculus::Platform::Models::UserCapabilityList*)>(&Oculus::Platform::Users::GetNextUserCapabilityListPage)> {
  static const MethodInfo* get() {
    static auto* list = &::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "UserCapabilityList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Users*), "GetNextUserCapabilityListPage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{list});
  }
};
