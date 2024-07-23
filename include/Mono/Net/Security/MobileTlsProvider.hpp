// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Security.Interface.MonoTlsProvider
#include "Mono/Security/Interface/MonoTlsProvider.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Net::Security
namespace Mono::Net::Security {
  // Forward declaring type: MobileAuthenticatedStream
  class MobileAuthenticatedStream;
  // Forward declaring type: ChainValidationHelper
  class ChainValidationHelper;
}
// Forward declaring namespace: System::Net::Security
namespace System::Net::Security {
  // Forward declaring type: SslStream
  class SslStream;
  // Forward declaring type: SslPolicyErrors
  struct SslPolicyErrors;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: Mono::Security::Interface
namespace Mono::Security::Interface {
  // Forward declaring type: MonoTlsSettings
  class MonoTlsSettings;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509CertificateCollection
  class X509CertificateCollection;
  // Forward declaring type: X509Chain
  class X509Chain;
}
// Completed forward declares
// Type namespace: Mono.Net.Security
namespace Mono::Net::Security {
  // Forward declaring type: MobileTlsProvider
  class MobileTlsProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Net::Security::MobileTlsProvider);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::MobileTlsProvider*, "Mono.Net.Security", "MobileTlsProvider");
// Type namespace: Mono.Net.Security
namespace Mono::Net::Security {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Net.Security.MobileTlsProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class MobileTlsProvider : public ::Mono::Security::Interface::MonoTlsProvider {
    public:
    // Mono.Net.Security.MobileAuthenticatedStream CreateSslStream(System.Net.Security.SslStream sslStream, System.IO.Stream innerStream, System.Boolean leaveInnerStreamOpen, Mono.Security.Interface.MonoTlsSettings settings)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Mono::Net::Security::MobileAuthenticatedStream* CreateSslStream(::System::Net::Security::SslStream* sslStream, ::System::IO::Stream* innerStream, bool leaveInnerStreamOpen, ::Mono::Security::Interface::MonoTlsSettings* settings);
    // System.Boolean ValidateCertificate(Mono.Net.Security.ChainValidationHelper validator, System.String targetHost, System.Boolean serverMode, System.Security.Cryptography.X509Certificates.X509CertificateCollection certificates, System.Boolean wantsChain, ref System.Security.Cryptography.X509Certificates.X509Chain chain, ref System.Net.Security.SslPolicyErrors errors, ref System.Int32 status11)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool ValidateCertificate(::Mono::Net::Security::ChainValidationHelper* validator, ::StringW targetHost, bool serverMode, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* certificates, bool wantsChain, ByRef<::System::Security::Cryptography::X509Certificates::X509Chain*> chain, ByRef<::System::Net::Security::SslPolicyErrors> errors, ByRef<int> status11);
    // protected System.Void .ctor()
    // Offset: 0x4BF6814
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MobileTlsProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Net::Security::MobileTlsProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MobileTlsProvider*, creationType>()));
    }
  }; // Mono.Net.Security.MobileTlsProvider
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Net::Security::MobileTlsProvider::CreateSslStream
// Il2CppName: CreateSslStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Net::Security::MobileAuthenticatedStream* (Mono::Net::Security::MobileTlsProvider::*)(::System::Net::Security::SslStream*, ::System::IO::Stream*, bool, ::Mono::Security::Interface::MonoTlsSettings*)>(&Mono::Net::Security::MobileTlsProvider::CreateSslStream)> {
  static const MethodInfo* get() {
    static auto* sslStream = &::il2cpp_utils::GetClassFromName("System.Net.Security", "SslStream")->byval_arg;
    static auto* innerStream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* leaveInnerStreamOpen = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* settings = &::il2cpp_utils::GetClassFromName("Mono.Security.Interface", "MonoTlsSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::MobileTlsProvider*), "CreateSslStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sslStream, innerStream, leaveInnerStreamOpen, settings});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::MobileTlsProvider::ValidateCertificate
// Il2CppName: ValidateCertificate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Net::Security::MobileTlsProvider::*)(::Mono::Net::Security::ChainValidationHelper*, ::StringW, bool, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, bool, ByRef<::System::Security::Cryptography::X509Certificates::X509Chain*>, ByRef<::System::Net::Security::SslPolicyErrors>, ByRef<int>)>(&Mono::Net::Security::MobileTlsProvider::ValidateCertificate)> {
  static const MethodInfo* get() {
    static auto* validator = &::il2cpp_utils::GetClassFromName("Mono.Net.Security", "ChainValidationHelper")->byval_arg;
    static auto* targetHost = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* serverMode = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* certificates = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509CertificateCollection")->byval_arg;
    static auto* wantsChain = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* chain = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Chain")->this_arg;
    static auto* errors = &::il2cpp_utils::GetClassFromName("System.Net.Security", "SslPolicyErrors")->this_arg;
    static auto* status11 = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::MobileTlsProvider*), "ValidateCertificate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{validator, targetHost, serverMode, certificates, wantsChain, chain, errors, status11});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::MobileTlsProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!