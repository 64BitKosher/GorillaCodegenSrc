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
// Type namespace: Viveport.Internal
namespace Viveport::Internal {
  // Forward declaring type: ELocale
  struct ELocale;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Viveport::Internal::ELocale, "Viveport.Internal", "ELocale");
// Type namespace: Viveport.Internal
namespace Viveport::Internal {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Viveport.Internal.ELocale
  // [TokenAttribute] Offset: FFFFFFFF
  struct ELocale/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ELocale
    constexpr ELocale(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Viveport.Internal.ELocale k_ELocaleUS
    static constexpr const int k_ELocaleUS = 0;
    // Get static field: static public Viveport.Internal.ELocale k_ELocaleUS
    static ::Viveport::Internal::ELocale _get_k_ELocaleUS();
    // Set static field: static public Viveport.Internal.ELocale k_ELocaleUS
    static void _set_k_ELocaleUS(::Viveport::Internal::ELocale value);
    // static field const value: static public Viveport.Internal.ELocale k_ELocaleDE
    static constexpr const int k_ELocaleDE = 1;
    // Get static field: static public Viveport.Internal.ELocale k_ELocaleDE
    static ::Viveport::Internal::ELocale _get_k_ELocaleDE();
    // Set static field: static public Viveport.Internal.ELocale k_ELocaleDE
    static void _set_k_ELocaleDE(::Viveport::Internal::ELocale value);
    // static field const value: static public Viveport.Internal.ELocale k_ELocaleJP
    static constexpr const int k_ELocaleJP = 2;
    // Get static field: static public Viveport.Internal.ELocale k_ELocaleJP
    static ::Viveport::Internal::ELocale _get_k_ELocaleJP();
    // Set static field: static public Viveport.Internal.ELocale k_ELocaleJP
    static void _set_k_ELocaleJP(::Viveport::Internal::ELocale value);
    // static field const value: static public Viveport.Internal.ELocale k_ELocaleKR
    static constexpr const int k_ELocaleKR = 3;
    // Get static field: static public Viveport.Internal.ELocale k_ELocaleKR
    static ::Viveport::Internal::ELocale _get_k_ELocaleKR();
    // Set static field: static public Viveport.Internal.ELocale k_ELocaleKR
    static void _set_k_ELocaleKR(::Viveport::Internal::ELocale value);
    // static field const value: static public Viveport.Internal.ELocale k_ELocaleRU
    static constexpr const int k_ELocaleRU = 4;
    // Get static field: static public Viveport.Internal.ELocale k_ELocaleRU
    static ::Viveport::Internal::ELocale _get_k_ELocaleRU();
    // Set static field: static public Viveport.Internal.ELocale k_ELocaleRU
    static void _set_k_ELocaleRU(::Viveport::Internal::ELocale value);
    // static field const value: static public Viveport.Internal.ELocale k_ELocaleCN
    static constexpr const int k_ELocaleCN = 5;
    // Get static field: static public Viveport.Internal.ELocale k_ELocaleCN
    static ::Viveport::Internal::ELocale _get_k_ELocaleCN();
    // Set static field: static public Viveport.Internal.ELocale k_ELocaleCN
    static void _set_k_ELocaleCN(::Viveport::Internal::ELocale value);
    // static field const value: static public Viveport.Internal.ELocale k_ELocaleTW
    static constexpr const int k_ELocaleTW = 6;
    // Get static field: static public Viveport.Internal.ELocale k_ELocaleTW
    static ::Viveport::Internal::ELocale _get_k_ELocaleTW();
    // Set static field: static public Viveport.Internal.ELocale k_ELocaleTW
    static void _set_k_ELocaleTW(::Viveport::Internal::ELocale value);
    // static field const value: static public Viveport.Internal.ELocale k_ELocaleFR
    static constexpr const int k_ELocaleFR = 7;
    // Get static field: static public Viveport.Internal.ELocale k_ELocaleFR
    static ::Viveport::Internal::ELocale _get_k_ELocaleFR();
    // Set static field: static public Viveport.Internal.ELocale k_ELocaleFR
    static void _set_k_ELocaleFR(::Viveport::Internal::ELocale value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Viveport.Internal.ELocale
  #pragma pack(pop)
  static check_size<sizeof(ELocale), 0 + sizeof(int)> __Viveport_Internal_ELocaleSizeCheck;
  static_assert(sizeof(ELocale) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
