// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: BuildSafe
namespace BuildSafe {
  // Forward declaring type: SessionState
  class SessionState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BuildSafe::SessionState);
DEFINE_IL2CPP_ARG_TYPE(::BuildSafe::SessionState*, "BuildSafe", "SessionState");
// Type namespace: BuildSafe
namespace BuildSafe {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BuildSafe.SessionState
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: FFFFFFFF
  class SessionState : public ::Il2CppObject {
    public:
    // Get static field: static public readonly BuildSafe.SessionState Shared
    static ::BuildSafe::SessionState* _get_Shared();
    // Set static field: static public readonly BuildSafe.SessionState Shared
    static void _set_Shared(::BuildSafe::SessionState* value);
    // public System.String get_Item(System.String key)
    // Offset: 0x28171D8
    ::StringW get_Item(::StringW key);
    // public System.Void set_Item(System.String key, System.String value)
    // Offset: 0x28171E0
    void set_Item(::StringW key, ::StringW value);
    // public System.Void .ctor()
    // Offset: 0x28171E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SessionState* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BuildSafe::SessionState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SessionState*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x28171EC
    static void _cctor();
  }; // BuildSafe.SessionState
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BuildSafe::SessionState::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (BuildSafe::SessionState::*)(::StringW)>(&BuildSafe::SessionState::get_Item)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BuildSafe::SessionState*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: BuildSafe::SessionState::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BuildSafe::SessionState::*)(::StringW, ::StringW)>(&BuildSafe::SessionState::set_Item)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BuildSafe::SessionState*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: BuildSafe::SessionState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: BuildSafe::SessionState::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&BuildSafe::SessionState::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BuildSafe::SessionState*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
