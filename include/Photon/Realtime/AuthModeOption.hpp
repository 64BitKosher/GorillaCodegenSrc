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
// Type namespace: Photon.Realtime
namespace Photon::Realtime {
  // Forward declaring type: AuthModeOption
  struct AuthModeOption;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::AuthModeOption, "Photon.Realtime", "AuthModeOption");
// Type namespace: Photon.Realtime
namespace Photon::Realtime {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Realtime.AuthModeOption
  // [TokenAttribute] Offset: FFFFFFFF
  struct AuthModeOption/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: AuthModeOption
    constexpr AuthModeOption(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Photon.Realtime.AuthModeOption Auth
    static constexpr const int Auth = 0;
    // Get static field: static public Photon.Realtime.AuthModeOption Auth
    static ::Photon::Realtime::AuthModeOption _get_Auth();
    // Set static field: static public Photon.Realtime.AuthModeOption Auth
    static void _set_Auth(::Photon::Realtime::AuthModeOption value);
    // static field const value: static public Photon.Realtime.AuthModeOption AuthOnce
    static constexpr const int AuthOnce = 1;
    // Get static field: static public Photon.Realtime.AuthModeOption AuthOnce
    static ::Photon::Realtime::AuthModeOption _get_AuthOnce();
    // Set static field: static public Photon.Realtime.AuthModeOption AuthOnce
    static void _set_AuthOnce(::Photon::Realtime::AuthModeOption value);
    // static field const value: static public Photon.Realtime.AuthModeOption AuthOnceWss
    static constexpr const int AuthOnceWss = 2;
    // Get static field: static public Photon.Realtime.AuthModeOption AuthOnceWss
    static ::Photon::Realtime::AuthModeOption _get_AuthOnceWss();
    // Set static field: static public Photon.Realtime.AuthModeOption AuthOnceWss
    static void _set_AuthOnceWss(::Photon::Realtime::AuthModeOption value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Photon.Realtime.AuthModeOption
  #pragma pack(pop)
  static check_size<sizeof(AuthModeOption), 0 + sizeof(int)> __Photon_Realtime_AuthModeOptionSizeCheck;
  static_assert(sizeof(AuthModeOption) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
