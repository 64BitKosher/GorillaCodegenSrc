// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.NetworkBehaviour
#include "Fusion/NetworkBehaviour.hpp"
// Including type: Fusion.Changed`1
#include "Fusion/Changed_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion
namespace Fusion {
  // Forward declaring type: ChangedDelegate`1<T>
  template<typename T>
  class ChangedDelegate_1;
  // Forward declaring type: NetworkBehaviourCallbacks`1<T>
  template<typename T>
  class NetworkBehaviourCallbacks_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PlayerAOIPrototype
  class PlayerAOIPrototype;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PlayerAOIPrototype);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerAOIPrototype*, "", "PlayerAOIPrototype");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: PlayerAOIPrototype
  // [TokenAttribute] Offset: FFFFFFFF
  // [NetworkBehaviourWeavedAttribute] Offset: FFFFFFFF
  // [ScriptHelpAttribute] Offset: FFFFFFFF
  class PlayerAOIPrototype : public ::Fusion::NetworkBehaviour {
    public:
    public:
    // protected System.Boolean DrawAreaOfInterestRadius
    // Size: 0x1
    // Offset: 0x78
    bool DrawAreaOfInterestRadius;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: DrawAreaOfInterestRadius and: Radius
    char __padding0[0x3] = {};
    // public System.Single Radius
    // Size: 0x4
    // Offset: 0x7C
    float Radius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get static field: static Fusion.Changed`1<PlayerAOIPrototype> $IL2CPP_CHANGED
    static ::Fusion::Changed_1<::GlobalNamespace::PlayerAOIPrototype*> _get_$IL2CPP_CHANGED();
    // Set static field: static Fusion.Changed`1<PlayerAOIPrototype> $IL2CPP_CHANGED
    static void _set_$IL2CPP_CHANGED(::Fusion::Changed_1<::GlobalNamespace::PlayerAOIPrototype*> value);
    // Get static field: static Fusion.ChangedDelegate`1<PlayerAOIPrototype> $IL2CPP_CHANGED_DELEGATE
    static ::Fusion::ChangedDelegate_1<::GlobalNamespace::PlayerAOIPrototype*>* _get_$IL2CPP_CHANGED_DELEGATE();
    // Set static field: static Fusion.ChangedDelegate`1<PlayerAOIPrototype> $IL2CPP_CHANGED_DELEGATE
    static void _set_$IL2CPP_CHANGED_DELEGATE(::Fusion::ChangedDelegate_1<::GlobalNamespace::PlayerAOIPrototype*>* value);
    // Get static field: static Fusion.NetworkBehaviourCallbacks`1<PlayerAOIPrototype> $IL2CPP_NETWORK_BEHAVIOUR_CALLBACKS
    static ::Fusion::NetworkBehaviourCallbacks_1<::GlobalNamespace::PlayerAOIPrototype*>* _get_$IL2CPP_NETWORK_BEHAVIOUR_CALLBACKS();
    // Set static field: static Fusion.NetworkBehaviourCallbacks`1<PlayerAOIPrototype> $IL2CPP_NETWORK_BEHAVIOUR_CALLBACKS
    static void _set_$IL2CPP_NETWORK_BEHAVIOUR_CALLBACKS(::Fusion::NetworkBehaviourCallbacks_1<::GlobalNamespace::PlayerAOIPrototype*>* value);
    // Get instance field reference: protected System.Boolean DrawAreaOfInterestRadius
    [[deprecated("Use field access instead!")]] bool& dyn_DrawAreaOfInterestRadius();
    // Get instance field reference: public System.Single Radius
    [[deprecated("Use field access instead!")]] float& dyn_Radius();
    // private System.Void OnDrawGizmos()
    // Offset: 0x295AD3C
    void OnDrawGizmos();
    // public System.Void .ctor()
    // Offset: 0x295ADE0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerAOIPrototype* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlayerAOIPrototype::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerAOIPrototype*, creationType>()));
    }
    // public override System.Void FixedUpdateNetwork()
    // Offset: 0x295AC34
    // Implemented from: Fusion.NetworkBehaviour
    // Base method: System.Void NetworkBehaviour::FixedUpdateNetwork()
    void FixedUpdateNetwork();
    // public override System.Void CopyBackingFieldsToState(System.Boolean )
    // Offset: 0x295ADF0
    // Implemented from: Fusion.NetworkBehaviour
    // Base method: System.Void NetworkBehaviour::CopyBackingFieldsToState(System.Boolean )
    void CopyBackingFieldsToState(bool param_0);
    // public override System.Void CopyStateToBackingFields()
    // Offset: 0x295ADF4
    // Implemented from: Fusion.NetworkBehaviour
    // Base method: System.Void NetworkBehaviour::CopyStateToBackingFields()
    void CopyStateToBackingFields();
  }; // PlayerAOIPrototype
  #pragma pack(pop)
  static check_size<sizeof(PlayerAOIPrototype), 124 + sizeof(float)> __GlobalNamespace_PlayerAOIPrototypeSizeCheck;
  static_assert(sizeof(PlayerAOIPrototype) == 0x80);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerAOIPrototype::OnDrawGizmos
// Il2CppName: OnDrawGizmos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerAOIPrototype::*)()>(&GlobalNamespace::PlayerAOIPrototype::OnDrawGizmos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAOIPrototype*), "OnDrawGizmos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAOIPrototype::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlayerAOIPrototype::FixedUpdateNetwork
// Il2CppName: FixedUpdateNetwork
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerAOIPrototype::*)()>(&GlobalNamespace::PlayerAOIPrototype::FixedUpdateNetwork)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAOIPrototype*), "FixedUpdateNetwork", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAOIPrototype::CopyBackingFieldsToState
// Il2CppName: CopyBackingFieldsToState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerAOIPrototype::*)(bool)>(&GlobalNamespace::PlayerAOIPrototype::CopyBackingFieldsToState)> {
  static const MethodInfo* get() {
    static auto* param_0 = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAOIPrototype*), "CopyBackingFieldsToState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{param_0});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerAOIPrototype::CopyStateToBackingFields
// Il2CppName: CopyStateToBackingFields
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerAOIPrototype::*)()>(&GlobalNamespace::PlayerAOIPrototype::CopyStateToBackingFields)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerAOIPrototype*), "CopyStateToBackingFields", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
