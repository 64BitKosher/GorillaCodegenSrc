// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.ITweenJob`1
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Jobs/ITweenJob_1.hpp"
// Including type: Unity.Mathematics.float2
#include "Unity/Mathematics/float2.hpp"
// Completed includes
// Type namespace: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs {
  // Forward declaring type: Float2TweenJob
  struct Float2TweenJob;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float2TweenJob, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs", "Float2TweenJob");
// Type namespace: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float2TweenJob
  // [TokenAttribute] Offset: FFFFFFFF
  // [BurstCompileAttribute] Offset: FFFFFFFF
  struct Float2TweenJob/*, public ::System::ValueType, public ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<::Unity::Mathematics::float2>*/ {
    public:
    public:
    // private UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<Unity.Mathematics.float2> <jobData>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::Unity::Mathematics::float2> jobData;
    public:
    // Creating value type constructor for type: Float2TweenJob
    constexpr Float2TweenJob(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::Unity::Mathematics::float2> jobData_ = {}) noexcept : jobData{jobData_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<::Unity::Mathematics::float2>
    operator ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<::Unity::Mathematics::float2>() noexcept {
      return *reinterpret_cast<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<::Unity::Mathematics::float2>*>(this);
    }
    // Creating conversion operator: operator ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::Unity::Mathematics::float2>
    constexpr operator ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::Unity::Mathematics::float2>() const noexcept {
      return jobData;
    }
    // Get instance field reference: private UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<Unity.Mathematics.float2> <jobData>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::Unity::Mathematics::float2>& dyn_$jobData$k__BackingField();
    // public UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<Unity.Mathematics.float2> get_jobData()
    // Offset: 0x5444DB0
    ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::Unity::Mathematics::float2> get_jobData();
    // public System.Void set_jobData(UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.TweenJobData`1<Unity.Mathematics.float2> value)
    // Offset: 0x5444DC0
    void set_jobData(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::Unity::Mathematics::float2> value);
    // public System.Void Execute()
    // Offset: 0x5444DD4
    void Execute();
    // public Unity.Mathematics.float2 Lerp(Unity.Mathematics.float2 from, Unity.Mathematics.float2 to, System.Single t)
    // Offset: 0x5444F5C
    ::Unity::Mathematics::float2 Lerp(::Unity::Mathematics::float2 from, ::Unity::Mathematics::float2 to, float t);
    // public System.Boolean IsNearlyEqual(Unity.Mathematics.float2 from, Unity.Mathematics.float2 to)
    // Offset: 0x5444FBC
    bool IsNearlyEqual(::Unity::Mathematics::float2 from, ::Unity::Mathematics::float2 to);
  }; // UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs.Float2TweenJob
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float2TweenJob::get_jobData
// Il2CppName: get_jobData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::Unity::Mathematics::float2> (UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float2TweenJob::*)()>(&UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float2TweenJob::get_jobData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float2TweenJob), "get_jobData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float2TweenJob::set_jobData
// Il2CppName: set_jobData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float2TweenJob::*)(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::Unity::Mathematics::float2>)>(&UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float2TweenJob::set_jobData)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Jobs", "TweenJobData`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Unity.Mathematics", "float2")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float2TweenJob), "set_jobData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float2TweenJob::Execute
// Il2CppName: Execute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float2TweenJob::*)()>(&UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float2TweenJob::Execute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float2TweenJob), "Execute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float2TweenJob::Lerp
// Il2CppName: Lerp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float2 (UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float2TweenJob::*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2, float)>(&UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float2TweenJob::Lerp)> {
  static const MethodInfo* get() {
    static auto* from = &::il2cpp_utils::GetClassFromName("Unity.Mathematics", "float2")->byval_arg;
    static auto* to = &::il2cpp_utils::GetClassFromName("Unity.Mathematics", "float2")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float2TweenJob), "Lerp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{from, to, t});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float2TweenJob::IsNearlyEqual
// Il2CppName: IsNearlyEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float2TweenJob::*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2)>(&UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float2TweenJob::IsNearlyEqual)> {
  static const MethodInfo* get() {
    static auto* from = &::il2cpp_utils::GetClassFromName("Unity.Mathematics", "float2")->byval_arg;
    static auto* to = &::il2cpp_utils::GetClassFromName("Unity.Mathematics", "float2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::Float2TweenJob), "IsNearlyEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{from, to});
  }
};
