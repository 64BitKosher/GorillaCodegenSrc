// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: SeekOrigin
  struct SeekOrigin;
}
// Completed forward declares
// Type namespace: ExitGames.Client.Photon
namespace ExitGames::Client::Photon {
  // Forward declaring type: StreamBuffer
  class StreamBuffer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ExitGames::Client::Photon::StreamBuffer);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::StreamBuffer*, "ExitGames.Client.Photon", "StreamBuffer");
// Type namespace: ExitGames.Client.Photon
namespace ExitGames::Client::Photon {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: ExitGames.Client.Photon.StreamBuffer
  // [TokenAttribute] Offset: FFFFFFFF
  class StreamBuffer : public ::Il2CppObject {
    public:
    public:
    // private System.Int32 pos
    // Size: 0x4
    // Offset: 0x10
    int pos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 len
    // Size: 0x4
    // Offset: 0x14
    int len;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Byte[] buf
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> buf;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // static field const value: static private System.Int32 DefaultInitialSize
    static constexpr const int DefaultInitialSize = 0;
    // Get static field: static private System.Int32 DefaultInitialSize
    static int _get_DefaultInitialSize();
    // Set static field: static private System.Int32 DefaultInitialSize
    static void _set_DefaultInitialSize(int value);
    // Get instance field reference: private System.Int32 pos
    [[deprecated("Use field access instead!")]] int& dyn_pos();
    // Get instance field reference: private System.Int32 len
    [[deprecated("Use field access instead!")]] int& dyn_len();
    // Get instance field reference: private System.Byte[] buf
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_buf();
    // public System.Void .ctor(System.Int32 size)
    // Offset: 0x49F4498
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamBuffer* New_ctor(int size) {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::StreamBuffer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamBuffer*, creationType>(size)));
    }
    // public System.Void .ctor(System.Byte[] buf)
    // Offset: 0x49FB7B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamBuffer* New_ctor(::ArrayW<uint8_t> buf) {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::StreamBuffer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamBuffer*, creationType>(buf)));
    }
    // public System.Byte[] ToArray()
    // Offset: 0x49F4604
    ::ArrayW<uint8_t> ToArray();
    // public System.Byte[] ToArrayFromPos()
    // Offset: 0x49FB7F8
    ::ArrayW<uint8_t> ToArrayFromPos();
    // public System.Void Compact()
    // Offset: 0x49FB88C
    void Compact();
    // public System.Byte[] GetBuffer()
    // Offset: 0x49F45D8
    ::ArrayW<uint8_t> GetBuffer();
    // public System.Byte[] GetBufferAndAdvance(System.Int32 length, out System.Int32 offset)
    // Offset: 0x49FB908
    ::ArrayW<uint8_t> GetBufferAndAdvance(int length, ByRef<int> offset);
    // public System.Boolean get_CanRead()
    // Offset: 0x49FB944
    bool get_CanRead();
    // public System.Boolean get_CanSeek()
    // Offset: 0x49FB94C
    bool get_CanSeek();
    // public System.Boolean get_CanWrite()
    // Offset: 0x49FB954
    bool get_CanWrite();
    // public System.Int32 get_Length()
    // Offset: 0x49F4678
    int get_Length();
    // public System.Int32 get_Position()
    // Offset: 0x49F45E0
    int get_Position();
    // public System.Void set_Position(System.Int32 value)
    // Offset: 0x49F45E8
    void set_Position(int value);
    // public System.Int32 get_Available()
    // Offset: 0x49FBA20
    int get_Available();
    // public System.Void Flush()
    // Offset: 0x49FBA30
    void Flush();
    // public System.Int64 Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    // Offset: 0x49FBA34
    int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);
    // public System.Void SetLength(System.Int64 value)
    // Offset: 0x49F4508
    void SetLength(int64_t value);
    // public System.Void SetCapacityMinimum(System.Int32 neededSize)
    // Offset: 0x49F4568
    void SetCapacityMinimum(int neededSize);
    // public System.Int32 Read(System.Byte[] buffer, System.Int32 dstOffset, System.Int32 count)
    // Offset: 0x49FBB08
    int Read(::ArrayW<uint8_t> buffer, int dstOffset, int count);
    // public System.Void Write(System.Byte[] buffer, System.Int32 srcOffset, System.Int32 count)
    // Offset: 0x49F456C
    void Write(::ArrayW<uint8_t> buffer, int srcOffset, int count);
    // public System.Byte ReadByte()
    // Offset: 0x49FBB70
    uint8_t ReadByte();
    // public System.Void WriteByte(System.Byte value)
    // Offset: 0x49FBC58
    void WriteByte(uint8_t value);
    // public System.Void WriteBytes(System.Byte v0, System.Byte v1)
    // Offset: 0x49FBCC0
    void WriteBytes(uint8_t v0, uint8_t v1);
    // public System.Void WriteBytes(System.Byte v0, System.Byte v1, System.Byte v2)
    // Offset: 0x49FBD58
    void WriteBytes(uint8_t v0, uint8_t v1, uint8_t v2);
    // public System.Void WriteBytes(System.Byte v0, System.Byte v1, System.Byte v2, System.Byte v3)
    // Offset: 0x49FBE24
    void WriteBytes(uint8_t v0, uint8_t v1, uint8_t v2, uint8_t v3);
    // public System.Void WriteBytes(System.Byte v0, System.Byte v1, System.Byte v2, System.Byte v3, System.Byte v4, System.Byte v5, System.Byte v6, System.Byte v7)
    // Offset: 0x49FBF1C
    void WriteBytes(uint8_t v0, uint8_t v1, uint8_t v2, uint8_t v3, uint8_t v4, uint8_t v5, uint8_t v6, uint8_t v7);
    // private System.Boolean CheckSize(System.Int32 size)
    // Offset: 0x49FB95C
    bool CheckSize(int size);
  }; // ExitGames.Client.Photon.StreamBuffer
  #pragma pack(pop)
  static check_size<sizeof(StreamBuffer), 24 + sizeof(::ArrayW<uint8_t>)> __ExitGames_Client_Photon_StreamBufferSizeCheck;
  static_assert(sizeof(StreamBuffer) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ExitGames::Client::Photon::StreamBuffer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: ExitGames::Client::Photon::StreamBuffer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: ExitGames::Client::Photon::StreamBuffer::ToArray
// Il2CppName: ToArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (ExitGames::Client::Photon::StreamBuffer::*)()>(&ExitGames::Client::Photon::StreamBuffer::ToArray)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::StreamBuffer*), "ToArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::StreamBuffer::ToArrayFromPos
// Il2CppName: ToArrayFromPos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (ExitGames::Client::Photon::StreamBuffer::*)()>(&ExitGames::Client::Photon::StreamBuffer::ToArrayFromPos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::StreamBuffer*), "ToArrayFromPos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::StreamBuffer::Compact
// Il2CppName: Compact
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::StreamBuffer::*)()>(&ExitGames::Client::Photon::StreamBuffer::Compact)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::StreamBuffer*), "Compact", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::StreamBuffer::GetBuffer
// Il2CppName: GetBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (ExitGames::Client::Photon::StreamBuffer::*)()>(&ExitGames::Client::Photon::StreamBuffer::GetBuffer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::StreamBuffer*), "GetBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::StreamBuffer::GetBufferAndAdvance
// Il2CppName: GetBufferAndAdvance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (ExitGames::Client::Photon::StreamBuffer::*)(int, ByRef<int>)>(&ExitGames::Client::Photon::StreamBuffer::GetBufferAndAdvance)> {
  static const MethodInfo* get() {
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::StreamBuffer*), "GetBufferAndAdvance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{length, offset});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::StreamBuffer::get_CanRead
// Il2CppName: get_CanRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (ExitGames::Client::Photon::StreamBuffer::*)()>(&ExitGames::Client::Photon::StreamBuffer::get_CanRead)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::StreamBuffer*), "get_CanRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::StreamBuffer::get_CanSeek
// Il2CppName: get_CanSeek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (ExitGames::Client::Photon::StreamBuffer::*)()>(&ExitGames::Client::Photon::StreamBuffer::get_CanSeek)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::StreamBuffer*), "get_CanSeek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::StreamBuffer::get_CanWrite
// Il2CppName: get_CanWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (ExitGames::Client::Photon::StreamBuffer::*)()>(&ExitGames::Client::Photon::StreamBuffer::get_CanWrite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::StreamBuffer*), "get_CanWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::StreamBuffer::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ExitGames::Client::Photon::StreamBuffer::*)()>(&ExitGames::Client::Photon::StreamBuffer::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::StreamBuffer*), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::StreamBuffer::get_Position
// Il2CppName: get_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ExitGames::Client::Photon::StreamBuffer::*)()>(&ExitGames::Client::Photon::StreamBuffer::get_Position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::StreamBuffer*), "get_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::StreamBuffer::set_Position
// Il2CppName: set_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::StreamBuffer::*)(int)>(&ExitGames::Client::Photon::StreamBuffer::set_Position)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::StreamBuffer*), "set_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::StreamBuffer::get_Available
// Il2CppName: get_Available
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ExitGames::Client::Photon::StreamBuffer::*)()>(&ExitGames::Client::Photon::StreamBuffer::get_Available)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::StreamBuffer*), "get_Available", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::StreamBuffer::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::StreamBuffer::*)()>(&ExitGames::Client::Photon::StreamBuffer::Flush)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::StreamBuffer*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::StreamBuffer::Seek
// Il2CppName: Seek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (ExitGames::Client::Photon::StreamBuffer::*)(int64_t, ::System::IO::SeekOrigin)>(&ExitGames::Client::Photon::StreamBuffer::Seek)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* origin = &::il2cpp_utils::GetClassFromName("System.IO", "SeekOrigin")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::StreamBuffer*), "Seek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset, origin});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::StreamBuffer::SetLength
// Il2CppName: SetLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::StreamBuffer::*)(int64_t)>(&ExitGames::Client::Photon::StreamBuffer::SetLength)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::StreamBuffer*), "SetLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::StreamBuffer::SetCapacityMinimum
// Il2CppName: SetCapacityMinimum
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::StreamBuffer::*)(int)>(&ExitGames::Client::Photon::StreamBuffer::SetCapacityMinimum)> {
  static const MethodInfo* get() {
    static auto* neededSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::StreamBuffer*), "SetCapacityMinimum", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{neededSize});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::StreamBuffer::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ExitGames::Client::Photon::StreamBuffer::*)(::ArrayW<uint8_t>, int, int)>(&ExitGames::Client::Photon::StreamBuffer::Read)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* dstOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::StreamBuffer*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, dstOffset, count});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::StreamBuffer::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::StreamBuffer::*)(::ArrayW<uint8_t>, int, int)>(&ExitGames::Client::Photon::StreamBuffer::Write)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* srcOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::StreamBuffer*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, srcOffset, count});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::StreamBuffer::ReadByte
