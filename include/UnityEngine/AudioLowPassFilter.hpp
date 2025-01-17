// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Behaviour
#include "UnityEngine/Behaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioLowPassFilter
  class AudioLowPassFilter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AudioLowPassFilter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AudioLowPassFilter*, "UnityEngine", "AudioLowPassFilter");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AudioLowPassFilter
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: FFFFFFFF
  class AudioLowPassFilter : public ::UnityEngine::Behaviour {
    public:
    // private UnityEngine.AnimationCurve GetCustomLowpassLevelCurveCopy()
    // Offset: 0x5475108
    ::UnityEngine::AnimationCurve* GetCustomLowpassLevelCurveCopy();
    // static private System.Void SetCustomLowpassLevelCurveHelper(UnityEngine.AudioLowPassFilter source, UnityEngine.AnimationCurve curve)
    // Offset: 0x5475144
    static void SetCustomLowpassLevelCurveHelper(::UnityEngine::AudioLowPassFilter* source, ::UnityEngine::AnimationCurve* curve);
    // public UnityEngine.AnimationCurve get_customCutoffCurve()
    // Offset: 0x5475188
    ::UnityEngine::AnimationCurve* get_customCutoffCurve();
    // public System.Void set_customCutoffCurve(UnityEngine.AnimationCurve value)
    // Offset: 0x54751C4
    void set_customCutoffCurve(::UnityEngine::AnimationCurve* value);
    // public System.Single get_cutoffFrequency()
    // Offset: 0x5475208
    float get_cutoffFrequency();
    // public System.Void set_cutoffFrequency(System.Single value)
    // Offset: 0x5475244
    void set_cutoffFrequency(float value);
    // public System.Single get_lowpassResonanceQ()
    // Offset: 0x5475290
    float get_lowpassResonanceQ();
    // public System.Void set_lowpassResonanceQ(System.Single value)
    // Offset: 0x54752CC
    void set_lowpassResonanceQ(float value);
    // public System.Void .ctor()
    // Offset: 0x5475318
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioLowPassFilter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AudioLowPassFilter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioLowPassFilter*, creationType>()));
    }
  }; // UnityEngine.AudioLowPassFilter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AudioLowPassFilter::GetCustomLowpassLevelCurveCopy
// Il2CppName: GetCustomLowpassLevelCurveCopy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationCurve* (UnityEngine::AudioLowPassFilter::*)()>(&UnityEngine::AudioLowPassFilter::GetCustomLowpassLevelCurveCopy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioLowPassFilter*), "GetCustomLowpassLevelCurveCopy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioLowPassFilter::SetCustomLowpassLevelCurveHelper
// Il2CppName: SetCustomLowpassLevelCurveHelper
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::AudioLowPassFilter*, ::UnityEngine::AnimationCurve*)>(&UnityEngine::AudioLowPassFilter::SetCustomLowpassLevelCurveHelper)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioLowPassFilter")->byval_arg;
    static auto* curve = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationCurve")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioLowPassFilter*), "SetCustomLowpassLevelCurveHelper", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source, curve});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioLowPassFilter::get_customCutoffCurve
// Il2CppName: get_customCutoffCurve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationCurve* (UnityEngine::AudioLowPassFilter::*)()>(&UnityEngine::AudioLowPassFilter::get_customCutoffCurve)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioLowPassFilter*), "get_customCutoffCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioLowPassFilter::set_customCutoffCurve
// Il2CppName: set_customCutoffCurve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AudioLowPassFilter::*)(::UnityEngine::AnimationCurve*)>(&UnityEngine::AudioLowPassFilter::set_customCutoffCurve)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationCurve")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioLowPassFilter*), "set_customCutoffCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioLowPassFilter::get_cutoffFrequency
// Il2CppName: get_cutoffFrequency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::AudioLowPassFilter::*)()>(&UnityEngine::AudioLowPassFilter::get_cutoffFrequency)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioLowPassFilter*), "get_cutoffFrequency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioLowPassFilter::set_cutoffFrequency
// Il2CppName: set_cutoffFrequency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AudioLowPassFilter::*)(float)>(&UnityEngine::AudioLowPassFilter::set_cutoffFrequency)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioLowPassFilter*), "set_cutoffFrequency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioLowPassFilter::get_lowpassResonanceQ
// Il2CppName: get_lowpassResonanceQ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::AudioLowPassFilter::*)()>(&UnityEngine::AudioLowPassFilter::get_lowpassResonanceQ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioLowPassFilter*), "get_lowpassResonanceQ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioLowPassFilter::set_lowpassResonanceQ
// Il2CppName: set_lowpassResonanceQ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AudioLowPassFilter::*)(float)>(&UnityEngine::AudioLowPassFilter::set_lowpassResonanceQ)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioLowPassFilter*), "set_lowpassResonanceQ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioLowPassFilter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
