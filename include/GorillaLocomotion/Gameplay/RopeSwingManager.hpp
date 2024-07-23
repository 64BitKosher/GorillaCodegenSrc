// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Pun.MonoBehaviourPun
#include "Photon/Pun/MonoBehaviourPun.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: GorillaLocomotion::Gameplay
namespace GorillaLocomotion::Gameplay {
  // Forward declaring type: GorillaRopeSwing
  class GorillaRopeSwing;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: Photon::Pun
namespace Photon::Pun {
  // Forward declaring type: PhotonMessageInfo
  struct PhotonMessageInfo;
}
// Completed forward declares
// Type namespace: GorillaLocomotion.Gameplay
namespace GorillaLocomotion::Gameplay {
  // Forward declaring type: RopeSwingManager
  class RopeSwingManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaLocomotion::Gameplay::RopeSwingManager);
DEFINE_IL2CPP_ARG_TYPE(::GorillaLocomotion::Gameplay::RopeSwingManager*, "GorillaLocomotion.Gameplay", "RopeSwingManager");
// Type namespace: GorillaLocomotion.Gameplay
namespace GorillaLocomotion::Gameplay {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: GorillaLocomotion.Gameplay.RopeSwingManager
  // [TokenAttribute] Offset: FFFFFFFF
  class RopeSwingManager : public ::Photon::Pun::MonoBehaviourPun {
    public:
    public:
    // private System.Collections.Generic.Dictionary`2<System.Int32,GorillaLocomotion.Gameplay.GorillaRopeSwing> ropes
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::Dictionary_2<int, ::GorillaLocomotion::Gameplay::GorillaRopeSwing*>* ropes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<int, ::GorillaLocomotion::Gameplay::GorillaRopeSwing*>*) == 0x8);
    public:
    // Get static field: static private GorillaLocomotion.Gameplay.RopeSwingManager <instance>k__BackingField
    static ::GorillaLocomotion::Gameplay::RopeSwingManager* _get_$instance$k__BackingField();
    // Set static field: static private GorillaLocomotion.Gameplay.RopeSwingManager <instance>k__BackingField
    static void _set_$instance$k__BackingField(::GorillaLocomotion::Gameplay::RopeSwingManager* value);
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.Int32,GorillaLocomotion.Gameplay.GorillaRopeSwing> ropes
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<int, ::GorillaLocomotion::Gameplay::GorillaRopeSwing*>*& dyn_ropes();
    // static public GorillaLocomotion.Gameplay.RopeSwingManager get_instance()
    // Offset: 0x27EC790
    static ::GorillaLocomotion::Gameplay::RopeSwingManager* get_instance();
    // static private System.Void set_instance(GorillaLocomotion.Gameplay.RopeSwingManager value)
    // Offset: 0x27EC7D8
    static void set_instance(::GorillaLocomotion::Gameplay::RopeSwingManager* value);
    // private System.Void Awake()
    // Offset: 0x27EC830
    void Awake();
    // private System.Void RegisterInstance(GorillaLocomotion.Gameplay.GorillaRopeSwing t)
    // Offset: 0x27ECA20
    void RegisterInstance(::GorillaLocomotion::Gameplay::GorillaRopeSwing* t);
    // private System.Void UnregisterInstance(GorillaLocomotion.Gameplay.GorillaRopeSwing t)
    // Offset: 0x27ECA80
    void UnregisterInstance(::GorillaLocomotion::Gameplay::GorillaRopeSwing* t);
    // static public System.Void Register(GorillaLocomotion.Gameplay.GorillaRopeSwing t)
    // Offset: 0x27E70F8
    static void Register(::GorillaLocomotion::Gameplay::GorillaRopeSwing* t);
    // static public System.Void Unregister(GorillaLocomotion.Gameplay.GorillaRopeSwing t)
    // Offset: 0x27E7154
    static void Unregister(::GorillaLocomotion::Gameplay::GorillaRopeSwing* t);
    // public System.Void SendSetVelocity_RPC(System.Int32 ropeId, System.Int32 boneIndex, UnityEngine.Vector3 velocity, System.Boolean wholeRope)
    // Offset: 0x27E8AFC
    void SendSetVelocity_RPC(int ropeId, int boneIndex, ::UnityEngine::Vector3 velocity, bool wholeRope);
    // public GorillaLocomotion.Gameplay.GorillaRopeSwing GetRope(System.Int32 ropeId)
    // Offset: 0x27ECC50
    ::GorillaLocomotion::Gameplay::GorillaRopeSwing* GetRope(int ropeId);
    // public System.Void SetVelocity(System.Int32 ropeId, System.Int32 boneIndex, UnityEngine.Vector3 velocity, System.Boolean wholeRope, Photon.Pun.PhotonMessageInfo info)
    // Offset: 0x27ECADC
    void SetVelocity(int ropeId, int boneIndex, ::UnityEngine::Vector3 velocity, bool wholeRope, ::Photon::Pun::PhotonMessageInfo info);
    // public System.Void .ctor()
    // Offset: 0x27ECCC0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RopeSwingManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaLocomotion::Gameplay::RopeSwingManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RopeSwingManager*, creationType>()));
    }
  }; // GorillaLocomotion.Gameplay.RopeSwingManager
  #pragma pack(pop)
  static check_size<sizeof(RopeSwingManager), 40 + sizeof(::System::Collections::Generic::Dictionary_2<int, ::GorillaLocomotion::Gameplay::GorillaRopeSwing*>*)> __GorillaLocomotion_Gameplay_RopeSwingManagerSizeCheck;
  static_assert(sizeof(RopeSwingManager) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::RopeSwingManager::get_instance
// Il2CppName: get_instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GorillaLocomotion::Gameplay::RopeSwingManager* (*)()>(&GorillaLocomotion::Gameplay::RopeSwingManager::get_instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Gameplay::RopeSwingManager*), "get_instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::RopeSwingManager::set_instance
// Il2CppName: set_instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GorillaLocomotion::Gameplay::RopeSwingManager*)>(&GorillaLocomotion::Gameplay::RopeSwingManager::set_instance)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("GorillaLocomotion.Gameplay", "RopeSwingManager")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Gameplay::RopeSwingManager*), "set_instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::RopeSwingManager::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Gameplay::RopeSwingManager::*)()>(&GorillaLocomotion::Gameplay::RopeSwingManager::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Gameplay::RopeSwingManager*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::RopeSwingManager::RegisterInstance
// Il2CppName: RegisterInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Gameplay::RopeSwingManager::*)(::GorillaLocomotion::Gameplay::GorillaRopeSwing*)>(&GorillaLocomotion::Gameplay::RopeSwingManager::RegisterInstance)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("GorillaLocomotion.Gameplay", "GorillaRopeSwing")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Gameplay::RopeSwingManager*), "RegisterInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::RopeSwingManager::UnregisterInstance
// Il2CppName: UnregisterInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Gameplay::RopeSwingManager::*)(::GorillaLocomotion::Gameplay::GorillaRopeSwing*)>(&GorillaLocomotion::Gameplay::RopeSwingManager::UnregisterInstance)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("GorillaLocomotion.Gameplay", "GorillaRopeSwing")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Gameplay::RopeSwingManager*), "UnregisterInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::RopeSwingManager::Register
// Il2CppName: Register
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GorillaLocomotion::Gameplay::GorillaRopeSwing*)>(&GorillaLocomotion::Gameplay::RopeSwingManager::Register)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("GorillaLocomotion.Gameplay", "GorillaRopeSwing")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Gameplay::RopeSwingManager*), "Register", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::RopeSwingManager::Unregister
// Il2CppName: Unregister
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GorillaLocomotion::Gameplay::GorillaRopeSwing*)>(&GorillaLocomotion::Gameplay::RopeSwingManager::Unregister)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("GorillaLocomotion.Gameplay", "GorillaRopeSwing")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Gameplay::RopeSwingManager*), "Unregister", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::RopeSwingManager::SendSetVelocity_RPC
// Il2CppName: SendSetVelocity_RPC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Gameplay::RopeSwingManager::*)(int, int, ::UnityEngine::Vector3, bool)>(&GorillaLocomotion::Gameplay::RopeSwingManager::SendSetVelocity_RPC)> {
  static const MethodInfo* get() {
    static auto* ropeId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* boneIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* velocity = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* wholeRope = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Gameplay::RopeSwingManager*), "SendSetVelocity_RPC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ropeId, boneIndex, velocity, wholeRope});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::RopeSwingManager::GetRope
// Il2CppName: GetRope
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GorillaLocomotion::Gameplay::GorillaRopeSwing* (GorillaLocomotion::Gameplay::RopeSwingManager::*)(int)>(&GorillaLocomotion::Gameplay::RopeSwingManager::GetRope)> {
  static const MethodInfo* get() {
    static auto* ropeId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Gameplay::RopeSwingManager*), "GetRope", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ropeId});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::RopeSwingManager::SetVelocity
// Il2CppName: SetVelocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaLocomotion::Gameplay::RopeSwingManager::*)(int, int, ::UnityEngine::Vector3, bool, ::Photon::Pun::PhotonMessageInfo)>(&GorillaLocomotion::Gameplay::RopeSwingManager::SetVelocity)> {
  static const MethodInfo* get() {
    static auto* ropeId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* boneIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* velocity = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* wholeRope = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonMessageInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaLocomotion::Gameplay::RopeSwingManager*), "SetVelocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ropeId, boneIndex, velocity, wholeRope, info});
  }
};
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::RopeSwingManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!