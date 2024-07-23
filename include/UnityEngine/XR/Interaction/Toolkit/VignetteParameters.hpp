// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: VignetteParameters
  class VignetteParameters;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::VignetteParameters);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::VignetteParameters*, "UnityEngine.XR.Interaction.Toolkit", "VignetteParameters");
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.VignetteParameters
  // [TokenAttribute] Offset: FFFFFFFF
  class VignetteParameters : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::XR::Interaction::Toolkit::VignetteParameters::Defaults
    class Defaults;
    public:
    // private System.Single m_ApertureSize
    // Size: 0x4
    // Offset: 0x10
    float m_ApertureSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_FeatheringEffect
    // Size: 0x4
    // Offset: 0x14
    float m_FeatheringEffect;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_EaseInTime
    // Size: 0x4
    // Offset: 0x18
    float m_EaseInTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_EaseOutTime
    // Size: 0x4
    // Offset: 0x1C
    float m_EaseOutTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean m_EaseInTimeLock
    // Size: 0x1
    // Offset: 0x20
    bool m_EaseInTimeLock;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_EaseInTimeLock and: m_EaseOutDelayTime
    char __padding4[0x3] = {};
    // private System.Single m_EaseOutDelayTime
    // Size: 0x4
    // Offset: 0x24
    float m_EaseOutDelayTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Color m_VignetteColor
    // Size: 0x10
    // Offset: 0x28
    ::UnityEngine::Color m_VignetteColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color m_VignetteColorBlend
    // Size: 0x10
    // Offset: 0x38
    ::UnityEngine::Color m_VignetteColorBlend;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.Single m_ApertureVerticalPosition
    // Size: 0x4
    // Offset: 0x48
    float m_ApertureVerticalPosition;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private System.Single m_ApertureSize
    [[deprecated("Use field access instead!")]] float& dyn_m_ApertureSize();
    // Get instance field reference: private System.Single m_FeatheringEffect
    [[deprecated("Use field access instead!")]] float& dyn_m_FeatheringEffect();
    // Get instance field reference: private System.Single m_EaseInTime
    [[deprecated("Use field access instead!")]] float& dyn_m_EaseInTime();
    // Get instance field reference: private System.Single m_EaseOutTime
    [[deprecated("Use field access instead!")]] float& dyn_m_EaseOutTime();
    // Get instance field reference: private System.Boolean m_EaseInTimeLock
    [[deprecated("Use field access instead!")]] bool& dyn_m_EaseInTimeLock();
    // Get instance field reference: private System.Single m_EaseOutDelayTime
    [[deprecated("Use field access instead!")]] float& dyn_m_EaseOutDelayTime();
    // Get instance field reference: private UnityEngine.Color m_VignetteColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_m_VignetteColor();
    // Get instance field reference: private UnityEngine.Color m_VignetteColorBlend
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_m_VignetteColorBlend();
    // Get instance field reference: private System.Single m_ApertureVerticalPosition
    [[deprecated("Use field access instead!")]] float& dyn_m_ApertureVerticalPosition();
    // public System.Single get_apertureSize()
    // Offset: 0x5411550
    float get_apertureSize();
    // public System.Void set_apertureSize(System.Single value)
    // Offset: 0x5411558
    void set_apertureSize(float value);
    // public System.Single get_featheringEffect()
    // Offset: 0x5411560
    float get_featheringEffect();
    // public System.Void set_featheringEffect(System.Single value)
    // Offset: 0x5411568
    void set_featheringEffect(float value);
    // public System.Single get_easeInTime()
    // Offset: 0x5411570
    float get_easeInTime();
    // public System.Void set_easeInTime(System.Single value)
    // Offset: 0x5411578
    void set_easeInTime(float value);
    // public System.Single get_easeOutTime()
    // Offset: 0x5411580
    float get_easeOutTime();
    // public System.Void set_easeOutTime(System.Single value)
    // Offset: 0x5411588
    void set_easeOutTime(float value);
    // public System.Boolean get_easeInTimeLock()
    // Offset: 0x5411590
    bool get_easeInTimeLock();
    // public System.Void set_easeInTimeLock(System.Boolean value)
    // Offset: 0x5411598
    void set_easeInTimeLock(bool value);
    // public System.Single get_easeOutDelayTime()
    // Offset: 0x54115A4
    float get_easeOutDelayTime();
    // public System.Void set_easeOutDelayTime(System.Single value)
    // Offset: 0x54115AC
    void set_easeOutDelayTime(float value);
    // public UnityEngine.Color get_vignetteColor()
    // Offset: 0x54115B4
    ::UnityEngine::Color get_vignetteColor();
    // public System.Void set_vignetteColor(UnityEngine.Color value)
    // Offset: 0x54115C0
    void set_vignetteColor(::UnityEngine::Color value);
    // public UnityEngine.Color get_vignetteColorBlend()
    // Offset: 0x54115CC
    ::UnityEngine::Color get_vignetteColorBlend();
    // public System.Void set_vignetteColorBlend(UnityEngine.Color value)
    // Offset: 0x54115D8
    void set_vignetteColorBlend(::UnityEngine::Color value);
    // public System.Single get_apertureVerticalPosition()
    // Offset: 0x54115E4
    float get_apertureVerticalPosition();
    // public System.Void set_apertureVerticalPosition(System.Single value)
    // Offset: 0x54115EC
    void set_apertureVerticalPosition(float value);
    // public System.Void CopyFrom(UnityEngine.XR.Interaction.Toolkit.VignetteParameters parameters)
    // Offset: 0x54115F4
    void CopyFrom(::UnityEngine::XR::Interaction::Toolkit::VignetteParameters* parameters);
    // public System.Void .ctor()
    // Offset: 0x541167C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VignetteParameters* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::VignetteParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VignetteParameters*, creationType>()));
    }
  }; // UnityEngine.XR.Interaction.Toolkit.VignetteParameters
  #pragma pack(pop)
  static check_size<sizeof(VignetteParameters), 72 + sizeof(float)> __UnityEngine_XR_Interaction_Toolkit_VignetteParametersSizeCheck;
  static_assert(sizeof(VignetteParameters) == 0x4C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::VignetteParameters::get_apertureSize
// Il2CppName: get_apertureSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::XR::Interaction::Toolkit::VignetteParameters::*)()>(&UnityEngine::XR::Interaction::Toolkit::VignetteParameters::get_apertureSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::VignetteParameters*), "get_apertureSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::VignetteParameters::set_apertureSize
// Il2CppName: set_apertureSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::VignetteParameters::*)(float)>(&UnityEngine::XR::Interaction::Toolkit::VignetteParameters::set_apertureSize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::VignetteParameters*), "set_apertureSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::VignetteParameters::get_featheringEffect
// Il2CppName: get_featheringEffect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::XR::Interaction::Toolkit::VignetteParameters::*)()>(&UnityEngine::XR::Interaction::Toolkit::VignetteParameters::get_featheringEffect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::VignetteParameters*), "get_featheringEffect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::VignetteParameters::set_featheringEffect
// Il2CppName: set_featheringEffect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::VignetteParameters::*)(float)>(&UnityEngine::XR::Interaction::Toolkit::VignetteParameters::set_featheringEffect)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::VignetteParameters*), "set_featheringEffect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::VignetteParameters::get_easeInTime
// Il2CppName: get_easeInTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::XR::Interaction::Toolkit::VignetteParameters::*)()>(&UnityEngine::XR::Interaction::Toolkit::VignetteParameters::get_easeInTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::VignetteParameters*), "get_easeInTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::VignetteParameters::set_easeInTime
// Il2CppName: set_easeInTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::VignetteParameters::*)(float)>(&UnityEngine::XR::Interaction::Toolkit::VignetteParameters::set_easeInTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::VignetteParameters*), "set_easeInTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::VignetteParameters::get_easeOutTime
// Il2CppName: get_easeOutTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::XR::Interaction::Toolkit::VignetteParameters::*)()>(&UnityEngine::XR::Interaction::Toolkit::VignetteParameters::get_easeOutTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::VignetteParameters*), "get_easeOutTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::VignetteParameters::set_easeOutTime
// Il2CppName: set_easeOutTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::VignetteParameters::*)(float)>(&UnityEngine::XR::Interaction::Toolkit::VignetteParameters::set_easeOutTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::VignetteParameters*), "set_easeOutTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::VignetteParameters::get_easeInTimeLock
// Il2CppName: get_easeInTimeLock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::VignetteParameters::*)()>(&UnityEngine::XR::Interaction::Toolkit::VignetteParameters::get_easeInTimeLock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::VignetteParameters*), "get_easeInTimeLock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::VignetteParameters::set_easeInTimeLock
// Il2CppName: set_easeInTimeLock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::VignetteParameters::*)(bool)>(&UnityEngine::XR::Interaction::Toolkit::VignetteParameters::set_easeInTimeLock)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::VignetteParameters*), "set_easeInTimeLock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::VignetteParameters::get_easeOutDelayTime
// Il2CppName: get_easeOutDelayTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::XR::Interaction::Toolkit::VignetteParameters::*)()>(&UnityEngine::XR::Interaction::Toolkit::VignetteParameters::get_easeOutDelayTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::VignetteParameters*), "get_easeOutDelayTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::VignetteParameters::set_easeOutDelayTime
// Il2CppName: set_easeOutDelayTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::VignetteParameters::*)(float)>(&UnityEngine::XR::Interaction::Toolkit::VignetteParameters::set_easeOutDelayTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::VignetteParameters*), "set_easeOutDelayTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::VignetteParameters::get_vignetteColor
// Il2CppName: get_vignetteColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (UnityEngine::XR::Interaction::Toolkit::VignetteParameters::*)()>(&UnityEngine::XR::Interaction::Toolkit::VignetteParameters::get_vignetteColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::VignetteParameters*), "get_vignetteColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::VignetteParameters::set_vignetteColor
// Il2CppName: set_vignetteColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::VignetteParameters::*)(::UnityEngine::Color)>(&UnityEngine::XR::Interaction::Toolkit::VignetteParameters::set_vignetteColor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::VignetteParameters*), "set_vignetteColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::VignetteParameters::get_vignetteColorBlend
// Il2CppName: get_vignetteColorBlend
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (UnityEngine::XR::Interaction::Toolkit::VignetteParameters::*)()>(&UnityEngine::XR::Interaction::Toolkit::VignetteParameters::get_vignetteColorBlend)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::VignetteParameters*), "get_vignetteColorBlend", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::VignetteParameters::set_vignetteColorBlend
// Il2CppName: set_vignetteColorBlend
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::VignetteParameters::*)(::UnityEngine::Color)>(&UnityEngine::XR::Interaction::Toolkit::VignetteParameters::set_vignetteColorBlend)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::VignetteParameters*), "set_vignetteColorBlend", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::VignetteParameters::get_apertureVerticalPosition
// Il2CppName: get_apertureVerticalPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::XR::Interaction::Toolkit::VignetteParameters::*)()>(&UnityEngine::XR::Interaction::Toolkit::VignetteParameters::get_apertureVerticalPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::VignetteParameters*), "get_apertureVerticalPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::VignetteParameters::set_apertureVerticalPosition
// Il2CppName: set_apertureVerticalPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::VignetteParameters::*)(float)>(&UnityEngine::XR::Interaction::Toolkit::VignetteParameters::set_apertureVerticalPosition)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::VignetteParameters*), "set_apertureVerticalPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::VignetteParameters::CopyFrom
// Il2CppName: CopyFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::VignetteParameters::*)(::UnityEngine::XR::Interaction::Toolkit::VignetteParameters*)>(&UnityEngine::XR::Interaction::Toolkit::VignetteParameters::CopyFrom)> {
  static const MethodInfo* get() {
    static auto* parameters = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "VignetteParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::VignetteParameters*), "CopyFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parameters});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::VignetteParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!