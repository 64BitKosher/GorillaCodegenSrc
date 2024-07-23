// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Backtrace.Unity.Services.BacktraceDatabaseFileContext
#include "Backtrace/Unity/Services/BacktraceDatabaseFileContext.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: FileInfo
  class FileInfo;
}
// Forward declaring namespace: Backtrace::Unity::Model::Database
namespace Backtrace::Unity::Model::Database {
  // Forward declaring type: BacktraceDatabaseRecord
  class BacktraceDatabaseRecord;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Backtrace::Unity::Services::BacktraceDatabaseFileContext::$$c);
DEFINE_IL2CPP_ARG_TYPE(::Backtrace::Unity::Services::BacktraceDatabaseFileContext::$$c*, "Backtrace.Unity.Services", "BacktraceDatabaseFileContext/<>c");
// Type namespace: Backtrace.Unity.Services
namespace Backtrace::Unity::Services {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Backtrace.Unity.Services.BacktraceDatabaseFileContext/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class BacktraceDatabaseFileContext::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Backtrace.Unity.Services.BacktraceDatabaseFileContext/<>c <>9
    static ::Backtrace::Unity::Services::BacktraceDatabaseFileContext::$$c* _get_$$9();
    // Set static field: static public readonly Backtrace.Unity.Services.BacktraceDatabaseFileContext/<>c <>9
    static void _set_$$9(::Backtrace::Unity::Services::BacktraceDatabaseFileContext::$$c* value);
    // Get static field: static public System.Func`2<System.IO.FileInfo,System.DateTime> <>9__15_0
    static ::System::Func_2<::System::IO::FileInfo*, ::System::DateTime>* _get_$$9__15_0();
    // Set static field: static public System.Func`2<System.IO.FileInfo,System.DateTime> <>9__15_0
    static void _set_$$9__15_0(::System::Func_2<::System::IO::FileInfo*, ::System::DateTime>* value);
    // Get static field: static public System.Func`2<Backtrace.Unity.Model.Database.BacktraceDatabaseRecord,System.String> <>9__16_0
    static ::System::Func_2<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*, ::StringW>* _get_$$9__16_0();
    // Set static field: static public System.Func`2<Backtrace.Unity.Model.Database.BacktraceDatabaseRecord,System.String> <>9__16_0
    static void _set_$$9__16_0(::System::Func_2<::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*, ::StringW>* value);
    // static private System.Void .cctor()
    // Offset: 0x2A5D338
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x2A5D3A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BacktraceDatabaseFileContext::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Backtrace::Unity::Services::BacktraceDatabaseFileContext::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BacktraceDatabaseFileContext::$$c*, creationType>()));
    }
    // System.DateTime <GetRecords>b__15_0(System.IO.FileInfo n)
    // Offset: 0x2A5D3A8
    ::System::DateTime $GetRecords$b__15_0(::System::IO::FileInfo* n);
    // System.String <RemoveOrphaned>b__16_0(Backtrace.Unity.Model.Database.BacktraceDatabaseRecord n)
    // Offset: 0x2A5D3C0
    ::StringW $RemoveOrphaned$b__16_0(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* n);
  }; // Backtrace.Unity.Services.BacktraceDatabaseFileContext/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Backtrace::Unity::Services::BacktraceDatabaseFileContext::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Backtrace::Unity::Services::BacktraceDatabaseFileContext::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Services::BacktraceDatabaseFileContext::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Services::BacktraceDatabaseFileContext::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Backtrace::Unity::Services::BacktraceDatabaseFileContext::$$c::$GetRecords$b__15_0
// Il2CppName: <GetRecords>b__15_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (Backtrace::Unity::Services::BacktraceDatabaseFileContext::$$c::*)(::System::IO::FileInfo*)>(&Backtrace::Unity::Services::BacktraceDatabaseFileContext::$$c::$GetRecords$b__15_0)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("System.IO", "FileInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Services::BacktraceDatabaseFileContext::$$c*), "<GetRecords>b__15_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Services::BacktraceDatabaseFileContext::$$c::$RemoveOrphaned$b__16_0
// Il2CppName: <RemoveOrphaned>b__16_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Backtrace::Unity::Services::BacktraceDatabaseFileContext::$$c::*)(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*)>(&Backtrace::Unity::Services::BacktraceDatabaseFileContext::$$c::$RemoveOrphaned$b__16_0)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("Backtrace.Unity.Model.Database", "BacktraceDatabaseRecord")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Services::BacktraceDatabaseFileContext::$$c*), "<RemoveOrphaned>b__16_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n});
  }
};