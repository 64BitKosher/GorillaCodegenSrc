// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.Filtering.XRTargetEvaluator
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/XRTargetEvaluator.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.Filtering.IXRTargetEvaluatorLinkable
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/IXRTargetEvaluatorLinkable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: IXRInteractable
  class IXRInteractable;
  // Forward declaring type: SelectEnterEventArgs
  class SelectEnterEventArgs;
  // Forward declaring type: IXRInteractor
  class IXRInteractor;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit.Filtering
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
  // Forward declaring type: XRLastSelectedEvaluator
  class XRLastSelectedEvaluator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator*, "UnityEngine.XR.Interaction.Toolkit.Filtering", "XRLastSelectedEvaluator");
// Type namespace: UnityEngine.XR.Interaction.Toolkit.Filtering
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.Filtering.XRLastSelectedEvaluator
  // [TokenAttribute] Offset: FFFFFFFF
  class XRLastSelectedEvaluator : public ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator/*, public ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetEvaluatorLinkable*/ {
    public:
    // Writing base type padding for base size: 0x2B to desired offset: 0x30
    char ___base_padding[0x5] = {};
    public:
    // private readonly System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractable,System.Single> m_InteractableSelectionTimeMap
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*, float>* m_InteractableSelectionTimeMap;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*, float>*) == 0x8);
    // private System.Single m_MaxTime
    // Size: 0x4
    // Offset: 0x38
    float m_MaxTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetEvaluatorLinkable
    operator ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetEvaluatorLinkable() noexcept {
      return *reinterpret_cast<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetEvaluatorLinkable*>(this);
    }
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractable,System.Single> m_InteractableSelectionTimeMap
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*, float>*& dyn_m_InteractableSelectionTimeMap();
    // Get instance field reference: private System.Single m_MaxTime
    [[deprecated("Use field access instead!")]] float& dyn_m_MaxTime();
    // public System.Single get_maxTime()
    // Offset: 0x542EAE8
    float get_maxTime();
    // public System.Void set_maxTime(System.Single value)
    // Offset: 0x542EAF0
    void set_maxTime(float value);
    // private System.Void OnSelect(UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs args)
    // Offset: 0x542EAF8
    void OnSelect(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs* args);
    // public System.Void OnLink(UnityEngine.XR.Interaction.Toolkit.IXRInteractor interactor)
    // Offset: 0x542EB88
    void OnLink(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor);
    // public System.Void OnUnlink(UnityEngine.XR.Interaction.Toolkit.IXRInteractor interactor)
    // Offset: 0x542ECC4
    void OnUnlink(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor);
    // protected override System.Void OnDisable()
    // Offset: 0x542EE00
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.Filtering.XRTargetEvaluator
    // Base method: System.Void XRTargetEvaluator::OnDisable()
    void OnDisable();
    // protected override System.Single CalculateNormalizedScore(UnityEngine.XR.Interaction.Toolkit.IXRInteractor interactor, UnityEngine.XR.Interaction.Toolkit.IXRInteractable target)
    // Offset: 0x542EE54
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.Filtering.XRTargetEvaluator
    // Base method: System.Single XRTargetEvaluator::CalculateNormalizedScore(UnityEngine.XR.Interaction.Toolkit.IXRInteractor interactor, UnityEngine.XR.Interaction.Toolkit.IXRInteractable target)
    float CalculateNormalizedScore(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* target);
    // public System.Void .ctor()
    // Offset: 0x542EF00
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.Filtering.XRTargetEvaluator
    // Base method: System.Void XRTargetEvaluator::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XRLastSelectedEvaluator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XRLastSelectedEvaluator*, creationType>()));
    }
  }; // UnityEngine.XR.Interaction.Toolkit.Filtering.XRLastSelectedEvaluator
  #pragma pack(pop)
  static check_size<sizeof(XRLastSelectedEvaluator), 56 + sizeof(float)> __UnityEngine_XR_Interaction_Toolkit_Filtering_XRLastSelectedEvaluatorSizeCheck;
  static_assert(sizeof(XRLastSelectedEvaluator) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::get_maxTime
// Il2CppName: get_maxTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::*)()>(&UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::get_maxTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator*), "get_maxTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::set_maxTime
// Il2CppName: set_maxTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::*)(float)>(&UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::set_maxTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator*), "set_maxTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::OnSelect
// Il2CppName: OnSelect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::*)(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*)>(&UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::OnSelect)> {
  static const MethodInfo* get() {
    static auto* args = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "SelectEnterEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator*), "OnSelect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::OnLink
// Il2CppName: OnLink
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::*)(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*)>(&UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::OnLink)> {
  static const MethodInfo* get() {
    static auto* interactor = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "IXRInteractor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator*), "OnLink", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactor});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::OnUnlink
// Il2CppName: OnUnlink
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::*)(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*)>(&UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::OnUnlink)> {
  static const MethodInfo* get() {
    static auto* interactor = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "IXRInteractor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator*), "OnUnlink", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactor});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::*)()>(&UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::CalculateNormalizedScore
// Il2CppName: CalculateNormalizedScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::*)(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*, ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*)>(&UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::CalculateNormalizedScore)> {
  static const MethodInfo* get() {
    static auto* interactor = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "IXRInteractor")->byval_arg;
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "IXRInteractable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator*), "CalculateNormalizedScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactor, target});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Filtering::XRLastSelectedEvaluator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
