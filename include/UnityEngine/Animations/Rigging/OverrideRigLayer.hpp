// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Animations.Rigging.IRigLayer
#include "UnityEngine/Animations/Rigging/IRigLayer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Animations::Rigging
namespace UnityEngine::Animations::Rigging {
  // Forward declaring type: Rig
  class Rig;
  // Forward declaring type: IRigConstraint
  class IRigConstraint;
}
// Forward declaring namespace: UnityEngine::Animations
namespace UnityEngine::Animations {
  // Forward declaring type: IAnimationJob
  class IAnimationJob;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
}
// Completed forward declares
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Forward declaring type: OverrideRigLayer
  class OverrideRigLayer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Animations::Rigging::OverrideRigLayer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::Rigging::OverrideRigLayer*, "UnityEngine.Animations.Rigging", "OverrideRigLayer");
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Animations.Rigging.OverrideRigLayer
  // [TokenAttribute] Offset: FFFFFFFF
  class OverrideRigLayer : public ::Il2CppObject/*, public ::UnityEngine::Animations::Rigging::IRigLayer*/ {
    public:
    public:
    // private UnityEngine.Animations.Rigging.Rig m_Rig
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Animations::Rigging::Rig* m_Rig;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animations::Rigging::Rig*) == 0x8);
    // private System.Boolean m_Active
    // Size: 0x1
    // Offset: 0x18
    bool m_Active;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_Active and: m_Constraints
    char __padding1[0x7] = {};
    // private UnityEngine.Animations.Rigging.IRigConstraint[] m_Constraints
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::UnityEngine::Animations::Rigging::IRigConstraint*> m_Constraints;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Animations::Rigging::IRigConstraint*>) == 0x8);
    // private UnityEngine.Animations.IAnimationJob[] m_Jobs
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::UnityEngine::Animations::IAnimationJob*> m_Jobs;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Animations::IAnimationJob*>) == 0x8);
    // private System.Boolean <isInitialized>k__BackingField
    // Size: 0x1
    // Offset: 0x30
    bool isInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::Animations::Rigging::IRigLayer
    operator ::UnityEngine::Animations::Rigging::IRigLayer() noexcept {
      return *reinterpret_cast<::UnityEngine::Animations::Rigging::IRigLayer*>(this);
    }
    // Get instance field reference: private UnityEngine.Animations.Rigging.Rig m_Rig
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animations::Rigging::Rig*& dyn_m_Rig();
    // Get instance field reference: private System.Boolean m_Active
    [[deprecated("Use field access instead!")]] bool& dyn_m_Active();
    // Get instance field reference: private UnityEngine.Animations.Rigging.IRigConstraint[] m_Constraints
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Animations::Rigging::IRigConstraint*>& dyn_m_Constraints();
    // Get instance field reference: private UnityEngine.Animations.IAnimationJob[] m_Jobs
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Animations::IAnimationJob*>& dyn_m_Jobs();
    // Get instance field reference: private System.Boolean <isInitialized>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$isInitialized$k__BackingField();
    // public UnityEngine.Animations.Rigging.Rig get_rig()
    // Offset: 0x5076EF8
    ::UnityEngine::Animations::Rigging::Rig* get_rig();
    // private System.Void set_rig(UnityEngine.Animations.Rigging.Rig value)
    // Offset: 0x5076F00
    void set_rig(::UnityEngine::Animations::Rigging::Rig* value);
    // public System.Boolean get_active()
    // Offset: 0x5076F08
    bool get_active();
    // public System.Void set_active(System.Boolean value)
    // Offset: 0x5076F10
    void set_active(bool value);
    // public System.String get_name()
    // Offset: 0x5076F1C
    ::StringW get_name();
    // public UnityEngine.Animations.Rigging.IRigConstraint[] get_constraints()
    // Offset: 0x5076FC4
    ::ArrayW<::UnityEngine::Animations::Rigging::IRigConstraint*> get_constraints();
    // public UnityEngine.Animations.IAnimationJob[] get_jobs()
    // Offset: 0x5076FDC
    ::ArrayW<::UnityEngine::Animations::IAnimationJob*> get_jobs();
    // public System.Boolean get_isInitialized()
    // Offset: 0x5076FF4
    bool get_isInitialized();
    // private System.Void set_isInitialized(System.Boolean value)
    // Offset: 0x5076FFC
    void set_isInitialized(bool value);
    // public System.Void .ctor(UnityEngine.Animations.Rigging.Rig rig, UnityEngine.Animations.Rigging.IRigConstraint[] constraints, System.Boolean active)
    // Offset: 0x5077008
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OverrideRigLayer* New_ctor(::UnityEngine::Animations::Rigging::Rig* rig, ::ArrayW<::UnityEngine::Animations::Rigging::IRigConstraint*> constraints, bool active) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Animations::Rigging::OverrideRigLayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OverrideRigLayer*, creationType>(rig, constraints, active)));
    }
    // public System.Boolean Initialize(UnityEngine.Animator animator)
    // Offset: 0x5077068
    bool Initialize(::UnityEngine::Animator* animator);
    // public System.Void Update()
    // Offset: 0x5077250
    void Update();
    // public System.Void Reset()
    // Offset: 0x5077360
    void Reset();
    // public System.Boolean IsValid()
    // Offset: 0x50774AC
    bool IsValid();
  }; // UnityEngine.Animations.Rigging.OverrideRigLayer
  #pragma pack(pop)
  static check_size<sizeof(OverrideRigLayer), 48 + sizeof(bool)> __UnityEngine_Animations_Rigging_OverrideRigLayerSizeCheck;
  static_assert(sizeof(OverrideRigLayer) == 0x31);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::OverrideRigLayer::get_rig
