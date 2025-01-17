// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Backtrace.Unity.Services.BacktraceDatabaseContext
#include "Backtrace/Unity/Services/BacktraceDatabaseContext.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Backtrace::Unity::Model::Database
namespace Backtrace::Unity::Model::Database {
  // Forward declaring type: BacktraceDatabaseRecord
  class BacktraceDatabaseRecord;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Backtrace::Unity::Services::BacktraceDatabaseContext::$$c__DisplayClass20_0);
DEFINE_IL2CPP_ARG_TYPE(::Backtrace::Unity::Services::BacktraceDatabaseContext::$$c__DisplayClass20_0*, "Backtrace.Unity.Services", "BacktraceDatabaseContext/<>c__DisplayClass20_0");
// Type namespace: Backtrace.Unity.Services
namespace Backtrace::Unity::Services {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Backtrace.Unity.Services.BacktraceDatabaseContext/<>c__DisplayClass20_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class BacktraceDatabaseContext::$$c__DisplayClass20_0 : public ::Il2CppObject {
    public:
    public:
    // public Backtrace.Unity.Model.Database.BacktraceDatabaseRecord record
    // Size: 0x8
    // Offset: 0x10
    ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* record;
    // Field size check
    static_assert(sizeof(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*) == 0x8);
    public:
    // Creating conversion operator: operator ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*
    constexpr operator ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*() const noexcept {
      return record;
    }
    // Get instance field reference: public Backtrace.Unity.Model.Database.BacktraceDatabaseRecord record
    [[deprecated("Use field access instead!")]] ::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*& dyn_record();
    // public System.Void .ctor()
    // Offset: 0x2A5A390
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BacktraceDatabaseContext::$$c__DisplayClass20_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Backtrace::Unity::Services::BacktraceDatabaseContext::$$c__DisplayClass20_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BacktraceDatabaseContext::$$c__DisplayClass20_0*, creationType>()));
    }
    // System.Boolean <Any>b__1(Backtrace.Unity.Model.Database.BacktraceDatabaseRecord n)
    // Offset: 0x2A5BB7C
    bool $Any$b__1(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord* n);
  }; // Backtrace.Unity.Services.BacktraceDatabaseContext/<>c__DisplayClass20_0
  #pragma pack(pop)
  static check_size<sizeof(BacktraceDatabaseContext::$$c__DisplayClass20_0), 16 + sizeof(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*)> __Backtrace_Unity_Services_BacktraceDatabaseContext_$$c__DisplayClass20_0SizeCheck;
  static_assert(sizeof(BacktraceDatabaseContext::$$c__DisplayClass20_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Backtrace::Unity::Services::BacktraceDatabaseContext::$$c__DisplayClass20_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Backtrace::Unity::Services::BacktraceDatabaseContext::$$c__DisplayClass20_0::$Any$b__1
// Il2CppName: <Any>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Backtrace::Unity::Services::BacktraceDatabaseContext::$$c__DisplayClass20_0::*)(::Backtrace::Unity::Model::Database::BacktraceDatabaseRecord*)>(&Backtrace::Unity::Services::BacktraceDatabaseContext::$$c__DisplayClass20_0::$Any$b__1)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("Backtrace.Unity.Model.Database", "BacktraceDatabaseRecord")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Services::BacktraceDatabaseContext::$$c__DisplayClass20_0*), "<Any>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n});
  }
};
