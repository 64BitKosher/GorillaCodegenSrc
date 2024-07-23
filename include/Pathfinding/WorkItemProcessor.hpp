// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.IWorkItemContext
#include "Pathfinding/IWorkItemContext.hpp"
// Including type: Pathfinding.AstarWorkItem
#include "Pathfinding/AstarWorkItem.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: NavGraph
  class NavGraph;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AstarPath
  class AstarPath;
}
// Completed forward declares
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: WorkItemProcessor
  class WorkItemProcessor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::WorkItemProcessor);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::WorkItemProcessor*, "Pathfinding", "WorkItemProcessor");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x2B
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.WorkItemProcessor
  // [TokenAttribute] Offset: FFFFFFFF
  class WorkItemProcessor : public ::Il2CppObject/*, public ::Pathfinding::IWorkItemContext*/ {
    public:
    // Nested type: ::Pathfinding::WorkItemProcessor::IndexedQueue_1<T>
    template<typename T>
    class IndexedQueue_1;
    public:
    // private System.Boolean <workItemsInProgressRightNow>k__BackingField
    // Size: 0x1
    // Offset: 0x10
    bool workItemsInProgressRightNow;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: workItemsInProgressRightNow and: astar
    char __padding0[0x7] = {};
    // private readonly AstarPath astar
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::AstarPath* astar;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AstarPath*) == 0x8);
    // private readonly Pathfinding.WorkItemProcessor/IndexedQueue`1<Pathfinding.AstarWorkItem> workItems
    // Size: 0x8
    // Offset: 0x20
    ::Pathfinding::WorkItemProcessor::IndexedQueue_1<::Pathfinding::AstarWorkItem>* workItems;
    // Field size check
    static_assert(sizeof(::Pathfinding::WorkItemProcessor::IndexedQueue_1<::Pathfinding::AstarWorkItem>*) == 0x8);
    // private System.Boolean queuedWorkItemFloodFill
    // Size: 0x1
    // Offset: 0x28
    bool queuedWorkItemFloodFill;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean anyGraphsDirty
    // Size: 0x1
    // Offset: 0x29
    bool anyGraphsDirty;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <workItemsInProgress>k__BackingField
    // Size: 0x1
    // Offset: 0x2A
    bool workItemsInProgress;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::Pathfinding::IWorkItemContext
    operator ::Pathfinding::IWorkItemContext() noexcept {
      return *reinterpret_cast<::Pathfinding::IWorkItemContext*>(this);
    }
    // Get instance field reference: private System.Boolean <workItemsInProgressRightNow>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$workItemsInProgressRightNow$k__BackingField();
    // Get instance field reference: private readonly AstarPath astar
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AstarPath*& dyn_astar();
    // Get instance field reference: private readonly Pathfinding.WorkItemProcessor/IndexedQueue`1<Pathfinding.AstarWorkItem> workItems
    [[deprecated("Use field access instead!")]] ::Pathfinding::WorkItemProcessor::IndexedQueue_1<::Pathfinding::AstarWorkItem>*& dyn_workItems();
    // Get instance field reference: private System.Boolean queuedWorkItemFloodFill
    [[deprecated("Use field access instead!")]] bool& dyn_queuedWorkItemFloodFill();
    // Get instance field reference: private System.Boolean anyGraphsDirty
    [[deprecated("Use field access instead!")]] bool& dyn_anyGraphsDirty();
    // Get instance field reference: private System.Boolean <workItemsInProgress>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$workItemsInProgress$k__BackingField();
    // public System.Boolean get_workItemsInProgressRightNow()
    // Offset: 0x29B8264
    bool get_workItemsInProgressRightNow();
    // private System.Void set_workItemsInProgressRightNow(System.Boolean value)
    // Offset: 0x29B826C
    void set_workItemsInProgressRightNow(bool value);
    // public System.Boolean get_anyQueued()
    // Offset: 0x29B8278
    bool get_anyQueued();
    // public System.Boolean get_workItemsInProgress()
    // Offset: 0x29B82C8
    bool get_workItemsInProgress();
    // private System.Void set_workItemsInProgress(System.Boolean value)
    // Offset: 0x29B82D0
    void set_workItemsInProgress(bool value);
    // private System.Void Pathfinding.IWorkItemContext.QueueFloodFill()
    // Offset: 0x29B82DC
    void Pathfinding_IWorkItemContext_QueueFloodFill();
    // private System.Void Pathfinding.IWorkItemContext.SetGraphDirty(Pathfinding.NavGraph graph)
    // Offset: 0x29B82E8
    void Pathfinding_IWorkItemContext_SetGraphDirty(::Pathfinding::NavGraph* graph);
    // public System.Void EnsureValidFloodFill()
    // Offset: 0x29B82F4
    void EnsureValidFloodFill();
    // public System.Void .ctor(AstarPath astar)
    // Offset: 0x29B8328
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WorkItemProcessor* New_ctor(::GlobalNamespace::AstarPath* astar) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::WorkItemProcessor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WorkItemProcessor*, creationType>(astar)));
    }
    // public System.Void OnFloodFill()
    // Offset: 0x29B83CC
    void OnFloodFill();
    // public System.Void AddWorkItem(Pathfinding.AstarWorkItem item)
    // Offset: 0x29B83D4
    void AddWorkItem(::Pathfinding::AstarWorkItem item);
    // public System.Boolean ProcessWorkItems(System.Boolean force)
    // Offset: 0x29B8448
    bool ProcessWorkItems(bool force);
  }; // Pathfinding.WorkItemProcessor
  #pragma pack(pop)
  static check_size<sizeof(WorkItemProcessor), 42 + sizeof(bool)> __Pathfinding_WorkItemProcessorSizeCheck;
  static_assert(sizeof(WorkItemProcessor) == 0x2B);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::WorkItemProcessor::get_workItemsInProgressRightNow
