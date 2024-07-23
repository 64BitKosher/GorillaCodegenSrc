// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: System.Net.NetworkInformation.AixStructs
namespace System::Net::NetworkInformation::AixStructs {
  // Forward declaring type: sockaddr
  struct sockaddr;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::AixStructs::sockaddr, "System.Net.NetworkInformation.AixStructs", "sockaddr");
// Type namespace: System.Net.NetworkInformation.AixStructs
namespace System::Net::NetworkInformation::AixStructs {
  // Size: 0x2
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Net.NetworkInformation.AixStructs.sockaddr
  // [TokenAttribute] Offset: FFFFFFFF
  struct sockaddr/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Byte sa_len
    // Size: 0x1
    // Offset: 0x0
    uint8_t sa_len;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte sa_family
    // Size: 0x1
    // Offset: 0x1
    uint8_t sa_family;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: sockaddr
    constexpr sockaddr(uint8_t sa_len_ = {}, uint8_t sa_family_ = {}) noexcept : sa_len{sa_len_}, sa_family{sa_family_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Byte sa_len
    [[deprecated("Use field access instead!")]] uint8_t& dyn_sa_len();
    // Get instance field reference: public System.Byte sa_family
    [[deprecated("Use field access instead!")]] uint8_t& dyn_sa_family();
  }; // System.Net.NetworkInformation.AixStructs.sockaddr
  #pragma pack(pop)
  static check_size<sizeof(sockaddr), 1 + sizeof(uint8_t)> __System_Net_NetworkInformation_AixStructs_sockaddrSizeCheck;
  static_assert(sizeof(sockaddr) == 0x2);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
