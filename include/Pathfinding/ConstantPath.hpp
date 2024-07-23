// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.Path
#include "Pathfinding/Path.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: GraphNode
  class GraphNode;
  // Forward declaring type: PathEndingCondition
  class PathEndingCondition;
  // Forward declaring type: OnPathDelegate
  class OnPathDelegate;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: ConstantPath
  class ConstantPath;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::ConstantPath);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::ConstantPath*, "Pathfinding", "ConstantPath");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x100
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.ConstantPath
  // [TokenAttribute] Offset: FFFFFFFF
  class ConstantPath : public ::Pathfinding::Path {
    public:
    // Writing base type padding for base size: 0xC9 to desired offset: 0xD0
    char ___base_padding[0x7] = {};
    public:
    // public Pathfinding.GraphNode startNode
    // Size: 0x8
    // Offset: 0xD0
    ::Pathfinding::GraphNode* startNode;
    // Field size check
    static_assert(sizeof(::Pathfinding::GraphNode*) == 0x8);
    // public UnityEngine.Vector3 startPoint
    // Size: 0xC
    // Offset: 0xD8
    ::UnityEngine::Vector3 startPoint;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 originalStartPoint
    // Size: 0xC
    // Offset: 0xE4
    ::UnityEngine::Vector3 originalStartPoint;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public System.Collections.Generic.List`1<Pathfinding.GraphNode> allNodes
    // Size: 0x8
    // Offset: 0xF0
    ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* allNodes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*) == 0x8);
    // public Pathfinding.PathEndingCondition endingCondition
    // Size: 0x8
    // Offset: 0xF8
    ::Pathfinding::PathEndingCondition* endingCondition;
    // Field size check
    static_assert(sizeof(::Pathfinding::PathEndingCondition*) == 0x8);
    public:
    // Get instance field reference: public Pathfinding.GraphNode startNode
    [[deprecated("Use field access instead!")]] ::Pathfinding::GraphNode*& dyn_startNode();
    // Get instance field reference: public UnityEngine.Vector3 startPoint
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_startPoint();
    // Get instance field reference: public UnityEngine.Vector3 originalStartPoint
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_originalStartPoint();
    // Get instance field reference: public System.Collections.Generic.List`1<Pathfinding.GraphNode> allNodes
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*& dyn_allNodes();
    // Get instance field reference: public Pathfinding.PathEndingCondition endingCondition
    [[deprecated("Use field access instead!")]] ::Pathfinding::PathEndingCondition*& dyn_endingCondition();
    // static public Pathfinding.ConstantPath Construct(UnityEngine.Vector3 start, System.Int32 maxGScore, Pathfinding.OnPathDelegate callback)
    // Offset: 0x29FEF2C
    static ::Pathfinding::ConstantPath* Construct(::UnityEngine::Vector3 start, int maxGScore, ::Pathfinding::OnPathDelegate* callback);
    // protected System.Void Setup(UnityEngine.Vector3 start, System.Int32 maxGScore, Pathfinding.OnPathDelegate callback)
    // Offset: 0x29FEFE8
    void Setup(::UnityEngine::Vector3 start, int maxGScore, ::Pathfinding::OnPathDelegate* callback);
    // public override System.Boolean get_FloodingPath()
    // Offset: 0x29FEF24
    // Implemented from: Pathfinding.Path
    // Base method: System.Boolean Path::get_FloodingPath()
    bool get_FloodingPath();
    // protected override System.Void OnEnterPool()
    // Offset: 0x29FF0D4
    // Implemented from: Pathfinding.Path
    // Base method: System.Void Path::OnEnterPool()
    void OnEnterPool();
    // protected override System.Void Reset()
    // Offset: 0x29FF160
    // Implemented from: Pathfinding.Path
    // Base method: System.Void Path::Reset()
    void Reset();
    // protected override System.Void Prepare()
    // Offset: 0x29FF264
    // Implemented from: Pathfinding.Path
    // Base method: System.Void Path::Prepare()
    void Prepare();
    // protected override System.Void Initialize()
    // Offset: 0x29FF338
    // Implemented from: Pathfinding.Path
    // Base method: System.Void Path::Initialize()
    void Initialize();
    // protected override System.Void Cleanup()
    // Offset: 0x29FF4F0
    // Implemented from: Pathfinding.Path
    // Base method: System.Void Path::Cleanup()
    void Cleanup();
    // protected override System.Void CalculateStep(System.Int64 targetTick)
    // Offset: 0x29FF5A8
    // Implemented from: Pathfinding.Path
    // Base method: System.Void Path::CalculateStep(System.Int64 targetTick)
    void CalculateStep(int64_t targetTick);
    // public System.Void .ctor()
    // Offset: 0x29FF808
    // Implemented from: Pathfinding.Path
    // Base method: System.Void Path::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConstantPath* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::ConstantPath::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConstantPath*, creationType>()));
    }
  }; // Pathfinding.ConstantPath
  #pragma pack(pop)
  static check_size<sizeof(ConstantPath), 248 + sizeof(::Pathfinding::PathEndingCondition*)> __Pathfinding_ConstantPathSizeCheck;
  static_assert(sizeof(ConstantPath) == 0x100);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::ConstantPath::Construct
// Il2CppName: Construct
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::ConstantPath* (*)(::UnityEngine::Vector3, int, ::Pathfinding::OnPathDelegate*)>(&Pathfinding::ConstantPath::Construct)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* maxGScore = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("Pathfinding", "OnPathDelegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::ConstantPath*), "Construct", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, maxGScore, callback});
  }
};
// Writing MetadataGetter for method: Pathfinding::ConstantPath::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::ConstantPath::*)(::UnityEngine::Vector3, int, ::Pathfinding::OnPathDelegate*)>(&Pathfinding::ConstantPath::Setup)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* maxGScore = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("Pathfinding", "OnPathDelegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::ConstantPath*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, maxGScore, callback});
  }
};
// Writing MetadataGetter for method: Pathfinding::ConstantPath::get_FloodingPath
// Il2CppName: get_FloodingPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::ConstantPath::*)()>(&Pathfinding::ConstantPath::get_FloodingPath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::ConstantPath*), "get_FloodingPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::ConstantPath::OnEnterPool
// Il2CppName: OnEnterPool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::ConstantPath::*)()>(&Pathfinding::ConstantPath::OnEnterPool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::ConstantPath*), "OnEnterPool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::ConstantPath::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::ConstantPath::*)()>(&Pathfinding::ConstantPath::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::ConstantPath*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::ConstantPath::Prepare
// Il2CppName: Prepare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::ConstantPath::*)()>(&Pathfinding::ConstantPath::Prepare)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::ConstantPath*), "Prepare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::ConstantPath::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::ConstantPath::*)()>(&Pathfinding::ConstantPath::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::ConstantPath*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::ConstantPath::Cleanup
// Il2CppName: Cleanup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::ConstantPath::*)()>(&Pathfinding::ConstantPath::Cleanup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::ConstantPath*), "Cleanup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::ConstantPath::CalculateStep
// Il2CppName: CalculateStep
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::ConstantPath::*)(int64_t)>(&Pathfinding::ConstantPath::CalculateStep)> {
  static const MethodInfo* get() {
    static auto* targetTick = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::ConstantPath*), "CalculateStep", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetTick});
  }
};
// Writing MetadataGetter for method: Pathfinding::ConstantPath::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
