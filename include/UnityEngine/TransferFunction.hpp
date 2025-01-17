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
  // Forward declaring type: TransferFunction
  struct TransferFunction;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TransferFunction, "UnityEngine", "TransferFunction");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TransferFunction
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  struct TransferFunction/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: TransferFunction
    constexpr TransferFunction(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.TransferFunction Unknown
    static constexpr const int Unknown = -1;
    // Get static field: static public UnityEngine.TransferFunction Unknown
    static ::UnityEngine::TransferFunction _get_Unknown();
    // Set static field: static public UnityEngine.TransferFunction Unknown
    static void _set_Unknown(::UnityEngine::TransferFunction value);
    // static field const value: static public UnityEngine.TransferFunction sRGB
    static constexpr const int sRGB = 0;
    // Get static field: static public UnityEngine.TransferFunction sRGB
    static ::UnityEngine::TransferFunction _get_sRGB();
    // Set static field: static public UnityEngine.TransferFunction sRGB
    static void _set_sRGB(::UnityEngine::TransferFunction value);
    // static field const value: static public UnityEngine.TransferFunction BT1886
    static constexpr const int BT1886 = 1;
    // Get static field: static public UnityEngine.TransferFunction BT1886
    static ::UnityEngine::TransferFunction _get_BT1886();
    // Set static field: static public UnityEngine.TransferFunction BT1886
    static void _set_BT1886(::UnityEngine::TransferFunction value);
    // static field const value: static public UnityEngine.TransferFunction PQ
    static constexpr const int PQ = 2;
    // Get static field: static public UnityEngine.TransferFunction PQ
    static ::UnityEngine::TransferFunction _get_PQ();
    // Set static field: static public UnityEngine.TransferFunction PQ
    static void _set_PQ(::UnityEngine::TransferFunction value);
    // static field const value: static public UnityEngine.TransferFunction Linear
    static constexpr const int Linear = 3;
    // Get static field: static public UnityEngine.TransferFunction Linear
    static ::UnityEngine::TransferFunction _get_Linear();
    // Set static field: static public UnityEngine.TransferFunction Linear
    static void _set_Linear(::UnityEngine::TransferFunction value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.TransferFunction
  #pragma pack(pop)
  static check_size<sizeof(TransferFunction), 0 + sizeof(int)> __UnityEngine_TransferFunctionSizeCheck;
  static_assert(sizeof(TransferFunction) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
