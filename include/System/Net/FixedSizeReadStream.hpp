// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.WebReadStream
#include "System/Net/WebReadStream.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebOperation
  class WebOperation;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Skipping declaration: Stream because it is already included!
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: FixedSizeReadStream
  class FixedSizeReadStream;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::FixedSizeReadStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FixedSizeReadStream*, "System.Net", "FixedSizeReadStream");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.FixedSizeReadStream
  // [TokenAttribute] Offset: FFFFFFFF
  class FixedSizeReadStream : public ::System::Net::WebReadStream {
    public:
    // Writing base type padding for base size: 0x39 to desired offset: 0x40
    char ___base_padding[0x7] = {};
    // Nested type: ::System::Net::FixedSizeReadStream::$ProcessReadAsync$d__5
    struct $ProcessReadAsync$d__5;
    public:
    // private readonly System.Int64 <ContentLength>k__BackingField
    // Size: 0x8
    // Offset: 0x40
    int64_t ContentLength;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 position
    // Size: 0x8
    // Offset: 0x48
    int64_t position;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    public:
    // Get instance field reference: private readonly System.Int64 <ContentLength>k__BackingField
    [[deprecated("Use field access instead!")]] int64_t& dyn_$ContentLength$k__BackingField();
    // Get instance field reference: private System.Int64 position
    [[deprecated("Use field access instead!")]] int64_t& dyn_position();
    // public System.Int64 get_ContentLength()
    // Offset: 0x50133F8
    int64_t get_ContentLength();
    // public System.Void .ctor(System.Net.WebOperation operation, System.IO.Stream innerStream, System.Int64 contentLength)
    // Offset: 0x5013400
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FixedSizeReadStream* New_ctor(::System::Net::WebOperation* operation, ::System::IO::Stream* innerStream, int64_t contentLength) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::FixedSizeReadStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FixedSizeReadStream*, creationType>(operation, innerStream, contentLength)));
    }
    // protected override System.Threading.Tasks.Task`1<System.Int32> ProcessReadAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 size, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x5013428
    // Implemented from: System.Net.WebReadStream
    // Base method: System.Threading.Tasks.Task`1<System.Int32> WebReadStream::ProcessReadAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 size, System.Threading.CancellationToken cancellationToken)
    ::System::Threading::Tasks::Task_1<int>* ProcessReadAsync(::ArrayW<uint8_t> buffer, int offset, int size, ::System::Threading::CancellationToken cancellationToken);
  }; // System.Net.FixedSizeReadStream
  #pragma pack(pop)
  static check_size<sizeof(FixedSizeReadStream), 72 + sizeof(int64_t)> __System_Net_FixedSizeReadStreamSizeCheck;
  static_assert(sizeof(FixedSizeReadStream) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::FixedSizeReadStream::get_ContentLength
// Il2CppName: get_ContentLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Net::FixedSizeReadStream::*)()>(&System::Net::FixedSizeReadStream::get_ContentLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::FixedSizeReadStream*), "get_ContentLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::FixedSizeReadStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::FixedSizeReadStream::ProcessReadAsync
// Il2CppName: ProcessReadAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int>* (System::Net::FixedSizeReadStream::*)(::ArrayW<uint8_t>, int, int, ::System::Threading::CancellationToken)>(&System::Net::FixedSizeReadStream::ProcessReadAsync)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::FixedSizeReadStream*), "ProcessReadAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, size, cancellationToken});
  }
};
