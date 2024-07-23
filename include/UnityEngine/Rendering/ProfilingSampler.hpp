// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Profiling
namespace UnityEngine::Profiling {
  // Forward declaring type: CustomSampler
  class CustomSampler;
  // Forward declaring type: Recorder
  class Recorder;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Enum
  class Enum;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: ProfilingSampler
  class ProfilingSampler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::ProfilingSampler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProfilingSampler*, "UnityEngine.Rendering", "ProfilingSampler");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.ProfilingSampler
  // [TokenAttribute] Offset: FFFFFFFF
  // [IgnoredByDeepProfilerAttribute] Offset: FFFFFFFF
  class ProfilingSampler : public ::Il2CppObject {
    public:
    public:
    // private UnityEngine.Profiling.CustomSampler <sampler>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Profiling::CustomSampler* sampler;
    // Field size check
    static_assert(sizeof(::UnityEngine::Profiling::CustomSampler*) == 0x8);
    // private UnityEngine.Profiling.CustomSampler <inlineSampler>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Profiling::CustomSampler* inlineSampler;
    // Field size check
    static_assert(sizeof(::UnityEngine::Profiling::CustomSampler*) == 0x8);
    // private System.String <name>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private UnityEngine.Profiling.Recorder m_Recorder
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Profiling::Recorder* m_Recorder;
    // Field size check
    static_assert(sizeof(::UnityEngine::Profiling::Recorder*) == 0x8);
    // private UnityEngine.Profiling.Recorder m_InlineRecorder
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Profiling::Recorder* m_InlineRecorder;
    // Field size check
    static_assert(sizeof(::UnityEngine::Profiling::Recorder*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.Profiling.CustomSampler <sampler>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Profiling::CustomSampler*& dyn_$sampler$k__BackingField();
    // Get instance field reference: private UnityEngine.Profiling.CustomSampler <inlineSampler>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Profiling::CustomSampler*& dyn_$inlineSampler$k__BackingField();
    // Get instance field reference: private System.String <name>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$name$k__BackingField();
    // Get instance field reference: private UnityEngine.Profiling.Recorder m_Recorder
    [[deprecated("Use field access instead!")]] ::UnityEngine::Profiling::Recorder*& dyn_m_Recorder();
    // Get instance field reference: private UnityEngine.Profiling.Recorder m_InlineRecorder
    [[deprecated("Use field access instead!")]] ::UnityEngine::Profiling::Recorder*& dyn_m_InlineRecorder();
    // static public UnityEngine.Rendering.ProfilingSampler Get(TEnum marker)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TEnum>
    static ::UnityEngine::Rendering::ProfilingSampler* Get(TEnum marker) {
      static_assert(std::is_convertible_v<TEnum, ::System::Enum*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::ProfilingSampler::Get");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.Rendering", "ProfilingSampler", "Get", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TEnum>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(marker)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TEnum>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::UnityEngine::Rendering::ProfilingSampler*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, marker);
    }
    // public System.Void .ctor(System.String name)
    // Offset: 0x524C1EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProfilingSampler* New_ctor(::StringW name) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::ProfilingSampler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProfilingSampler*, creationType>(name)));
    }
    // UnityEngine.Profiling.CustomSampler get_sampler()
    // Offset: 0x524C338
    ::UnityEngine::Profiling::CustomSampler* get_sampler();
    // private System.Void set_sampler(UnityEngine.Profiling.CustomSampler value)
    // Offset: 0x524C340
    void set_sampler(::UnityEngine::Profiling::CustomSampler* value);
    // UnityEngine.Profiling.CustomSampler get_inlineSampler()
    // Offset: 0x524C348
    ::UnityEngine::Profiling::CustomSampler* get_inlineSampler();
    // private System.Void set_inlineSampler(UnityEngine.Profiling.CustomSampler value)
    // Offset: 0x524C350
    void set_inlineSampler(::UnityEngine::Profiling::CustomSampler* value);
    // public System.String get_name()
    // Offset: 0x524C358
    ::StringW get_name();
    // private System.Void set_name(System.String value)
    // Offset: 0x524C360
    void set_name(::StringW value);
  }; // UnityEngine.Rendering.ProfilingSampler
  #pragma pack(pop)
  static check_size<sizeof(ProfilingSampler), 48 + sizeof(::UnityEngine::Profiling::Recorder*)> __UnityEngine_Rendering_ProfilingSamplerSizeCheck;
  static_assert(sizeof(ProfilingSampler) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::ProfilingSampler::Get
// Il2CppName: Get
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Rendering::ProfilingSampler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::ProfilingSampler::get_sampler
// Il2CppName: get_sampler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Profiling::CustomSampler* (UnityEngine::Rendering::ProfilingSampler::*)()>(&UnityEngine::Rendering::ProfilingSampler::get_sampler)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::ProfilingSampler*), "get_sampler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::ProfilingSampler::set_sampler
// Il2CppName: set_sampler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::ProfilingSampler::*)(::UnityEngine::Profiling::CustomSampler*)>(&UnityEngine::Rendering::ProfilingSampler::set_sampler)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Profiling", "CustomSampler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::ProfilingSampler*), "set_sampler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::ProfilingSampler::get_inlineSampler
// Il2CppName: get_inlineSampler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Profiling::CustomSampler* (UnityEngine::Rendering::ProfilingSampler::*)()>(&UnityEngine::Rendering::ProfilingSampler::get_inlineSampler)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::ProfilingSampler*), "get_inlineSampler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::ProfilingSampler::set_inlineSampler
// Il2CppName: set_inlineSampler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::ProfilingSampler::*)(::UnityEngine::Profiling::CustomSampler*)>(&UnityEngine::Rendering::ProfilingSampler::set_inlineSampler)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Profiling", "CustomSampler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::ProfilingSampler*), "set_inlineSampler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::ProfilingSampler::get_name
// Il2CppName: get_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Rendering::ProfilingSampler::*)()>(&UnityEngine::Rendering::ProfilingSampler::get_name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::ProfilingSampler*), "get_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::ProfilingSampler::set_name
// Il2CppName: set_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::ProfilingSampler::*)(::StringW)>(&UnityEngine::Rendering::ProfilingSampler::set_name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::ProfilingSampler*), "set_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};