// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.Input.HandJointId
#include "Oculus/Interaction/Input/HandJointId.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Forward declaring type: JointDeltaConfig
  class JointDeltaConfig;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::PoseDetection::JointDeltaConfig);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::PoseDetection::JointDeltaConfig*, "Oculus.Interaction.PoseDetection", "JointDeltaConfig");
// Type namespace: Oculus.Interaction.PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.PoseDetection.JointDeltaConfig
  // [TokenAttribute] Offset: FFFFFFFF
  class JointDeltaConfig : public ::Il2CppObject {
    public:
    public:
    // public readonly System.Int32 InstanceID
    // Size: 0x4
    // Offset: 0x10
    int InstanceID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: InstanceID and: JointIDs
    char __padding0[0x4] = {};
    // public readonly System.Collections.Generic.IEnumerable`1<Oculus.Interaction.Input.HandJointId> JointIDs
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Input::HandJointId>* JointIDs;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Input::HandJointId>*) == 0x8);
    public:
    // Get instance field reference: public readonly System.Int32 InstanceID
    [[deprecated("Use field access instead!")]] int& dyn_InstanceID();
    // Get instance field reference: public readonly System.Collections.Generic.IEnumerable`1<Oculus.Interaction.Input.HandJointId> JointIDs
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Input::HandJointId>*& dyn_JointIDs();
    // public System.Void .ctor(System.Int32 instanceID, System.Collections.Generic.IEnumerable`1<Oculus.Interaction.Input.HandJointId> jointIDs)
    // Offset: 0x47EC2D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JointDeltaConfig* New_ctor(int instanceID, ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Input::HandJointId>* jointIDs) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::JointDeltaConfig::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JointDeltaConfig*, creationType>(instanceID, jointIDs)));
    }
  }; // Oculus.Interaction.PoseDetection.JointDeltaConfig
  #pragma pack(pop)
  static check_size<sizeof(JointDeltaConfig), 24 + sizeof(::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Input::HandJointId>*)> __Oculus_Interaction_PoseDetection_JointDeltaConfigSizeCheck;
  static_assert(sizeof(JointDeltaConfig) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::JointDeltaConfig::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
