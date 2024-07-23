// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayerCosmeticsSystem
#include "GlobalNamespace/PlayerCosmeticsSystem.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: PlayFab
namespace PlayFab {
  // Forward declaring type: PlayFabError
  class PlayFabError;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PlayerCosmeticsSystem::$$c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerCosmeticsSystem::$$c*, "", "PlayerCosmeticsSystem/<>c");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: PlayerCosmeticsSystem/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class PlayerCosmeticsSystem::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly PlayerCosmeticsSystem/<>c <>9
    static ::GlobalNamespace::PlayerCosmeticsSystem::$$c* _get_$$9();
    // Set static field: static public readonly PlayerCosmeticsSystem/<>c <>9
    static void _set_$$9(::GlobalNamespace::PlayerCosmeticsSystem::$$c* value);
    // Get static field: static public System.Action`1<PlayFab.PlayFabError> <>9__15_0
    static ::System::Action_1<::PlayFab::PlayFabError*>* _get_$$9__15_0();
    // Set static field: static public System.Action`1<PlayFab.PlayFabError> <>9__15_0
    static void _set_$$9__15_0(::System::Action_1<::PlayFab::PlayFabError*>* value);
    // Get static field: static public System.Action`1<PlayFab.PlayFabError> <>9__16_1
    static ::System::Action_1<::PlayFab::PlayFabError*>* _get_$$9__16_1();
    // Set static field: static public System.Action`1<PlayFab.PlayFabError> <>9__16_1
    static void _set_$$9__16_1(::System::Action_1<::PlayFab::PlayFabError*>* value);
    // static private System.Void .cctor()
    // Offset: 0x2768E5C
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x2768EC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerCosmeticsSystem::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlayerCosmeticsSystem::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerCosmeticsSystem::$$c*, creationType>()));
    }
    // System.Void <PreTick>b__15_0(PlayFab.PlayFabError error)
    // Offset: 0x2768ECC
    void $PreTick$b__15_0(::PlayFab::PlayFabError* error);
    // System.Void <NewCosmeticsPath>b__16_1(PlayFab.PlayFabError error)
    // Offset: 0x2768FB8
    void $NewCosmeticsPath$b__16_1(::PlayFab::PlayFabError* error);
  }; // PlayerCosmeticsSystem/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerCosmeticsSystem::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::PlayerCosmeticsSystem::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerCosmeticsSystem::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerCosmeticsSystem::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlayerCosmeticsSystem::$$c::$PreTick$b__15_0
// Il2CppName: <PreTick>b__15_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerCosmeticsSystem::$$c::*)(::PlayFab::PlayFabError*)>(&GlobalNamespace::PlayerCosmeticsSystem::$$c::$PreTick$b__15_0)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("PlayFab", "PlayFabError")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerCosmeticsSystem::$$c*), "<PreTick>b__15_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerCosmeticsSystem::$$c::$NewCosmeticsPath$b__16_1
// Il2CppName: <NewCosmeticsPath>b__16_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerCosmeticsSystem::$$c::*)(::PlayFab::PlayFabError*)>(&GlobalNamespace::PlayerCosmeticsSystem::$$c::$NewCosmeticsPath$b__16_1)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("PlayFab", "PlayFabError")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerCosmeticsSystem::$$c*), "<NewCosmeticsPath>b__16_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
