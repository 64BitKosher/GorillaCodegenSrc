// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.SimulationSnapshot
#include "Fusion/SimulationSnapshot.hpp"
// Including type: Fusion.SimulationSnapshot/IHistory
#include "Fusion/SimulationSnapshot_IHistory.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots*, "Fusion", "SimulationSnapshot/HistoryServerDeltaSnapshots");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.SimulationSnapshot/HistoryServerDeltaSnapshots
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: FFFFFFFF
  class SimulationSnapshot::HistoryServerDeltaSnapshots : public ::Il2CppObject/*, public ::Fusion::SimulationSnapshot::IHistory*/ {
    public:
    public:
    // private Fusion.SimulationSnapshot/Pool _pool
    // Size: 0x8
    // Offset: 0x10
    ::Fusion::SimulationSnapshot::Pool* pool;
    // Field size check
    static_assert(sizeof(::Fusion::SimulationSnapshot::Pool*) == 0x8);
    // private Fusion.SimulationSnapshot _root
    // Size: 0x8
    // Offset: 0x18
    ::Fusion::SimulationSnapshot* root;
    // Field size check
    static_assert(sizeof(::Fusion::SimulationSnapshot*) == 0x8);
    // private System.Collections.Generic.List`1<Fusion.SimulationSnapshot> _snapshots
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::Fusion::SimulationSnapshot*>* snapshots;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Fusion::SimulationSnapshot*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<Fusion.Tick,Fusion.SimulationSnapshot> _lookup
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::Dictionary_2<::Fusion::Tick, ::Fusion::SimulationSnapshot*>* lookup;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::Fusion::Tick, ::Fusion::SimulationSnapshot*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Fusion::SimulationSnapshot::IHistory
    operator ::Fusion::SimulationSnapshot::IHistory() noexcept {
      return *reinterpret_cast<::Fusion::SimulationSnapshot::IHistory*>(this);
    }
    // Get instance field reference: private Fusion.SimulationSnapshot/Pool _pool
    [[deprecated("Use field access instead!")]] ::Fusion::SimulationSnapshot::Pool*& dyn__pool();
    // Get instance field reference: private Fusion.SimulationSnapshot _root
    [[deprecated("Use field access instead!")]] ::Fusion::SimulationSnapshot*& dyn__root();
    // Get instance field reference: private System.Collections.Generic.List`1<Fusion.SimulationSnapshot> _snapshots
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Fusion::SimulationSnapshot*>*& dyn__snapshots();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<Fusion.Tick,Fusion.SimulationSnapshot> _lookup
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::Fusion::Tick, ::Fusion::SimulationSnapshot*>*& dyn__lookup();
    // public Fusion.SimulationSnapshot get_Oldest()
    // Offset: 0x2B86654
    ::Fusion::SimulationSnapshot* get_Oldest();
    // public Fusion.SimulationSnapshot get_Latest()
    // Offset: 0x2B866A8
    ::Fusion::SimulationSnapshot* get_Latest();
    // public Fusion.SimulationSnapshot get_Root()
    // Offset: 0x2B8670C
    ::Fusion::SimulationSnapshot* get_Root();
    // public System.Int32 get_Count()
    // Offset: 0x2B86714
    int get_Count();
    // public Fusion.Tick get_MaxTick()
    // Offset: 0x2B8675C
    ::Fusion::Tick get_MaxTick();
    // public Fusion.SimulationSnapshot get_Item(System.Int32 index)
    // Offset: 0x2B86778
    ::Fusion::SimulationSnapshot* get_Item(int index);
    // public System.Void .ctor(Fusion.SimulationSnapshot/Pool pool)
    // Offset: 0x2B867C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SimulationSnapshot::HistoryServerDeltaSnapshots* New_ctor(::Fusion::SimulationSnapshot::Pool* pool) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SimulationSnapshot::HistoryServerDeltaSnapshots*, creationType>(pool)));
    }
    // public System.Void Dispose()
    // Offset: 0x2B8690C
    void Dispose();
    // public System.Boolean TryGet(Fusion.Tick tick, out Fusion.SimulationSnapshot snapshot)
    // Offset: 0x2B869A0
    bool TryGet(::Fusion::Tick tick, ByRef<::Fusion::SimulationSnapshot*> snapshot);
    // public Fusion.SimulationSnapshot Get(Fusion.Tick tick)
    // Offset: 0x2B86A08
    ::Fusion::SimulationSnapshot* Get(::Fusion::Tick tick);
    // public Fusion.SimulationSnapshot Next(Fusion.Tick tick, System.Boolean copyPrevious)
    // Offset: 0x2B86A30
    ::Fusion::SimulationSnapshot* Next(::Fusion::Tick tick, bool copyPrevious);
    // public System.Void DisposeAllExcept(System.Collections.Generic.HashSet`1<Fusion.Tick> save)
    // Offset: 0x2B86B74
    void DisposeAllExcept(::System::Collections::Generic::HashSet_1<::Fusion::Tick>* save);
    // public System.Void DisposeOlderThan(Fusion.Tick tick)
    // Offset: 0x2B86D98
    void DisposeOlderThan(::Fusion::Tick tick);
  }; // Fusion.SimulationSnapshot/HistoryServerDeltaSnapshots
  #pragma pack(pop)
  static check_size<sizeof(SimulationSnapshot::HistoryServerDeltaSnapshots), 40 + sizeof(::System::Collections::Generic::Dictionary_2<::Fusion::Tick, ::Fusion::SimulationSnapshot*>*)> __Fusion_SimulationSnapshot_HistoryServerDeltaSnapshotsSizeCheck;
  static_assert(sizeof(SimulationSnapshot::HistoryServerDeltaSnapshots) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots::get_Oldest
// Il2CppName: get_Oldest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::SimulationSnapshot* (Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots::*)()>(&Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots::get_Oldest)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots*), "get_Oldest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots::get_Latest
// Il2CppName: get_Latest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::SimulationSnapshot* (Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots::*)()>(&Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots::get_Latest)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots*), "get_Latest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots::get_Root
// Il2CppName: get_Root
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::SimulationSnapshot* (Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots::*)()>(&Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots::get_Root)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots*), "get_Root", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots::*)()>(&Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots::get_MaxTick
// Il2CppName: get_MaxTick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::Tick (Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots::*)()>(&Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots::get_MaxTick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots*), "get_MaxTick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::SimulationSnapshot* (Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots::*)(int)>(&Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots::*)()>(&Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots::TryGet
// Il2CppName: TryGet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots::*)(::Fusion::Tick, ByRef<::Fusion::SimulationSnapshot*>)>(&Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots::TryGet)> {
  static const MethodInfo* get() {
    static auto* tick = &::il2cpp_utils::GetClassFromName("Fusion", "Tick")->byval_arg;
    static auto* snapshot = &::il2cpp_utils::GetClassFromName("Fusion", "SimulationSnapshot")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots*), "TryGet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tick, snapshot});
  }
};
// Writing MetadataGetter for method: Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::SimulationSnapshot* (Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots::*)(::Fusion::Tick)>(&Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots::Get)> {
  static const MethodInfo* get() {
    static auto* tick = &::il2cpp_utils::GetClassFromName("Fusion", "Tick")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tick});
  }
};
// Writing MetadataGetter for method: Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots::Next
// Il2CppName: Next
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::SimulationSnapshot* (Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots::*)(::Fusion::Tick, bool)>(&Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots::Next)> {
  static const MethodInfo* get() {
    static auto* tick = &::il2cpp_utils::GetClassFromName("Fusion", "Tick")->byval_arg;
    static auto* copyPrevious = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots*), "Next", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tick, copyPrevious});
  }
};
// Writing MetadataGetter for method: Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots::DisposeAllExcept
// Il2CppName: DisposeAllExcept
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots::*)(::System::Collections::Generic::HashSet_1<::Fusion::Tick>*)>(&Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots::DisposeAllExcept)> {
  static const MethodInfo* get() {
    static auto* save = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "HashSet`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Fusion", "Tick")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots*), "DisposeAllExcept", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{save});
  }
};
// Writing MetadataGetter for method: Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots::DisposeOlderThan
// Il2CppName: DisposeOlderThan
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots::*)(::Fusion::Tick)>(&Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots::DisposeOlderThan)> {
  static const MethodInfo* get() {
    static auto* tick = &::il2cpp_utils::GetClassFromName("Fusion", "Tick")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::SimulationSnapshot::HistoryServerDeltaSnapshots*), "DisposeOlderThan", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tick});
  }
};
