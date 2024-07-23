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
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationEventSource
  struct AnimationEventSource;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimationEventSource, "UnityEngine", "AnimationEventSource");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AnimationEventSource
  // [TokenAttribute] Offset: FFFFFFFF
  struct AnimationEventSource/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: AnimationEventSource
    constexpr AnimationEventSource(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.AnimationEventSource NoSource
    static constexpr const int NoSource = 0;
    // Get static field: static public UnityEngine.AnimationEventSource NoSource
    static ::UnityEngine::AnimationEventSource _get_NoSource();
    // Set static field: static public UnityEngine.AnimationEventSource NoSource
    static void _set_NoSource(::UnityEngine::AnimationEventSource value);
    // static field const value: static public UnityEngine.AnimationEventSource Legacy
    static constexpr const int Legacy = 1;
    // Get static field: static public UnityEngine.AnimationEventSource Legacy
    static ::UnityEngine::AnimationEventSource _get_Legacy();
    // Set static field: static public UnityEngine.AnimationEventSource Legacy
    static void _set_Legacy(::UnityEngine::AnimationEventSource value);
    // static field const value: static public UnityEngine.AnimationEventSource Animator
    static constexpr const int Animator = 2;
    // Get static field: static public UnityEngine.AnimationEventSource Animator
    static ::UnityEngine::AnimationEventSource _get_Animator();
    // Set static field: static public UnityEngine.AnimationEventSource Animator
    static void _set_Animator(::UnityEngine::AnimationEventSource value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.AnimationEventSource
  #pragma pack(pop)
  static check_size<sizeof(AnimationEventSource), 0 + sizeof(int)> __UnityEngine_AnimationEventSourceSizeCheck;
  static_assert(sizeof(AnimationEventSource) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
