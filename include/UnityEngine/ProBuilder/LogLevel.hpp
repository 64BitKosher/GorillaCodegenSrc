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
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: LogLevel
  struct LogLevel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::LogLevel, "UnityEngine.ProBuilder", "LogLevel");
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.LogLevel
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct LogLevel/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: LogLevel
    constexpr LogLevel(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.ProBuilder.LogLevel None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.ProBuilder.LogLevel None
    static ::UnityEngine::ProBuilder::LogLevel _get_None();
    // Set static field: static public UnityEngine.ProBuilder.LogLevel None
    static void _set_None(::UnityEngine::ProBuilder::LogLevel value);
    // static field const value: static public UnityEngine.ProBuilder.LogLevel Error
    static constexpr const int Error = 1;
    // Get static field: static public UnityEngine.ProBuilder.LogLevel Error
    static ::UnityEngine::ProBuilder::LogLevel _get_Error();
    // Set static field: static public UnityEngine.ProBuilder.LogLevel Error
    static void _set_Error(::UnityEngine::ProBuilder::LogLevel value);
    // static field const value: static public UnityEngine.ProBuilder.LogLevel Warning
    static constexpr const int Warning = 2;
    // Get static field: static public UnityEngine.ProBuilder.LogLevel Warning
    static ::UnityEngine::ProBuilder::LogLevel _get_Warning();
    // Set static field: static public UnityEngine.ProBuilder.LogLevel Warning
    static void _set_Warning(::UnityEngine::ProBuilder::LogLevel value);
    // static field const value: static public UnityEngine.ProBuilder.LogLevel Info
    static constexpr const int Info = 4;
    // Get static field: static public UnityEngine.ProBuilder.LogLevel Info
    static ::UnityEngine::ProBuilder::LogLevel _get_Info();
    // Set static field: static public UnityEngine.ProBuilder.LogLevel Info
    static void _set_Info(::UnityEngine::ProBuilder::LogLevel value);
    // static field const value: static public UnityEngine.ProBuilder.LogLevel Default
    static constexpr const int Default = 3;
    // Get static field: static public UnityEngine.ProBuilder.LogLevel Default
    static ::UnityEngine::ProBuilder::LogLevel _get_Default();
    // Set static field: static public UnityEngine.ProBuilder.LogLevel Default
    static void _set_Default(::UnityEngine::ProBuilder::LogLevel value);
    // static field const value: static public UnityEngine.ProBuilder.LogLevel All
    static constexpr const int All = 255;
    // Get static field: static public UnityEngine.ProBuilder.LogLevel All
    static ::UnityEngine::ProBuilder::LogLevel _get_All();
    // Set static field: static public UnityEngine.ProBuilder.LogLevel All
    static void _set_All(::UnityEngine::ProBuilder::LogLevel value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.ProBuilder.LogLevel
  #pragma pack(pop)
  static check_size<sizeof(LogLevel), 0 + sizeof(int)> __UnityEngine_ProBuilder_LogLevelSizeCheck;
  static_assert(sizeof(LogLevel) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
