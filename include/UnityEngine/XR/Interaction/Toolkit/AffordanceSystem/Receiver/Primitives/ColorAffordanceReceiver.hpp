// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAsyncAffordanceStateReceiver`1
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/BaseAsyncAffordanceStateReceiver_1.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives {
  // Forward declaring type: ColorAffordanceThemeDatumProperty
  class ColorAffordanceThemeDatumProperty;
}
// Forward declaring namespace: Unity::XR::CoreUtils
namespace Unity::XR::CoreUtils {
  // Forward declaring type: ColorUnityEvent
  class ColorUnityEvent;
}
// Forward declaring namespace: Unity::XR::CoreUtils::Bindings::Variables
namespace Unity::XR::CoreUtils::Bindings::Variables {
  // Forward declaring type: BindableVariable`1<T>
  template<typename T>
  class BindableVariable_1;
}
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme {
  // Forward declaring type: BaseAffordanceTheme`1<T>
  template<typename T>
  class BaseAffordanceTheme_1;
}
// Forward declaring namespace: Unity::Jobs
namespace Unity::Jobs {
  // Skipping declaration: JobHandle because it is already included!
}
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs {
  // Skipping declaration: TweenJobData`1 because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives {
  // Forward declaring type: ColorAffordanceReceiver
  class ColorAffordanceReceiver;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver*, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives", "ColorAffordanceReceiver");
// Type namespace: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.ColorAffordanceReceiver
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: FFFFFFFF
  class ColorAffordanceReceiver : public ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1<::UnityEngine::Color> {
    public:
    public:
    // private UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.ColorAffordanceThemeDatumProperty m_AffordanceThemeDatum
    // Size: 0x8
    // Offset: 0x98
    ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatumProperty* m_AffordanceThemeDatum;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatumProperty*) == 0x8);
    // private Unity.XR.CoreUtils.ColorUnityEvent m_ValueUpdated
    // Size: 0x8
    // Offset: 0xA0
    ::Unity::XR::CoreUtils::ColorUnityEvent* m_ValueUpdated;
    // Field size check
    static_assert(sizeof(::Unity::XR::CoreUtils::ColorUnityEvent*) == 0x8);
    // private readonly Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<UnityEngine.Color> <affordanceValue>k__BackingField
    // Size: 0x8
    // Offset: 0xA8
    ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::Color>* affordanceValue;
    // Field size check
    static_assert(sizeof(::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::Color>*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.ColorAffordanceThemeDatumProperty m_AffordanceThemeDatum
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatumProperty*& dyn_m_AffordanceThemeDatum();
    // Get instance field reference: private Unity.XR.CoreUtils.ColorUnityEvent m_ValueUpdated
    [[deprecated("Use field access instead!")]] ::Unity::XR::CoreUtils::ColorUnityEvent*& dyn_m_ValueUpdated();
    // Get instance field reference: private readonly Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<UnityEngine.Color> <affordanceValue>k__BackingField
    [[deprecated("Use field access instead!")]] ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::Color>*& dyn_$affordanceValue$k__BackingField();
    // public UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.ColorAffordanceThemeDatumProperty get_affordanceThemeDatum()
    // Offset: 0x544377C
    ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatumProperty* get_affordanceThemeDatum();
    // public System.Void set_affordanceThemeDatum(UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.ColorAffordanceThemeDatumProperty value)
    // Offset: 0x5443784
    void set_affordanceThemeDatum(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatumProperty* value);
    // public Unity.XR.CoreUtils.ColorUnityEvent get_valueUpdated()
    // Offset: 0x544378C
    ::Unity::XR::CoreUtils::ColorUnityEvent* get_valueUpdated();
    // public System.Void set_valueUpdated(Unity.XR.CoreUtils.ColorUnityEvent value)
    // Offset: 0x5443794
    void set_valueUpdated(::Unity::XR::CoreUtils::ColorUnityEvent* value);
    // protected UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.BaseAffordanceTheme`1<UnityEngine.Color> get_defaultAffordanceTheme()
    // Offset: 0x544379C
    ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<::UnityEngine::Color>* get_defaultAffordanceTheme();
    // protected Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<UnityEngine.Color> get_affordanceValue()
    // Offset: 0x54437F4
    ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::Color>* get_affordanceValue();
    // protected Unity.Jobs.JobHandle ScheduleTweenJob(ref UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<UnityEngine.Color> jobData)
    // Offset: 0x54437FC
    ::Unity::Jobs::JobHandle ScheduleTweenJob(ByRef<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::UnityEngine::Color>> jobData);
    // protected UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.BaseAffordanceTheme`1<UnityEngine.Color> GenerateNewAffordanceThemeInstance()
    // Offset: 0x5443984
    ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<::UnityEngine::Color>* GenerateNewAffordanceThemeInstance();
    // protected System.Void OnAffordanceValueUpdated(UnityEngine.Color newValue)
    // Offset: 0x5441EE8
    void OnAffordanceValueUpdated(::UnityEngine::Color newValue);
    // public System.Void .ctor()
    // Offset: 0x5441FF0
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAsyncAffordanceStateReceiver`1
    // Base method: System.Void BaseAsyncAffordanceStateReceiver_1::.ctor()
    // Base method: System.Void BaseAffordanceStateReceiver_1::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorAffordanceReceiver* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorAffordanceReceiver*, creationType>()));
    }
  }; // UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.ColorAffordanceReceiver
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::get_affordanceThemeDatum
// Il2CppName: get_affordanceThemeDatum
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatumProperty* (UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::*)()>(&UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::get_affordanceThemeDatum)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver*), "get_affordanceThemeDatum", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::set_affordanceThemeDatum
// Il2CppName: set_affordanceThemeDatum
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::*)(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatumProperty*)>(&UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::set_affordanceThemeDatum)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives", "ColorAffordanceThemeDatumProperty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver*), "set_affordanceThemeDatum", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::get_valueUpdated
// Il2CppName: get_valueUpdated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::XR::CoreUtils::ColorUnityEvent* (UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::*)()>(&UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::get_valueUpdated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver*), "get_valueUpdated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::set_valueUpdated
// Il2CppName: set_valueUpdated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::*)(::Unity::XR::CoreUtils::ColorUnityEvent*)>(&UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::set_valueUpdated)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Unity.XR.CoreUtils", "ColorUnityEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver*), "set_valueUpdated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::get_defaultAffordanceTheme
// Il2CppName: get_defaultAffordanceTheme
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<::UnityEngine::Color>* (UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::*)()>(&UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::get_defaultAffordanceTheme)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver*), "get_defaultAffordanceTheme", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::get_affordanceValue
// Il2CppName: get_affordanceValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::Color>* (UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::*)()>(&UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::get_affordanceValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver*), "get_affordanceValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::ScheduleTweenJob
// Il2CppName: ScheduleTweenJob
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::*)(ByRef<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::UnityEngine::Color>>)>(&UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::ScheduleTweenJob)> {
  static const MethodInfo* get() {
    static auto* jobData = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs", "TweenJobData`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Color")})->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver*), "ScheduleTweenJob", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{jobData});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::GenerateNewAffordanceThemeInstance
// Il2CppName: GenerateNewAffordanceThemeInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<::UnityEngine::Color>* (UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::*)()>(&UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::GenerateNewAffordanceThemeInstance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver*), "GenerateNewAffordanceThemeInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::OnAffordanceValueUpdated
// Il2CppName: OnAffordanceValueUpdated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::*)(::UnityEngine::Color)>(&UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::OnAffordanceValueUpdated)> {
  static const MethodInfo* get() {
    static auto* newValue = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver*), "OnAffordanceValueUpdated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newValue});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!