// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Oculus.Interaction.IActiveState
#include "Oculus/Interaction/IActiveState.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Interaction.Locomotion
namespace Oculus::Interaction::Locomotion {
  // Forward declaring type: VirtualActiveState
  class VirtualActiveState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::Locomotion::VirtualActiveState);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Locomotion::VirtualActiveState*, "Oculus.Interaction.Locomotion", "VirtualActiveState");
// Type namespace: Oculus.Interaction.Locomotion
namespace Oculus::Interaction::Locomotion {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.Locomotion.VirtualActiveState
  // [TokenAttribute] Offset: FFFFFFFF
  class VirtualActiveState : public ::UnityEngine::MonoBehaviour/*, public ::Oculus::Interaction::IActiveState*/ {
    public:
    public:
    // private System.Boolean <Active>k__BackingField
    // Size: 0x1
    // Offset: 0x20
    bool Active;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::IActiveState
    operator ::Oculus::Interaction::IActiveState() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::IActiveState*>(this);
    }
    // Get instance field reference: private System.Boolean <Active>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$Active$k__BackingField();
    // public System.Boolean get_Active()
    // Offset: 0x480503C
    bool get_Active();
    // public System.Void set_Active(System.Boolean value)
    // Offset: 0x4805044
    void set_Active(bool value);
    // public System.Void .ctor()
    // Offset: 0x4805050
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VirtualActiveState* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Locomotion::VirtualActiveState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VirtualActiveState*, creationType>()));
    }
  }; // Oculus.Interaction.Locomotion.VirtualActiveState
  #pragma pack(pop)
  static check_size<sizeof(VirtualActiveState), 32 + sizeof(bool)> __Oculus_Interaction_Locomotion_VirtualActiveStateSizeCheck;
  static_assert(sizeof(VirtualActiveState) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::VirtualActiveState::get_Active
// Il2CppName: get_Active
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::Locomotion::VirtualActiveState::*)()>(&Oculus::Interaction::Locomotion::VirtualActiveState::get_Active)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::VirtualActiveState*), "get_Active", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::VirtualActiveState::set_Active
// Il2CppName: set_Active
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Locomotion::VirtualActiveState::*)(bool)>(&Oculus::Interaction::Locomotion::VirtualActiveState::set_Active)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::VirtualActiveState*), "set_Active", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::VirtualActiveState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!