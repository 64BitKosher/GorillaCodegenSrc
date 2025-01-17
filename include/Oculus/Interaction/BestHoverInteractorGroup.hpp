// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.InteractorGroup
#include "Oculus/Interaction/InteractorGroup.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction
namespace Oculus::Interaction {
  // Skipping declaration: IInteractor because it is already included!
  // Skipping declaration: InteractorStateChangeArgs because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Forward declaring type: BestHoverInteractorGroup
  class BestHoverInteractorGroup;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::BestHoverInteractorGroup);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::BestHoverInteractorGroup*, "Oculus.Interaction", "BestHoverInteractorGroup");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x9C
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.BestHoverInteractorGroup
  // [TokenAttribute] Offset: FFFFFFFF
  class BestHoverInteractorGroup : public ::Oculus::Interaction::InteractorGroup {
    public:
    // Writing base type padding for base size: 0x89 to desired offset: 0x90
    char ___base_padding[0x7] = {};
    // Nested type: ::Oculus::Interaction::BestHoverInteractorGroup::$$c
    class $$c;
    public:
    // private Oculus.Interaction.IInteractor _bestInteractor
    // Size: 0x8
    // Offset: 0x90
    ::Oculus::Interaction::IInteractor* bestInteractor;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::IInteractor*) == 0x8);
    // private System.Int32 _bestInteractorIndex
    // Size: 0x4
    // Offset: 0x98
    int bestInteractorIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get static field: static private readonly Oculus.Interaction.InteractorGroup/InteractorPredicate IsNormalAndShouldHoverPredicate
    static ::Oculus::Interaction::InteractorGroup::InteractorPredicate* _get_IsNormalAndShouldHoverPredicate();
    // Set static field: static private readonly Oculus.Interaction.InteractorGroup/InteractorPredicate IsNormalAndShouldHoverPredicate
    static void _set_IsNormalAndShouldHoverPredicate(::Oculus::Interaction::InteractorGroup::InteractorPredicate* value);
    // Get instance field reference: private Oculus.Interaction.IInteractor _bestInteractor
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::IInteractor*& dyn__bestInteractor();
    // Get instance field reference: private System.Int32 _bestInteractorIndex
    [[deprecated("Use field access instead!")]] int& dyn__bestInteractorIndex();
    // private System.Boolean TryHover(System.Int32 betterThan, System.Int32 skipIndex)
    // Offset: 0x477E140
    bool TryHover(int betterThan, int skipIndex);
    // private System.Boolean TryReplaceHover(System.Int32 betterThan)
    // Offset: 0x477E3F8
    bool TryReplaceHover(int betterThan);
    // private System.Void HoverAtIndex(System.Int32 interactorIndex)
    // Offset: 0x477E1E4
    void HoverAtIndex(int interactorIndex);
    // private System.Void HandleBestInteractorStateChanged(Oculus.Interaction.InteractorStateChangeArgs stateChange)
    // Offset: 0x477EE50
    void HandleBestInteractorStateChanged(::Oculus::Interaction::InteractorStateChangeArgs stateChange);
    // private System.Void UnsuscribeBestInteractor()
    // Offset: 0x477E71C
    void UnsuscribeBestInteractor();
    // public System.Void InjectAllInteractorGroupBestHover(System.Collections.Generic.List`1<Oculus.Interaction.IInteractor> interactors)
    // Offset: 0x477F3C4
    void InjectAllInteractorGroupBestHover(::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>* interactors);
    // public override System.Boolean get_ShouldHover()
    // Offset: 0x477DE64
    // Implemented from: Oculus.Interaction.InteractorGroup
    // Base method: System.Boolean InteractorGroup::get_ShouldHover()
    bool get_ShouldHover();
    // public override System.Boolean get_ShouldUnhover()
    // Offset: 0x477DEDC
    // Implemented from: Oculus.Interaction.InteractorGroup
    // Base method: System.Boolean InteractorGroup::get_ShouldUnhover()
    bool get_ShouldUnhover();
    // public override System.Boolean get_ShouldSelect()
    // Offset: 0x477DF98
    // Implemented from: Oculus.Interaction.InteractorGroup
    // Base method: System.Boolean InteractorGroup::get_ShouldSelect()
    bool get_ShouldSelect();
    // public override System.Boolean get_ShouldUnselect()
    // Offset: 0x477E054
    // Implemented from: Oculus.Interaction.InteractorGroup
    // Base method: System.Boolean InteractorGroup::get_ShouldUnselect()
    bool get_ShouldUnselect();
    // public override System.Void Hover()
    // Offset: 0x477E110
    // Implemented from: Oculus.Interaction.InteractorGroup
    // Base method: System.Void InteractorGroup::Hover()
    void Hover();
    // public override System.Void Unhover()
    // Offset: 0x477E82C
    // Implemented from: Oculus.Interaction.InteractorGroup
    // Base method: System.Void InteractorGroup::Unhover()
    void Unhover();
    // public override System.Void Select()
    // Offset: 0x477E970
    // Implemented from: Oculus.Interaction.InteractorGroup
    // Base method: System.Void InteractorGroup::Select()
    void Select();
    // public override System.Void Unselect()
    // Offset: 0x477EA38
    // Implemented from: Oculus.Interaction.InteractorGroup
    // Base method: System.Void InteractorGroup::Unselect()
    void Unselect();
    // public override System.Void Preprocess()
    // Offset: 0x477EB7C
    // Implemented from: Oculus.Interaction.InteractorGroup
    // Base method: System.Void InteractorGroup::Preprocess()
    void Preprocess();
    // public override System.Void Process()
    // Offset: 0x477ED74
    // Implemented from: Oculus.Interaction.InteractorGroup
    // Base method: System.Void InteractorGroup::Process()
    void Process();
    // public override System.Void Enable()
    // Offset: 0x477EE8C
    // Implemented from: Oculus.Interaction.InteractorGroup
    // Base method: System.Void InteractorGroup::Enable()
    void Enable();
    // public override System.Void Disable()
    // Offset: 0x477EF3C
    // Implemented from: Oculus.Interaction.InteractorGroup
    // Base method: System.Void InteractorGroup::Disable()
    void Disable();
    // public override System.Boolean get_HasCandidate()
    // Offset: 0x477EF54
    // Implemented from: Oculus.Interaction.InteractorGroup
    // Base method: System.Boolean InteractorGroup::get_HasCandidate()
    bool get_HasCandidate();
    // public override System.Boolean get_HasInteractable()
    // Offset: 0x477F040
    // Implemented from: Oculus.Interaction.InteractorGroup
    // Base method: System.Boolean InteractorGroup::get_HasInteractable()
    bool get_HasInteractable();
    // public override System.Boolean get_HasSelectedInteractable()
    // Offset: 0x477F0F0
    // Implemented from: Oculus.Interaction.InteractorGroup
    // Base method: System.Boolean InteractorGroup::get_HasSelectedInteractable()
    bool get_HasSelectedInteractable();
    // public override System.Object get_CandidateProperties()
    // Offset: 0x477F1A0
    // Implemented from: Oculus.Interaction.InteractorGroup
    // Base method: System.Object InteractorGroup::get_CandidateProperties()
    ::Il2CppObject* get_CandidateProperties();
    // public System.Void .ctor()
    // Offset: 0x477F3CC
    // Implemented from: Oculus.Interaction.InteractorGroup
    // Base method: System.Void InteractorGroup::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BestHoverInteractorGroup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::BestHoverInteractorGroup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BestHoverInteractorGroup*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x477F428
    // Implemented from: Oculus.Interaction.InteractorGroup
    // Base method: System.Void InteractorGroup::.cctor()
    static void _cctor();
  }; // Oculus.Interaction.BestHoverInteractorGroup
  #pragma pack(pop)
  static check_size<sizeof(BestHoverInteractorGroup), 152 + sizeof(int)> __Oculus_Interaction_BestHoverInteractorGroupSizeCheck;
  static_assert(sizeof(BestHoverInteractorGroup) == 0x9C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::BestHoverInteractorGroup::TryHover
// Il2CppName: TryHover
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::BestHoverInteractorGroup::*)(int, int)>(&Oculus::Interaction::BestHoverInteractorGroup::TryHover)> {
  static const MethodInfo* get() {
    static auto* betterThan = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* skipIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::BestHoverInteractorGroup*), "TryHover", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{betterThan, skipIndex});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::BestHoverInteractorGroup::TryReplaceHover
