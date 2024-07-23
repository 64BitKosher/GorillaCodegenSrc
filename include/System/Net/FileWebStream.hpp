// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.FileStream
#include "System/IO/FileStream.hpp"
// Including type: System.Net.ICloseEx
#include "System/Net/ICloseEx.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: FileWebRequest
  class FileWebRequest;
  // Forward declaring type: CloseExState
  struct CloseExState;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: FileWebStream
  class FileWebStream;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::FileWebStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FileWebStream*, "System.Net", "FileWebStream");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.FileWebStream
  // [TokenAttribute] Offset: FFFFFFFF
  class FileWebStream : public ::System::IO::FileStream/*, public ::System::Net::ICloseEx*/ {
    public:
    public:
    // private System.Net.FileWebRequest m_request
    // Size: 0x8
    // Offset: 0x70
    ::System::Net::FileWebRequest* m_request;
    // Field size check
    static_assert(sizeof(::System::Net::FileWebRequest*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Net::ICloseEx
    operator ::System::Net::ICloseEx() noexcept {
      return *reinterpret_cast<::System::Net::ICloseEx*>(this);
    }
    // Get instance field reference: private System.Net.FileWebRequest m_request
    [[deprecated("Use field access instead!")]] ::System::Net::FileWebRequest*& dyn_m_request();
    // public System.Void .ctor(System.Net.FileWebRequest request, System.String path, System.IO.FileMode mode, System.IO.FileAccess access, System.IO.FileShare sharing)
    // Offset: 0x5001118
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileWebStream* New_ctor(::System::Net::FileWebRequest* request, ::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare sharing) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::FileWebStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileWebStream*, creationType>(request, path, mode, access, sharing)));
    }
    // public System.Void .ctor(System.Net.FileWebRequest request, System.String path, System.IO.FileMode mode, System.IO.FileAccess access, System.IO.FileShare sharing, System.Int32 length, System.Boolean async)
    // Offset: 0x5001E04
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileWebStream* New_ctor(::System::Net::FileWebRequest* request, ::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare sharing, int length, bool async) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::FileWebStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileWebStream*, creationType>(request, path, mode, access, sharing, length, async)));
    }
    // private System.Void System.Net.ICloseEx.CloseEx(System.Net.CloseExState closeState)
    // Offset: 0x5001F70
    void System_Net_ICloseEx_CloseEx(::System::Net::CloseExState closeState);
    // private System.Void CheckError()
    // Offset: 0x5002074
    void CheckError();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x5001EC0
    // Implemented from: System.IO.FileStream
    // Base method: System.Void FileStream::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // public override System.Int32 Read(System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    // Offset: 0x5001FAC
    // Implemented from: System.IO.FileStream
    // Base method: System.Int32 FileStream::Read(System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    int Read(::ArrayW<uint8_t> buffer, int offset, int size);
    // public override System.Void Write(System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    // Offset: 0x50020F0
    // Implemented from: System.IO.FileStream
    // Base method: System.Void FileStream::Write(System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    void Write(::ArrayW<uint8_t> buffer, int offset, int size);
    // public override System.IAsyncResult BeginRead(System.Byte[] buffer, System.Int32 offset, System.Int32 size, System.AsyncCallback callback, System.Object state)
    // Offset: 0x50021B8
    // Implemented from: System.IO.FileStream
    // Base method: System.IAsyncResult FileStream::BeginRead(System.Byte[] buffer, System.Int32 offset, System.Int32 size, System.AsyncCallback callback, System.Object state)
    ::System::IAsyncResult* BeginRead(::ArrayW<uint8_t> buffer, int offset, int size, ::System::AsyncCallback* callback, ::Il2CppObject* state);
    // public override System.Int32 EndRead(System.IAsyncResult ar)
    // Offset: 0x5002298
    // Implemented from: System.IO.FileStream
    // Base method: System.Int32 FileStream::EndRead(System.IAsyncResult ar)
    int EndRead(::System::IAsyncResult* ar);
    // public override System.IAsyncResult BeginWrite(System.Byte[] buffer, System.Int32 offset, System.Int32 size, System.AsyncCallback callback, System.Object state)
    // Offset: 0x5002338
    // Implemented from: System.IO.FileStream
    // Base method: System.IAsyncResult FileStream::BeginWrite(System.Byte[] buffer, System.Int32 offset, System.Int32 size, System.AsyncCallback callback, System.Object state)
    ::System::IAsyncResult* BeginWrite(::ArrayW<uint8_t> buffer, int offset, int size, ::System::AsyncCallback* callback, ::Il2CppObject* state);
    // public override System.Void EndWrite(System.IAsyncResult ar)
    // Offset: 0x5002418
    // Implemented from: System.IO.FileStream
    // Base method: System.Void FileStream::EndWrite(System.IAsyncResult ar)
    void EndWrite(::System::IAsyncResult* ar);
  }; // System.Net.FileWebStream
  #pragma pack(pop)
  static check_size<sizeof(FileWebStream), 112 + sizeof(::System::Net::FileWebRequest*)> __System_Net_FileWebStreamSizeCheck;
  static_assert(sizeof(FileWebStream) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::FileWebStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::FileWebStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::FileWebStream::System_Net_ICloseEx_CloseEx
// Il2CppName: System.Net.ICloseEx.CloseEx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FileWebStream::*)(::System::Net::CloseExState)>(&System::Net::FileWebStream::System_Net_ICloseEx_CloseEx)> {
  static const MethodInfo* get() {
    static auto* closeState = &::il2cpp_utils::GetClassFromName("System.Net", "CloseExState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::FileWebStream*), "System.Net.ICloseEx.CloseEx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{closeState});
  }
};
// Writing MetadataGetter for method: System::Net::FileWebStream::CheckError
// Il2CppName: CheckError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FileWebStream::*)()>(&System::Net::FileWebStream::CheckError)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::FileWebStream*), "CheckError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::FileWebStream::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FileWebStream::*)(bool)>(&System::Net::FileWebStream::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::FileWebStream*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::Net::FileWebStream::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::FileWebStream::*)(::ArrayW<uint8_t>, int, int)>(&System::Net::FileWebStream::Read)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::FileWebStream*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, size});
  }
};
// Writing MetadataGetter for method: System::Net::FileWebStream::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FileWebStream::*)(::ArrayW<uint8_t>, int, int)>(&System::Net::FileWebStream::Write)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::FileWebStream*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, size});
  }
};
// Writing MetadataGetter for method: System::Net::FileWebStream::BeginRead
// Il2CppName: BeginRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::Net::FileWebStream::*)(::ArrayW<uint8_t>, int, int, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::Net::FileWebStream::BeginRead)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::FileWebStream*), "BeginRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, size, callback, state});
  }
};
// Writing MetadataGetter for method: System::Net::FileWebStream::EndRead
// Il2CppName: EndRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::FileWebStream::*)(::System::IAsyncResult*)>(&System::Net::FileWebStream::EndRead)> {
  static const MethodInfo* get() {
    static auto* ar = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::FileWebStream*), "EndRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ar});
  }
};
// Writing MetadataGetter for method: System::Net::FileWebStream::BeginWrite
// Il2CppName: BeginWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::Net::FileWebStream::*)(::ArrayW<uint8_t>, int, int, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::Net::FileWebStream::BeginWrite)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::FileWebStream*), "BeginWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, size, callback, state});
  }
};
// Writing MetadataGetter for method: System::Net::FileWebStream::EndWrite
// Il2CppName: EndWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::FileWebStream::*)(::System::IAsyncResult*)>(&System::Net::FileWebStream::EndWrite)> {
  static const MethodInfo* get() {
    static auto* ar = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::FileWebStream*), "EndWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ar});
  }
};
