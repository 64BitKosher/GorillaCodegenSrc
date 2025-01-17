// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: Oculus.Interaction.Grab
namespace Oculus::Interaction::Grab {
  // Forward declaring type: PoseMeasureParameters
  struct PoseMeasureParameters;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Grab::PoseMeasureParameters, "Oculus.Interaction.Grab", "PoseMeasureParameters");
// Type namespace: Oculus.Interaction.Grab
namespace Oculus::Interaction::Grab {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Oculus.Interaction.Grab.PoseMeasureParameters
  // [TokenAttribute] Offset: FFFFFFFF
  struct PoseMeasureParameters/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Single _positionRotationWeight
    // Size: 0x4
    // Offset: 0x0
    float positionRotationWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: PoseMeasureParameters
    constexpr PoseMeasureParameters(float positionRotationWeight_ = {}) noexcept : positionRotationWeight{positionRotationWeight_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator float
    constexpr operator float() const noexcept {
      return positionRotationWeight;
    }
    // Get static field: static public readonly Oculus.Interaction.Grab.PoseMeasureParameters DEFAULT
    static ::Oculus::Interaction::Grab::PoseMeasureParameters _get_DEFAULT();
    // Set static field: static public readonly Oculus.Interaction.Grab.PoseMeasureParameters DEFAULT
    static void _set_DEFAULT(::Oculus::Interaction::Grab::PoseMeasureParameters value);
    // Get instance field reference: private System.Single _positionRotationWeight
    [[deprecated("Use field access instead!")]] float& dyn__positionRotationWeight();
    // public System.Single get_PositionRotationWeight()
    // Offset: 0x4830C40
    float get_PositionRotationWeight();
    // public System.Void .ctor(System.Single positionRotationWeight)
    // Offset: 0x4830C48
    // ABORTED: conflicts with another method.  PoseMeasureParameters(float positionRotationWeight);
    // static private System.Void .cctor()
    // Offset: 0x4830C50
    static void _cctor();
  }; // Oculus.Interaction.Grab.PoseMeasureParameters
  #pragma pack(pop)
  static check_size<sizeof(PoseMeasureParameters), 0 + sizeof(float)> __Oculus_Interaction_Grab_PoseMeasureParametersSizeCheck;
  static_assert(sizeof(PoseMeasureParameters) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::Grab::PoseMeasureParameters::get_PositionRotationWeight
// Il2CppName: get_PositionRotationWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::Grab::PoseMeasureParameters::*)()>(&Oculus::Interaction::Grab::PoseMeasureParameters::get_PositionRotationWeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Grab::PoseMeasureParameters), "get_PositionRotationWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Grab::PoseMeasureParameters::PoseMeasureParameters
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Interaction::Grab::PoseMeasureParameters::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Oculus::Interaction::Grab::PoseMeasureParameters::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Grab::PoseMeasureParameters), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
