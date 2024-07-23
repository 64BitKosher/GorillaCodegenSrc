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
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: ReportRequestResponse
  struct ReportRequestResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::ReportRequestResponse, "Oculus.Platform", "ReportRequestResponse");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.ReportRequestResponse
  // [TokenAttribute] Offset: FFFFFFFF
  struct ReportRequestResponse/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ReportRequestResponse
    constexpr ReportRequestResponse(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Oculus.Platform.ReportRequestResponse Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.ReportRequestResponse Unknown
    static ::Oculus::Platform::ReportRequestResponse _get_Unknown();
    // Set static field: static public Oculus.Platform.ReportRequestResponse Unknown
    static void _set_Unknown(::Oculus::Platform::ReportRequestResponse value);
    // static field const value: static public Oculus.Platform.ReportRequestResponse Handled
    static constexpr const int Handled = 1;
    // Get static field: static public Oculus.Platform.ReportRequestResponse Handled
    static ::Oculus::Platform::ReportRequestResponse _get_Handled();
    // Set static field: static public Oculus.Platform.ReportRequestResponse Handled
    static void _set_Handled(::Oculus::Platform::ReportRequestResponse value);
    // static field const value: static public Oculus.Platform.ReportRequestResponse Unhandled
    static constexpr const int Unhandled = 2;
    // Get static field: static public Oculus.Platform.ReportRequestResponse Unhandled
    static ::Oculus::Platform::ReportRequestResponse _get_Unhandled();
    // Set static field: static public Oculus.Platform.ReportRequestResponse Unhandled
    static void _set_Unhandled(::Oculus::Platform::ReportRequestResponse value);
    // static field const value: static public Oculus.Platform.ReportRequestResponse Unavailable
    static constexpr const int Unavailable = 3;
    // Get static field: static public Oculus.Platform.ReportRequestResponse Unavailable
    static ::Oculus::Platform::ReportRequestResponse _get_Unavailable();
    // Set static field: static public Oculus.Platform.ReportRequestResponse Unavailable
    static void _set_Unavailable(::Oculus::Platform::ReportRequestResponse value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Oculus.Platform.ReportRequestResponse
  #pragma pack(pop)
  static check_size<sizeof(ReportRequestResponse), 0 + sizeof(int)> __Oculus_Platform_ReportRequestResponseSizeCheck;
  static_assert(sizeof(ReportRequestResponse) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"