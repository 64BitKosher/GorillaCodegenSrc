// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: Oculus.Interaction.Input.HandJointId
#include "Oculus/Interaction/Input/HandJointId.hpp"
// Completed includes
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Forward declaring type: HandSphere
  struct HandSphere;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::HandSphere, "Oculus.Interaction", "HandSphere");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Oculus.Interaction.HandSphere
  // [TokenAttribute] Offset: FFFFFFFF
  struct HandSphere/*, public ::System::ValueType*/ {
    public:
    public:
    // private readonly UnityEngine.Vector3 <Position>k__BackingField
    // Size: 0xC
    // Offset: 0x0
    ::UnityEngine::Vector3 Position;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private readonly System.Single <Radius>k__BackingField
    // Size: 0x4
    // Offset: 0xC
    float Radius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly Oculus.Interaction.Input.HandJointId <Joint>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    ::Oculus::Interaction::Input::HandJointId Joint;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Input::HandJointId) == 0x4);
    public:
    // Creating value type constructor for type: HandSphere
    constexpr HandSphere(::UnityEngine::Vector3 Position_ = {}, float Radius_ = {}, ::Oculus::Interaction::Input::HandJointId Joint_ = {}) noexcept : Position{Position_}, Radius{Radius_}, Joint{Joint_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private readonly UnityEngine.Vector3 <Position>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_$Position$k__BackingField();
    // Get instance field reference: private readonly System.Single <Radius>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$Radius$k__BackingField();
    // Get instance field reference: private readonly Oculus.Interaction.Input.HandJointId <Joint>k__BackingField
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Input::HandJointId& dyn_$Joint$k__BackingField();
    // public UnityEngine.Vector3 get_Position()
    // Offset: 0x47BD174
    ::UnityEngine::Vector3 get_Position();
    // public System.Single get_Radius()
    // Offset: 0x47BD180
    float get_Radius();
    // public Oculus.Interaction.Input.HandJointId get_Joint()
    // Offset: 0x47BD188
    ::Oculus::Interaction::Input::HandJointId get_Joint();
    // public System.Void .ctor(UnityEngine.Vector3 position, System.Single radius, Oculus.Interaction.Input.HandJointId joint)
    // Offset: 0x47BCF70
    // ABORTED: conflicts with another method.  HandSphere(::UnityEngine::Vector3 position, float radius, ::Oculus::Interaction::Input::HandJointId joint);
  }; // Oculus.Interaction.HandSphere
  #pragma pack(pop)
  static check_size<sizeof(HandSphere), 16 + sizeof(::Oculus::Interaction::Input::HandJointId)> __Oculus_Interaction_HandSphereSizeCheck;
  static_assert(sizeof(HandSphere) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::HandSphere::get_Position
// Il2CppName: get_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Oculus::Interaction::HandSphere::*)()>(&Oculus::Interaction::HandSphere::get_Position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandSphere), "get_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandSphere::get_Radius
// Il2CppName: get_Radius
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::HandSphere::*)()>(&Oculus::Interaction::HandSphere::get_Radius)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandSphere), "get_Radius", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandSphere::get_Joint
// Il2CppName: get_Joint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::Input::HandJointId (Oculus::Interaction::HandSphere::*)()>(&Oculus::Interaction::HandSphere::get_Joint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandSphere), "get_Joint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandSphere::HandSphere
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!