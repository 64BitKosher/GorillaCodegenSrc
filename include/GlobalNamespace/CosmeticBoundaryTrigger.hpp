// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GorillaTriggerBox
#include "GlobalNamespace/GorillaTriggerBox.hpp"
// Including type: TimeSince
#include "GlobalNamespace/TimeSince.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: VRRig
  class VRRig;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collider
  class Collider;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CosmeticBoundaryTrigger
  class CosmeticBoundaryTrigger;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CosmeticBoundaryTrigger);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CosmeticBoundaryTrigger*, "", "CosmeticBoundaryTrigger");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: CosmeticBoundaryTrigger
  // [TokenAttribute] Offset: FFFFFFFF
  class CosmeticBoundaryTrigger : public ::GlobalNamespace::GorillaTriggerBox {
    public:
    public:
    // public VRRig rigRef
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::VRRig* rigRef;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::VRRig*) == 0x8);
    public:
    // Get static field: static private TimeSince sinceLastTryOnEvent
    static ::GlobalNamespace::TimeSince _get_sinceLastTryOnEvent();
    // Set static field: static private TimeSince sinceLastTryOnEvent
    static void _set_sinceLastTryOnEvent(::GlobalNamespace::TimeSince value);
    // Get instance field reference: public VRRig rigRef
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::VRRig*& dyn_rigRef();
    // public System.Void OnTriggerEnter(UnityEngine.Collider other)
    // Offset: 0x26AA068
    void OnTriggerEnter(::UnityEngine::Collider* other);
    // public System.Void OnTriggerExit(UnityEngine.Collider other)
    // Offset: 0x26AA230
    void OnTriggerExit(::UnityEngine::Collider* other);
    // static private System.Void .cctor()
    // Offset: 0x26AA440
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x26AA438
    // Implemented from: GorillaTriggerBox
    // Base method: System.Void GorillaTriggerBox::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CosmeticBoundaryTrigger* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CosmeticBoundaryTrigger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CosmeticBoundaryTrigger*, creationType>()));
    }
  }; // CosmeticBoundaryTrigger
  #pragma pack(pop)
  static check_size<sizeof(CosmeticBoundaryTrigger), 40 + sizeof(::GlobalNamespace::VRRig*)> __GlobalNamespace_CosmeticBoundaryTriggerSizeCheck;
  static_assert(sizeof(CosmeticBoundaryTrigger) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CosmeticBoundaryTrigger::OnTriggerEnter
// Il2CppName: OnTriggerEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CosmeticBoundaryTrigger::*)(::UnityEngine::Collider*)>(&GlobalNamespace::CosmeticBoundaryTrigger::OnTriggerEnter)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CosmeticBoundaryTrigger*), "OnTriggerEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CosmeticBoundaryTrigger::OnTriggerExit
// Il2CppName: OnTriggerExit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CosmeticBoundaryTrigger::*)(::UnityEngine::Collider*)>(&GlobalNamespace::CosmeticBoundaryTrigger::OnTriggerExit)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CosmeticBoundaryTrigger*), "OnTriggerExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CosmeticBoundaryTrigger::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::CosmeticBoundaryTrigger::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CosmeticBoundaryTrigger*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CosmeticBoundaryTrigger::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
