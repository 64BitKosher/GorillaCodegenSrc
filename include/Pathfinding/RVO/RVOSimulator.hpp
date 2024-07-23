// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.VersionedMonoBehaviour
#include "Pathfinding/VersionedMonoBehaviour.hpp"
// Including type: Pathfinding.ThreadCount
#include "Pathfinding/ThreadCount.hpp"
// Including type: Pathfinding.RVO.MovementPlane
#include "Pathfinding/RVO/MovementPlane.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding::RVO
namespace Pathfinding::RVO {
  // Forward declaring type: Simulator
  class Simulator;
}
// Completed forward declares
// Type namespace: Pathfinding.RVO
namespace Pathfinding::RVO {
  // Forward declaring type: RVOSimulator
  class RVOSimulator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::RVO::RVOSimulator);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::RVO::RVOSimulator*, "Pathfinding.RVO", "RVOSimulator");
// Type namespace: Pathfinding.RVO
namespace Pathfinding::RVO {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.RVO.RVOSimulator
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: FFFFFFFF
  class RVOSimulator : public ::Pathfinding::VersionedMonoBehaviour {
    public:
    public:
    // public System.Int32 desiredSimulationFPS
    // Size: 0x4
    // Offset: 0x24
    int desiredSimulationFPS;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public Pathfinding.ThreadCount workerThreads
    // Size: 0x4
    // Offset: 0x28
    ::Pathfinding::ThreadCount workerThreads;
    // Field size check
    static_assert(sizeof(::Pathfinding::ThreadCount) == 0x4);
    // public System.Boolean doubleBuffering
    // Size: 0x1
    // Offset: 0x2C
    bool doubleBuffering;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: doubleBuffering and: symmetryBreakingBias
    char __padding2[0x3] = {};
    // public System.Single symmetryBreakingBias
    // Size: 0x4
    // Offset: 0x30
    float symmetryBreakingBias;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public Pathfinding.RVO.MovementPlane movementPlane
    // Size: 0x4
    // Offset: 0x34
    ::Pathfinding::RVO::MovementPlane movementPlane;
    // Field size check
    static_assert(sizeof(::Pathfinding::RVO::MovementPlane) == 0x4);
    // public System.Boolean drawObstacles
    // Size: 0x1
    // Offset: 0x38
    bool drawObstacles;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: drawObstacles and: simulator
    char __padding5[0x7] = {};
    // private Pathfinding.RVO.Simulator simulator
    // Size: 0x8
    // Offset: 0x40
    ::Pathfinding::RVO::Simulator* simulator;
    // Field size check
    static_assert(sizeof(::Pathfinding::RVO::Simulator*) == 0x8);
    public:
    // Get static field: static private Pathfinding.RVO.RVOSimulator <active>k__BackingField
    static ::Pathfinding::RVO::RVOSimulator* _get_$active$k__BackingField();
    // Set static field: static private Pathfinding.RVO.RVOSimulator <active>k__BackingField
    static void _set_$active$k__BackingField(::Pathfinding::RVO::RVOSimulator* value);
    // Get instance field reference: public System.Int32 desiredSimulationFPS
    [[deprecated("Use field access instead!")]] int& dyn_desiredSimulationFPS();
    // Get instance field reference: public Pathfinding.ThreadCount workerThreads
    [[deprecated("Use field access instead!")]] ::Pathfinding::ThreadCount& dyn_workerThreads();
    // Get instance field reference: public System.Boolean doubleBuffering
    [[deprecated("Use field access instead!")]] bool& dyn_doubleBuffering();
    // Get instance field reference: public System.Single symmetryBreakingBias
    [[deprecated("Use field access instead!")]] float& dyn_symmetryBreakingBias();
    // Get instance field reference: public Pathfinding.RVO.MovementPlane movementPlane
    [[deprecated("Use field access instead!")]] ::Pathfinding::RVO::MovementPlane& dyn_movementPlane();
    // Get instance field reference: public System.Boolean drawObstacles
    [[deprecated("Use field access instead!")]] bool& dyn_drawObstacles();
    // Get instance field reference: private Pathfinding.RVO.Simulator simulator
    [[deprecated("Use field access instead!")]] ::Pathfinding::RVO::Simulator*& dyn_simulator();
    // static public Pathfinding.RVO.RVOSimulator get_active()
    // Offset: 0x2A3CD3C
    static ::Pathfinding::RVO::RVOSimulator* get_active();
    // static private System.Void set_active(Pathfinding.RVO.RVOSimulator value)
    // Offset: 0x2A3CD84
    static void set_active(::Pathfinding::RVO::RVOSimulator* value);
    // public Pathfinding.RVO.Simulator GetSimulator()
    // Offset: 0x2A39E3C
    ::Pathfinding::RVO::Simulator* GetSimulator();
    // private System.Void OnEnable()
    // Offset: 0x2A3CDDC
    void OnEnable();
    // private System.Void Update()
    // Offset: 0x2A3CF90
    void Update();
    // private System.Void OnDestroy()
    // Offset: 0x2A3D054
    void OnDestroy();
    // protected override System.Void Awake()
    // Offset: 0x2A3CE34
    // Implemented from: Pathfinding.VersionedMonoBehaviour
    // Base method: System.Void VersionedMonoBehaviour::Awake()
    void Awake();
    // public System.Void .ctor()
    // Offset: 0x2A3D0C4
    // Implemented from: Pathfinding.VersionedMonoBehaviour
    // Base method: System.Void VersionedMonoBehaviour::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RVOSimulator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::RVO::RVOSimulator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RVOSimulator*, creationType>()));
    }
  }; // Pathfinding.RVO.RVOSimulator
  #pragma pack(pop)
  static check_size<sizeof(RVOSimulator), 64 + sizeof(::Pathfinding::RVO::Simulator*)> __Pathfinding_RVO_RVOSimulatorSizeCheck;
  static_assert(sizeof(RVOSimulator) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::RVO::RVOSimulator::get_active
// Il2CppName: get_active
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::RVO::RVOSimulator* (*)()>(&Pathfinding::RVO::RVOSimulator::get_active)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOSimulator*), "get_active", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOSimulator::set_active
// Il2CppName: set_active
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Pathfinding::RVO::RVOSimulator*)>(&Pathfinding::RVO::RVOSimulator::set_active)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Pathfinding.RVO", "RVOSimulator")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOSimulator*), "set_active", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOSimulator::GetSimulator
// Il2CppName: GetSimulator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::RVO::Simulator* (Pathfinding::RVO::RVOSimulator::*)()>(&Pathfinding::RVO::RVOSimulator::GetSimulator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOSimulator*), "GetSimulator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOSimulator::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::RVOSimulator::*)()>(&Pathfinding::RVO::RVOSimulator::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOSimulator*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOSimulator::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::RVOSimulator::*)()>(&Pathfinding::RVO::RVOSimulator::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOSimulator*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOSimulator::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::RVOSimulator::*)()>(&Pathfinding::RVO::RVOSimulator::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOSimulator*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOSimulator::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::RVO::RVOSimulator::*)()>(&Pathfinding::RVO::RVOSimulator::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::RVO::RVOSimulator*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::RVO::RVOSimulator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
