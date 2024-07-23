// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DevConsole
#include "GlobalNamespace/DevConsole.hpp"
// Including type: UnityEngine.LogType
#include "UnityEngine/LogType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::DevConsole::LogEntry);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DevConsole::LogEntry*, "", "DevConsole/LogEntry");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: DevConsole/LogEntry
  // [TokenAttribute] Offset: FFFFFFFF
  class DevConsole::LogEntry : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::DevConsole::LogEntry::$$c__DisplayClass10_0
    class $$c__DisplayClass10_0;
    public:
    // public readonly System.String _Message
    // Size: 0x8
    // Offset: 0x10
    ::StringW Message;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly UnityEngine.LogType Type
    // Size: 0x4
    // Offset: 0x18
    ::UnityEngine::LogType Type;
    // Field size check
    static_assert(sizeof(::UnityEngine::LogType) == 0x4);
    // Padding between fields: Type and: Trace
    char __padding1[0x4] = {};
    // public readonly System.String Trace
    // Size: 0x8
    // Offset: 0x20
    ::StringW Trace;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean forwarded
    // Size: 0x1
    // Offset: 0x28
    bool forwarded;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: forwarded and: repeatCount
    char __padding3[0x3] = {};
    // public System.Int32 repeatCount
    // Size: 0x4
    // Offset: 0x2C
    int repeatCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean filtered
    // Size: 0x1
    // Offset: 0x30
    bool filtered;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: filtered and: index
    char __padding5[0x3] = {};
    // public System.Int32 index
    // Size: 0x4
    // Offset: 0x34
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get static field: static private System.Int32 TotalIndex
    static int _get_TotalIndex();
    // Set static field: static private System.Int32 TotalIndex
    static void _set_TotalIndex(int value);
    // Get instance field reference: public readonly System.String _Message
    [[deprecated("Use field access instead!")]] ::StringW& dyn__Message();
    // Get instance field reference: public readonly UnityEngine.LogType Type
    [[deprecated("Use field access instead!")]] ::UnityEngine::LogType& dyn_Type();
    // Get instance field reference: public readonly System.String Trace
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Trace();
    // Get instance field reference: public System.Boolean forwarded
    [[deprecated("Use field access instead!")]] bool& dyn_forwarded();
    // Get instance field reference: public System.Int32 repeatCount
    [[deprecated("Use field access instead!")]] int& dyn_repeatCount();
    // Get instance field reference: public System.Boolean filtered
    [[deprecated("Use field access instead!")]] bool& dyn_filtered();
    // Get instance field reference: public System.Int32 index
    [[deprecated("Use field access instead!")]] int& dyn_index();
    // public System.String get_Message()
    // Offset: 0x2799A98
    ::StringW get_Message();
    // public System.Void .ctor(System.String message, UnityEngine.LogType type, System.String trace)
    // Offset: 0x2799B28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DevConsole::LogEntry* New_ctor(::StringW message, ::UnityEngine::LogType type, ::StringW trace) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DevConsole::LogEntry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DevConsole::LogEntry*, creationType>(message, type, trace)));
    }
  }; // DevConsole/LogEntry
  #pragma pack(pop)
  static check_size<sizeof(DevConsole::LogEntry), 52 + sizeof(int)> __GlobalNamespace_DevConsole_LogEntrySizeCheck;
  static_assert(sizeof(DevConsole::LogEntry) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DevConsole::LogEntry::get_Message
// Il2CppName: get_Message
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::DevConsole::LogEntry::*)()>(&GlobalNamespace::DevConsole::LogEntry::get_Message)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DevConsole::LogEntry*), "get_Message", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DevConsole::LogEntry::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!