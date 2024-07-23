// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: Debugger
  class Debugger;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Diagnostics::Debugger);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Debugger*, "System.Diagnostics", "Debugger");
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.Debugger
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: FFFFFFFF
  class Debugger : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.String DefaultCategory
    static ::StringW _get_DefaultCategory();
    // Set static field: static public readonly System.String DefaultCategory
    static void _set_DefaultCategory(::StringW value);
    // static public System.Void Break()
    // Offset: 0x4619944
    static void Break();
    // static public System.Boolean IsLogging()
    // Offset: 0x4619948
    static bool IsLogging();
    // static private System.Void Log_icall(System.Int32 level, ref System.String category, ref System.String message)
    // Offset: 0x461994C
    static void Log_icall(int level, ByRef<::StringW> category, ByRef<::StringW> message);
    // static public System.Void Log(System.Int32 level, System.String category, System.String message)
    // Offset: 0x4619950
    static void Log(int level, ::StringW category, ::StringW message);
    // static public System.Void NotifyOfCrossThreadDependency()
    // Offset: 0x46199BC
    static void NotifyOfCrossThreadDependency();
    // static private System.Void .cctor()
    // Offset: 0x46199C0
    static void _cctor();
  }; // System.Diagnostics.Debugger
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::Debugger::Break
// Il2CppName: Break
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Diagnostics::Debugger::Break)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Debugger*), "Break", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Debugger::IsLogging
// Il2CppName: IsLogging
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Diagnostics::Debugger::IsLogging)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Debugger*), "IsLogging", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Debugger::Log_icall
// Il2CppName: Log_icall
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ByRef<::StringW>, ByRef<::StringW>)>(&System::Diagnostics::Debugger::Log_icall)> {
  static const MethodInfo* get() {
    static auto* level = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* category = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Debugger*), "Log_icall", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{level, category, message});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Debugger::Log
// Il2CppName: Log
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::StringW, ::StringW)>(&System::Diagnostics::Debugger::Log)> {
  static const MethodInfo* get() {
    static auto* level = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* category = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Debugger*), "Log", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{level, category, message});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Debugger::NotifyOfCrossThreadDependency
// Il2CppName: NotifyOfCrossThreadDependency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Diagnostics::Debugger::NotifyOfCrossThreadDependency)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Debugger*), "NotifyOfCrossThreadDependency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Debugger::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Diagnostics::Debugger::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Debugger*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
