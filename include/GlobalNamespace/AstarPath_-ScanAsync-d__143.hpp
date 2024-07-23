// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: AstarPath
#include "GlobalNamespace/AstarPath.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: Pathfinding.Progress
#include "Pathfinding/Progress.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: Pathfinding.PathProcessor/GraphUpdateLock
#include "Pathfinding/PathProcessor_GraphUpdateLock.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: NavGraph
  class NavGraph;
}
// Forward declaring namespace: System::Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: Stopwatch
  class Stopwatch;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AstarPath::$ScanAsync$d__143);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AstarPath::$ScanAsync$d__143*, "", "AstarPath/<ScanAsync>d__143");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: AstarPath/<ScanAsync>d__143
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class AstarPath::$ScanAsync$d__143 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>, public ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*/ {
    public:
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private Pathfinding.Progress <>2__current
    // Size: 0x10
    // Offset: 0x18
    ::Pathfinding::Progress $$2__current;
    // Field size check
    static_assert(sizeof(::Pathfinding::Progress) == 0x10);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x28
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$l__initialThreadId and: graphsToScan
    char __padding2[0x4] = {};
    // private Pathfinding.NavGraph[] graphsToScan
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::Pathfinding::NavGraph*> graphsToScan;
    // Field size check
    static_assert(sizeof(::ArrayW<::Pathfinding::NavGraph*>) == 0x8);
    // public Pathfinding.NavGraph[] <>3__graphsToScan
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::Pathfinding::NavGraph*> $$3__graphsToScan;
    // Field size check
    static_assert(sizeof(::ArrayW<::Pathfinding::NavGraph*>) == 0x8);
    // public AstarPath <>4__this
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::AstarPath* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AstarPath*) == 0x8);
    // private Pathfinding.PathProcessor/GraphUpdateLock <graphUpdateLock>5__2
    // Size: 0xC
    // Offset: 0x48
    ::Pathfinding::PathProcessor::GraphUpdateLock $graphUpdateLock$5__2;
    // Field size check
    static_assert(sizeof(::Pathfinding::PathProcessor::GraphUpdateLock) == 0xC);
    // Padding between fields: $graphUpdateLock$5__2 and: $watch$5__3
    char __padding6[0x4] = {};
    // private System.Diagnostics.Stopwatch <watch>5__3
    // Size: 0x8
    // Offset: 0x58
    ::System::Diagnostics::Stopwatch* $watch$5__3;
    // Field size check
    static_assert(sizeof(::System::Diagnostics::Stopwatch*) == 0x8);
    // private System.Int32 <i>5__4
    // Size: 0x4
    // Offset: 0x60
    int $i$5__4;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single <minp>5__5
    // Size: 0x4
    // Offset: 0x64
    float $minp$5__5;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <maxp>5__6
    // Size: 0x4
    // Offset: 0x68
    float $maxp$5__6;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: $maxp$5__6 and: $progressDescriptionPrefix$5__7
    char __padding10[0x4] = {};
    // private System.String <progressDescriptionPrefix>5__7
    // Size: 0x8
    // Offset: 0x70
    ::StringW $progressDescriptionPrefix$5__7;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Collections.Generic.IEnumerator`1<Pathfinding.Progress> <coroutine>5__8
    // Size: 0x8
    // Offset: 0x78
    ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* $coroutine$5__8;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>
    operator ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>
    operator ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private Pathfinding.Progress <>2__current
    [[deprecated("Use field access instead!")]] ::Pathfinding::Progress& dyn_$$2__current();
    // Get instance field reference: private System.Int32 <>l__initialThreadId
    [[deprecated("Use field access instead!")]] int& dyn_$$l__initialThreadId();
    // Get instance field reference: private Pathfinding.NavGraph[] graphsToScan
    [[deprecated("Use field access instead!")]] ::ArrayW<::Pathfinding::NavGraph*>& dyn_graphsToScan();
    // Get instance field reference: public Pathfinding.NavGraph[] <>3__graphsToScan
    [[deprecated("Use field access instead!")]] ::ArrayW<::Pathfinding::NavGraph*>& dyn_$$3__graphsToScan();
    // Get instance field reference: public AstarPath <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AstarPath*& dyn_$$4__this();
    // Get instance field reference: private Pathfinding.PathProcessor/GraphUpdateLock <graphUpdateLock>5__2
    [[deprecated("Use field access instead!")]] ::Pathfinding::PathProcessor::GraphUpdateLock& dyn_$graphUpdateLock$5__2();
    // Get instance field reference: private System.Diagnostics.Stopwatch <watch>5__3
    [[deprecated("Use field access instead!")]] ::System::Diagnostics::Stopwatch*& dyn_$watch$5__3();
    // Get instance field reference: private System.Int32 <i>5__4
    [[deprecated("Use field access instead!")]] int& dyn_$i$5__4();
    // Get instance field reference: private System.Single <minp>5__5
    [[deprecated("Use field access instead!")]] float& dyn_$minp$5__5();
    // Get instance field reference: private System.Single <maxp>5__6
    [[deprecated("Use field access instead!")]] float& dyn_$maxp$5__6();
    // Get instance field reference: private System.String <progressDescriptionPrefix>5__7
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$progressDescriptionPrefix$5__7();
    // Get instance field reference: private System.Collections.Generic.IEnumerator`1<Pathfinding.Progress> <coroutine>5__8
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*& dyn_$coroutine$5__8();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x29857B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AstarPath::$ScanAsync$d__143* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AstarPath::$ScanAsync$d__143::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AstarPath::$ScanAsync$d__143*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x2986F94
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x2986F98
    bool MoveNext();
    // private Pathfinding.Progress System.Collections.Generic.IEnumerator<Pathfinding.Progress>.get_Current()
    // Offset: 0x2987B68
    ::Pathfinding::Progress System_Collections_Generic_IEnumerator$Pathfinding_Progress$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x2987B74
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x2987BAC
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<Pathfinding.Progress> System.Collections.Generic.IEnumerable<Pathfinding.Progress>.GetEnumerator()
    // Offset: 0x2987C08
    ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* System_Collections_Generic_IEnumerable$Pathfinding_Progress$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x2987CBC
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // AstarPath/<ScanAsync>d__143
  #pragma pack(pop)
  static check_size<sizeof(AstarPath::$ScanAsync$d__143), 120 + sizeof(::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*)> __GlobalNamespace_AstarPath_$ScanAsync$d__143SizeCheck;
  static_assert(sizeof(AstarPath::$ScanAsync$d__143) == 0x80);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AstarPath::$ScanAsync$d__143::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::AstarPath::$ScanAsync$d__143::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AstarPath::$ScanAsync$d__143::*)()>(&GlobalNamespace::AstarPath::$ScanAsync$d__143::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AstarPath::$ScanAsync$d__143*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AstarPath::$ScanAsync$d__143::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::AstarPath::$ScanAsync$d__143::*)()>(&GlobalNamespace::AstarPath::$ScanAsync$d__143::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AstarPath::$ScanAsync$d__143*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AstarPath::$ScanAsync$d__143::System_Collections_Generic_IEnumerator$Pathfinding_Progress$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<Pathfinding.Progress>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::Progress (GlobalNamespace::AstarPath::$ScanAsync$d__143::*)()>(&GlobalNamespace::AstarPath::$ScanAsync$d__143::System_Collections_Generic_IEnumerator$Pathfinding_Progress$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AstarPath::$ScanAsync$d__143*), "System.Collections.Generic.IEnumerator<Pathfinding.Progress>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AstarPath::$ScanAsync$d__143::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AstarPath::$ScanAsync$d__143::*)()>(&GlobalNamespace::AstarPath::$ScanAsync$d__143::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AstarPath::$ScanAsync$d__143*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AstarPath::$ScanAsync$d__143::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::AstarPath::$ScanAsync$d__143::*)()>(&GlobalNamespace::AstarPath::$ScanAsync$d__143::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AstarPath::$ScanAsync$d__143*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AstarPath::$ScanAsync$d__143::System_Collections_Generic_IEnumerable$Pathfinding_Progress$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<Pathfinding.Progress>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* (GlobalNamespace::AstarPath::$ScanAsync$d__143::*)()>(&GlobalNamespace::AstarPath::$ScanAsync$d__143::System_Collections_Generic_IEnumerable$Pathfinding_Progress$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AstarPath::$ScanAsync$d__143*), "System.Collections.Generic.IEnumerable<Pathfinding.Progress>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AstarPath::$ScanAsync$d__143::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::AstarPath::$ScanAsync$d__143::*)()>(&GlobalNamespace::AstarPath::$ScanAsync$d__143::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AstarPath::$ScanAsync$d__143*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
