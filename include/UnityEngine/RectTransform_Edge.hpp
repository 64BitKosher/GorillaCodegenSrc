// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.RectTransform
#include "UnityEngine/RectTransform.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RectTransform::Edge, "UnityEngine", "RectTransform/Edge");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.RectTransform/Edge
  // [TokenAttribute] Offset: FFFFFFFF
  struct RectTransform::Edge/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Edge
    constexpr Edge(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.RectTransform/Edge Left
    static constexpr const int Left = 0;
    // Get static field: static public UnityEngine.RectTransform/Edge Left
    static ::UnityEngine::RectTransform::Edge _get_Left();
    // Set static field: static public UnityEngine.RectTransform/Edge Left
    static void _set_Left(::UnityEngine::RectTransform::Edge value);
    // static field const value: static public UnityEngine.RectTransform/Edge Right
    static constexpr const int Right = 1;
    // Get static field: static public UnityEngine.RectTransform/Edge Right
    static ::UnityEngine::RectTransform::Edge _get_Right();
    // Set static field: static public UnityEngine.RectTransform/Edge Right
    static void _set_Right(::UnityEngine::RectTransform::Edge value);
    // static field const value: static public UnityEngine.RectTransform/Edge Top
    static constexpr const int Top = 2;
    // Get static field: static public UnityEngine.RectTransform/Edge Top
    static ::UnityEngine::RectTransform::Edge _get_Top();
    // Set static field: static public UnityEngine.RectTransform/Edge Top
    static void _set_Top(::UnityEngine::RectTransform::Edge value);
    // static field const value: static public UnityEngine.RectTransform/Edge Bottom
    static constexpr const int Bottom = 3;
    // Get static field: static public UnityEngine.RectTransform/Edge Bottom
    static ::UnityEngine::RectTransform::Edge _get_Bottom();
    // Set static field: static public UnityEngine.RectTransform/Edge Bottom
    static void _set_Bottom(::UnityEngine::RectTransform::Edge value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.RectTransform/Edge
  #pragma pack(pop)
  static check_size<sizeof(RectTransform::Edge), 0 + sizeof(int)> __UnityEngine_RectTransform_EdgeSizeCheck;
  static_assert(sizeof(RectTransform::Edge) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
