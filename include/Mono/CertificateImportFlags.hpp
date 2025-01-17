// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Mono
namespace Mono {
  // Forward declaring type: CertificateImportFlags
  struct CertificateImportFlags;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Mono::CertificateImportFlags, "Mono", "CertificateImportFlags");
// Type namespace: Mono
namespace Mono {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Mono.CertificateImportFlags
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct CertificateImportFlags/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: CertificateImportFlags
    constexpr CertificateImportFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Mono.CertificateImportFlags None
    static constexpr const int None = 0;
    // Get static field: static public Mono.CertificateImportFlags None
    static ::Mono::CertificateImportFlags _get_None();
    // Set static field: static public Mono.CertificateImportFlags None
    static void _set_None(::Mono::CertificateImportFlags value);
    // static field const value: static public Mono.CertificateImportFlags DisableNativeBackend
    static constexpr const int DisableNativeBackend = 1;
    // Get static field: static public Mono.CertificateImportFlags DisableNativeBackend
    static ::Mono::CertificateImportFlags _get_DisableNativeBackend();
    // Set static field: static public Mono.CertificateImportFlags DisableNativeBackend
    static void _set_DisableNativeBackend(::Mono::CertificateImportFlags value);
    // static field const value: static public Mono.CertificateImportFlags DisableAutomaticFallback
    static constexpr const int DisableAutomaticFallback = 2;
    // Get static field: static public Mono.CertificateImportFlags DisableAutomaticFallback
    static ::Mono::CertificateImportFlags _get_DisableAutomaticFallback();
    // Set static field: static public Mono.CertificateImportFlags DisableAutomaticFallback
    static void _set_DisableAutomaticFallback(::Mono::CertificateImportFlags value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Mono.CertificateImportFlags
  #pragma pack(pop)
  static check_size<sizeof(CertificateImportFlags), 0 + sizeof(int)> __Mono_CertificateImportFlagsSizeCheck;
  static_assert(sizeof(CertificateImportFlags) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
