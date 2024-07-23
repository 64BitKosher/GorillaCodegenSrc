// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.Security.SslStream
#include "System/Net/Security/SslStream.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Security
namespace System::Net::Security {
  // Forward declaring type: LocalCertificateSelectionCallback
  class LocalCertificateSelectionCallback;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate
  class X509Certificate;
  // Forward declaring type: X509CertificateCollection
  class X509CertificateCollection;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Security::SslStream::$$c__DisplayClass21_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Security::SslStream::$$c__DisplayClass21_0*, "System.Net.Security", "SslStream/<>c__DisplayClass21_0");
// Type namespace: System.Net.Security
namespace System::Net::Security {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Security.SslStream/<>c__DisplayClass21_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SslStream::$$c__DisplayClass21_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Net.Security.LocalCertificateSelectionCallback callback
    // Size: 0x8
    // Offset: 0x10
    ::System::Net::Security::LocalCertificateSelectionCallback* callback;
    // Field size check
    static_assert(sizeof(::System::Net::Security::LocalCertificateSelectionCallback*) == 0x8);
    // public System.Net.Security.SslStream <>4__this
    // Size: 0x8
    // Offset: 0x18
    ::System::Net::Security::SslStream* $$4__this;
    // Field size check
    static_assert(sizeof(::System::Net::Security::SslStream*) == 0x8);
    public:
    // Get instance field reference: public System.Net.Security.LocalCertificateSelectionCallback callback
    [[deprecated("Use field access instead!")]] ::System::Net::Security::LocalCertificateSelectionCallback*& dyn_callback();
    // Get instance field reference: public System.Net.Security.SslStream <>4__this
    [[deprecated("Use field access instead!")]] ::System::Net::Security::SslStream*& dyn_$$4__this();
    // public System.Void .ctor()
    // Offset: 0x4EEEB68
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SslStream::$$c__DisplayClass21_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Security::SslStream::$$c__DisplayClass21_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SslStream::$$c__DisplayClass21_0*, creationType>()));
    }
    // System.Security.Cryptography.X509Certificates.X509Certificate <SetAndVerifySelectionCallback>b__0(System.String t, System.Security.Cryptography.X509Certificates.X509CertificateCollection lc, System.Security.Cryptography.X509Certificates.X509Certificate rc, System.String[] ai)
    // Offset: 0x4EEF330
    ::System::Security::Cryptography::X509Certificates::X509Certificate* $SetAndVerifySelectionCallback$b__0(::StringW t, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* lc, ::System::Security::Cryptography::X509Certificates::X509Certificate* rc, ::ArrayW<::StringW> ai);
  }; // System.Net.Security.SslStream/<>c__DisplayClass21_0
  #pragma pack(pop)
  static check_size<sizeof(SslStream::$$c__DisplayClass21_0), 24 + sizeof(::System::Net::Security::SslStream*)> __System_Net_Security_SslStream_$$c__DisplayClass21_0SizeCheck;
  static_assert(sizeof(SslStream::$$c__DisplayClass21_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Security::SslStream::$$c__DisplayClass21_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Security::SslStream::$$c__DisplayClass21_0::$SetAndVerifySelectionCallback$b__0
// Il2CppName: <SetAndVerifySelectionCallback>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate* (System::Net::Security::SslStream::$$c__DisplayClass21_0::*)(::StringW, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::ArrayW<::StringW>)>(&System::Net::Security::SslStream::$$c__DisplayClass21_0::$SetAndVerifySelectionCallback$b__0)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* lc = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509CertificateCollection")->byval_arg;
    static auto* rc = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Certificate")->byval_arg;
    static auto* ai = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Security::SslStream::$$c__DisplayClass21_0*), "<SetAndVerifySelectionCallback>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, lc, rc, ai});
  }
};