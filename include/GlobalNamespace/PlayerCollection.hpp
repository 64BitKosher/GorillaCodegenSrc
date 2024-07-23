// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collider
  class Collider;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PlayerCollection
  class PlayerCollection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PlayerCollection);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerCollection*, "", "PlayerCollection");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayerCollection
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerCollection : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::PlayerCollection::$$c__DisplayClass5_0
    class $$c__DisplayClass5_0;
    public:
    // public readonly System.Collections.Generic.List`1<VRRig> containedRigs
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::GlobalNamespace::VRRig*>* containedRigs;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::VRRig*>*) == 0x8);
    public:
    // Get instance field reference: public readonly System.Collections.Generic.List`1<VRRig> containedRigs
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::VRRig*>*& dyn_containedRigs();
    // private System.Void Start()
    // Offset: 0x2960D3C
    void Start();
    // private System.Void OnDestroy()
    // Offset: 0x2960DF8
    void OnDestroy();
    // public System.Void OnTriggerEnter(UnityEngine.Collider other)
    // Offset: 0x2960EB4
    void OnTriggerEnter(::UnityEngine::Collider* other);
    // public System.Void OnTriggerExit(UnityEngine.Collider other)
    // Offset: 0x296106C
    void OnTriggerExit(::UnityEngine::Collider* other);
    // public System.Void OnPlayerLeftRoom(System.Int32 otherPlayerId)
    // Offset: 0x2961374
    void OnPlayerLeftRoom(int otherPlayerId);
    // public System.Void .ctor()
    // Offset: 0x29614A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerCollection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlayerCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerCollection*, creationType>()));
    }
  }; // PlayerCollection
  #pragma pack(pop)
  static check_size<sizeof(PlayerCollection), 32 + sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::VRRig*>*)> __GlobalNamespace_PlayerCollectionSizeCheck;
  static_assert(sizeof(PlayerCollection) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerCollection::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerCollection::*)()>(&GlobalNamespace::PlayerCollection::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerCollection*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerCollection::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerCollection::*)()>(&GlobalNamespace::PlayerCollection::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerCollection*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerCollection::OnTriggerEnter
// Il2CppName: OnTriggerEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerCollection::*)(::UnityEngine::Collider*)>(&GlobalNamespace::PlayerCollection::OnTriggerEnter)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerCollection*), "OnTriggerEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerCollection::OnTriggerExit
// Il2CppName: OnTriggerExit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerCollection::*)(::UnityEngine::Collider*)>(&GlobalNamespace::PlayerCollection::OnTriggerExit)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerCollection*), "OnTriggerExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerCollection::OnPlayerLeftRoom
// Il2CppName: OnPlayerLeftRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerCollection::*)(int)>(&GlobalNamespace::PlayerCollection::OnPlayerLeftRoom)> {
  static const MethodInfo* get() {
    static auto* otherPlayerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerCollection*), "OnPlayerLeftRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{otherPlayerId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!