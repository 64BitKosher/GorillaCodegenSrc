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
  // Forward declaring type: UserDataStoreUpdateResponse
  class UserDataStoreUpdateResponse;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: UserDataStore
  class UserDataStore;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::UserDataStore);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::UserDataStore*, "Oculus.Platform", "UserDataStore");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.UserDataStore
  // [TokenAttribute] Offset: FFFFFFFF
  class UserDataStore : public ::Il2CppObject {
    public:
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.UserDataStoreUpdateResponse> PrivateDeleteEntryByKey(System.UInt64 userID, System.String key)
    // Offset: 0x4882400
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserDataStoreUpdateResponse*>* PrivateDeleteEntryByKey(uint64_t userID, ::StringW key);
    // static public Oculus.Platform.Request`1<System.Collections.Generic.Dictionary`2<System.String,System.String>> PrivateGetEntries(System.UInt64 userID)
    // Offset: 0x4882568
    static ::Oculus::Platform::Request_1<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>* PrivateGetEntries(uint64_t userID);
    // static public Oculus.Platform.Request`1<System.Collections.Generic.Dictionary`2<System.String,System.String>> PrivateGetEntryByKey(System.UInt64 userID, System.String key)
    // Offset: 0x48826C0
    static ::Oculus::Platform::Request_1<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>* PrivateGetEntryByKey(uint64_t userID, ::StringW key);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.UserDataStoreUpdateResponse> PrivateWriteEntry(System.UInt64 userID, System.String key, System.String value)
    // Offset: 0x4882828
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserDataStoreUpdateResponse*>* PrivateWriteEntry(uint64_t userID, ::StringW key, ::StringW value);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.UserDataStoreUpdateResponse> PublicDeleteEntryByKey(System.UInt64 userID, System.String key)
    // Offset: 0x4882998
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserDataStoreUpdateResponse*>* PublicDeleteEntryByKey(uint64_t userID, ::StringW key);
    // static public Oculus.Platform.Request`1<System.Collections.Generic.Dictionary`2<System.String,System.String>> PublicGetEntries(System.UInt64 userID)
    // Offset: 0x4882B00
    static ::Oculus::Platform::Request_1<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>* PublicGetEntries(uint64_t userID);
    // static public Oculus.Platform.Request`1<System.Collections.Generic.Dictionary`2<System.String,System.String>> PublicGetEntryByKey(System.UInt64 userID, System.String key)
    // Offset: 0x4882C58
    static ::Oculus::Platform::Request_1<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>* PublicGetEntryByKey(uint64_t userID, ::StringW key);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.UserDataStoreUpdateResponse> PublicWriteEntry(System.UInt64 userID, System.String key, System.String value)
    // Offset: 0x4882DC0
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserDataStoreUpdateResponse*>* PublicWriteEntry(uint64_t userID, ::StringW key, ::StringW value);
  }; // Oculus.Platform.UserDataStore
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::UserDataStore::PrivateDeleteEntryByKey
// Il2CppName: PrivateDeleteEntryByKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserDataStoreUpdateResponse*>* (*)(uint64_t, ::StringW)>(&Oculus::Platform::UserDataStore::PrivateDeleteEntryByKey)> {
  static const MethodInfo* get() {
    static auto* userID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::UserDataStore*), "PrivateDeleteEntryByKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userID, key});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::UserDataStore::PrivateGetEntries
// Il2CppName: PrivateGetEntries
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>* (*)(uint64_t)>(&Oculus::Platform::UserDataStore::PrivateGetEntries)> {
  static const MethodInfo* get() {
    static auto* userID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::UserDataStore*), "PrivateGetEntries", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userID});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::UserDataStore::PrivateGetEntryByKey
// Il2CppName: PrivateGetEntryByKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>* (*)(uint64_t, ::StringW)>(&Oculus::Platform::UserDataStore::PrivateGetEntryByKey)> {
  static const MethodInfo* get() {
    static auto* userID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::UserDataStore*), "PrivateGetEntryByKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userID, key});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::UserDataStore::PrivateWriteEntry
// Il2CppName: PrivateWriteEntry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserDataStoreUpdateResponse*>* (*)(uint64_t, ::StringW, ::StringW)>(&Oculus::Platform::UserDataStore::PrivateWriteEntry)> {
  static const MethodInfo* get() {
    static auto* userID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::UserDataStore*), "PrivateWriteEntry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userID, key, value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::UserDataStore::PublicDeleteEntryByKey
// Il2CppName: PublicDeleteEntryByKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserDataStoreUpdateResponse*>* (*)(uint64_t, ::StringW)>(&Oculus::Platform::UserDataStore::PublicDeleteEntryByKey)> {
  static const MethodInfo* get() {
    static auto* userID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::UserDataStore*), "PublicDeleteEntryByKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userID, key});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::UserDataStore::PublicGetEntries
// Il2CppName: PublicGetEntries
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>* (*)(uint64_t)>(&Oculus::Platform::UserDataStore::PublicGetEntries)> {
  static const MethodInfo* get() {
    static auto* userID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::UserDataStore*), "PublicGetEntries", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userID});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::UserDataStore::PublicGetEntryByKey
// Il2CppName: PublicGetEntryByKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>* (*)(uint64_t, ::StringW)>(&Oculus::Platform::UserDataStore::PublicGetEntryByKey)> {
  static const MethodInfo* get() {
    static auto* userID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::UserDataStore*), "PublicGetEntryByKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userID, key});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::UserDataStore::PublicWriteEntry
// Il2CppName: PublicWriteEntry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserDataStoreUpdateResponse*>* (*)(uint64_t, ::StringW, ::StringW)>(&Oculus::Platform::UserDataStore::PublicWriteEntry)> {
  static const MethodInfo* get() {
    static auto* userID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::UserDataStore*), "PublicWriteEntry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userID, key, value});
  }
};
