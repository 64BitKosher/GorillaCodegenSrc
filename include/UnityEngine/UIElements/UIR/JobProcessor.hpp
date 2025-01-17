// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Unity::Jobs
namespace Unity::Jobs {
  // Forward declaring type: JobHandle
  struct JobHandle;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements.UIR
namespace UnityEngine::UIElements::UIR {
  // Forward declaring type: JobProcessor
  class JobProcessor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::UIR::JobProcessor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::JobProcessor*, "UnityEngine.UIElements.UIR", "JobProcessor");
// Type namespace: UnityEngine.UIElements.UIR
namespace UnityEngine::UIElements::UIR {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.UIR.JobProcessor
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  class JobProcessor : public ::Il2CppObject {
    public:
    // static Unity.Jobs.JobHandle ScheduleNudgeJobs(System.IntPtr buffer, System.Int32 jobCount)
    // Offset: 0x55CAB98
    static ::Unity::Jobs::JobHandle ScheduleNudgeJobs(::System::IntPtr buffer, int jobCount);
    // static Unity.Jobs.JobHandle ScheduleConvertMeshJobs(System.IntPtr buffer, System.Int32 jobCount)
    // Offset: 0x55CAC48
    static ::Unity::Jobs::JobHandle ScheduleConvertMeshJobs(::System::IntPtr buffer, int jobCount);
    // static Unity.Jobs.JobHandle ScheduleCopyClosingMeshJobs(System.IntPtr buffer, System.Int32 jobCount)
    // Offset: 0x55CACF8
    static ::Unity::Jobs::JobHandle ScheduleCopyClosingMeshJobs(::System::IntPtr buffer, int jobCount);
    // static private System.Void ScheduleNudgeJobs_Injected(System.IntPtr buffer, System.Int32 jobCount, out Unity.Jobs.JobHandle ret)
    // Offset: 0x55CABF4
    static void ScheduleNudgeJobs_Injected(::System::IntPtr buffer, int jobCount, ByRef<::Unity::Jobs::JobHandle> ret);
    // static private System.Void ScheduleConvertMeshJobs_Injected(System.IntPtr buffer, System.Int32 jobCount, out Unity.Jobs.JobHandle ret)
    // Offset: 0x55CACA4
    static void ScheduleConvertMeshJobs_Injected(::System::IntPtr buffer, int jobCount, ByRef<::Unity::Jobs::JobHandle> ret);
    // static private System.Void ScheduleCopyClosingMeshJobs_Injected(System.IntPtr buffer, System.Int32 jobCount, out Unity.Jobs.JobHandle ret)
    // Offset: 0x55CAD54
    static void ScheduleCopyClosingMeshJobs_Injected(::System::IntPtr buffer, int jobCount, ByRef<::Unity::Jobs::JobHandle> ret);
  }; // UnityEngine.UIElements.UIR.JobProcessor
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::JobProcessor::ScheduleNudgeJobs
// Il2CppName: ScheduleNudgeJobs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (*)(::System::IntPtr, int)>(&UnityEngine::UIElements::UIR::JobProcessor::ScheduleNudgeJobs)> {
  static const MethodInfo* get() {
    static auto* buffer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* jobCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIR::JobProcessor*), "ScheduleNudgeJobs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, jobCount});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::JobProcessor::ScheduleConvertMeshJobs
// Il2CppName: ScheduleConvertMeshJobs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (*)(::System::IntPtr, int)>(&UnityEngine::UIElements::UIR::JobProcessor::ScheduleConvertMeshJobs)> {
  static const MethodInfo* get() {
    static auto* buffer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* jobCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIR::JobProcessor*), "ScheduleConvertMeshJobs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, jobCount});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::JobProcessor::ScheduleCopyClosingMeshJobs
// Il2CppName: ScheduleCopyClosingMeshJobs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (*)(::System::IntPtr, int)>(&UnityEngine::UIElements::UIR::JobProcessor::ScheduleCopyClosingMeshJobs)> {
  static const MethodInfo* get() {
    static auto* buffer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* jobCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIR::JobProcessor*), "ScheduleCopyClosingMeshJobs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, jobCount});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::JobProcessor::ScheduleNudgeJobs_Injected
// Il2CppName: ScheduleNudgeJobs_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, int, ByRef<::Unity::Jobs::JobHandle>)>(&UnityEngine::UIElements::UIR::JobProcessor::ScheduleNudgeJobs_Injected)> {
  static const MethodInfo* get() {
    static auto* buffer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* jobCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("Unity.Jobs", "JobHandle")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIR::JobProcessor*), "ScheduleNudgeJobs_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, jobCount, ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::JobProcessor::ScheduleConvertMeshJobs_Injected
// Il2CppName: ScheduleConvertMeshJobs_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, int, ByRef<::Unity::Jobs::JobHandle>)>(&UnityEngine::UIElements::UIR::JobProcessor::ScheduleConvertMeshJobs_Injected)> {
  static const MethodInfo* get() {
    static auto* buffer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* jobCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("Unity.Jobs", "JobHandle")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIR::JobProcessor*), "ScheduleConvertMeshJobs_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, jobCount, ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::JobProcessor::ScheduleCopyClosingMeshJobs_Injected
// Il2CppName: ScheduleCopyClosingMeshJobs_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, int, ByRef<::Unity::Jobs::JobHandle>)>(&UnityEngine::UIElements::UIR::JobProcessor::ScheduleCopyClosingMeshJobs_Injected)> {
  static const MethodInfo* get() {
    static auto* buffer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* jobCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("Unity.Jobs", "JobHandle")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIR::JobProcessor*), "ScheduleCopyClosingMeshJobs_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, jobCount, ret});
  }
};
