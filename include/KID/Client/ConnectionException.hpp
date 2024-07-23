// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
// Including type: UnityEngine.Networking.UnityWebRequest/Result
#include "UnityEngine/Networking/UnityWebRequest_Result.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Skipping declaration: UnityWebRequest because it is already included!
}
// Completed forward declares
// Type namespace: KID.Client
namespace KID::Client {
  // Forward declaring type: ConnectionException
  class ConnectionException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::KID::Client::ConnectionException);
DEFINE_IL2CPP_ARG_TYPE(::KID::Client::ConnectionException*, "KID.Client", "ConnectionException");
// Type namespace: KID.Client
namespace KID::Client {
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: KID.Client.ConnectionException
  // [TokenAttribute] Offset: FFFFFFFF
  class ConnectionException : public ::System::Exception {
    public:
    public:
    // private UnityEngine.Networking.UnityWebRequest/Result <Result>k__BackingField
    // Size: 0x4
    // Offset: 0x8C
    ::UnityEngine::Networking::UnityWebRequest::Result Result;
    // Field size check
    static_assert(sizeof(::UnityEngine::Networking::UnityWebRequest::Result) == 0x4);
    // private System.String <Error>k__BackingField
    // Size: 0x8
    // Offset: 0x90
    ::StringW Error;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.Networking.UnityWebRequest/Result <Result>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Networking::UnityWebRequest::Result& dyn_$Result$k__BackingField();
    // Get instance field reference: private System.String <Error>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Error$k__BackingField();
    // public UnityEngine.Networking.UnityWebRequest/Result get_Result()
    // Offset: 0x4388B84
    ::UnityEngine::Networking::UnityWebRequest::Result get_Result();
    // private System.Void set_Result(UnityEngine.Networking.UnityWebRequest/Result value)
    // Offset: 0x4388B8C
    void set_Result(::UnityEngine::Networking::UnityWebRequest::Result value);
    // public System.String get_Error()
    // Offset: 0x4388B94
    ::StringW get_Error();
    // private System.Void set_Error(System.String value)
    // Offset: 0x4388B9C
    void set_Error(::StringW value);
    // public System.Void .ctor(UnityEngine.Networking.UnityWebRequest request)
    // Offset: 0x4388BA4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConnectionException* New_ctor(::UnityEngine::Networking::UnityWebRequest* request) {
      static auto ___internal__logger = ::Logger::get().WithContext("::KID::Client::ConnectionException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConnectionException*, creationType>(request)));
    }
  }; // KID.Client.ConnectionException
  #pragma pack(pop)
  static check_size<sizeof(ConnectionException), 144 + sizeof(::StringW)> __KID_Client_ConnectionExceptionSizeCheck;
  static_assert(sizeof(ConnectionException) == 0x98);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: KID::Client::ConnectionException::get_Result
// Il2CppName: get_Result
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Networking::UnityWebRequest::Result (KID::Client::ConnectionException::*)()>(&KID::Client::ConnectionException::get_Result)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Client::ConnectionException*), "get_Result", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Client::ConnectionException::set_Result
// Il2CppName: set_Result
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (KID::Client::ConnectionException::*)(::UnityEngine::Networking::UnityWebRequest::Result)>(&KID::Client::ConnectionException::set_Result)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Networking", "UnityWebRequest/Result")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Client::ConnectionException*), "set_Result", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: KID::Client::ConnectionException::get_Error
// Il2CppName: get_Error
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (KID::Client::ConnectionException::*)()>(&KID::Client::ConnectionException::get_Error)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Client::ConnectionException*), "get_Error", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Client::ConnectionException::set_Error
// Il2CppName: set_Error
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (KID::Client::ConnectionException::*)(::StringW)>(&KID::Client::ConnectionException::set_Error)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Client::ConnectionException*), "set_Error", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: KID::Client::ConnectionException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