// Il2CppName: TryReplaceHover
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::BestHoverInteractorGroup::*)(int)>(&Oculus::Interaction::BestHoverInteractorGroup::TryReplaceHover)> {
  static const MethodInfo* get() {
    static auto* betterThan = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::BestHoverInteractorGroup*), "TryReplaceHover", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{betterThan});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::BestHoverInteractorGroup::HoverAtIndex
// Il2CppName: HoverAtIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::BestHoverInteractorGroup::*)(int)>(&Oculus::Interaction::BestHoverInteractorGroup::HoverAtIndex)> {
  static const MethodInfo* get() {
    static auto* interactorIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::BestHoverInteractorGroup*), "HoverAtIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactorIndex});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::BestHoverInteractorGroup::HandleBestInteractorStateChanged
// Il2CppName: HandleBestInteractorStateChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::BestHoverInteractorGroup::*)(::Oculus::Interaction::InteractorStateChangeArgs)>(&Oculus::Interaction::BestHoverInteractorGroup::HandleBestInteractorStateChanged)> {
  static const MethodInfo* get() {
    static auto* stateChange = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "InteractorStateChangeArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::BestHoverInteractorGroup*), "HandleBestInteractorStateChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateChange});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::BestHoverInteractorGroup::UnsuscribeBestInteractor
