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
  // Forward declaring type: ELeaderboardDisplayType
  struct ELeaderboardDisplayType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Viveport::Internal::ELeaderboardDisplayType, "Viveport.Internal", "ELeaderboardDisplayType");
// Type namespace: Viveport.Internal
namespace Viveport::Internal {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Viveport.Internal.ELeaderboardDisplayType
  // [TokenAttribute] Offset: FFFFFFFF
  struct ELeaderboardDisplayType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ELeaderboardDisplayType
    constexpr ELeaderboardDisplayType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Viveport.Internal.ELeaderboardDisplayType k_ELeaderboardDisplayTypeNone
    static constexpr const int k_ELeaderboardDisplayTypeNone = 0;
    // Get static field: static public Viveport.Internal.ELeaderboardDisplayType k_ELeaderboardDisplayTypeNone
    static ::Viveport::Internal::ELeaderboardDisplayType _get_k_ELeaderboardDisplayTypeNone();
    // Set static field: static public Viveport.Internal.ELeaderboardDisplayType k_ELeaderboardDisplayTypeNone
    static void _set_k_ELeaderboardDisplayTypeNone(::Viveport::Internal::ELeaderboardDisplayType value);
    // static field const value: static public Viveport.Internal.ELeaderboardDisplayType k_ELeaderboardDisplayTypeNumeric
    static constexpr const int k_ELeaderboardDisplayTypeNumeric = 1;
    // Get static field: static public Viveport.Internal.ELeaderboardDisplayType k_ELeaderboardDisplayTypeNumeric
    static ::Viveport::Internal::ELeaderboardDisplayType _get_k_ELeaderboardDisplayTypeNumeric();
    // Set static field: static public Viveport.Internal.ELeaderboardDisplayType k_ELeaderboardDisplayTypeNumeric
    static void _set_k_ELeaderboardDisplayTypeNumeric(::Viveport::Internal::ELeaderboardDisplayType value);
    // static field const value: static public Viveport.Internal.ELeaderboardDisplayType k_ELeaderboardDisplayTypeTimeSeconds
    static constexpr const int k_ELeaderboardDisplayTypeTimeSeconds = 2;
    // Get static field: static public Viveport.Internal.ELeaderboardDisplayType k_ELeaderboardDisplayTypeTimeSeconds
    static ::Viveport::Internal::ELeaderboardDisplayType _get_k_ELeaderboardDisplayTypeTimeSeconds();
    // Set static field: static public Viveport.Internal.ELeaderboardDisplayType k_ELeaderboardDisplayTypeTimeSeconds
    static void _set_k_ELeaderboardDisplayTypeTimeSeconds(::Viveport::Internal::ELeaderboardDisplayType value);
    // static field const value: static public Viveport.Internal.ELeaderboardDisplayType k_ELeaderboardDisplayTypeTimeMilliSeconds
    static constexpr const int k_ELeaderboardDisplayTypeTimeMilliSeconds = 3;
    // Get static field: static public Viveport.Internal.ELeaderboardDisplayType k_ELeaderboardDisplayTypeTimeMilliSeconds
    static ::Viveport::Internal::ELeaderboardDisplayType _get_k_ELeaderboardDisplayTypeTimeMilliSeconds();
    // Set static field: static public Viveport.Internal.ELeaderboardDisplayType k_ELeaderboardDisplayTypeTimeMilliSeconds
    static void _set_k_ELeaderboardDisplayTypeTimeMilliSeconds(::Viveport::Internal::ELeaderboardDisplayType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Viveport.Internal.ELeaderboardDisplayType
  #pragma pack(pop)
  static check_size<sizeof(ELeaderboardDisplayType), 0 + sizeof(int)> __Viveport_Internal_ELeaderboardDisplayTypeSizeCheck;
  static_assert(sizeof(ELeaderboardDisplayType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
