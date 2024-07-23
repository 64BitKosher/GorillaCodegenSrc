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
// Type namespace: UnityEngine.Yoga
namespace UnityEngine::Yoga {
  // Forward declaring type: YogaLogLevel
  struct YogaLogLevel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::YogaLogLevel, "UnityEngine.Yoga", "YogaLogLevel");
// Type namespace: UnityEngine.Yoga
namespace UnityEngine::Yoga {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Yoga.YogaLogLevel
  // [TokenAttribute] Offset: FFFFFFFF
  struct YogaLogLevel/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: YogaLogLevel
    constexpr YogaLogLevel(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Yoga.YogaLogLevel Error
    static constexpr const int Error = 0;
    // Get static field: static public UnityEngine.Yoga.YogaLogLevel Error
    static ::UnityEngine::Yoga::YogaLogLevel _get_Error();
    // Set static field: static public UnityEngine.Yoga.YogaLogLevel Error
    static void _set_Error(::UnityEngine::Yoga::YogaLogLevel value);
    // static field const value: static public UnityEngine.Yoga.YogaLogLevel Warn
    static constexpr const int Warn = 1;
    // Get static field: static public UnityEngine.Yoga.YogaLogLevel Warn
    static ::UnityEngine::Yoga::YogaLogLevel _get_Warn();
    // Set static field: static public UnityEngine.Yoga.YogaLogLevel Warn
    static void _set_Warn(::UnityEngine::Yoga::YogaLogLevel value);
    // static field const value: static public UnityEngine.Yoga.YogaLogLevel Info
    static constexpr const int Info = 2;
    // Get static field: static public UnityEngine.Yoga.YogaLogLevel Info
    static ::UnityEngine::Yoga::YogaLogLevel _get_Info();
    // Set static field: static public UnityEngine.Yoga.YogaLogLevel Info
    static void _set_Info(::UnityEngine::Yoga::YogaLogLevel value);
    // static field const value: static public UnityEngine.Yoga.YogaLogLevel Debug
    static constexpr const int Debug = 3;
    // Get static field: static public UnityEngine.Yoga.YogaLogLevel Debug
    static ::UnityEngine::Yoga::YogaLogLevel _get_Debug();
    // Set static field: static public UnityEngine.Yoga.YogaLogLevel Debug
    static void _set_Debug(::UnityEngine::Yoga::YogaLogLevel value);
    // static field const value: static public UnityEngine.Yoga.YogaLogLevel Verbose
    static constexpr const int Verbose = 4;
    // Get static field: static public UnityEngine.Yoga.YogaLogLevel Verbose
    static ::UnityEngine::Yoga::YogaLogLevel _get_Verbose();
    // Set static field: static public UnityEngine.Yoga.YogaLogLevel Verbose
    static void _set_Verbose(::UnityEngine::Yoga::YogaLogLevel value);
    // static field const value: static public UnityEngine.Yoga.YogaLogLevel Fatal
    static constexpr const int Fatal = 5;
    // Get static field: static public UnityEngine.Yoga.YogaLogLevel Fatal
    static ::UnityEngine::Yoga::YogaLogLevel _get_Fatal();
    // Set static field: static public UnityEngine.Yoga.YogaLogLevel Fatal
    static void _set_Fatal(::UnityEngine::Yoga::YogaLogLevel value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Yoga.YogaLogLevel
  #pragma pack(pop)
  static check_size<sizeof(YogaLogLevel), 0 + sizeof(int)> __UnityEngine_Yoga_YogaLogLevelSizeCheck;
  static_assert(sizeof(YogaLogLevel) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"