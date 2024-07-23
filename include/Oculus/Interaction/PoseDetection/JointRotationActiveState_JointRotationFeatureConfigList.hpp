// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.PoseDetection.JointRotationActiveState
#include "Oculus/Interaction/PoseDetection/JointRotationActiveState.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::PoseDetection::JointRotationActiveState::JointRotationFeatureConfigList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::PoseDetection::JointRotationActiveState::JointRotationFeatureConfigList*, "Oculus.Interaction.PoseDetection", "JointRotationActiveState/JointRotationFeatureConfigList");
// Type namespace: Oculus.Interaction.PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureConfigList
  // [TokenAttribute] Offset: FFFFFFFF
  class JointRotationActiveState::JointRotationFeatureConfigList : public ::Il2CppObject {
    public:
    public:
    // private System.Collections.Generic.List`1<Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureConfig> _values
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::JointRotationActiveState::JointRotationFeatureConfig*>* values;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::JointRotationActiveState::JointRotationFeatureConfig*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::JointRotationActiveState::JointRotationFeatureConfig*>*
    constexpr operator ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::JointRotationActiveState::JointRotationFeatureConfig*>*() const noexcept {
      return values;
    }
    // Get instance field reference: private System.Collections.Generic.List`1<Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureConfig> _values
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::JointRotationActiveState::JointRotationFeatureConfig*>*& dyn__values();
    // public System.Collections.Generic.List`1<Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureConfig> get_Values()
    // Offset: 0x47EF428
    ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::JointRotationActiveState::JointRotationFeatureConfig*>* get_Values();
    // public System.Void .ctor()
    // Offset: 0x47EF430
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JointRotationActiveState::JointRotationFeatureConfigList* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::JointRotationActiveState::JointRotationFeatureConfigList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JointRotationActiveState::JointRotationFeatureConfigList*, creationType>()));
    }
  }; // Oculus.Interaction.PoseDetection.JointRotationActiveState/JointRotationFeatureConfigList
  #pragma pack(pop)
  static check_size<sizeof(JointRotationActiveState::JointRotationFeatureConfigList), 16 + sizeof(::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::JointRotationActiveState::JointRotationFeatureConfig*>*)> __Oculus_Interaction_PoseDetection_JointRotationActiveState_JointRotationFeatureConfigListSizeCheck;
  static_assert(sizeof(JointRotationActiveState::JointRotationFeatureConfigList) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::JointRotationActiveState::JointRotationFeatureConfigList::get_Values
// Il2CppName: get_Values
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::JointRotationActiveState::JointRotationFeatureConfig*>* (Oculus::Interaction::PoseDetection::JointRotationActiveState::JointRotationFeatureConfigList::*)()>(&Oculus::Interaction::PoseDetection::JointRotationActiveState::JointRotationFeatureConfigList::get_Values)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::JointRotationActiveState::JointRotationFeatureConfigList*), "get_Values", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::JointRotationActiveState::JointRotationFeatureConfigList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!