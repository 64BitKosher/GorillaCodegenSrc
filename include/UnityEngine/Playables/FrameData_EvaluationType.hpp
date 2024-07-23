// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Playables.FrameData
#include "UnityEngine/Playables/FrameData.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::FrameData::EvaluationType, "UnityEngine.Playables", "FrameData/EvaluationType");
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Playables.FrameData/EvaluationType
  // [TokenAttribute] Offset: FFFFFFFF
  struct FrameData::EvaluationType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EvaluationType
    constexpr EvaluationType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Playables.FrameData/EvaluationType Evaluate
    static constexpr const int Evaluate = 0;
    // Get static field: static public UnityEngine.Playables.FrameData/EvaluationType Evaluate
    static ::UnityEngine::Playables::FrameData::EvaluationType _get_Evaluate();
    // Set static field: static public UnityEngine.Playables.FrameData/EvaluationType Evaluate
    static void _set_Evaluate(::UnityEngine::Playables::FrameData::EvaluationType value);
    // static field const value: static public UnityEngine.Playables.FrameData/EvaluationType Playback
    static constexpr const int Playback = 1;
    // Get static field: static public UnityEngine.Playables.FrameData/EvaluationType Playback
    static ::UnityEngine::Playables::FrameData::EvaluationType _get_Playback();
    // Set static field: static public UnityEngine.Playables.FrameData/EvaluationType Playback
    static void _set_Playback(::UnityEngine::Playables::FrameData::EvaluationType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Playables.FrameData/EvaluationType
  #pragma pack(pop)
  static check_size<sizeof(FrameData::EvaluationType), 0 + sizeof(int)> __UnityEngine_Playables_FrameData_EvaluationTypeSizeCheck;
  static_assert(sizeof(FrameData::EvaluationType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
