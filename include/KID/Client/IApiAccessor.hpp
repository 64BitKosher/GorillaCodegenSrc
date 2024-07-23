// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: KID::Client
namespace KID::Client {
  // Forward declaring type: IReadableConfiguration
  class IReadableConfiguration;
  // Forward declaring type: ExceptionFactory
  class ExceptionFactory;
}
// Completed forward declares
// Type namespace: KID.Client
namespace KID::Client {
  // Forward declaring type: IApiAccessor
  class IApiAccessor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::KID::Client::IApiAccessor);
DEFINE_IL2CPP_ARG_TYPE(::KID::Client::IApiAccessor*, "KID.Client", "IApiAccessor");
// Type namespace: KID.Client
namespace KID::Client {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: KID.Client.IApiAccessor
  // [TokenAttribute] Offset: FFFFFFFF
  class IApiAccessor {
    public:
    // public KID.Client.IReadableConfiguration get_Configuration()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::KID::Client::IReadableConfiguration* get_Configuration();
    // public System.Void set_Configuration(KID.Client.IReadableConfiguration value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Configuration(::KID::Client::IReadableConfiguration* value);
    // public System.String GetBasePath()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW GetBasePath();
    // public KID.Client.ExceptionFactory get_ExceptionFactory()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::KID::Client::ExceptionFactory* get_ExceptionFactory();
    // public System.Void set_ExceptionFactory(KID.Client.ExceptionFactory value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_ExceptionFactory(::KID::Client::ExceptionFactory* value);
  }; // KID.Client.IApiAccessor
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: KID::Client::IApiAccessor::get_Configuration
// Il2CppName: get_Configuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::KID::Client::IReadableConfiguration* (KID::Client::IApiAccessor::*)()>(&KID::Client::IApiAccessor::get_Configuration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Client::IApiAccessor*), "get_Configuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Client::IApiAccessor::set_Configuration
// Il2CppName: set_Configuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (KID::Client::IApiAccessor::*)(::KID::Client::IReadableConfiguration*)>(&KID::Client::IApiAccessor::set_Configuration)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("KID.Client", "IReadableConfiguration")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Client::IApiAccessor*), "set_Configuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: KID::Client::IApiAccessor::GetBasePath
// Il2CppName: GetBasePath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (KID::Client::IApiAccessor::*)()>(&KID::Client::IApiAccessor::GetBasePath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Client::IApiAccessor*), "GetBasePath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Client::IApiAccessor::get_ExceptionFactory
// Il2CppName: get_ExceptionFactory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::KID::Client::ExceptionFactory* (KID::Client::IApiAccessor::*)()>(&KID::Client::IApiAccessor::get_ExceptionFactory)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Client::IApiAccessor*), "get_ExceptionFactory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Client::IApiAccessor::set_ExceptionFactory
// Il2CppName: set_ExceptionFactory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (KID::Client::IApiAccessor::*)(::KID::Client::ExceptionFactory*)>(&KID::Client::IApiAccessor::set_ExceptionFactory)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("KID.Client", "ExceptionFactory")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Client::IApiAccessor*), "set_ExceptionFactory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