// Il2CppName: get_rig
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Animations::Rigging::Rig* (UnityEngine::Animations::Rigging::OverrideRigLayer::*)()>(&UnityEngine::Animations::Rigging::OverrideRigLayer::get_rig)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::OverrideRigLayer*), "get_rig", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::OverrideRigLayer::set_rig
// Il2CppName: set_rig
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::OverrideRigLayer::*)(::UnityEngine::Animations::Rigging::Rig*)>(&UnityEngine::Animations::Rigging::OverrideRigLayer::set_rig)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations.Rigging", "Rig")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::OverrideRigLayer*), "set_rig", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::OverrideRigLayer::get_active
// Il2CppName: get_active
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animations::Rigging::OverrideRigLayer::*)()>(&UnityEngine::Animations::Rigging::OverrideRigLayer::get_active)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::OverrideRigLayer*), "get_active", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::OverrideRigLayer::set_active
// Il2CppName: set_active
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::OverrideRigLayer::*)(bool)>(&UnityEngine::Animations::Rigging::OverrideRigLayer::set_active)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::OverrideRigLayer*), "set_active", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::OverrideRigLayer::get_name
// Il2CppName: get_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Animations::Rigging::OverrideRigLayer::*)()>(&UnityEngine::Animations::Rigging::OverrideRigLayer::get_name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::OverrideRigLayer*), "get_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::OverrideRigLayer::get_constraints
// Il2CppName: get_constraints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Animations::Rigging::IRigConstraint*> (UnityEngine::Animations::Rigging::OverrideRigLayer::*)()>(&UnityEngine::Animations::Rigging::OverrideRigLayer::get_constraints)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::OverrideRigLayer*), "get_constraints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::OverrideRigLayer::get_jobs
// Il2CppName: get_jobs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Animations::IAnimationJob*> (UnityEngine::Animations::Rigging::OverrideRigLayer::*)()>(&UnityEngine::Animations::Rigging::OverrideRigLayer::get_jobs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::OverrideRigLayer*), "get_jobs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::OverrideRigLayer::get_isInitialized
// Il2CppName: get_isInitialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animations::Rigging::OverrideRigLayer::*)()>(&UnityEngine::Animations::Rigging::OverrideRigLayer::get_isInitialized)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::OverrideRigLayer*), "get_isInitialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::OverrideRigLayer::set_isInitialized
// Il2CppName: set_isInitialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::OverrideRigLayer::*)(bool)>(&UnityEngine::Animations::Rigging::OverrideRigLayer::set_isInitialized)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::OverrideRigLayer*), "set_isInitialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::OverrideRigLayer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::OverrideRigLayer::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animations::Rigging::OverrideRigLayer::*)(::UnityEngine::Animator*)>(&UnityEngine::Animations::Rigging::OverrideRigLayer::Initialize)> {
  static const MethodInfo* get() {
    static auto* animator = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animator")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::OverrideRigLayer*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animator});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::OverrideRigLayer::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::OverrideRigLayer::*)()>(&UnityEngine::Animations::Rigging::OverrideRigLayer::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::OverrideRigLayer*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::OverrideRigLayer::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::OverrideRigLayer::*)()>(&UnityEngine::Animations::Rigging::OverrideRigLayer::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::OverrideRigLayer*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::OverrideRigLayer::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animations::Rigging::OverrideRigLayer::*)()>(&UnityEngine::Animations::Rigging::OverrideRigLayer::IsValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::OverrideRigLayer*), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
