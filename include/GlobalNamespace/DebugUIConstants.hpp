// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: DebugUIConstants
  class DebugUIConstants;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::DebugUIConstants);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DebugUIConstants*, "", "DebugUIConstants");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: DebugUIConstants
  // [TokenAttribute] Offset: FFFFFFFF
  class DebugUIConstants : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.String[] PlayfabIDs
    static ::ArrayW<::StringW> _get_PlayfabIDs();
    // Set static field: static public readonly System.String[] PlayfabIDs
    static void _set_PlayfabIDs(::ArrayW<::StringW> value);
    // Get static field: static public readonly System.String[] RoomIDs
    static ::ArrayW<::StringW> _get_RoomIDs();
    // Set static field: static public readonly System.String[] RoomIDs
    static void _set_RoomIDs(::ArrayW<::StringW> value);
    // Get static field: static public readonly System.String[] GameModes
    static ::ArrayW<::StringW> _get_GameModes();
    // Set static field: static public readonly System.String[] GameModes
    static void _set_GameModes(::ArrayW<::StringW> value);
    // Get static field: static public readonly System.String[] PlayerNames
    static ::ArrayW<::StringW> _get_PlayerNames();
    // Set static field: static public readonly System.String[] PlayerNames
    static void _set_PlayerNames(::ArrayW<::StringW> value);
    // static private System.Void .cctor()
    // Offset: 0x26DCFC0
    static void _cctor();
  }; // DebugUIConstants
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DebugUIConstants::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::DebugUIConstants::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DebugUIConstants*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
