// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Backtrace.Unity.Services.BacktraceDatabaseFileContext
#include "Backtrace/Unity/Services/BacktraceDatabaseFileContext.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: FileInfo
  class FileInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Backtrace::Unity::Services::BacktraceDatabaseFileContext::$$c__DisplayClass16_0);
DEFINE_IL2CPP_ARG_TYPE(::Backtrace::Unity::Services::BacktraceDatabaseFileContext::$$c__DisplayClass16_0*, "Backtrace.Unity.Services", "BacktraceDatabaseFileContext/<>c__DisplayClass16_0");
// Type namespace: Backtrace.Unity.Services
namespace Backtrace::Unity::Services {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Backtrace.Unity.Services.BacktraceDatabaseFileContext/<>c__DisplayClass16_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class BacktraceDatabaseFileContext::$$c__DisplayClass16_0 : public ::Il2CppObject {
    public:
    public:
    // public System.IO.FileInfo file
    // Size: 0x8
    // Offset: 0x10
    ::System::IO::FileInfo* file;
    // Field size check
    static_assert(sizeof(::System::IO::FileInfo*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::IO::FileInfo*
    constexpr operator ::System::IO::FileInfo*() const noexcept {
      return file;
    }
    // Get instance field reference: public System.IO.FileInfo file
    [[deprecated("Use field access instead!")]] ::System::IO::FileInfo*& dyn_file();
    // public System.Void .ctor()
    // Offset: 0x2A5C2F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BacktraceDatabaseFileContext::$$c__DisplayClass16_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Backtrace::Unity::Services::BacktraceDatabaseFileContext::$$c__DisplayClass16_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BacktraceDatabaseFileContext::$$c__DisplayClass16_0*, creationType>()));
    }
    // System.Boolean <RemoveOrphaned>b__1(System.String n)
    // Offset: 0x2A5D3D8
    bool $RemoveOrphaned$b__1(::StringW n);
  }; // Backtrace.Unity.Services.BacktraceDatabaseFileContext/<>c__DisplayClass16_0
  #pragma pack(pop)
  static check_size<sizeof(BacktraceDatabaseFileContext::$$c__DisplayClass16_0), 16 + sizeof(::System::IO::FileInfo*)> __Backtrace_Unity_Services_BacktraceDatabaseFileContext_$$c__DisplayClass16_0SizeCheck;
  static_assert(sizeof(BacktraceDatabaseFileContext::$$c__DisplayClass16_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Backtrace::Unity::Services::BacktraceDatabaseFileContext::$$c__DisplayClass16_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Backtrace::Unity::Services::BacktraceDatabaseFileContext::$$c__DisplayClass16_0::$RemoveOrphaned$b__1
// Il2CppName: <RemoveOrphaned>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Backtrace::Unity::Services::BacktraceDatabaseFileContext::$$c__DisplayClass16_0::*)(::StringW)>(&Backtrace::Unity::Services::BacktraceDatabaseFileContext::$$c__DisplayClass16_0::$RemoveOrphaned$b__1)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Services::BacktraceDatabaseFileContext::$$c__DisplayClass16_0*), "<RemoveOrphaned>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n});
  }
};
