// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.HitboxHit
#include "Fusion/HitboxHit.hpp"
// Including type: Fusion.LagCompensationUtils
#include "Fusion/LagCompensationUtils.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion
namespace Fusion {
  // Forward declaring type: Mapper
  class Mapper;
  // Forward declaring type: HitboxRoot
  class HitboxRoot;
  // Forward declaring type: BVH
  class BVH;
  // Forward declaring type: IHitboxColliderContainer
  class IHitboxColliderContainer;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
  // Skipping declaration: Vector3 because it is already included!
  // Forward declaring type: Quaternion
  struct Quaternion;
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
}
// Forward declaring namespace: Fusion::LagCompensation
namespace Fusion::LagCompensation {
  // Forward declaring type: Query
  struct Query;
  // Forward declaring type: RaycastQuery
  struct RaycastQuery;
  // Forward declaring type: SphereOverlapQuery
  struct SphereOverlapQuery;
}
// Completed forward declares
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: HitboxBuffer
  class HitboxBuffer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::HitboxBuffer);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::HitboxBuffer*, "Fusion", "HitboxBuffer");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.HitboxBuffer
  // [TokenAttribute] Offset: FFFFFFFF
  class HitboxBuffer : public ::Il2CppObject {
    public:
    // Nested type: ::Fusion::HitboxBuffer::HitboxSnapshot
    class HitboxSnapshot;
    public:
    // Fusion.HitboxBuffer/HitboxSnapshot[] _buffer
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::Fusion::HitboxBuffer::HitboxSnapshot*> buffer;
    // Field size check
    static_assert(sizeof(::ArrayW<::Fusion::HitboxBuffer::HitboxSnapshot*>) == 0x8);
    // private Fusion.Mapper _mapper
    // Size: 0x8
    // Offset: 0x18
    ::Fusion::Mapper* mapper;
    // Field size check
    static_assert(sizeof(::Fusion::Mapper*) == 0x8);
    // private System.Int32 _head
    // Size: 0x4
    // Offset: 0x20
    int head;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _advanced
    // Size: 0x4
    // Offset: 0x24
    int advanced;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 Tick
    // Size: 0x4
    // Offset: 0x28
    int Tick;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: Tick and: broadphaseCandidates
    char __padding4[0x4] = {};
    // private readonly System.Collections.Generic.List`1<Fusion.HitboxRoot> _broadphaseCandidates
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::List_1<::Fusion::HitboxRoot*>* broadphaseCandidates;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Fusion::HitboxRoot*>*) == 0x8);
    // private readonly System.Collections.Generic.HashSet`1<System.Int32> _colliderCandidates
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::HashSet_1<int>* colliderCandidates;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::HashSet_1<int>*) == 0x8);
    public:
    // Get instance field reference: Fusion.HitboxBuffer/HitboxSnapshot[] _buffer
    [[deprecated("Use field access instead!")]] ::ArrayW<::Fusion::HitboxBuffer::HitboxSnapshot*>& dyn__buffer();
    // Get instance field reference: private Fusion.Mapper _mapper
    [[deprecated("Use field access instead!")]] ::Fusion::Mapper*& dyn__mapper();
    // Get instance field reference: private System.Int32 _head
    [[deprecated("Use field access instead!")]] int& dyn__head();
    // Get instance field reference: private System.Int32 _advanced
    [[deprecated("Use field access instead!")]] int& dyn__advanced();
    // Get instance field reference: System.Int32 Tick
    [[deprecated("Use field access instead!")]] int& dyn_Tick();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<Fusion.HitboxRoot> _broadphaseCandidates
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Fusion::HitboxRoot*>*& dyn__broadphaseCandidates();
    // Get instance field reference: private readonly System.Collections.Generic.HashSet`1<System.Int32> _colliderCandidates
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::HashSet_1<int>*& dyn__colliderCandidates();
    // System.Int32 get_Length()
    // Offset: 0x2B41708
    int get_Length();
    // Fusion.BVH get_BVH()
    // Offset: 0x2B3FF8C
    ::Fusion::BVH* get_BVH();
    // Fusion.HitboxBuffer/HitboxSnapshot get_Current()
    // Offset: 0x2B40034
    ::Fusion::HitboxBuffer::HitboxSnapshot* get_Current();
    // System.Void .ctor(System.Collections.Generic.List`1<Fusion.HitboxRoot> initialObjects, System.Int32 bufferSize, System.Int32 hitboxCapacity, System.Single expansionFactor)
    // Offset: 0x2B3F868
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HitboxBuffer* New_ctor(::System::Collections::Generic::List_1<::Fusion::HitboxRoot*>* initialObjects, int bufferSize, int hitboxCapacity, float expansionFactor) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::HitboxBuffer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HitboxBuffer*, creationType>(initialObjects, bufferSize, hitboxCapacity, expansionFactor)));
    }
    // System.Void Advance(System.Int32 tick, System.Int32 dataTick)
    // Offset: 0x2B40074
    void Advance(int tick, int dataTick);
    // System.Void Optimize()
    // Offset: 0x2B401B0
    void Optimize();
    // System.Void Add(Fusion.HitboxRoot root)
    // Offset: 0x2B40178
    void Add(::Fusion::HitboxRoot* root);
    // System.Boolean Remove(Fusion.HitboxRoot root)
    // Offset: 0x2B40200
    bool Remove(::Fusion::HitboxRoot* root);
    // System.Void Update(Fusion.HitboxRoot root)
    // Offset: 0x2B41D9C
    void Update(::Fusion::HitboxRoot* root);
    // System.Void DebugDraw(UnityEngine.Color color, UnityEngine.Color historyColor, System.Boolean debugBroadphase, System.Boolean debugHistory)
    // Offset: 0x2B40324
    void DebugDraw(::UnityEngine::Color color, ::UnityEngine::Color historyColor, bool debugBroadphase, bool debugHistory);
    // System.Boolean Raycast(ref Fusion.LagCompensation.Query query, out Fusion.HitboxHit hit)
    // Offset: 0x2B3EB24
    bool Raycast(ByRef<::Fusion::LagCompensation::Query> query, ByRef<::Fusion::HitboxHit> hit);
    // System.Boolean RaycastAll(ref Fusion.LagCompensation.Query query, System.Collections.Generic.List`1<Fusion.HitboxHit> hits)
    // Offset: 0x2B3EE08
    bool RaycastAll(ByRef<::Fusion::LagCompensation::Query> query, ::System::Collections::Generic::List_1<::Fusion::HitboxHit>* hits);
    // System.Boolean OverlapSphere(ref Fusion.LagCompensation.Query query, System.Collections.Generic.List`1<Fusion.HitboxHit> hits)
    // Offset: 0x2B3EF48
    bool OverlapSphere(ByRef<::Fusion::LagCompensation::Query> query, ::System::Collections::Generic::List_1<::Fusion::HitboxHit>* hits);
    // System.Boolean OverlapBox(ref Fusion.LagCompensation.Query query, System.Boolean computeDetailedInfo, System.Collections.Generic.List`1<Fusion.HitboxHit> hits)
    // Offset: 0x2B3F088
    bool OverlapBox(ByRef<::Fusion::LagCompensation::Query> query, bool computeDetailedInfo, ::System::Collections::Generic::List_1<::Fusion::HitboxHit>* hits);
    // private System.Void InitColliderCandidatesForNarrowPhase(Fusion.IHitboxColliderContainer container, System.Collections.Generic.HashSet`1<System.Int32> candidates)
    // Offset: 0x2B420CC
    void InitColliderCandidatesForNarrowPhase(::Fusion::IHitboxColliderContainer* container, ::System::Collections::Generic::HashSet_1<int>* candidates);
    // private System.Boolean RaycastNarrowPhase(ref Fusion.LagCompensation.RaycastQuery raycast, Fusion.IHitboxColliderContainer container, System.Collections.Generic.HashSet`1<System.Int32> candidates, out Fusion.HitboxHit hit)
    // Offset: 0x2B42294
    bool RaycastNarrowPhase(ByRef<::Fusion::LagCompensation::RaycastQuery> raycast, ::Fusion::IHitboxColliderContainer* container, ::System::Collections::Generic::HashSet_1<int>* candidates, ByRef<::Fusion::HitboxHit> hit);
    // private System.Boolean RaycastAllNarrowPhase(ref Fusion.LagCompensation.RaycastQuery raycast, Fusion.IHitboxColliderContainer container, System.Collections.Generic.HashSet`1<System.Int32> candidates, System.Collections.Generic.List`1<Fusion.HitboxHit> hits)
    // Offset: 0x2B425A0
    bool RaycastAllNarrowPhase(ByRef<::Fusion::LagCompensation::RaycastQuery> raycast, ::Fusion::IHitboxColliderContainer* container, ::System::Collections::Generic::HashSet_1<int>* candidates, ::System::Collections::Generic::List_1<::Fusion::HitboxHit>* hits);
    // private System.Boolean OverlapSphereNarrowPhase(ref Fusion.LagCompensation.SphereOverlapQuery sphereOverlap, Fusion.IHitboxColliderContainer container, System.Collections.Generic.HashSet`1<System.Int32> candidates, System.Collections.Generic.List`1<Fusion.HitboxHit> hits)
    // Offset: 0x2B42B00
    bool OverlapSphereNarrowPhase(ByRef<::Fusion::LagCompensation::SphereOverlapQuery> sphereOverlap, ::Fusion::IHitboxColliderContainer* container, ::System::Collections::Generic::HashSet_1<int>* candidates, ::System::Collections::Generic::List_1<::Fusion::HitboxHit>* hits);
    // private System.Boolean OverlapBoxNarrowPhase(ref Fusion.LagCompensationUtils/BoxNarrowData boxNarrowData, System.Boolean computeDetailedInfo, Fusion.IHitboxColliderContainer container, System.Collections.Generic.HashSet`1<System.Int32> candidates, System.Collections.Generic.List`1<Fusion.HitboxHit> hits)
    // Offset: 0x2B4303C
    bool OverlapBoxNarrowPhase(ByRef<::Fusion::LagCompensationUtils::BoxNarrowData> boxNarrowData, bool computeDetailedInfo, ::Fusion::IHitboxColliderContainer* container, ::System::Collections::Generic::HashSet_1<int>* candidates, ::System::Collections::Generic::List_1<::Fusion::HitboxHit>* hits);
    // System.Void PositionQueryInternal(ref Fusion.LagCompensation.Query query, out UnityEngine.Vector3 position, out UnityEngine.Quaternion rotation)
    // Offset: 0x2B3F364
    void PositionQueryInternal(ByRef<::Fusion::LagCompensation::Query> query, ByRef<::UnityEngine::Vector3> position, ByRef<::UnityEngine::Quaternion> rotation);
    // static UnityEngine.Quaternion QuaternionFromMatrix(UnityEngine.Matrix4x4 m)
    // Offset: 0x2B43BD8
    static ::UnityEngine::Quaternion QuaternionFromMatrix(::UnityEngine::Matrix4x4 m);
    // private System.Void GetClosestSnapshotForTick(System.Int32 tick, out Fusion.HitboxBuffer/HitboxSnapshot snapshot)
    // Offset: 0x2B43A04
    void GetClosestSnapshotForTick(int tick, ByRef<::Fusion::HitboxBuffer::HitboxSnapshot*> snapshot);
    // private System.Void RaycastBroadphase(ref Fusion.LagCompensation.Query query, System.Collections.Generic.HashSet`1<System.Int32> processedColliderIndices, out Fusion.IHitboxColliderContainer container)
    // Offset: 0x2B41F0C
    void RaycastBroadphase(ByRef<::Fusion::LagCompensation::Query> query, ::System::Collections::Generic::HashSet_1<int>* processedColliderIndices, ByRef<::Fusion::IHitboxColliderContainer*> container);
    // private System.Void OverlapSphereBroadphase(ref Fusion.LagCompensation.Query query, System.Collections.Generic.HashSet`1<System.Int32> processedColliderIndices, out Fusion.IHitboxColliderContainer container)
    // Offset: 0x2B42940
    void OverlapSphereBroadphase(ByRef<::Fusion::LagCompensation::Query> query, ::System::Collections::Generic::HashSet_1<int>* processedColliderIndices, ByRef<::Fusion::IHitboxColliderContainer*> container);
    // private System.Void OverlapBoxBroadphase(ref Fusion.LagCompensation.Query query, System.Collections.Generic.HashSet`1<System.Int32> processedColliderIndices, out Fusion.IHitboxColliderContainer container)
    // Offset: 0x2B42E7C
    void OverlapBoxBroadphase(ByRef<::Fusion::LagCompensation::Query> query, ::System::Collections::Generic::HashSet_1<int>* processedColliderIndices, ByRef<::Fusion::IHitboxColliderContainer*> container);
  }; // Fusion.HitboxBuffer
  #pragma pack(pop)
  static check_size<sizeof(HitboxBuffer), 56 + sizeof(::System::Collections::Generic::HashSet_1<int>*)> __Fusion_HitboxBufferSizeCheck;
  static_assert(sizeof(HitboxBuffer) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::HitboxBuffer::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Fusion::HitboxBuffer::*)()>(&Fusion::HitboxBuffer::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::HitboxBuffer*), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::HitboxBuffer::get_BVH
