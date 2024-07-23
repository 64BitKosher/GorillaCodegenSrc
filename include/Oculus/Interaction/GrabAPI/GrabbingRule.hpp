// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Oculus.Interaction.GrabAPI.FingerRequirement
#include "Oculus/Interaction/GrabAPI/FingerRequirement.hpp"
// Including type: Oculus.Interaction.GrabAPI.FingerUnselectMode
#include "Oculus/Interaction/GrabAPI/FingerUnselectMode.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction::Input
namespace Oculus::Interaction::Input {
  // Forward declaring type: HandFinger
  struct HandFinger;
  // Forward declaring type: HandFingerFlags
  struct HandFingerFlags;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.GrabAPI
namespace Oculus::Interaction::GrabAPI {
  // Forward declaring type: GrabbingRule
  struct GrabbingRule;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::GrabAPI::GrabbingRule, "Oculus.Interaction.GrabAPI", "GrabbingRule");
// Type namespace: Oculus.Interaction.GrabAPI
namespace Oculus::Interaction::GrabAPI {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Oculus.Interaction.GrabAPI.GrabbingRule
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: FFFFFFFF
  struct GrabbingRule/*, public ::System::ValueType*/ {
    public:
    public:
    // private Oculus.Interaction.GrabAPI.FingerRequirement _thumbRequirement
    // Size: 0x4
    // Offset: 0x0
    ::Oculus::Interaction::GrabAPI::FingerRequirement thumbRequirement;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::GrabAPI::FingerRequirement) == 0x4);
    // private Oculus.Interaction.GrabAPI.FingerRequirement _indexRequirement
    // Size: 0x4
    // Offset: 0x4
    ::Oculus::Interaction::GrabAPI::FingerRequirement indexRequirement;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::GrabAPI::FingerRequirement) == 0x4);
    // private Oculus.Interaction.GrabAPI.FingerRequirement _middleRequirement
    // Size: 0x4
    // Offset: 0x8
    ::Oculus::Interaction::GrabAPI::FingerRequirement middleRequirement;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::GrabAPI::FingerRequirement) == 0x4);
    // private Oculus.Interaction.GrabAPI.FingerRequirement _ringRequirement
    // Size: 0x4
    // Offset: 0xC
    ::Oculus::Interaction::GrabAPI::FingerRequirement ringRequirement;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::GrabAPI::FingerRequirement) == 0x4);
    // private Oculus.Interaction.GrabAPI.FingerRequirement _pinkyRequirement
    // Size: 0x4
    // Offset: 0x10
    ::Oculus::Interaction::GrabAPI::FingerRequirement pinkyRequirement;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::GrabAPI::FingerRequirement) == 0x4);
    // private Oculus.Interaction.GrabAPI.FingerUnselectMode _unselectMode
    // Size: 0x4
    // Offset: 0x14
    ::Oculus::Interaction::GrabAPI::FingerUnselectMode unselectMode;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::GrabAPI::FingerUnselectMode) == 0x4);
    public:
    // Creating value type constructor for type: GrabbingRule
    constexpr GrabbingRule(::Oculus::Interaction::GrabAPI::FingerRequirement thumbRequirement_ = {}, ::Oculus::Interaction::GrabAPI::FingerRequirement indexRequirement_ = {}, ::Oculus::Interaction::GrabAPI::FingerRequirement middleRequirement_ = {}, ::Oculus::Interaction::GrabAPI::FingerRequirement ringRequirement_ = {}, ::Oculus::Interaction::GrabAPI::FingerRequirement pinkyRequirement_ = {}, ::Oculus::Interaction::GrabAPI::FingerUnselectMode unselectMode_ = {}) noexcept : thumbRequirement{thumbRequirement_}, indexRequirement{indexRequirement_}, middleRequirement{middleRequirement_}, ringRequirement{ringRequirement_}, pinkyRequirement{pinkyRequirement_}, unselectMode{unselectMode_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get static field: static private readonly Oculus.Interaction.GrabAPI.GrabbingRule <DefaultPalmRule>k__BackingField
    static ::Oculus::Interaction::GrabAPI::GrabbingRule _get_$DefaultPalmRule$k__BackingField();
    // Set static field: static private readonly Oculus.Interaction.GrabAPI.GrabbingRule <DefaultPalmRule>k__BackingField
    static void _set_$DefaultPalmRule$k__BackingField(::Oculus::Interaction::GrabAPI::GrabbingRule value);
    // Get static field: static private readonly Oculus.Interaction.GrabAPI.GrabbingRule <DefaultPinchRule>k__BackingField
    static ::Oculus::Interaction::GrabAPI::GrabbingRule _get_$DefaultPinchRule$k__BackingField();
    // Set static field: static private readonly Oculus.Interaction.GrabAPI.GrabbingRule <DefaultPinchRule>k__BackingField
    static void _set_$DefaultPinchRule$k__BackingField(::Oculus::Interaction::GrabAPI::GrabbingRule value);
    // Get static field: static private readonly Oculus.Interaction.GrabAPI.GrabbingRule <FullGrab>k__BackingField
    static ::Oculus::Interaction::GrabAPI::GrabbingRule _get_$FullGrab$k__BackingField();
    // Set static field: static private readonly Oculus.Interaction.GrabAPI.GrabbingRule <FullGrab>k__BackingField
    static void _set_$FullGrab$k__BackingField(::Oculus::Interaction::GrabAPI::GrabbingRule value);
    // Get instance field reference: private Oculus.Interaction.GrabAPI.FingerRequirement _thumbRequirement
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::GrabAPI::FingerRequirement& dyn__thumbRequirement();
    // Get instance field reference: private Oculus.Interaction.GrabAPI.FingerRequirement _indexRequirement
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::GrabAPI::FingerRequirement& dyn__indexRequirement();
    // Get instance field reference: private Oculus.Interaction.GrabAPI.FingerRequirement _middleRequirement
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::GrabAPI::FingerRequirement& dyn__middleRequirement();
    // Get instance field reference: private Oculus.Interaction.GrabAPI.FingerRequirement _ringRequirement
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::GrabAPI::FingerRequirement& dyn__ringRequirement();
    // Get instance field reference: private Oculus.Interaction.GrabAPI.FingerRequirement _pinkyRequirement
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::GrabAPI::FingerRequirement& dyn__pinkyRequirement();
    // Get instance field reference: private Oculus.Interaction.GrabAPI.FingerUnselectMode _unselectMode
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::GrabAPI::FingerUnselectMode& dyn__unselectMode();
    // public Oculus.Interaction.GrabAPI.FingerUnselectMode get_UnselectMode()
    // Offset: 0x483AFF4
    ::Oculus::Interaction::GrabAPI::FingerUnselectMode get_UnselectMode();
    // public System.Boolean get_SelectsWithOptionals()
    // Offset: 0x483AFFC
    bool get_SelectsWithOptionals();
    // public Oculus.Interaction.GrabAPI.FingerRequirement get_Item(Oculus.Interaction.Input.HandFinger fingerID)
    // Offset: 0x482CBD0
    ::Oculus::Interaction::GrabAPI::FingerRequirement get_Item(::Oculus::Interaction::Input::HandFinger fingerID);
    // public System.Void set_Item(Oculus.Interaction.Input.HandFinger fingerID, Oculus.Interaction.GrabAPI.FingerRequirement value)
    // Offset: 0x483B044
    void set_Item(::Oculus::Interaction::Input::HandFinger fingerID, ::Oculus::Interaction::GrabAPI::FingerRequirement value);
    // public System.Void StripIrrelevant(ref Oculus.Interaction.Input.HandFingerFlags fingerFlags)
    // Offset: 0x4826D30
    void StripIrrelevant(ByRef<::Oculus::Interaction::Input::HandFingerFlags> fingerFlags);
    // public System.Void .ctor(Oculus.Interaction.Input.HandFingerFlags mask, in Oculus.Interaction.GrabAPI.GrabbingRule otherRule)
    // Offset: 0x483B08C
    GrabbingRule(::Oculus::Interaction::Input::HandFingerFlags mask, ByRef<::Oculus::Interaction::GrabAPI::GrabbingRule> otherRule);
    // static public Oculus.Interaction.GrabAPI.GrabbingRule get_DefaultPalmRule()
    // Offset: 0x483B0FC
    static ::Oculus::Interaction::GrabAPI::GrabbingRule get_DefaultPalmRule();
    // static public Oculus.Interaction.GrabAPI.GrabbingRule get_DefaultPinchRule()
    // Offset: 0x483B164
    static ::Oculus::Interaction::GrabAPI::GrabbingRule get_DefaultPinchRule();
    // static public Oculus.Interaction.GrabAPI.GrabbingRule get_FullGrab()
    // Offset: 0x483B1CC
    static ::Oculus::Interaction::GrabAPI::GrabbingRule get_FullGrab();
    // static private System.Void .cctor()
    // Offset: 0x483B234
    static void _cctor();
  }; // Oculus.Interaction.GrabAPI.GrabbingRule
  #pragma pack(pop)
  static check_size<sizeof(GrabbingRule), 20 + sizeof(::Oculus::Interaction::GrabAPI::FingerUnselectMode)> __Oculus_Interaction_GrabAPI_GrabbingRuleSizeCheck;
  static_assert(sizeof(GrabbingRule) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::GrabAPI::GrabbingRule::get_UnselectMode
// Il2CppName: get_UnselectMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::GrabAPI::FingerUnselectMode (Oculus::Interaction::GrabAPI::GrabbingRule::*)()>(&Oculus::Interaction::GrabAPI::GrabbingRule::get_UnselectMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::GrabAPI::GrabbingRule), "get_UnselectMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::GrabAPI::GrabbingRule::get_SelectsWithOptionals
// Il2CppName: get_SelectsWithOptionals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::GrabAPI::GrabbingRule::*)()>(&Oculus::Interaction::GrabAPI::GrabbingRule::get_SelectsWithOptionals)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::GrabAPI::GrabbingRule), "get_SelectsWithOptionals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::GrabAPI::GrabbingRule::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::GrabAPI::FingerRequirement (Oculus::Interaction::GrabAPI::GrabbingRule::*)(::Oculus::Interaction::Input::HandFinger)>(&Oculus::Interaction::GrabAPI::GrabbingRule::get_Item)> {
  static const MethodInfo* get() {
    static auto* fingerID = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "HandFinger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::GrabAPI::GrabbingRule), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fingerID});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::GrabAPI::GrabbingRule::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::GrabAPI::GrabbingRule::*)(::Oculus::Interaction::Input::HandFinger, ::Oculus::Interaction::GrabAPI::FingerRequirement)>(&Oculus::Interaction::GrabAPI::GrabbingRule::set_Item)> {
  static const MethodInfo* get() {
    static auto* fingerID = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "HandFinger")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.GrabAPI", "FingerRequirement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::GrabAPI::GrabbingRule), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fingerID, value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::GrabAPI::GrabbingRule::StripIrrelevant
// Il2CppName: StripIrrelevant
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::GrabAPI::GrabbingRule::*)(ByRef<::Oculus::Interaction::Input::HandFingerFlags>)>(&Oculus::Interaction::GrabAPI::GrabbingRule::StripIrrelevant)> {
  static const MethodInfo* get() {
    static auto* fingerFlags = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "HandFingerFlags")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::GrabAPI::GrabbingRule), "StripIrrelevant", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fingerFlags});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::GrabAPI::GrabbingRule::GrabbingRule
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Interaction::GrabAPI::GrabbingRule::get_DefaultPalmRule
// Il2CppName: get_DefaultPalmRule
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::GrabAPI::GrabbingRule (*)()>(&Oculus::Interaction::GrabAPI::GrabbingRule::get_DefaultPalmRule)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::GrabAPI::GrabbingRule), "get_DefaultPalmRule", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::GrabAPI::GrabbingRule::get_DefaultPinchRule
// Il2CppName: get_DefaultPinchRule
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::GrabAPI::GrabbingRule (*)()>(&Oculus::Interaction::GrabAPI::GrabbingRule::get_DefaultPinchRule)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::GrabAPI::GrabbingRule), "get_DefaultPinchRule", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::GrabAPI::GrabbingRule::get_FullGrab
// Il2CppName: get_FullGrab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::GrabAPI::GrabbingRule (*)()>(&Oculus::Interaction::GrabAPI::GrabbingRule::get_FullGrab)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::GrabAPI::GrabbingRule), "get_FullGrab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::GrabAPI::GrabbingRule::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Oculus::Interaction::GrabAPI::GrabbingRule::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::GrabAPI::GrabbingRule), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
