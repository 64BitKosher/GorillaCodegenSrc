// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: Oculus.Interaction.Input
namespace Oculus::Interaction::Input {
  // Forward declaring type: OneEuroFilterPropertyBlock
  struct OneEuroFilterPropertyBlock;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Input::OneEuroFilterPropertyBlock, "Oculus.Interaction.Input", "OneEuroFilterPropertyBlock");
// Type namespace: Oculus.Interaction.Input
namespace Oculus::Interaction::Input {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Oculus.Interaction.Input.OneEuroFilterPropertyBlock
  // [TokenAttribute] Offset: FFFFFFFF
  struct OneEuroFilterPropertyBlock/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Single _minCutoff
    // Size: 0x4
    // Offset: 0x0
    float minCutoff;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single _beta
    // Size: 0x4
    // Offset: 0x4
    float beta;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single _dCutoff
    // Size: 0x4
    // Offset: 0x8
    float dCutoff;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: OneEuroFilterPropertyBlock
    constexpr OneEuroFilterPropertyBlock(float minCutoff_ = {}, float beta_ = {}, float dCutoff_ = {}) noexcept : minCutoff{minCutoff_}, beta{beta_}, dCutoff{dCutoff_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Single _minCutoff
    [[deprecated("Use field access instead!")]] float& dyn__minCutoff();
    // Get instance field reference: public System.Single _beta
    [[deprecated("Use field access instead!")]] float& dyn__beta();
    // Get instance field reference: public System.Single _dCutoff
    [[deprecated("Use field access instead!")]] float& dyn__dCutoff();
    // public System.Single get_MinCutoff()
    // Offset: 0x481F56C
    float get_MinCutoff();
    // public System.Single get_Beta()
    // Offset: 0x481F574
    float get_Beta();
    // public System.Single get_DCutoff()
    // Offset: 0x481F57C
    float get_DCutoff();
    // static private System.Single get_DefaultMinCutoff()
    // Offset: 0x481F584
    static float get_DefaultMinCutoff();
    // static private System.Single get_DefaultBeta()
    // Offset: 0x481F58C
    static float get_DefaultBeta();
    // static private System.Single get_DefaultDCutoff()
    // Offset: 0x481F594
    static float get_DefaultDCutoff();
    // public System.Void .ctor(System.Single minCutoff, System.Single beta, System.Single dCutoff)
    // Offset: 0x481F59C
    // ABORTED: conflicts with another method.  OneEuroFilterPropertyBlock(float minCutoff, float beta, float dCutoff);
    // public System.Void .ctor(System.Single minCutoff, System.Single beta)
    // Offset: 0x4812550
    OneEuroFilterPropertyBlock(float minCutoff, float beta);
    // static public Oculus.Interaction.Input.OneEuroFilterPropertyBlock get_Default()
    // Offset: 0x481EBD0
    static ::Oculus::Interaction::Input::OneEuroFilterPropertyBlock get_Default();
  }; // Oculus.Interaction.Input.OneEuroFilterPropertyBlock
  #pragma pack(pop)
  static check_size<sizeof(OneEuroFilterPropertyBlock), 8 + sizeof(float)> __Oculus_Interaction_Input_OneEuroFilterPropertyBlockSizeCheck;
  static_assert(sizeof(OneEuroFilterPropertyBlock) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::Input::OneEuroFilterPropertyBlock::get_MinCutoff
// Il2CppName: get_MinCutoff
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::Input::OneEuroFilterPropertyBlock::*)()>(&Oculus::Interaction::Input::OneEuroFilterPropertyBlock::get_MinCutoff)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::OneEuroFilterPropertyBlock), "get_MinCutoff", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::OneEuroFilterPropertyBlock::get_Beta
// Il2CppName: get_Beta
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::Input::OneEuroFilterPropertyBlock::*)()>(&Oculus::Interaction::Input::OneEuroFilterPropertyBlock::get_Beta)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::OneEuroFilterPropertyBlock), "get_Beta", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::OneEuroFilterPropertyBlock::get_DCutoff
// Il2CppName: get_DCutoff
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::Input::OneEuroFilterPropertyBlock::*)()>(&Oculus::Interaction::Input::OneEuroFilterPropertyBlock::get_DCutoff)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::OneEuroFilterPropertyBlock), "get_DCutoff", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::OneEuroFilterPropertyBlock::get_DefaultMinCutoff
// Il2CppName: get_DefaultMinCutoff
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&Oculus::Interaction::Input::OneEuroFilterPropertyBlock::get_DefaultMinCutoff)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::OneEuroFilterPropertyBlock), "get_DefaultMinCutoff", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::OneEuroFilterPropertyBlock::get_DefaultBeta
// Il2CppName: get_DefaultBeta
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&Oculus::Interaction::Input::OneEuroFilterPropertyBlock::get_DefaultBeta)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::OneEuroFilterPropertyBlock), "get_DefaultBeta", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::OneEuroFilterPropertyBlock::get_DefaultDCutoff
// Il2CppName: get_DefaultDCutoff
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&Oculus::Interaction::Input::OneEuroFilterPropertyBlock::get_DefaultDCutoff)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::OneEuroFilterPropertyBlock), "get_DefaultDCutoff", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::OneEuroFilterPropertyBlock::OneEuroFilterPropertyBlock
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Interaction::Input::OneEuroFilterPropertyBlock::OneEuroFilterPropertyBlock
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Interaction::Input::OneEuroFilterPropertyBlock::get_Default
// Il2CppName: get_Default
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::Input::OneEuroFilterPropertyBlock (*)()>(&Oculus::Interaction::Input::OneEuroFilterPropertyBlock::get_Default)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::OneEuroFilterPropertyBlock), "get_Default", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
