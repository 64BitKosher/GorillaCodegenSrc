// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Viveport.UserStats
#include "Viveport/UserStats.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Viveport::UserStats::LeaderBoardDiaplayType, "Viveport", "UserStats/LeaderBoardDiaplayType");
// Type namespace: Viveport
namespace Viveport {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Viveport.UserStats/LeaderBoardDiaplayType
  // [TokenAttribute] Offset: FFFFFFFF
  struct UserStats::LeaderBoardDiaplayType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: LeaderBoardDiaplayType
    constexpr LeaderBoardDiaplayType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Viveport.UserStats/LeaderBoardDiaplayType None
    static constexpr const int None = 0;
    // Get static field: static public Viveport.UserStats/LeaderBoardDiaplayType None
    static ::Viveport::UserStats::LeaderBoardDiaplayType _get_None();
    // Set static field: static public Viveport.UserStats/LeaderBoardDiaplayType None
    static void _set_None(::Viveport::UserStats::LeaderBoardDiaplayType value);
    // static field const value: static public Viveport.UserStats/LeaderBoardDiaplayType Numeric
    static constexpr const int Numeric = 1;
    // Get static field: static public Viveport.UserStats/LeaderBoardDiaplayType Numeric
    static ::Viveport::UserStats::LeaderBoardDiaplayType _get_Numeric();
    // Set static field: static public Viveport.UserStats/LeaderBoardDiaplayType Numeric
    static void _set_Numeric(::Viveport::UserStats::LeaderBoardDiaplayType value);
    // static field const value: static public Viveport.UserStats/LeaderBoardDiaplayType TimeSeconds
    static constexpr const int TimeSeconds = 2;
    // Get static field: static public Viveport.UserStats/LeaderBoardDiaplayType TimeSeconds
    static ::Viveport::UserStats::LeaderBoardDiaplayType _get_TimeSeconds();
    // Set static field: static public Viveport.UserStats/LeaderBoardDiaplayType TimeSeconds
    static void _set_TimeSeconds(::Viveport::UserStats::LeaderBoardDiaplayType value);
    // static field const value: static public Viveport.UserStats/LeaderBoardDiaplayType TimeMilliSeconds
    static constexpr const int TimeMilliSeconds = 3;
    // Get static field: static public Viveport.UserStats/LeaderBoardDiaplayType TimeMilliSeconds
    static ::Viveport::UserStats::LeaderBoardDiaplayType _get_TimeMilliSeconds();
    // Set static field: static public Viveport.UserStats/LeaderBoardDiaplayType TimeMilliSeconds
    static void _set_TimeMilliSeconds(::Viveport::UserStats::LeaderBoardDiaplayType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Viveport.UserStats/LeaderBoardDiaplayType
  #pragma pack(pop)
  static check_size<sizeof(UserStats::LeaderBoardDiaplayType), 0 + sizeof(int)> __Viveport_UserStats_LeaderBoardDiaplayTypeSizeCheck;
  static_assert(sizeof(UserStats::LeaderBoardDiaplayType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
