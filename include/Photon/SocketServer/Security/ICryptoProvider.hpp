// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: Photon.SocketServer.Security
namespace Photon::SocketServer::Security {
  // Forward declaring type: ICryptoProvider
  class ICryptoProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::SocketServer::Security::ICryptoProvider);
DEFINE_IL2CPP_ARG_TYPE(::Photon::SocketServer::Security::ICryptoProvider*, "Photon.SocketServer.Security", "ICryptoProvider");
// Type namespace: Photon.SocketServer.Security
namespace Photon::SocketServer::Security {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Photon.SocketServer.Security.ICryptoProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class ICryptoProvider/*, public ::System::IDisposable*/ {
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // public System.Byte[] get_PublicKey()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<uint8_t> get_PublicKey();
    // public System.Void DeriveSharedKey(System.Byte[] otherPartyPublicKey)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void DeriveSharedKey(::ArrayW<uint8_t> otherPartyPublicKey);
    // public System.Byte[] Encrypt(System.Byte[] data, System.Int32 offset, System.Int32 count)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<uint8_t> Encrypt(::ArrayW<uint8_t> data, int offset, int count);
    // public System.Byte[] Decrypt(System.Byte[] data, System.Int32 offset, System.Int32 count)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<uint8_t> Decrypt(::ArrayW<uint8_t> data, int offset, int count);
  }; // Photon.SocketServer.Security.ICryptoProvider
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::SocketServer::Security::ICryptoProvider::get_PublicKey
// Il2CppName: get_PublicKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Photon::SocketServer::Security::ICryptoProvider::*)()>(&Photon::SocketServer::Security::ICryptoProvider::get_PublicKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::SocketServer::Security::ICryptoProvider*), "get_PublicKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::SocketServer::Security::ICryptoProvider::DeriveSharedKey
// Il2CppName: DeriveSharedKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::SocketServer::Security::ICryptoProvider::*)(::ArrayW<uint8_t>)>(&Photon::SocketServer::Security::ICryptoProvider::DeriveSharedKey)> {
  static const MethodInfo* get() {
    static auto* otherPartyPublicKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::SocketServer::Security::ICryptoProvider*), "DeriveSharedKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{otherPartyPublicKey});
  }
};
// Writing MetadataGetter for method: Photon::SocketServer::Security::ICryptoProvider::Encrypt
// Il2CppName: Encrypt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Photon::SocketServer::Security::ICryptoProvider::*)(::ArrayW<uint8_t>, int, int)>(&Photon::SocketServer::Security::ICryptoProvider::Encrypt)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::SocketServer::Security::ICryptoProvider*), "Encrypt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, offset, count});
  }
};
// Writing MetadataGetter for method: Photon::SocketServer::Security::ICryptoProvider::Decrypt
// Il2CppName: Decrypt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Photon::SocketServer::Security::ICryptoProvider::*)(::ArrayW<uint8_t>, int, int)>(&Photon::SocketServer::Security::ICryptoProvider::Decrypt)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::SocketServer::Security::ICryptoProvider*), "Decrypt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, offset, count});
  }
};