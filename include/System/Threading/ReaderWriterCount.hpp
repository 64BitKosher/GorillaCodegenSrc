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
// Completed includes
// Type namespace: System.Threading
namespace System::Threading {
  // Forward declaring type: ReaderWriterCount
  class ReaderWriterCount;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Threading::ReaderWriterCount);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ReaderWriterCount*, "System.Threading", "ReaderWriterCount");
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.ReaderWriterCount
  // [TokenAttribute] Offset: FFFFFFFF
  class ReaderWriterCount : public ::Il2CppObject {
    public:
    public:
    // public System.Int64 lockID
    // Size: 0x8
    // Offset: 0x10
    int64_t lockID;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public System.Int32 readercount
    // Size: 0x4
    // Offset: 0x18
    int readercount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 writercount
    // Size: 0x4
    // Offset: 0x1C
    int writercount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 upgradecount
    // Size: 0x4
    // Offset: 0x20
    int upgradecount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: upgradecount and: next
    char __padding3[0x4] = {};
    // public System.Threading.ReaderWriterCount next
    // Size: 0x8
    // Offset: 0x28
    ::System::Threading::ReaderWriterCount* next;
    // Field size check
    static_assert(sizeof(::System::Threading::ReaderWriterCount*) == 0x8);
    public:
    // Get instance field reference: public System.Int64 lockID
    [[deprecated("Use field access instead!")]] int64_t& dyn_lockID();
    // Get instance field reference: public System.Int32 readercount
    [[deprecated("Use field access instead!")]] int& dyn_readercount();
    // Get instance field reference: public System.Int32 writercount
    [[deprecated("Use field access instead!")]] int& dyn_writercount();
    // Get instance field reference: public System.Int32 upgradecount
    [[deprecated("Use field access instead!")]] int& dyn_upgradecount();
    // Get instance field reference: public System.Threading.ReaderWriterCount next
    [[deprecated("Use field access instead!")]] ::System::Threading::ReaderWriterCount*& dyn_next();
    // public System.Void .ctor()
    // Offset: 0x4BED6B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReaderWriterCount* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::ReaderWriterCount::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReaderWriterCount*, creationType>()));
    }
  }; // System.Threading.ReaderWriterCount
  #pragma pack(pop)
  static check_size<sizeof(ReaderWriterCount), 40 + sizeof(::System::Threading::ReaderWriterCount*)> __System_Threading_ReaderWriterCountSizeCheck;
  static_assert(sizeof(ReaderWriterCount) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::ReaderWriterCount::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
