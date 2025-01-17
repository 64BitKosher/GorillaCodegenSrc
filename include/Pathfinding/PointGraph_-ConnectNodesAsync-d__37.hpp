// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.PointGraph
#include "Pathfinding/PointGraph.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: Pathfinding.Progress
#include "Pathfinding/Progress.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: Pathfinding.Connection
#include "Pathfinding/Connection.hpp"
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
}
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: GraphNode
  class GraphNode;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::PointGraph::$ConnectNodesAsync$d__37);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::PointGraph::$ConnectNodesAsync$d__37*, "Pathfinding", "PointGraph/<ConnectNodesAsync>d__37");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x54
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.PointGraph/<ConnectNodesAsync>d__37
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class PointGraph::$ConnectNodesAsync$d__37 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>, public ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*/ {
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
    // Padding between fields: $$l__initialThreadId and: $$4__this
    char __padding2[0x4] = {};
    // public Pathfinding.PointGraph <>4__this
    // Size: 0x8
    // Offset: 0x30
    ::Pathfinding::PointGraph* $$4__this;
    // Field size check
    static_assert(sizeof(::Pathfinding::PointGraph*) == 0x8);
    // private System.Collections.Generic.List`1<Pathfinding.Connection> <connections>5__2
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::List_1<::Pathfinding::Connection>* $connections$5__2;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Pathfinding::Connection>*) == 0x8);
    // private System.Collections.Generic.List`1<Pathfinding.GraphNode> <candidateConnections>5__3
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* $candidateConnections$5__3;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*) == 0x8);
    // private System.Int64 <maxSquaredRange>5__4
    // Size: 0x8
    // Offset: 0x48
    int64_t $maxSquaredRange$5__4;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int32 <i>5__5
    // Size: 0x4
    // Offset: 0x50
    int $i$5__5;
    // Field size check
    static_assert(sizeof(int) == 0x4);
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
    // Get instance field reference: public Pathfinding.PointGraph <>4__this
    [[deprecated("Use field access instead!")]] ::Pathfinding::PointGraph*& dyn_$$4__this();
    // Get instance field reference: private System.Collections.Generic.List`1<Pathfinding.Connection> <connections>5__2
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Pathfinding::Connection>*& dyn_$connections$5__2();
    // Get instance field reference: private System.Collections.Generic.List`1<Pathfinding.GraphNode> <candidateConnections>5__3
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*& dyn_$candidateConnections$5__3();
    // Get instance field reference: private System.Int64 <maxSquaredRange>5__4
    [[deprecated("Use field access instead!")]] int64_t& dyn_$maxSquaredRange$5__4();
    // Get instance field reference: private System.Int32 <i>5__5
    [[deprecated("Use field access instead!")]] int& dyn_$i$5__5();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x29DEAD8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PointGraph::$ConnectNodesAsync$d__37* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::PointGraph::$ConnectNodesAsync$d__37::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PointGraph::$ConnectNodesAsync$d__37*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x29DFF28
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x29DFF2C
    bool MoveNext();
    // private Pathfinding.Progress System.Collections.Generic.IEnumerator<Pathfinding.Progress>.get_Current()
    // Offset: 0x29E06A4
    ::Pathfinding::Progress System_Collections_Generic_IEnumerator$Pathfinding_Progress$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x29E06B0
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x29E06E8
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<Pathfinding.Progress> System.Collections.Generic.IEnumerable<Pathfinding.Progress>.GetEnumerator()
    // Offset: 0x29E0744
    ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* System_Collections_Generic_IEnumerable$Pathfinding_Progress$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x29E07E8
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // Pathfinding.PointGraph/<ConnectNodesAsync>d__37
  #pragma pack(pop)
  static check_size<sizeof(PointGraph::$ConnectNodesAsync$d__37), 80 + sizeof(int)> __Pathfinding_PointGraph_$ConnectNodesAsync$d__37SizeCheck;
  static_assert(sizeof(PointGraph::$ConnectNodesAsync$d__37) == 0x54);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::PointGraph::$ConnectNodesAsync$d__37::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::PointGraph::$ConnectNodesAsync$d__37::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::PointGraph::$ConnectNodesAsync$d__37::*)()>(&Pathfinding::PointGraph::$ConnectNodesAsync$d__37::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::PointGraph::$ConnectNodesAsync$d__37*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::PointGraph::$ConnectNodesAsync$d__37::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::PointGraph::$ConnectNodesAsync$d__37::*)()>(&Pathfinding::PointGraph::$ConnectNodesAsync$d__37::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::PointGraph::$ConnectNodesAsync$d__37*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::PointGraph::$ConnectNodesAsync$d__37::System_Collections_Generic_IEnumerator$Pathfinding_Progress$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<Pathfinding.Progress>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::Progress (Pathfinding::PointGraph::$ConnectNodesAsync$d__37::*)()>(&Pathfinding::PointGraph::$ConnectNodesAsync$d__37::System_Collections_Generic_IEnumerator$Pathfinding_Progress$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::PointGraph::$ConnectNodesAsync$d__37*), "System.Collections.Generic.IEnumerator<Pathfinding.Progress>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::PointGraph::$ConnectNodesAsync$d__37::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::PointGraph::$ConnectNodesAsync$d__37::*)()>(&Pathfinding::PointGraph::$ConnectNodesAsync$d__37::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::PointGraph::$ConnectNodesAsync$d__37*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::PointGraph::$ConnectNodesAsync$d__37::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Pathfinding::PointGraph::$ConnectNodesAsync$d__37::*)()>(&Pathfinding::PointGraph::$ConnectNodesAsync$d__37::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::PointGraph::$ConnectNodesAsync$d__37*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::PointGraph::$ConnectNodesAsync$d__37::System_Collections_Generic_IEnumerable$Pathfinding_Progress$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<Pathfinding.Progress>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* (Pathfinding::PointGraph::$ConnectNodesAsync$d__37::*)()>(&Pathfinding::PointGraph::$ConnectNodesAsync$d__37::System_Collections_Generic_IEnumerable$Pathfinding_Progress$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::PointGraph::$ConnectNodesAsync$d__37*), "System.Collections.Generic.IEnumerable<Pathfinding.Progress>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::PointGraph::$ConnectNodesAsync$d__37::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (Pathfinding::PointGraph::$ConnectNodesAsync$d__37::*)()>(&Pathfinding::PointGraph::$ConnectNodesAsync$d__37::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::PointGraph::$ConnectNodesAsync$d__37*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
