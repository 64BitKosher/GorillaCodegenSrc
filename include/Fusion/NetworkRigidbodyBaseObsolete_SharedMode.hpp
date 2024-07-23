// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.NetworkRigidbodyBaseObsolete
#include "Fusion/NetworkRigidbodyBaseObsolete.hpp"
// Including type: Fusion.NetworkRigidbodyBaseObsolete/Implementation
#include "Fusion/NetworkRigidbodyBaseObsolete_Implementation.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::NetworkRigidbodyBaseObsolete::SharedMode);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkRigidbodyBaseObsolete::SharedMode*, "Fusion", "NetworkRigidbodyBaseObsolete/SharedMode");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.NetworkRigidbodyBaseObsolete/SharedMode
  // [TokenAttribute] Offset: FFFFFFFF
  class NetworkRigidbodyBaseObsolete::SharedMode : public ::Fusion::NetworkRigidbodyBaseObsolete::Implementation {
    public:
    // public override System.Void Spawned()
    // Offset: 0x2B2B468
    // Implemented from: Fusion.NetworkRigidbodyBaseObsolete/Implementation
    // Base method: System.Void Implementation::Spawned()
    void Spawned();
    // public override System.Void Render()
    // Offset: 0x2B2B4B8
    // Implemented from: Fusion.NetworkRigidbodyBaseObsolete/Implementation
    // Base method: System.Void Implementation::Render()
    void Render();
    // public override System.Void CopyBackingFieldsToState()
    // Offset: 0x2B2B578
    // Implemented from: Fusion.NetworkRigidbodyBaseObsolete/Implementation
    // Base method: System.Void Implementation::CopyBackingFieldsToState()
    void CopyBackingFieldsToState();
    // public override System.Void RemotePrefabCreated()
    // Offset: 0x2B2B5BC
    // Implemented from: Fusion.NetworkRigidbodyBaseObsolete/Implementation
    // Base method: System.Void Implementation::RemotePrefabCreated()
    void RemotePrefabCreated();
    // public override System.Void BeforeCopyPreviousState()
    // Offset: 0x2B2B5E4
    // Implemented from: Fusion.NetworkRigidbodyBaseObsolete/Implementation
    // Base method: System.Void Implementation::BeforeCopyPreviousState()
    void BeforeCopyPreviousState();
    // public override System.Void BeforeAllTicks(System.Boolean resimulation)
    // Offset: 0x2B2B634
    // Implemented from: Fusion.NetworkRigidbodyBaseObsolete/Implementation
    // Base method: System.Void Implementation::BeforeAllTicks(System.Boolean resimulation)
    void BeforeAllTicks(bool resimulation);
    // public override System.Void AfterAllTicks(System.Boolean resimulation)
    // Offset: 0x2B2B6A0
    // Implemented from: Fusion.NetworkRigidbodyBaseObsolete/Implementation
    // Base method: System.Void Implementation::AfterAllTicks(System.Boolean resimulation)
    void AfterAllTicks(bool resimulation);
    // public override System.Void StateAuthorityChanged()
    // Offset: 0x2B2B708
    // Implemented from: Fusion.NetworkRigidbodyBaseObsolete/Implementation
    // Base method: System.Void Implementation::StateAuthorityChanged()
    void StateAuthorityChanged();
    // public System.Void .ctor()
    // Offset: 0x2B2AB10
    // Implemented from: Fusion.NetworkRigidbodyBaseObsolete/Implementation
    // Base method: System.Void Implementation::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkRigidbodyBaseObsolete::SharedMode* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkRigidbodyBaseObsolete::SharedMode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkRigidbodyBaseObsolete::SharedMode*, creationType>()));
    }
  }; // Fusion.NetworkRigidbodyBaseObsolete/SharedMode
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::NetworkRigidbodyBaseObsolete::SharedMode::Spawned
// Il2CppName: Spawned
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkRigidbodyBaseObsolete::SharedMode::*)()>(&Fusion::NetworkRigidbodyBaseObsolete::SharedMode::Spawned)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkRigidbodyBaseObsolete::SharedMode*), "Spawned", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkRigidbodyBaseObsolete::SharedMode::Render
// Il2CppName: Render
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkRigidbodyBaseObsolete::SharedMode::*)()>(&Fusion::NetworkRigidbodyBaseObsolete::SharedMode::Render)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkRigidbodyBaseObsolete::SharedMode*), "Render", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkRigidbodyBaseObsolete::SharedMode::CopyBackingFieldsToState
// Il2CppName: CopyBackingFieldsToState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkRigidbodyBaseObsolete::SharedMode::*)()>(&Fusion::NetworkRigidbodyBaseObsolete::SharedMode::CopyBackingFieldsToState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkRigidbodyBaseObsolete::SharedMode*), "CopyBackingFieldsToState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkRigidbodyBaseObsolete::SharedMode::RemotePrefabCreated
// Il2CppName: RemotePrefabCreated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkRigidbodyBaseObsolete::SharedMode::*)()>(&Fusion::NetworkRigidbodyBaseObsolete::SharedMode::RemotePrefabCreated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkRigidbodyBaseObsolete::SharedMode*), "RemotePrefabCreated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkRigidbodyBaseObsolete::SharedMode::BeforeCopyPreviousState
// Il2CppName: BeforeCopyPreviousState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkRigidbodyBaseObsolete::SharedMode::*)()>(&Fusion::NetworkRigidbodyBaseObsolete::SharedMode::BeforeCopyPreviousState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkRigidbodyBaseObsolete::SharedMode*), "BeforeCopyPreviousState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkRigidbodyBaseObsolete::SharedMode::BeforeAllTicks
// Il2CppName: BeforeAllTicks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkRigidbodyBaseObsolete::SharedMode::*)(bool)>(&Fusion::NetworkRigidbodyBaseObsolete::SharedMode::BeforeAllTicks)> {
  static const MethodInfo* get() {
    static auto* resimulation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkRigidbodyBaseObsolete::SharedMode*), "BeforeAllTicks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resimulation});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkRigidbodyBaseObsolete::SharedMode::AfterAllTicks
// Il2CppName: AfterAllTicks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkRigidbodyBaseObsolete::SharedMode::*)(bool)>(&Fusion::NetworkRigidbodyBaseObsolete::SharedMode::AfterAllTicks)> {
  static const MethodInfo* get() {
    static auto* resimulation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkRigidbodyBaseObsolete::SharedMode*), "AfterAllTicks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resimulation});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkRigidbodyBaseObsolete::SharedMode::StateAuthorityChanged
// Il2CppName: StateAuthorityChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkRigidbodyBaseObsolete::SharedMode::*)()>(&Fusion::NetworkRigidbodyBaseObsolete::SharedMode::StateAuthorityChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkRigidbodyBaseObsolete::SharedMode*), "StateAuthorityChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkRigidbodyBaseObsolete::SharedMode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!