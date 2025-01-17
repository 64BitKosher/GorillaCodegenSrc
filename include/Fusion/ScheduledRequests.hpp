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
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: ScheduledRequests
  struct ScheduledRequests;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::ScheduledRequests, "Fusion", "ScheduledRequests");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.ScheduledRequests
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct ScheduledRequests/*, public ::System::Enum*/ {
    public:
    public:
    // public System.UInt32 value__
    // Size: 0x4
    // Offset: 0x0
    uint value;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: ScheduledRequests
    constexpr ScheduledRequests(uint value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return value;
    }
    // static field const value: static public Fusion.ScheduledRequests None
    static constexpr const uint None = 0u;
    // Get static field: static public Fusion.ScheduledRequests None
    static ::Fusion::ScheduledRequests _get_None();
    // Set static field: static public Fusion.ScheduledRequests None
    static void _set_None(::Fusion::ScheduledRequests value);
    // static field const value: static public Fusion.ScheduledRequests ReflexiveInfo
    static constexpr const uint ReflexiveInfo = 2u;
    // Get static field: static public Fusion.ScheduledRequests ReflexiveInfo
    static ::Fusion::ScheduledRequests _get_ReflexiveInfo();
    // Set static field: static public Fusion.ScheduledRequests ReflexiveInfo
    static void _set_ReflexiveInfo(::Fusion::ScheduledRequests value);
    // Get instance field reference: public System.UInt32 value__
    [[deprecated("Use field access instead!")]] uint& dyn_value__();
  }; // Fusion.ScheduledRequests
  #pragma pack(pop)
  static check_size<sizeof(ScheduledRequests), 0 + sizeof(uint)> __Fusion_ScheduledRequestsSizeCheck;
  static_assert(sizeof(ScheduledRequests) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
