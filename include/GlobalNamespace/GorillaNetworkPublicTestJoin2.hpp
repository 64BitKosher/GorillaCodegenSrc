// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GorillaTriggerBox
#include "GlobalNamespace/GorillaTriggerBox.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GorillaLevelScreen
  class GorillaLevelScreen;
  // Forward declaring type: VRRig
  class VRRig;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: GorillaNetworking
namespace GorillaNetworking {
  // Forward declaring type: PhotonNetworkController
  class PhotonNetworkController;
}
// Forward declaring namespace: Photon::Pun
namespace Photon::Pun {
  // Forward declaring type: PhotonView
  class PhotonView;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GorillaNetworkPublicTestJoin2
  class GorillaNetworkPublicTestJoin2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GorillaNetworkPublicTestJoin2);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GorillaNetworkPublicTestJoin2*, "", "GorillaNetworkPublicTestJoin2");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA0
  #pragma pack(push, 1)
  // Autogenerated type: GorillaNetworkPublicTestJoin2
  // [TokenAttribute] Offset: FFFFFFFF
  class GorillaNetworkPublicTestJoin2 : public ::GlobalNamespace::GorillaTriggerBox {
    public:
    // Nested type: ::GlobalNamespace::GorillaNetworkPublicTestJoin2::$GracePeriod$d__17
    class $GracePeriod$d__17;
    public:
    // public UnityEngine.GameObject[] makeSureThisIsDisabled
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::UnityEngine::GameObject*> makeSureThisIsDisabled;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::GameObject*>) == 0x8);
    // public UnityEngine.GameObject[] makeSureThisIsEnabled
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::UnityEngine::GameObject*> makeSureThisIsEnabled;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::GameObject*>) == 0x8);
    // public System.String gameModeName
    // Size: 0x8
    // Offset: 0x38
    ::StringW gameModeName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public GorillaNetworking.PhotonNetworkController photonNetworkController
    // Size: 0x8
    // Offset: 0x40
    ::GorillaNetworking::PhotonNetworkController* photonNetworkController;
    // Field size check
    static_assert(sizeof(::GorillaNetworking::PhotonNetworkController*) == 0x8);
    // public System.String componentTypeToAdd
    // Size: 0x8
    // Offset: 0x48
    ::StringW componentTypeToAdd;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public UnityEngine.GameObject componentTarget
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::GameObject* componentTarget;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public GorillaLevelScreen[] joinScreens
    // Size: 0x8
    // Offset: 0x58
    ::ArrayW<::GlobalNamespace::GorillaLevelScreen*> joinScreens;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::GorillaLevelScreen*>) == 0x8);
    // public GorillaLevelScreen[] leaveScreens
    // Size: 0x8
    // Offset: 0x60
    ::ArrayW<::GlobalNamespace::GorillaLevelScreen*> leaveScreens;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::GorillaLevelScreen*>) == 0x8);
    // private UnityEngine.Transform tosPition
    // Size: 0x8
    // Offset: 0x68
    ::UnityEngine::Transform* tosPition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform othsTosPosition
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::Transform* othsTosPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private Photon.Pun.PhotonView fotVew
    // Size: 0x8
    // Offset: 0x78
    ::Photon::Pun::PhotonView* fotVew;
    // Field size check
    static_assert(sizeof(::Photon::Pun::PhotonView*) == 0x8);
    // private System.Int32 count
    // Size: 0x4
    // Offset: 0x80
    int count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean waiting
    // Size: 0x1
    // Offset: 0x84
    bool waiting;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: waiting and: lastPosition
    char __padding12[0x3] = {};
    // private UnityEngine.Vector3 lastPosition
    // Size: 0xC
    // Offset: 0x88
    ::UnityEngine::Vector3 lastPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // Padding between fields: lastPosition and: tempRig
    char __padding13[0x4] = {};
    // private VRRig tempRig
    // Size: 0x8
    // Offset: 0x98
    ::GlobalNamespace::VRRig* tempRig;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::VRRig*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.GameObject[] makeSureThisIsDisabled
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::GameObject*>& dyn_makeSureThisIsDisabled();
    // Get instance field reference: public UnityEngine.GameObject[] makeSureThisIsEnabled
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::GameObject*>& dyn_makeSureThisIsEnabled();
    // Get instance field reference: public System.String gameModeName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_gameModeName();
    // Get instance field reference: public GorillaNetworking.PhotonNetworkController photonNetworkController
    [[deprecated("Use field access instead!")]] ::GorillaNetworking::PhotonNetworkController*& dyn_photonNetworkController();
    // Get instance field reference: public System.String componentTypeToAdd
    [[deprecated("Use field access instead!")]] ::StringW& dyn_componentTypeToAdd();
    // Get instance field reference: public UnityEngine.GameObject componentTarget
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_componentTarget();
    // Get instance field reference: public GorillaLevelScreen[] joinScreens
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::GorillaLevelScreen*>& dyn_joinScreens();
    // Get instance field reference: public GorillaLevelScreen[] leaveScreens
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::GorillaLevelScreen*>& dyn_leaveScreens();
    // Get instance field reference: private UnityEngine.Transform tosPition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_tosPition();
    // Get instance field reference: private UnityEngine.Transform othsTosPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_othsTosPosition();
    // Get instance field reference: private Photon.Pun.PhotonView fotVew
    [[deprecated("Use field access instead!")]] ::Photon::Pun::PhotonView*& dyn_fotVew();
    // Get instance field reference: private System.Int32 count
    [[deprecated("Use field access instead!")]] int& dyn_count();
    // Get instance field reference: private System.Boolean waiting
    [[deprecated("Use field access instead!")]] bool& dyn_waiting();
    // Get instance field reference: private UnityEngine.Vector3 lastPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_lastPosition();
    // Get instance field reference: private VRRig tempRig
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::VRRig*& dyn_tempRig();
    // public System.Void Awake()
    // Offset: 0x2758668
    void Awake();
    // public System.Void LateUpdate()
    // Offset: 0x2758670
    void LateUpdate();
    // private System.Collections.IEnumerator GracePeriod()
    // Offset: 0x2758BB8
    ::System::Collections::IEnumerator* GracePeriod();
    // public System.Void .ctor()
    // Offset: 0x2758C4C
    // Implemented from: GorillaTriggerBox
    // Base method: System.Void GorillaTriggerBox::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GorillaNetworkPublicTestJoin2* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GorillaNetworkPublicTestJoin2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GorillaNetworkPublicTestJoin2*, creationType>()));
    }
  }; // GorillaNetworkPublicTestJoin2
  #pragma pack(pop)
  static check_size<sizeof(GorillaNetworkPublicTestJoin2), 152 + sizeof(::GlobalNamespace::VRRig*)> __GlobalNamespace_GorillaNetworkPublicTestJoin2SizeCheck;
  static_assert(sizeof(GorillaNetworkPublicTestJoin2) == 0xA0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GorillaNetworkPublicTestJoin2::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaNetworkPublicTestJoin2::*)()>(&GlobalNamespace::GorillaNetworkPublicTestJoin2::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaNetworkPublicTestJoin2*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaNetworkPublicTestJoin2::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaNetworkPublicTestJoin2::*)()>(&GlobalNamespace::GorillaNetworkPublicTestJoin2::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaNetworkPublicTestJoin2*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaNetworkPublicTestJoin2::GracePeriod
// Il2CppName: GracePeriod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::GorillaNetworkPublicTestJoin2::*)()>(&GlobalNamespace::GorillaNetworkPublicTestJoin2::GracePeriod)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaNetworkPublicTestJoin2*), "GracePeriod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaNetworkPublicTestJoin2::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