// Il2CppName: get_BVH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::BVH* (Fusion::HitboxBuffer::*)()>(&Fusion::HitboxBuffer::get_BVH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::HitboxBuffer*), "get_BVH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::HitboxBuffer::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::HitboxBuffer::HitboxSnapshot* (Fusion::HitboxBuffer::*)()>(&Fusion::HitboxBuffer::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::HitboxBuffer*), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::HitboxBuffer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::HitboxBuffer::Advance
// Il2CppName: Advance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::HitboxBuffer::*)(int, int)>(&Fusion::HitboxBuffer::Advance)> {
  static const MethodInfo* get() {
    static auto* tick = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* dataTick = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::HitboxBuffer*), "Advance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tick, dataTick});
  }
};
// Writing MetadataGetter for method: Fusion::HitboxBuffer::Optimize
// Il2CppName: Optimize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::HitboxBuffer::*)()>(&Fusion::HitboxBuffer::Optimize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::HitboxBuffer*), "Optimize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::HitboxBuffer::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::HitboxBuffer::*)(::Fusion::HitboxRoot*)>(&Fusion::HitboxBuffer::Add)> {
  static const MethodInfo* get() {
    static auto* root = &::il2cpp_utils::GetClassFromName("Fusion", "HitboxRoot")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::HitboxBuffer*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{root});
  }
};
// Writing MetadataGetter for method: Fusion::HitboxBuffer::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::HitboxBuffer::*)(::Fusion::HitboxRoot*)>(&Fusion::HitboxBuffer::Remove)> {
  static const MethodInfo* get() {
    static auto* root = &::il2cpp_utils::GetClassFromName("Fusion", "HitboxRoot")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::HitboxBuffer*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{root});
  }
};
// Writing MetadataGetter for method: Fusion::HitboxBuffer::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::HitboxBuffer::*)(::Fusion::HitboxRoot*)>(&Fusion::HitboxBuffer::Update)> {
  static const MethodInfo* get() {
    static auto* root = &::il2cpp_utils::GetClassFromName("Fusion", "HitboxRoot")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::HitboxBuffer*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{root});
  }
};
// Writing MetadataGetter for method: Fusion::HitboxBuffer::DebugDraw
// Il2CppName: DebugDraw
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::HitboxBuffer::*)(::UnityEngine::Color, ::UnityEngine::Color, bool, bool)>(&Fusion::HitboxBuffer::DebugDraw)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* historyColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* debugBroadphase = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* debugHistory = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::HitboxBuffer*), "DebugDraw", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color, historyColor, debugBroadphase, debugHistory});
  }
};
// Writing MetadataGetter for method: Fusion::HitboxBuffer::Raycast
// Il2CppName: Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::HitboxBuffer::*)(ByRef<::Fusion::LagCompensation::Query>, ByRef<::Fusion::HitboxHit>)>(&Fusion::HitboxBuffer::Raycast)> {
  static const MethodInfo* get() {
    static auto* query = &::il2cpp_utils::GetClassFromName("Fusion.LagCompensation", "Query")->this_arg;
    static auto* hit = &::il2cpp_utils::GetClassFromName("Fusion", "HitboxHit")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::HitboxBuffer*), "Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{query, hit});
  }
};
// Writing MetadataGetter for method: Fusion::HitboxBuffer::RaycastAll
// Il2CppName: RaycastAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::HitboxBuffer::*)(ByRef<::Fusion::LagCompensation::Query>, ::System::Collections::Generic::List_1<::Fusion::HitboxHit>*)>(&Fusion::HitboxBuffer::RaycastAll)> {
  static const MethodInfo* get() {
    static auto* query = &::il2cpp_utils::GetClassFromName("Fusion.LagCompensation", "Query")->this_arg;
    static auto* hits = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Fusion", "HitboxHit")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::HitboxBuffer*), "RaycastAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{query, hits});
  }
};
// Writing MetadataGetter for method: Fusion::HitboxBuffer::OverlapSphere
// Il2CppName: OverlapSphere
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::HitboxBuffer::*)(ByRef<::Fusion::LagCompensation::Query>, ::System::Collections::Generic::List_1<::Fusion::HitboxHit>*)>(&Fusion::HitboxBuffer::OverlapSphere)> {
  static const MethodInfo* get() {
    static auto* query = &::il2cpp_utils::GetClassFromName("Fusion.LagCompensation", "Query")->this_arg;
    static auto* hits = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Fusion", "HitboxHit")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::HitboxBuffer*), "OverlapSphere", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{query, hits});
  }
};
// Writing MetadataGetter for method: Fusion::HitboxBuffer::OverlapBox
// Il2CppName: OverlapBox
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::HitboxBuffer::*)(ByRef<::Fusion::LagCompensation::Query>, bool, ::System::Collections::Generic::List_1<::Fusion::HitboxHit>*)>(&Fusion::HitboxBuffer::OverlapBox)> {
  static const MethodInfo* get() {
    static auto* query = &::il2cpp_utils::GetClassFromName("Fusion.LagCompensation", "Query")->this_arg;
    static auto* computeDetailedInfo = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* hits = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Fusion", "HitboxHit")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::HitboxBuffer*), "OverlapBox", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{query, computeDetailedInfo, hits});
  }
};
// Writing MetadataGetter for method: Fusion::HitboxBuffer::InitColliderCandidatesForNarrowPhase
// Il2CppName: InitColliderCandidatesForNarrowPhase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::HitboxBuffer::*)(::Fusion::IHitboxColliderContainer*, ::System::Collections::Generic::HashSet_1<int>*)>(&Fusion::HitboxBuffer::InitColliderCandidatesForNarrowPhase)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Fusion", "IHitboxColliderContainer")->byval_arg;
    static auto* candidates = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "HashSet`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::HitboxBuffer*), "InitColliderCandidatesForNarrowPhase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container, candidates});
  }
};
// Writing MetadataGetter for method: Fusion::HitboxBuffer::RaycastNarrowPhase
// Il2CppName: RaycastNarrowPhase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::HitboxBuffer::*)(ByRef<::Fusion::LagCompensation::RaycastQuery>, ::Fusion::IHitboxColliderContainer*, ::System::Collections::Generic::HashSet_1<int>*, ByRef<::Fusion::HitboxHit>)>(&Fusion::HitboxBuffer::RaycastNarrowPhase)> {
  static const MethodInfo* get() {
    static auto* raycast = &::il2cpp_utils::GetClassFromName("Fusion.LagCompensation", "RaycastQuery")->this_arg;
    static auto* container = &::il2cpp_utils::GetClassFromName("Fusion", "IHitboxColliderContainer")->byval_arg;
    static auto* candidates = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "HashSet`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    static auto* hit = &::il2cpp_utils::GetClassFromName("Fusion", "HitboxHit")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::HitboxBuffer*), "RaycastNarrowPhase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{raycast, container, candidates, hit});
  }
};
// Writing MetadataGetter for method: Fusion::HitboxBuffer::RaycastAllNarrowPhase
// Il2CppName: RaycastAllNarrowPhase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::HitboxBuffer::*)(ByRef<::Fusion::LagCompensation::RaycastQuery>, ::Fusion::IHitboxColliderContainer*, ::System::Collections::Generic::HashSet_1<int>*, ::System::Collections::Generic::List_1<::Fusion::HitboxHit>*)>(&Fusion::HitboxBuffer::RaycastAllNarrowPhase)> {
  static const MethodInfo* get() {
    static auto* raycast = &::il2cpp_utils::GetClassFromName("Fusion.LagCompensation", "RaycastQuery")->this_arg;
    static auto* container = &::il2cpp_utils::GetClassFromName("Fusion", "IHitboxColliderContainer")->byval_arg;
    static auto* candidates = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "HashSet`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    static auto* hits = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Fusion", "HitboxHit")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::HitboxBuffer*), "RaycastAllNarrowPhase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{raycast, container, candidates, hits});
  }
};
// Writing MetadataGetter for method: Fusion::HitboxBuffer::OverlapSphereNarrowPhase
// Il2CppName: OverlapSphereNarrowPhase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::HitboxBuffer::*)(ByRef<::Fusion::LagCompensation::SphereOverlapQuery>, ::Fusion::IHitboxColliderContainer*, ::System::Collections::Generic::HashSet_1<int>*, ::System::Collections::Generic::List_1<::Fusion::HitboxHit>*)>(&Fusion::HitboxBuffer::OverlapSphereNarrowPhase)> {
  static const MethodInfo* get() {
    static auto* sphereOverlap = &::il2cpp_utils::GetClassFromName("Fusion.LagCompensation", "SphereOverlapQuery")->this_arg;
    static auto* container = &::il2cpp_utils::GetClassFromName("Fusion", "IHitboxColliderContainer")->byval_arg;
    static auto* candidates = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "HashSet`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    static auto* hits = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Fusion", "HitboxHit")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::HitboxBuffer*), "OverlapSphereNarrowPhase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sphereOverlap, container, candidates, hits});
  }
};
// Writing MetadataGetter for method: Fusion::HitboxBuffer::OverlapBoxNarrowPhase
// Il2CppName: OverlapBoxNarrowPhase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::HitboxBuffer::*)(ByRef<::Fusion::LagCompensationUtils::BoxNarrowData>, bool, ::Fusion::IHitboxColliderContainer*, ::System::Collections::Generic::HashSet_1<int>*, ::System::Collections::Generic::List_1<::Fusion::HitboxHit>*)>(&Fusion::HitboxBuffer::OverlapBoxNarrowPhase)> {
  static const MethodInfo* get() {
    static auto* boxNarrowData = &::il2cpp_utils::GetClassFromName("Fusion", "LagCompensationUtils/BoxNarrowData")->this_arg;
    static auto* computeDetailedInfo = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* container = &::il2cpp_utils::GetClassFromName("Fusion", "IHitboxColliderContainer")->byval_arg;
    static auto* candidates = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "HashSet`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    static auto* hits = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Fusion", "HitboxHit")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::HitboxBuffer*), "OverlapBoxNarrowPhase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{boxNarrowData, computeDetailedInfo, container, candidates, hits});
  }
};
// Writing MetadataGetter for method: Fusion::HitboxBuffer::PositionQueryInternal
// Il2CppName: PositionQueryInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::HitboxBuffer::*)(ByRef<::Fusion::LagCompensation::Query>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Quaternion>)>(&Fusion::HitboxBuffer::PositionQueryInternal)> {
  static const MethodInfo* get() {
    static auto* query = &::il2cpp_utils::GetClassFromName("Fusion.LagCompensation", "Query")->this_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::HitboxBuffer*), "PositionQueryInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{query, position, rotation});
  }
};
// Writing MetadataGetter for method: Fusion::HitboxBuffer::QuaternionFromMatrix
// Il2CppName: QuaternionFromMatrix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Matrix4x4)>(&Fusion::HitboxBuffer::QuaternionFromMatrix)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::HitboxBuffer*), "QuaternionFromMatrix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m});
  }
};
// Writing MetadataGetter for method: Fusion::HitboxBuffer::GetClosestSnapshotForTick
// Il2CppName: GetClosestSnapshotForTick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::HitboxBuffer::*)(int, ByRef<::Fusion::HitboxBuffer::HitboxSnapshot*>)>(&Fusion::HitboxBuffer::GetClosestSnapshotForTick)> {
  static const MethodInfo* get() {
    static auto* tick = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* snapshot = &::il2cpp_utils::GetClassFromName("Fusion", "HitboxBuffer/HitboxSnapshot")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::HitboxBuffer*), "GetClosestSnapshotForTick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tick, snapshot});
  }
};
// Writing MetadataGetter for method: Fusion::HitboxBuffer::RaycastBroadphase
// Il2CppName: RaycastBroadphase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::HitboxBuffer::*)(ByRef<::Fusion::LagCompensation::Query>, ::System::Collections::Generic::HashSet_1<int>*, ByRef<::Fusion::IHitboxColliderContainer*>)>(&Fusion::HitboxBuffer::RaycastBroadphase)> {
  static const MethodInfo* get() {
    static auto* query = &::il2cpp_utils::GetClassFromName("Fusion.LagCompensation", "Query")->this_arg;
    static auto* processedColliderIndices = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "HashSet`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    static auto* container = &::il2cpp_utils::GetClassFromName("Fusion", "IHitboxColliderContainer")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::HitboxBuffer*), "RaycastBroadphase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{query, processedColliderIndices, container});
  }
};
// Writing MetadataGetter for method: Fusion::HitboxBuffer::OverlapSphereBroadphase
// Il2CppName: OverlapSphereBroadphase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::HitboxBuffer::*)(ByRef<::Fusion::LagCompensation::Query>, ::System::Collections::Generic::HashSet_1<int>*, ByRef<::Fusion::IHitboxColliderContainer*>)>(&Fusion::HitboxBuffer::OverlapSphereBroadphase)> {
  static const MethodInfo* get() {
    static auto* query = &::il2cpp_utils::GetClassFromName("Fusion.LagCompensation", "Query")->this_arg;
    static auto* processedColliderIndices = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "HashSet`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    static auto* container = &::il2cpp_utils::GetClassFromName("Fusion", "IHitboxColliderContainer")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::HitboxBuffer*), "OverlapSphereBroadphase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{query, processedColliderIndices, container});
  }
};
// Writing MetadataGetter for method: Fusion::HitboxBuffer::OverlapBoxBroadphase
// Il2CppName: OverlapBoxBroadphase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::HitboxBuffer::*)(ByRef<::Fusion::LagCompensation::Query>, ::System::Collections::Generic::HashSet_1<int>*, ByRef<::Fusion::IHitboxColliderContainer*>)>(&Fusion::HitboxBuffer::OverlapBoxBroadphase)> {
  static const MethodInfo* get() {
    static auto* query = &::il2cpp_utils::GetClassFromName("Fusion.LagCompensation", "Query")->this_arg;
    static auto* processedColliderIndices = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "HashSet`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    static auto* container = &::il2cpp_utils::GetClassFromName("Fusion", "IHitboxColliderContainer")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::HitboxBuffer*), "OverlapBoxBroadphase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{query, processedColliderIndices, container});
  }
};