// Il2CppName: get_workItemsInProgressRightNow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::WorkItemProcessor::*)()>(&Pathfinding::WorkItemProcessor::get_workItemsInProgressRightNow)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::WorkItemProcessor*), "get_workItemsInProgressRightNow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::WorkItemProcessor::set_workItemsInProgressRightNow
// Il2CppName: set_workItemsInProgressRightNow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::WorkItemProcessor::*)(bool)>(&Pathfinding::WorkItemProcessor::set_workItemsInProgressRightNow)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::WorkItemProcessor*), "set_workItemsInProgressRightNow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Pathfinding::WorkItemProcessor::get_anyQueued
// Il2CppName: get_anyQueued
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::WorkItemProcessor::*)()>(&Pathfinding::WorkItemProcessor::get_anyQueued)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::WorkItemProcessor*), "get_anyQueued", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::WorkItemProcessor::get_workItemsInProgress
// Il2CppName: get_workItemsInProgress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::WorkItemProcessor::*)()>(&Pathfinding::WorkItemProcessor::get_workItemsInProgress)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::WorkItemProcessor*), "get_workItemsInProgress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::WorkItemProcessor::set_workItemsInProgress
// Il2CppName: set_workItemsInProgress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::WorkItemProcessor::*)(bool)>(&Pathfinding::WorkItemProcessor::set_workItemsInProgress)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::WorkItemProcessor*), "set_workItemsInProgress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Pathfinding::WorkItemProcessor::Pathfinding_IWorkItemContext_QueueFloodFill
// Il2CppName: Pathfinding.IWorkItemContext.QueueFloodFill
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::WorkItemProcessor::*)()>(&Pathfinding::WorkItemProcessor::Pathfinding_IWorkItemContext_QueueFloodFill)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::WorkItemProcessor*), "Pathfinding.IWorkItemContext.QueueFloodFill", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::WorkItemProcessor::Pathfinding_IWorkItemContext_SetGraphDirty
// Il2CppName: Pathfinding.IWorkItemContext.SetGraphDirty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::WorkItemProcessor::*)(::Pathfinding::NavGraph*)>(&Pathfinding::WorkItemProcessor::Pathfinding_IWorkItemContext_SetGraphDirty)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("Pathfinding", "NavGraph")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::WorkItemProcessor*), "Pathfinding.IWorkItemContext.SetGraphDirty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph});
  }
};
// Writing MetadataGetter for method: Pathfinding::WorkItemProcessor::EnsureValidFloodFill
// Il2CppName: EnsureValidFloodFill
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::WorkItemProcessor::*)()>(&Pathfinding::WorkItemProcessor::EnsureValidFloodFill)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::WorkItemProcessor*), "EnsureValidFloodFill", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::WorkItemProcessor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::WorkItemProcessor::OnFloodFill
// Il2CppName: OnFloodFill
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::WorkItemProcessor::*)()>(&Pathfinding::WorkItemProcessor::OnFloodFill)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::WorkItemProcessor*), "OnFloodFill", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::WorkItemProcessor::AddWorkItem
// Il2CppName: AddWorkItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::WorkItemProcessor::*)(::Pathfinding::AstarWorkItem)>(&Pathfinding::WorkItemProcessor::AddWorkItem)> {
  static const MethodInfo* get() {
    static auto* item = &::il2cpp_utils::GetClassFromName("Pathfinding", "AstarWorkItem")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::WorkItemProcessor*), "AddWorkItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
// Writing MetadataGetter for method: Pathfinding::WorkItemProcessor::ProcessWorkItems
// Il2CppName: ProcessWorkItems
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::WorkItemProcessor::*)(bool)>(&Pathfinding::WorkItemProcessor::ProcessWorkItems)> {
  static const MethodInfo* get() {
    static auto* force = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::WorkItemProcessor*), "ProcessWorkItems", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{force});
  }
};