// Il2CppName: UnsuscribeBestInteractor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::BestHoverInteractorGroup::*)()>(&Oculus::Interaction::BestHoverInteractorGroup::UnsuscribeBestInteractor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::BestHoverInteractorGroup*), "UnsuscribeBestInteractor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::BestHoverInteractorGroup::InjectAllInteractorGroupBestHover
// Il2CppName: InjectAllInteractorGroupBestHover
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::BestHoverInteractorGroup::*)(::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*)>(&Oculus::Interaction::BestHoverInteractorGroup::InjectAllInteractorGroupBestHover)> {
  static const MethodInfo* get() {
    static auto* interactors = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Interaction", "IInteractor")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::BestHoverInteractorGroup*), "InjectAllInteractorGroupBestHover", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactors});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::BestHoverInteractorGroup::get_ShouldHover
// Il2CppName: get_ShouldHover
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::BestHoverInteractorGroup::*)()>(&Oculus::Interaction::BestHoverInteractorGroup::get_ShouldHover)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::BestHoverInteractorGroup*), "get_ShouldHover", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::BestHoverInteractorGroup::get_ShouldUnhover
// Il2CppName: get_ShouldUnhover
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::BestHoverInteractorGroup::*)()>(&Oculus::Interaction::BestHoverInteractorGroup::get_ShouldUnhover)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::BestHoverInteractorGroup*), "get_ShouldUnhover", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::BestHoverInteractorGroup::get_ShouldSelect
// Il2CppName: get_ShouldSelect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::BestHoverInteractorGroup::*)()>(&Oculus::Interaction::BestHoverInteractorGroup::get_ShouldSelect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::BestHoverInteractorGroup*), "get_ShouldSelect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::BestHoverInteractorGroup::get_ShouldUnselect
// Il2CppName: get_ShouldUnselect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::BestHoverInteractorGroup::*)()>(&Oculus::Interaction::BestHoverInteractorGroup::get_ShouldUnselect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::BestHoverInteractorGroup*), "get_ShouldUnselect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::BestHoverInteractorGroup::Hover
// Il2CppName: Hover
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::BestHoverInteractorGroup::*)()>(&Oculus::Interaction::BestHoverInteractorGroup::Hover)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::BestHoverInteractorGroup*), "Hover", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::BestHoverInteractorGroup::Unhover
// Il2CppName: Unhover
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::BestHoverInteractorGroup::*)()>(&Oculus::Interaction::BestHoverInteractorGroup::Unhover)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::BestHoverInteractorGroup*), "Unhover", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::BestHoverInteractorGroup::Select
// Il2CppName: Select
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::BestHoverInteractorGroup::*)()>(&Oculus::Interaction::BestHoverInteractorGroup::Select)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::BestHoverInteractorGroup*), "Select", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::BestHoverInteractorGroup::Unselect
// Il2CppName: Unselect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::BestHoverInteractorGroup::*)()>(&Oculus::Interaction::BestHoverInteractorGroup::Unselect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::BestHoverInteractorGroup*), "Unselect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::BestHoverInteractorGroup::Preprocess
// Il2CppName: Preprocess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::BestHoverInteractorGroup::*)()>(&Oculus::Interaction::BestHoverInteractorGroup::Preprocess)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::BestHoverInteractorGroup*), "Preprocess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::BestHoverInteractorGroup::Process
// Il2CppName: Process
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::BestHoverInteractorGroup::*)()>(&Oculus::Interaction::BestHoverInteractorGroup::Process)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::BestHoverInteractorGroup*), "Process", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::BestHoverInteractorGroup::Enable
// Il2CppName: Enable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::BestHoverInteractorGroup::*)()>(&Oculus::Interaction::BestHoverInteractorGroup::Enable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::BestHoverInteractorGroup*), "Enable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::BestHoverInteractorGroup::Disable
// Il2CppName: Disable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::BestHoverInteractorGroup::*)()>(&Oculus::Interaction::BestHoverInteractorGroup::Disable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::BestHoverInteractorGroup*), "Disable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::BestHoverInteractorGroup::get_HasCandidate
// Il2CppName: get_HasCandidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::BestHoverInteractorGroup::*)()>(&Oculus::Interaction::BestHoverInteractorGroup::get_HasCandidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::BestHoverInteractorGroup*), "get_HasCandidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::BestHoverInteractorGroup::get_HasInteractable
// Il2CppName: get_HasInteractable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::BestHoverInteractorGroup::*)()>(&Oculus::Interaction::BestHoverInteractorGroup::get_HasInteractable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::BestHoverInteractorGroup*), "get_HasInteractable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::BestHoverInteractorGroup::get_HasSelectedInteractable
// Il2CppName: get_HasSelectedInteractable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::BestHoverInteractorGroup::*)()>(&Oculus::Interaction::BestHoverInteractorGroup::get_HasSelectedInteractable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::BestHoverInteractorGroup*), "get_HasSelectedInteractable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::BestHoverInteractorGroup::get_CandidateProperties
// Il2CppName: get_CandidateProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Oculus::Interaction::BestHoverInteractorGroup::*)()>(&Oculus::Interaction::BestHoverInteractorGroup::get_CandidateProperties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::BestHoverInteractorGroup*), "get_CandidateProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::BestHoverInteractorGroup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Interaction::BestHoverInteractorGroup::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Oculus::Interaction::BestHoverInteractorGroup::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::BestHoverInteractorGroup*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
