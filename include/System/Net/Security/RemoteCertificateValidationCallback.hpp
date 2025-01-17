// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate
  class X509Certificate;
  // Forward declaring type: X509Chain
  class X509Chain;
}
// Forward declaring namespace: System::Net::Security
namespace System::Net::Security {
  // Forward declaring type: SslPolicyErrors
  struct SslPolicyErrors;
}
// Completed forward declares
// Type namespace: System.Net.Security
namespace System::Net::Security {
  // Forward declaring type: RemoteCertificateValidationCallback
  class RemoteCertificateValidationCallback;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Security::RemoteCertificateValidationCallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Security::RemoteCertificateValidationCallback*, "System.Net.Security", "RemoteCertificateValidationCallback");
// Type namespace: System.Net.Security
namespace System::Net::Security {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Security.RemoteCertificateValidationCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class RemoteCertificateValidationCallback : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x4EEE258
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RemoteCertificateValidationCallback* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Security::RemoteCertificateValidationCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RemoteCertificateValidationCallback*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.Object sender, System.Security.Cryptography.X509Certificates.X509Certificate certificate, System.Security.Cryptography.X509Certificates.X509Chain chain, System.Net.Security.SslPolicyErrors sslPolicyErrors)
    // Offset: 0x4EEE364
    bool Invoke(::Il2CppObject* sender, ::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, ::System::Security::Cryptography::X509Certificates::X509Chain* chain, ::System::Net::Security::SslPolicyErrors sslPolicyErrors);
  }; // System.Net.Security.RemoteCertificateValidationCallback
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Security::RemoteCertificateValidationCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Security::RemoteCertificateValidationCallback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Security::RemoteCertificateValidationCallback::*)(::Il2CppObject*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors)>(&System::Net::Security::RemoteCertificateValidationCallback::Invoke)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* certificate = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Certificate")->byval_arg;
    static auto* chain = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Chain")->byval_arg;
    static auto* sslPolicyErrors = &::il2cpp_utils::GetClassFromName("System.Net.Security", "SslPolicyErrors")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Security::RemoteCertificateValidationCallback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, certificate, chain, sslPolicyErrors});
  }
};