// Il2CppName: ReadByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (ExitGames::Client::Photon::StreamBuffer::*)()>(&ExitGames::Client::Photon::StreamBuffer::ReadByte)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::StreamBuffer*), "ReadByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::StreamBuffer::WriteByte
// Il2CppName: WriteByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::StreamBuffer::*)(uint8_t)>(&ExitGames::Client::Photon::StreamBuffer::WriteByte)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::StreamBuffer*), "WriteByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::StreamBuffer::WriteBytes
// Il2CppName: WriteBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::StreamBuffer::*)(uint8_t, uint8_t)>(&ExitGames::Client::Photon::StreamBuffer::WriteBytes)> {
  static const MethodInfo* get() {
    static auto* v0 = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* v1 = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::StreamBuffer*), "WriteBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v0, v1});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::StreamBuffer::WriteBytes
// Il2CppName: WriteBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::StreamBuffer::*)(uint8_t, uint8_t, uint8_t)>(&ExitGames::Client::Photon::StreamBuffer::WriteBytes)> {
  static const MethodInfo* get() {
    static auto* v0 = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* v1 = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* v2 = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::StreamBuffer*), "WriteBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v0, v1, v2});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::StreamBuffer::WriteBytes
// Il2CppName: WriteBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::StreamBuffer::*)(uint8_t, uint8_t, uint8_t, uint8_t)>(&ExitGames::Client::Photon::StreamBuffer::WriteBytes)> {
  static const MethodInfo* get() {
    static auto* v0 = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* v1 = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* v2 = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* v3 = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::StreamBuffer*), "WriteBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v0, v1, v2, v3});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::StreamBuffer::WriteBytes
// Il2CppName: WriteBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::StreamBuffer::*)(uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)>(&ExitGames::Client::Photon::StreamBuffer::WriteBytes)> {
  static const MethodInfo* get() {
    static auto* v0 = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* v1 = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* v2 = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* v3 = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* v4 = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* v5 = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* v6 = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* v7 = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::StreamBuffer*), "WriteBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v0, v1, v2, v3, v4, v5, v6, v7});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::StreamBuffer::CheckSize
// Il2CppName: CheckSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (ExitGames::Client::Photon::StreamBuffer::*)(int)>(&ExitGames::Client::Photon::StreamBuffer::CheckSize)> {
  static const MethodInfo* get() {
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::StreamBuffer*), "CheckSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{size});
  }
};
