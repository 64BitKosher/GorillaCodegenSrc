// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: KeySizes
  class KeySizes;
  // Forward declaring type: PbeParameters
  class PbeParameters;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: ReadOnlySpan`1<T>
  template<typename T>
  struct ReadOnlySpan_1;
  // Forward declaring type: Span`1<T>
  template<typename T>
  struct Span_1;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: AsymmetricAlgorithm
  class AsymmetricAlgorithm;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::AsymmetricAlgorithm);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::AsymmetricAlgorithm*, "System.Security.Cryptography", "AsymmetricAlgorithm");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.AsymmetricAlgorithm
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: FFFFFFFF
  class AsymmetricAlgorithm : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // protected System.Int32 KeySizeValue
    // Size: 0x4
    // Offset: 0x10
    int KeySizeValue;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: KeySizeValue and: LegalKeySizesValue
    char __padding0[0x4] = {};
    // protected System.Security.Cryptography.KeySizes[] LegalKeySizesValue
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::System::Security::Cryptography::KeySizes*> LegalKeySizesValue;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Security::Cryptography::KeySizes*>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: protected System.Int32 KeySizeValue
    [[deprecated("Use field access instead!")]] int& dyn_KeySizeValue();
    // Get instance field reference: protected System.Security.Cryptography.KeySizes[] LegalKeySizesValue
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Security::Cryptography::KeySizes*>& dyn_LegalKeySizesValue();
    // public System.Void Dispose()
    // Offset: 0x44F3154
    void Dispose();
    // public System.Void Clear()
    // Offset: 0x44F3158
    void Clear();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x44F31C4
    void Dispose(bool disposing);
    // public System.Int32 get_KeySize()
    // Offset: 0x44F31C8
    int get_KeySize();
    // public System.Void set_KeySize(System.Int32 value)
    // Offset: 0x44F31D0
    void set_KeySize(int value);
    // public System.Security.Cryptography.KeySizes[] get_LegalKeySizes()
    // Offset: 0x44F32CC
    ::ArrayW<::System::Security::Cryptography::KeySizes*> get_LegalKeySizes();
    // public System.String get_SignatureAlgorithm()
    // Offset: 0x44F3344
    ::StringW get_SignatureAlgorithm();
    // public System.String get_KeyExchangeAlgorithm()
    // Offset: 0x44F337C
    ::StringW get_KeyExchangeAlgorithm();
    // static public System.Security.Cryptography.AsymmetricAlgorithm Create()
    // Offset: 0x44F33B4
    static ::System::Security::Cryptography::AsymmetricAlgorithm* Create();
    // static public System.Security.Cryptography.AsymmetricAlgorithm Create(System.String algName)
    // Offset: 0x44F3408
    static ::System::Security::Cryptography::AsymmetricAlgorithm* Create(::StringW algName);
    // public System.Void FromXmlString(System.String xmlString)
    // Offset: 0x44F34AC
    void FromXmlString(::StringW xmlString);
    // public System.String ToXmlString(System.Boolean includePrivateParameters)
    // Offset: 0x44F34E4
    ::StringW ToXmlString(bool includePrivateParameters);
    // public System.Byte[] ExportEncryptedPkcs8PrivateKey(System.ReadOnlySpan`1<System.Byte> passwordBytes, System.Security.Cryptography.PbeParameters pbeParameters)
    // Offset: 0x44F351C
    ::ArrayW<uint8_t> ExportEncryptedPkcs8PrivateKey(::System::ReadOnlySpan_1<uint8_t> passwordBytes, ::System::Security::Cryptography::PbeParameters* pbeParameters);
    // public System.Byte[] ExportEncryptedPkcs8PrivateKey(System.ReadOnlySpan`1<System.Char> password, System.Security.Cryptography.PbeParameters pbeParameters)
    // Offset: 0x44F3554
    ::ArrayW<uint8_t> ExportEncryptedPkcs8PrivateKey(::System::ReadOnlySpan_1<::Il2CppChar> password, ::System::Security::Cryptography::PbeParameters* pbeParameters);
    // public System.Byte[] ExportPkcs8PrivateKey()
    // Offset: 0x44F358C
    ::ArrayW<uint8_t> ExportPkcs8PrivateKey();
    // public System.Byte[] ExportSubjectPublicKeyInfo()
    // Offset: 0x44F35C4
    ::ArrayW<uint8_t> ExportSubjectPublicKeyInfo();
    // public System.Void ImportEncryptedPkcs8PrivateKey(System.ReadOnlySpan`1<System.Byte> passwordBytes, System.ReadOnlySpan`1<System.Byte> source, out System.Int32 bytesRead)
    // Offset: 0x44F35FC
    void ImportEncryptedPkcs8PrivateKey(::System::ReadOnlySpan_1<uint8_t> passwordBytes, ::System::ReadOnlySpan_1<uint8_t> source, ByRef<int> bytesRead);
    // public System.Void ImportEncryptedPkcs8PrivateKey(System.ReadOnlySpan`1<System.Char> password, System.ReadOnlySpan`1<System.Byte> source, out System.Int32 bytesRead)
    // Offset: 0x44F3634
    void ImportEncryptedPkcs8PrivateKey(::System::ReadOnlySpan_1<::Il2CppChar> password, ::System::ReadOnlySpan_1<uint8_t> source, ByRef<int> bytesRead);
    // public System.Void ImportPkcs8PrivateKey(System.ReadOnlySpan`1<System.Byte> source, out System.Int32 bytesRead)
    // Offset: 0x44F366C
    void ImportPkcs8PrivateKey(::System::ReadOnlySpan_1<uint8_t> source, ByRef<int> bytesRead);
    // public System.Void ImportSubjectPublicKeyInfo(System.ReadOnlySpan`1<System.Byte> source, out System.Int32 bytesRead)
    // Offset: 0x44F36A4
    void ImportSubjectPublicKeyInfo(::System::ReadOnlySpan_1<uint8_t> source, ByRef<int> bytesRead);
    // public System.Boolean TryExportEncryptedPkcs8PrivateKey(System.ReadOnlySpan`1<System.Byte> passwordBytes, System.Security.Cryptography.PbeParameters pbeParameters, System.Span`1<System.Byte> destination, out System.Int32 bytesWritten)
    // Offset: 0x44F36DC
    bool TryExportEncryptedPkcs8PrivateKey(::System::ReadOnlySpan_1<uint8_t> passwordBytes, ::System::Security::Cryptography::PbeParameters* pbeParameters, ::System::Span_1<uint8_t> destination, ByRef<int> bytesWritten);
    // public System.Boolean TryExportEncryptedPkcs8PrivateKey(System.ReadOnlySpan`1<System.Char> password, System.Security.Cryptography.PbeParameters pbeParameters, System.Span`1<System.Byte> destination, out System.Int32 bytesWritten)
    // Offset: 0x44F3714
    bool TryExportEncryptedPkcs8PrivateKey(::System::ReadOnlySpan_1<::Il2CppChar> password, ::System::Security::Cryptography::PbeParameters* pbeParameters, ::System::Span_1<uint8_t> destination, ByRef<int> bytesWritten);
    // public System.Boolean TryExportPkcs8PrivateKey(System.Span`1<System.Byte> destination, out System.Int32 bytesWritten)
    // Offset: 0x44F374C
    bool TryExportPkcs8PrivateKey(::System::Span_1<uint8_t> destination, ByRef<int> bytesWritten);
    // public System.Boolean TryExportSubjectPublicKeyInfo(System.Span`1<System.Byte> destination, out System.Int32 bytesWritten)
    // Offset: 0x44F3784
    bool TryExportSubjectPublicKeyInfo(::System::Span_1<uint8_t> destination, ByRef<int> bytesWritten);
    // protected System.Void .ctor()
    // Offset: 0x44F314C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AsymmetricAlgorithm* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::AsymmetricAlgorithm::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AsymmetricAlgorithm*, creationType>()));
    }
  }; // System.Security.Cryptography.AsymmetricAlgorithm
  #pragma pack(pop)
  static check_size<sizeof(AsymmetricAlgorithm), 24 + sizeof(::ArrayW<::System::Security::Cryptography::KeySizes*>)> __System_Security_Cryptography_AsymmetricAlgorithmSizeCheck;
  static_assert(sizeof(AsymmetricAlgorithm) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::AsymmetricAlgorithm::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::AsymmetricAlgorithm::*)()>(&System::Security::Cryptography::AsymmetricAlgorithm::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AsymmetricAlgorithm*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AsymmetricAlgorithm::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::AsymmetricAlgorithm::*)()>(&System::Security::Cryptography::AsymmetricAlgorithm::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AsymmetricAlgorithm*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AsymmetricAlgorithm::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::AsymmetricAlgorithm::*)(bool)>(&System::Security::Cryptography::AsymmetricAlgorithm::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AsymmetricAlgorithm*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AsymmetricAlgorithm::get_KeySize
// Il2CppName: get_KeySize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::AsymmetricAlgorithm::*)()>(&System::Security::Cryptography::AsymmetricAlgorithm::get_KeySize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AsymmetricAlgorithm*), "get_KeySize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AsymmetricAlgorithm::set_KeySize
// Il2CppName: set_KeySize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::AsymmetricAlgorithm::*)(int)>(&System::Security::Cryptography::AsymmetricAlgorithm::set_KeySize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AsymmetricAlgorithm*), "set_KeySize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AsymmetricAlgorithm::get_LegalKeySizes
// Il2CppName: get_LegalKeySizes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Security::Cryptography::KeySizes*> (System::Security::Cryptography::AsymmetricAlgorithm::*)()>(&System::Security::Cryptography::AsymmetricAlgorithm::get_LegalKeySizes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AsymmetricAlgorithm*), "get_LegalKeySizes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AsymmetricAlgorithm::get_SignatureAlgorithm
// Il2CppName: get_SignatureAlgorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::AsymmetricAlgorithm::*)()>(&System::Security::Cryptography::AsymmetricAlgorithm::get_SignatureAlgorithm)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AsymmetricAlgorithm*), "get_SignatureAlgorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AsymmetricAlgorithm::get_KeyExchangeAlgorithm
// Il2CppName: get_KeyExchangeAlgorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::AsymmetricAlgorithm::*)()>(&System::Security::Cryptography::AsymmetricAlgorithm::get_KeyExchangeAlgorithm)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AsymmetricAlgorithm*), "get_KeyExchangeAlgorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AsymmetricAlgorithm::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::AsymmetricAlgorithm* (*)()>(&System::Security::Cryptography::AsymmetricAlgorithm::Create)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AsymmetricAlgorithm*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AsymmetricAlgorithm::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::AsymmetricAlgorithm* (*)(::StringW)>(&System::Security::Cryptography::AsymmetricAlgorithm::Create)> {
  static const MethodInfo* get() {
    static auto* algName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AsymmetricAlgorithm*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{algName});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AsymmetricAlgorithm::FromXmlString
// Il2CppName: FromXmlString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::AsymmetricAlgorithm::*)(::StringW)>(&System::Security::Cryptography::AsymmetricAlgorithm::FromXmlString)> {
  static const MethodInfo* get() {
    static auto* xmlString = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AsymmetricAlgorithm*), "FromXmlString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xmlString});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AsymmetricAlgorithm::ToXmlString
// Il2CppName: ToXmlString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::AsymmetricAlgorithm::*)(bool)>(&System::Security::Cryptography::AsymmetricAlgorithm::ToXmlString)> {
  static const MethodInfo* get() {
    static auto* includePrivateParameters = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AsymmetricAlgorithm*), "ToXmlString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{includePrivateParameters});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AsymmetricAlgorithm::ExportEncryptedPkcs8PrivateKey
// Il2CppName: ExportEncryptedPkcs8PrivateKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::AsymmetricAlgorithm::*)(::System::ReadOnlySpan_1<uint8_t>, ::System::Security::Cryptography::PbeParameters*)>(&System::Security::Cryptography::AsymmetricAlgorithm::ExportEncryptedPkcs8PrivateKey)> {
  static const MethodInfo* get() {
    static auto* passwordBytes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Byte")})->byval_arg;
    static auto* pbeParameters = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "PbeParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AsymmetricAlgorithm*), "ExportEncryptedPkcs8PrivateKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{passwordBytes, pbeParameters});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AsymmetricAlgorithm::ExportEncryptedPkcs8PrivateKey
// Il2CppName: ExportEncryptedPkcs8PrivateKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::AsymmetricAlgorithm::*)(::System::ReadOnlySpan_1<::Il2CppChar>, ::System::Security::Cryptography::PbeParameters*)>(&System::Security::Cryptography::AsymmetricAlgorithm::ExportEncryptedPkcs8PrivateKey)> {
  static const MethodInfo* get() {
    static auto* password = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    static auto* pbeParameters = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "PbeParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AsymmetricAlgorithm*), "ExportEncryptedPkcs8PrivateKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{password, pbeParameters});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AsymmetricAlgorithm::ExportPkcs8PrivateKey
// Il2CppName: ExportPkcs8PrivateKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::AsymmetricAlgorithm::*)()>(&System::Security::Cryptography::AsymmetricAlgorithm::ExportPkcs8PrivateKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AsymmetricAlgorithm*), "ExportPkcs8PrivateKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AsymmetricAlgorithm::ExportSubjectPublicKeyInfo
// Il2CppName: ExportSubjectPublicKeyInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::AsymmetricAlgorithm::*)()>(&System::Security::Cryptography::AsymmetricAlgorithm::ExportSubjectPublicKeyInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AsymmetricAlgorithm*), "ExportSubjectPublicKeyInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AsymmetricAlgorithm::ImportEncryptedPkcs8PrivateKey
// Il2CppName: ImportEncryptedPkcs8PrivateKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::AsymmetricAlgorithm::*)(::System::ReadOnlySpan_1<uint8_t>, ::System::ReadOnlySpan_1<uint8_t>, ByRef<int>)>(&System::Security::Cryptography::AsymmetricAlgorithm::ImportEncryptedPkcs8PrivateKey)> {
  static const MethodInfo* get() {
    static auto* passwordBytes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Byte")})->byval_arg;
    static auto* source = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Byte")})->byval_arg;
    static auto* bytesRead = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AsymmetricAlgorithm*), "ImportEncryptedPkcs8PrivateKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{passwordBytes, source, bytesRead});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AsymmetricAlgorithm::ImportEncryptedPkcs8PrivateKey
// Il2CppName: ImportEncryptedPkcs8PrivateKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::AsymmetricAlgorithm::*)(::System::ReadOnlySpan_1<::Il2CppChar>, ::System::ReadOnlySpan_1<uint8_t>, ByRef<int>)>(&System::Security::Cryptography::AsymmetricAlgorithm::ImportEncryptedPkcs8PrivateKey)> {
  static const MethodInfo* get() {
    static auto* password = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    static auto* source = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Byte")})->byval_arg;
    static auto* bytesRead = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AsymmetricAlgorithm*), "ImportEncryptedPkcs8PrivateKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{password, source, bytesRead});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AsymmetricAlgorithm::ImportPkcs8PrivateKey
// Il2CppName: ImportPkcs8PrivateKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::AsymmetricAlgorithm::*)(::System::ReadOnlySpan_1<uint8_t>, ByRef<int>)>(&System::Security::Cryptography::AsymmetricAlgorithm::ImportPkcs8PrivateKey)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Byte")})->byval_arg;
    static auto* bytesRead = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AsymmetricAlgorithm*), "ImportPkcs8PrivateKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source, bytesRead});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AsymmetricAlgorithm::ImportSubjectPublicKeyInfo
// Il2CppName: ImportSubjectPublicKeyInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::AsymmetricAlgorithm::*)(::System::ReadOnlySpan_1<uint8_t>, ByRef<int>)>(&System::Security::Cryptography::AsymmetricAlgorithm::ImportSubjectPublicKeyInfo)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Byte")})->byval_arg;
    static auto* bytesRead = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AsymmetricAlgorithm*), "ImportSubjectPublicKeyInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source, bytesRead});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AsymmetricAlgorithm::TryExportEncryptedPkcs8PrivateKey
// Il2CppName: TryExportEncryptedPkcs8PrivateKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::AsymmetricAlgorithm::*)(::System::ReadOnlySpan_1<uint8_t>, ::System::Security::Cryptography::PbeParameters*, ::System::Span_1<uint8_t>, ByRef<int>)>(&System::Security::Cryptography::AsymmetricAlgorithm::TryExportEncryptedPkcs8PrivateKey)> {
  static const MethodInfo* get() {
    static auto* passwordBytes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Byte")})->byval_arg;
    static auto* pbeParameters = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "PbeParameters")->byval_arg;
    static auto* destination = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Span`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Byte")})->byval_arg;
    static auto* bytesWritten = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AsymmetricAlgorithm*), "TryExportEncryptedPkcs8PrivateKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{passwordBytes, pbeParameters, destination, bytesWritten});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AsymmetricAlgorithm::TryExportEncryptedPkcs8PrivateKey
// Il2CppName: TryExportEncryptedPkcs8PrivateKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::AsymmetricAlgorithm::*)(::System::ReadOnlySpan_1<::Il2CppChar>, ::System::Security::Cryptography::PbeParameters*, ::System::Span_1<uint8_t>, ByRef<int>)>(&System::Security::Cryptography::AsymmetricAlgorithm::TryExportEncryptedPkcs8PrivateKey)> {
  static const MethodInfo* get() {
    static auto* password = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    static auto* pbeParameters = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "PbeParameters")->byval_arg;
    static auto* destination = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Span`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Byte")})->byval_arg;
    static auto* bytesWritten = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AsymmetricAlgorithm*), "TryExportEncryptedPkcs8PrivateKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{password, pbeParameters, destination, bytesWritten});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AsymmetricAlgorithm::TryExportPkcs8PrivateKey
// Il2CppName: TryExportPkcs8PrivateKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::AsymmetricAlgorithm::*)(::System::Span_1<uint8_t>, ByRef<int>)>(&System::Security::Cryptography::AsymmetricAlgorithm::TryExportPkcs8PrivateKey)> {
  static const MethodInfo* get() {
    static auto* destination = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Span`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Byte")})->byval_arg;
    static auto* bytesWritten = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AsymmetricAlgorithm*), "TryExportPkcs8PrivateKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{destination, bytesWritten});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AsymmetricAlgorithm::TryExportSubjectPublicKeyInfo
// Il2CppName: TryExportSubjectPublicKeyInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::AsymmetricAlgorithm::*)(::System::Span_1<uint8_t>, ByRef<int>)>(&System::Security::Cryptography::AsymmetricAlgorithm::TryExportSubjectPublicKeyInfo)> {
  static const MethodInfo* get() {
    static auto* destination = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Span`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Byte")})->byval_arg;
    static auto* bytesWritten = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AsymmetricAlgorithm*), "TryExportSubjectPublicKeyInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{destination, bytesWritten});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AsymmetricAlgorithm::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
