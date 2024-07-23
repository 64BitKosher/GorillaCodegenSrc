// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ApplyMaterialProperty
#include "GlobalNamespace/ApplyMaterialProperty.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ApplyMaterialProperty::SuportedTypes, "", "ApplyMaterialProperty/SuportedTypes");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: ApplyMaterialProperty/SuportedTypes
  // [TokenAttribute] Offset: FFFFFFFF
  struct ApplyMaterialProperty::SuportedTypes/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SuportedTypes
    constexpr SuportedTypes(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public ApplyMaterialProperty/SuportedTypes Color
    static constexpr const int Color = 0;
    // Get static field: static public ApplyMaterialProperty/SuportedTypes Color
    static ::GlobalNamespace::ApplyMaterialProperty::SuportedTypes _get_Color();
    // Set static field: static public ApplyMaterialProperty/SuportedTypes Color
    static void _set_Color(::GlobalNamespace::ApplyMaterialProperty::SuportedTypes value);
    // static field const value: static public ApplyMaterialProperty/SuportedTypes Float
    static constexpr const int Float = 1;
    // Get static field: static public ApplyMaterialProperty/SuportedTypes Float
    static ::GlobalNamespace::ApplyMaterialProperty::SuportedTypes _get_Float();
    // Set static field: static public ApplyMaterialProperty/SuportedTypes Float
    static void _set_Float(::GlobalNamespace::ApplyMaterialProperty::SuportedTypes value);
    // static field const value: static public ApplyMaterialProperty/SuportedTypes Vector2
    static constexpr const int Vector2 = 2;
    // Get static field: static public ApplyMaterialProperty/SuportedTypes Vector2
    static ::GlobalNamespace::ApplyMaterialProperty::SuportedTypes _get_Vector2();
    // Set static field: static public ApplyMaterialProperty/SuportedTypes Vector2
    static void _set_Vector2(::GlobalNamespace::ApplyMaterialProperty::SuportedTypes value);
    // static field const value: static public ApplyMaterialProperty/SuportedTypes Vector3
    static constexpr const int Vector3 = 3;
    // Get static field: static public ApplyMaterialProperty/SuportedTypes Vector3
    static ::GlobalNamespace::ApplyMaterialProperty::SuportedTypes _get_Vector3();
    // Set static field: static public ApplyMaterialProperty/SuportedTypes Vector3
    static void _set_Vector3(::GlobalNamespace::ApplyMaterialProperty::SuportedTypes value);
    // static field const value: static public ApplyMaterialProperty/SuportedTypes Vector4
    static constexpr const int Vector4 = 4;
    // Get static field: static public ApplyMaterialProperty/SuportedTypes Vector4
    static ::GlobalNamespace::ApplyMaterialProperty::SuportedTypes _get_Vector4();
    // Set static field: static public ApplyMaterialProperty/SuportedTypes Vector4
    static void _set_Vector4(::GlobalNamespace::ApplyMaterialProperty::SuportedTypes value);
    // static field const value: static public ApplyMaterialProperty/SuportedTypes Texture2D
    static constexpr const int Texture2D = 5;
    // Get static field: static public ApplyMaterialProperty/SuportedTypes Texture2D
    static ::GlobalNamespace::ApplyMaterialProperty::SuportedTypes _get_Texture2D();
    // Set static field: static public ApplyMaterialProperty/SuportedTypes Texture2D
    static void _set_Texture2D(::GlobalNamespace::ApplyMaterialProperty::SuportedTypes value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // ApplyMaterialProperty/SuportedTypes
  #pragma pack(pop)
  static check_size<sizeof(ApplyMaterialProperty::SuportedTypes), 0 + sizeof(int)> __GlobalNamespace_ApplyMaterialProperty_SuportedTypesSizeCheck;
  static_assert(sizeof(ApplyMaterialProperty::SuportedTypes) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"