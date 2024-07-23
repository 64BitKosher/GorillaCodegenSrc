// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: Unity.Collections.NativeArray`1
#include "Unity/Collections/NativeArray_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.UIElements.UIR
namespace UnityEngine::UIElements::UIR {
  // Forward declaring type: JobMerger
  class JobMerger;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::UIR::JobMerger);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::JobMerger*, "UnityEngine.UIElements.UIR", "JobMerger");
// Type namespace: UnityEngine.UIElements.UIR
namespace UnityEngine::UIElements::UIR {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.UIR.JobMerger
  // [TokenAttribute] Offset: FFFFFFFF
  class JobMerger : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // private Unity.Collections.NativeArray`1<Unity.Jobs.JobHandle> m_Jobs
    // Size: 0xFFFFFFFF
    // Offset: 0x10
    ::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle> m_Jobs;
    // private System.Int32 m_JobCount
    // Size: 0x4
    // Offset: 0x20
    int m_JobCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean <disposed>k__BackingField
    // Size: 0x1
    // Offset: 0x24
    bool disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: private Unity.Collections.NativeArray`1<Unity.Jobs.JobHandle> m_Jobs
    [[deprecated("Use field access instead!")]] ::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle>& dyn_m_Jobs();
    // Get instance field reference: private System.Int32 m_JobCount
    [[deprecated("Use field access instead!")]] int& dyn_m_JobCount();
    // Get instance field reference: private System.Boolean <disposed>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$disposed$k__BackingField();
    // public System.Void .ctor(System.Int32 capacity)
    // Offset: 0x55CD560
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JobMerger* New_ctor(int capacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::UIR::JobMerger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JobMerger*, creationType>(capacity)));
    }
    // public System.Void Add(Unity.Jobs.JobHandle job)
    // Offset: 0x55CCCE4
    void Add(::Unity::Jobs::JobHandle job);
    // public Unity.Jobs.JobHandle MergeAndReset()
    // Offset: 0x55CCD50
    ::Unity::Jobs::JobHandle MergeAndReset();
    // protected System.Boolean get_disposed()
    // Offset: 0x55CD618
    bool get_disposed();
    // private System.Void set_disposed(System.Boolean value)
    // Offset: 0x55CD620
    void set_disposed(bool value);
    // public System.Void Dispose()
    // Offset: 0x55CD388
    void Dispose();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x55CD62C
    void Dispose(bool disposing);
  }; // UnityEngine.UIElements.UIR.JobMerger
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::JobMerger::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::JobMerger::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::JobMerger::*)(::Unity::Jobs::JobHandle)>(&UnityEngine::UIElements::UIR::JobMerger::Add)> {
  static const MethodInfo* get() {
    static auto* job = &::il2cpp_utils::GetClassFromName("Unity.Jobs", "JobHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIR::JobMerger*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{job});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::JobMerger::MergeAndReset
// Il2CppName: MergeAndReset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (UnityEngine::UIElements::UIR::JobMerger::*)()>(&UnityEngine::UIElements::UIR::JobMerger::MergeAndReset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIR::JobMerger*), "MergeAndReset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::JobMerger::get_disposed
// Il2CppName: get_disposed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::UIR::JobMerger::*)()>(&UnityEngine::UIElements::UIR::JobMerger::get_disposed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIR::JobMerger*), "get_disposed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::JobMerger::set_disposed
// Il2CppName: set_disposed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::JobMerger::*)(bool)>(&UnityEngine::UIElements::UIR::JobMerger::set_disposed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIR::JobMerger*), "set_disposed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::JobMerger::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::JobMerger::*)()>(&UnityEngine::UIElements::UIR::JobMerger::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIR::JobMerger*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::JobMerger::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::JobMerger::*)(bool)>(&UnityEngine::UIElements::UIR::JobMerger::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIR::JobMerger*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
