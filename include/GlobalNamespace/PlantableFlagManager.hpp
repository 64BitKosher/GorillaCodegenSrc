// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Pun.MonoBehaviourPun
#include "Photon/Pun/MonoBehaviourPun.hpp"
// Including type: Photon.Pun.IPunObservable
#include "Photon/Pun/IPunObservable.hpp"
// Including type: FlagCauldronColorer/ColorMode
#include "GlobalNamespace/FlagCauldronColorer.hpp"
// Including type: PlantableObject/AppliedColors
#include "GlobalNamespace/PlantableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: PlantableObject because it is already included!
  // Skipping declaration: FlagCauldronColorer because it is already included!
}
// Forward declaring namespace: Photon::Pun
namespace Photon::Pun {
  // Forward declaring type: PhotonMessageInfo
  struct PhotonMessageInfo;
  // Forward declaring type: PhotonStream
  class PhotonStream;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PlantableFlagManager
  class PlantableFlagManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PlantableFlagManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlantableFlagManager*, "", "PlantableFlagManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: PlantableFlagManager
  // [TokenAttribute] Offset: FFFFFFFF
  class PlantableFlagManager : public ::Photon::Pun::MonoBehaviourPun/*, public ::Photon::Pun::IPunObservable*/ {
    public:
    // Nested type: ::GlobalNamespace::PlantableFlagManager::$$c
    class $$c;
    public:
    // public PlantableObject[] flags
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::GlobalNamespace::PlantableObject*> flags;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::PlantableObject*>) == 0x8);
    // public FlagCauldronColorer[] cauldrons
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::GlobalNamespace::FlagCauldronColorer*> cauldrons;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::FlagCauldronColorer*>) == 0x8);
    // public FlagCauldronColorer/ColorMode[] mode
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::GlobalNamespace::FlagCauldronColorer::ColorMode> mode;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::FlagCauldronColorer::ColorMode>) == 0x8);
    // public PlantableObject/AppliedColors[][] flagColors
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::ArrayW<::GlobalNamespace::PlantableObject::AppliedColors>> flagColors;
    // Field size check
    static_assert(sizeof(::ArrayW<::ArrayW<::GlobalNamespace::PlantableObject::AppliedColors>>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Photon::Pun::IPunObservable
    operator ::Photon::Pun::IPunObservable() noexcept {
      return *reinterpret_cast<::Photon::Pun::IPunObservable*>(this);
    }
    // Get instance field reference: public PlantableObject[] flags
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::PlantableObject*>& dyn_flags();
    // Get instance field reference: public FlagCauldronColorer[] cauldrons
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::FlagCauldronColorer*>& dyn_cauldrons();
    // Get instance field reference: public FlagCauldronColorer/ColorMode[] mode
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::FlagCauldronColorer::ColorMode>& dyn_mode();
    // Get instance field reference: public PlantableObject/AppliedColors[][] flagColors
    [[deprecated("Use field access instead!")]] ::ArrayW<::ArrayW<::GlobalNamespace::PlantableObject::AppliedColors>>& dyn_flagColors();
    // public System.Void ResetMyFlags()
    // Offset: 0x288FFE4
    void ResetMyFlags();
    // public System.Void ResetAllFlags()
    // Offset: 0x2890088
    void ResetAllFlags();
    // public System.Void RainbowifyAllFlags(System.Single saturation, System.Single value)
    // Offset: 0x2890644
    void RainbowifyAllFlags(float saturation, float value);
    // public System.Void Awake()
    // Offset: 0x2890780
    void Awake();
    // public System.Void Update()
    // Offset: 0x28908B0
    void Update();
    // public System.Void UpdateFlagColorRPC(System.Int32 flagIndex, System.Int32 colorIndex, Photon.Pun.PhotonMessageInfo info)
    // Offset: 0x2890A68
    void UpdateFlagColorRPC(int flagIndex, int colorIndex, ::Photon::Pun::PhotonMessageInfo info);
    // public System.Void UpdateFlagColors()
    // Offset: 0x2890AB4
    void UpdateFlagColors();
    // public System.Void OnPhotonSerializeView(Photon.Pun.PhotonStream stream, Photon.Pun.PhotonMessageInfo info)
    // Offset: 0x2890B70
    void OnPhotonSerializeView(::Photon::Pun::PhotonStream* stream, ::Photon::Pun::PhotonMessageInfo info);
    // public System.Void .ctor()
    // Offset: 0x2890D4C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlantableFlagManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlantableFlagManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlantableFlagManager*, creationType>()));
    }
  }; // PlantableFlagManager
  #pragma pack(pop)
  static check_size<sizeof(PlantableFlagManager), 64 + sizeof(::ArrayW<::ArrayW<::GlobalNamespace::PlantableObject::AppliedColors>>)> __GlobalNamespace_PlantableFlagManagerSizeCheck;
  static_assert(sizeof(PlantableFlagManager) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlantableFlagManager::ResetMyFlags
// Il2CppName: ResetMyFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlantableFlagManager::*)()>(&GlobalNamespace::PlantableFlagManager::ResetMyFlags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlantableFlagManager*), "ResetMyFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlantableFlagManager::ResetAllFlags
// Il2CppName: ResetAllFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlantableFlagManager::*)()>(&GlobalNamespace::PlantableFlagManager::ResetAllFlags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlantableFlagManager*), "ResetAllFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlantableFlagManager::RainbowifyAllFlags
// Il2CppName: RainbowifyAllFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlantableFlagManager::*)(float, float)>(&GlobalNamespace::PlantableFlagManager::RainbowifyAllFlags)> {
  static const MethodInfo* get() {
    static auto* saturation = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlantableFlagManager*), "RainbowifyAllFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{saturation, value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlantableFlagManager::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlantableFlagManager::*)()>(&GlobalNamespace::PlantableFlagManager::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlantableFlagManager*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlantableFlagManager::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlantableFlagManager::*)()>(&GlobalNamespace::PlantableFlagManager::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlantableFlagManager*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlantableFlagManager::UpdateFlagColorRPC
// Il2CppName: UpdateFlagColorRPC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlantableFlagManager::*)(int, int, ::Photon::Pun::PhotonMessageInfo)>(&GlobalNamespace::PlantableFlagManager::UpdateFlagColorRPC)> {
  static const MethodInfo* get() {
    static auto* flagIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* colorIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonMessageInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlantableFlagManager*), "UpdateFlagColorRPC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{flagIndex, colorIndex, info});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlantableFlagManager::UpdateFlagColors
// Il2CppName: UpdateFlagColors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlantableFlagManager::*)()>(&GlobalNamespace::PlantableFlagManager::UpdateFlagColors)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlantableFlagManager*), "UpdateFlagColors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlantableFlagManager::OnPhotonSerializeView
// Il2CppName: OnPhotonSerializeView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlantableFlagManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&GlobalNamespace::PlantableFlagManager::OnPhotonSerializeView)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonStream")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonMessageInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlantableFlagManager*), "OnPhotonSerializeView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, info});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlantableFlagManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!