// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.WebClient
#include "System/Net/WebClient.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: AsyncOperation
  class AsyncOperation;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebRequest
  class WebRequest;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::WebClient::$$c__DisplayClass164_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebClient::$$c__DisplayClass164_0*, "System.Net", "WebClient/<>c__DisplayClass164_0");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.WebClient/<>c__DisplayClass164_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class WebClient::$$c__DisplayClass164_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Net.WebClient <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::System::Net::WebClient* $$4__this;
    // Field size check
    static_assert(sizeof(::System::Net::WebClient*) == 0x8);
    // public System.ComponentModel.AsyncOperation asyncOp
    // Size: 0x8
    // Offset: 0x18
    ::System::ComponentModel::AsyncOperation* asyncOp;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::AsyncOperation*) == 0x8);
    // public System.Net.WebRequest request
    // Size: 0x8
    // Offset: 0x20
    ::System::Net::WebRequest* request;
    // Field size check
    static_assert(sizeof(::System::Net::WebRequest*) == 0x8);
    public:
    // Get instance field reference: public System.Net.WebClient <>4__this
    [[deprecated("Use field access instead!")]] ::System::Net::WebClient*& dyn_$$4__this();
    // Get instance field reference: public System.ComponentModel.AsyncOperation asyncOp
    [[deprecated("Use field access instead!")]] ::System::ComponentModel::AsyncOperation*& dyn_asyncOp();
    // Get instance field reference: public System.Net.WebRequest request
    [[deprecated("Use field access instead!")]] ::System::Net::WebRequest*& dyn_request();
    // public System.Void .ctor()
    // Offset: 0x4FC6600
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebClient::$$c__DisplayClass164_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::WebClient::$$c__DisplayClass164_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebClient::$$c__DisplayClass164_0*, creationType>()));
    }
    // System.Void <OpenReadAsync>b__0(System.IAsyncResult iar)
    // Offset: 0x4FCDB34
    void $OpenReadAsync$b__0(::System::IAsyncResult* iar);
  }; // System.Net.WebClient/<>c__DisplayClass164_0
  #pragma pack(pop)
  static check_size<sizeof(WebClient::$$c__DisplayClass164_0), 32 + sizeof(::System::Net::WebRequest*)> __System_Net_WebClient_$$c__DisplayClass164_0SizeCheck;
  static_assert(sizeof(WebClient::$$c__DisplayClass164_0) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::WebClient::$$c__DisplayClass164_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::WebClient::$$c__DisplayClass164_0::$OpenReadAsync$b__0
// Il2CppName: <OpenReadAsync>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebClient::$$c__DisplayClass164_0::*)(::System::IAsyncResult*)>(&System::Net::WebClient::$$c__DisplayClass164_0::$OpenReadAsync$b__0)> {
  static const MethodInfo* get() {
    static auto* iar = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebClient::$$c__DisplayClass164_0*), "<OpenReadAsync>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{iar});
  }
};
