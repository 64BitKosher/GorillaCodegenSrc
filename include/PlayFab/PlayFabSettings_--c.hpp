// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.PlayFabSettings
#include "PlayFab/PlayFabSettings.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayFabSharedSettings
  class PlayFabSharedSettings;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::PlayFabSettings::$$c);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::PlayFabSettings::$$c*, "PlayFab", "PlayFabSettings/<>c");
// Type namespace: PlayFab
namespace PlayFab {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.PlayFabSettings/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class PlayFabSettings::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly PlayFab.PlayFabSettings/<>c <>9
    static ::PlayFab::PlayFabSettings::$$c* _get_$$9();
    // Set static field: static public readonly PlayFab.PlayFabSettings/<>c <>9
    static void _set_$$9(::PlayFab::PlayFabSettings::$$c* value);
    // static private System.Void .cctor()
    // Offset: 0x4AFBB38
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x4AFBBA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayFabSettings::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::PlayFabSettings::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayFabSettings::$$c*, creationType>()));
    }
    // PlayFabSharedSettings <.cctor>b__0_0()
    // Offset: 0x4AFBBA8
    ::GlobalNamespace::PlayFabSharedSettings* $_cctor$b__0_0();
  }; // PlayFab.PlayFabSettings/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::PlayFabSettings::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&PlayFab::PlayFabSettings::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PlayFab::PlayFabSettings::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PlayFab::PlayFabSettings::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: PlayFab::PlayFabSettings::$$c::$_cctor$b__0_0
// Il2CppName: <.cctor>b__0_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayFabSharedSettings* (PlayFab::PlayFabSettings::$$c::*)()>(&PlayFab::PlayFabSettings::$$c::$_cctor$b__0_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PlayFab::PlayFabSettings::$$c*), "<.cctor>b__0_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
