// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Oculus.Interaction.ISelector
#include "Oculus/Interaction/ISelector.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction
namespace Oculus::Interaction {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Forward declaring type: VirtualSelector
  class VirtualSelector;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::VirtualSelector);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::VirtualSelector*, "Oculus.Interaction", "VirtualSelector");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x39
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.VirtualSelector
  // [TokenAttribute] Offset: FFFFFFFF
  class VirtualSelector : public ::UnityEngine::MonoBehaviour/*, public ::Oculus::Interaction::ISelector*/ {
    public:
    // Nested type: ::Oculus::Interaction::VirtualSelector::$$c
    class $$c;
    public:
    // private System.Boolean _selectFlag
    // Size: 0x1
    // Offset: 0x20
    bool selectFlag;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: selectFlag and: WhenSelected
    char __padding0[0x7] = {};
    // private System.Action WhenSelected
    // Size: 0x8
    // Offset: 0x28
    ::System::Action* WhenSelected;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Action WhenUnselected
    // Size: 0x8
    // Offset: 0x30
    ::System::Action* WhenUnselected;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Boolean _currentlySelected
    // Size: 0x1
    // Offset: 0x38
    bool currentlySelected;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::ISelector
    operator ::Oculus::Interaction::ISelector() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::ISelector*>(this);
    }
    // Get instance field reference: private System.Boolean _selectFlag
    [[deprecated("Use field access instead!")]] bool& dyn__selectFlag();
    // Get instance field reference: private System.Action WhenSelected
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_WhenSelected();
    // Get instance field reference: private System.Action WhenUnselected
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_WhenUnselected();
    // Get instance field reference: private System.Boolean _currentlySelected
    [[deprecated("Use field access instead!")]] bool& dyn__currentlySelected();
    // public System.Void add_WhenSelected(System.Action value)
    // Offset: 0x47D4C00
    void add_WhenSelected(::System::Action* value);
    // public System.Void remove_WhenSelected(System.Action value)
    // Offset: 0x47D4C9C
    void remove_WhenSelected(::System::Action* value);
    // public System.Void add_WhenUnselected(System.Action value)
    // Offset: 0x47D4D38
    void add_WhenUnselected(::System::Action* value);
    // public System.Void remove_WhenUnselected(System.Action value)
    // Offset: 0x47D4DD4
    void remove_WhenUnselected(::System::Action* value);
    // public System.Void Select()
    // Offset: 0x47D4E70
    void Select();
    // public System.Void Unselect()
    // Offset: 0x47D4EC8
    void Unselect();
    // protected System.Void OnValidate()
    // Offset: 0x47D4ED0
    void OnValidate();
    // protected System.Void UpdateSelection()
    // Offset: 0x47D4E7C
    void UpdateSelection();
    // public System.Void .ctor()
    // Offset: 0x47D4ED4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VirtualSelector* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::VirtualSelector::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VirtualSelector*, creationType>()));
    }
  }; // Oculus.Interaction.VirtualSelector
  #pragma pack(pop)
  static check_size<sizeof(VirtualSelector), 56 + sizeof(bool)> __Oculus_Interaction_VirtualSelectorSizeCheck;
  static_assert(sizeof(VirtualSelector) == 0x39);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::VirtualSelector::add_WhenSelected
// Il2CppName: add_WhenSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::VirtualSelector::*)(::System::Action*)>(&Oculus::Interaction::VirtualSelector::add_WhenSelected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::VirtualSelector*), "add_WhenSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::VirtualSelector::remove_WhenSelected
// Il2CppName: remove_WhenSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::VirtualSelector::*)(::System::Action*)>(&Oculus::Interaction::VirtualSelector::remove_WhenSelected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::VirtualSelector*), "remove_WhenSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::VirtualSelector::add_WhenUnselected
// Il2CppName: add_WhenUnselected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::VirtualSelector::*)(::System::Action*)>(&Oculus::Interaction::VirtualSelector::add_WhenUnselected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::VirtualSelector*), "add_WhenUnselected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::VirtualSelector::remove_WhenUnselected
// Il2CppName: remove_WhenUnselected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::VirtualSelector::*)(::System::Action*)>(&Oculus::Interaction::VirtualSelector::remove_WhenUnselected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::VirtualSelector*), "remove_WhenUnselected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::VirtualSelector::Select
// Il2CppName: Select
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::VirtualSelector::*)()>(&Oculus::Interaction::VirtualSelector::Select)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::VirtualSelector*), "Select", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::VirtualSelector::Unselect
// Il2CppName: Unselect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::VirtualSelector::*)()>(&Oculus::Interaction::VirtualSelector::Unselect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::VirtualSelector*), "Unselect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::VirtualSelector::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::VirtualSelector::*)()>(&Oculus::Interaction::VirtualSelector::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::VirtualSelector*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::VirtualSelector::UpdateSelection
// Il2CppName: UpdateSelection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::VirtualSelector::*)()>(&Oculus::Interaction::VirtualSelector::UpdateSelection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::VirtualSelector*), "UpdateSelection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::VirtualSelector::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
