// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
// Including type: Pathfinding.Ionic.Zlib.FlushType
#include "Pathfinding/Ionic/Zlib/FlushType.hpp"
// Including type: Pathfinding.Ionic.Zlib.ZlibStreamFlavor
#include "Pathfinding/Ionic/Zlib/ZlibStreamFlavor.hpp"
// Including type: Pathfinding.Ionic.Zlib.CompressionMode
#include "Pathfinding/Ionic/Zlib/CompressionMode.hpp"
// Including type: Pathfinding.Ionic.Zlib.CompressionLevel
#include "Pathfinding/Ionic/Zlib/CompressionLevel.hpp"
// Including type: Pathfinding.Ionic.Zlib.CompressionStrategy
#include "Pathfinding/Ionic/Zlib/CompressionStrategy.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding::Ionic::Crc
namespace Pathfinding::Ionic::Crc {
  // Forward declaring type: CRC32
  class CRC32;
}
// Forward declaring namespace: Pathfinding::Ionic::Zlib
namespace Pathfinding::Ionic::Zlib {
  // Forward declaring type: ZlibCodec
  class ZlibCodec;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: SeekOrigin
  struct SeekOrigin;
}
// Completed forward declares
// Type namespace: Pathfinding.Ionic.Zlib
namespace Pathfinding::Ionic::Zlib {
  // Forward declaring type: ZlibBaseStream
  class ZlibBaseStream;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::Ionic::Zlib::ZlibBaseStream);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Ionic::Zlib::ZlibBaseStream*, "Pathfinding.Ionic.Zlib", "ZlibBaseStream");
// Type namespace: Pathfinding.Ionic.Zlib
namespace Pathfinding::Ionic::Zlib {
  // Size: 0x95
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Ionic.Zlib.ZlibBaseStream
  // [TokenAttribute] Offset: FFFFFFFF
  class ZlibBaseStream : public ::System::IO::Stream {
    public:
    // Nested type: ::Pathfinding::Ionic::Zlib::ZlibBaseStream::StreamMode
    struct StreamMode;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: Pathfinding.Ionic.Zlib.ZlibBaseStream/StreamMode
    // [TokenAttribute] Offset: FFFFFFFF
    struct StreamMode/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: StreamMode
      constexpr StreamMode(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Pathfinding.Ionic.Zlib.ZlibBaseStream/StreamMode Writer
      static constexpr const int Writer = 0;
      // Get static field: static public Pathfinding.Ionic.Zlib.ZlibBaseStream/StreamMode Writer
      static ::Pathfinding::Ionic::Zlib::ZlibBaseStream::StreamMode _get_Writer();
      // Set static field: static public Pathfinding.Ionic.Zlib.ZlibBaseStream/StreamMode Writer
      static void _set_Writer(::Pathfinding::Ionic::Zlib::ZlibBaseStream::StreamMode value);
      // static field const value: static public Pathfinding.Ionic.Zlib.ZlibBaseStream/StreamMode Reader
      static constexpr const int Reader = 1;
      // Get static field: static public Pathfinding.Ionic.Zlib.ZlibBaseStream/StreamMode Reader
      static ::Pathfinding::Ionic::Zlib::ZlibBaseStream::StreamMode _get_Reader();
      // Set static field: static public Pathfinding.Ionic.Zlib.ZlibBaseStream/StreamMode Reader
      static void _set_Reader(::Pathfinding::Ionic::Zlib::ZlibBaseStream::StreamMode value);
      // static field const value: static public Pathfinding.Ionic.Zlib.ZlibBaseStream/StreamMode Undefined
      static constexpr const int Undefined = 2;
      // Get static field: static public Pathfinding.Ionic.Zlib.ZlibBaseStream/StreamMode Undefined
      static ::Pathfinding::Ionic::Zlib::ZlibBaseStream::StreamMode _get_Undefined();
      // Set static field: static public Pathfinding.Ionic.Zlib.ZlibBaseStream/StreamMode Undefined
      static void _set_Undefined(::Pathfinding::Ionic::Zlib::ZlibBaseStream::StreamMode value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // Pathfinding.Ionic.Zlib.ZlibBaseStream/StreamMode
    #pragma pack(pop)
    static check_size<sizeof(ZlibBaseStream::StreamMode), 0 + sizeof(int)> __Pathfinding_Ionic_Zlib_ZlibBaseStream_StreamModeSizeCheck;
    static_assert(sizeof(ZlibBaseStream::StreamMode) == 0x4);
    public:
    // protected internal Pathfinding.Ionic.Zlib.ZlibCodec _z
    // Size: 0x8
    // Offset: 0x28
    ::Pathfinding::Ionic::Zlib::ZlibCodec* z;
    // Field size check
    static_assert(sizeof(::Pathfinding::Ionic::Zlib::ZlibCodec*) == 0x8);
    // protected internal Pathfinding.Ionic.Zlib.ZlibBaseStream/StreamMode _streamMode
    // Size: 0x4
    // Offset: 0x30
    ::Pathfinding::Ionic::Zlib::ZlibBaseStream::StreamMode streamMode;
    // Field size check
    static_assert(sizeof(::Pathfinding::Ionic::Zlib::ZlibBaseStream::StreamMode) == 0x4);
    // protected internal Pathfinding.Ionic.Zlib.FlushType _flushMode
    // Size: 0x4
    // Offset: 0x34
    ::Pathfinding::Ionic::Zlib::FlushType flushMode;
    // Field size check
    static_assert(sizeof(::Pathfinding::Ionic::Zlib::FlushType) == 0x4);
    // protected internal Pathfinding.Ionic.Zlib.ZlibStreamFlavor _flavor
    // Size: 0x4
    // Offset: 0x38
    ::Pathfinding::Ionic::Zlib::ZlibStreamFlavor flavor;
    // Field size check
    static_assert(sizeof(::Pathfinding::Ionic::Zlib::ZlibStreamFlavor) == 0x4);
    // protected internal Pathfinding.Ionic.Zlib.CompressionMode _compressionMode
    // Size: 0x4
    // Offset: 0x3C
    ::Pathfinding::Ionic::Zlib::CompressionMode compressionMode;
    // Field size check
    static_assert(sizeof(::Pathfinding::Ionic::Zlib::CompressionMode) == 0x4);
    // protected internal Pathfinding.Ionic.Zlib.CompressionLevel _level
    // Size: 0x4
    // Offset: 0x40
    ::Pathfinding::Ionic::Zlib::CompressionLevel level;
    // Field size check
    static_assert(sizeof(::Pathfinding::Ionic::Zlib::CompressionLevel) == 0x4);
    // protected internal System.Boolean _leaveOpen
    // Size: 0x1
    // Offset: 0x44
    bool leaveOpen;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: leaveOpen and: workingBuffer
    char __padding6[0x3] = {};
    // protected internal System.Byte[] _workingBuffer
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<uint8_t> workingBuffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // protected internal System.Int32 _bufferSize
    // Size: 0x4
    // Offset: 0x50
    int bufferSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: bufferSize and: buf1
    char __padding8[0x4] = {};
    // protected internal System.Byte[] _buf1
    // Size: 0x8
    // Offset: 0x58
    ::ArrayW<uint8_t> buf1;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // protected internal System.IO.Stream _stream
    // Size: 0x8
    // Offset: 0x60
    ::System::IO::Stream* stream;
    // Field size check
    static_assert(sizeof(::System::IO::Stream*) == 0x8);
    // protected internal Pathfinding.Ionic.Zlib.CompressionStrategy Strategy
    // Size: 0x4
    // Offset: 0x68
    ::Pathfinding::Ionic::Zlib::CompressionStrategy Strategy;
    // Field size check
    static_assert(sizeof(::Pathfinding::Ionic::Zlib::CompressionStrategy) == 0x4);
    // Padding between fields: Strategy and: crc
    char __padding11[0x4] = {};
    // private Pathfinding.Ionic.Crc.CRC32 crc
    // Size: 0x8
    // Offset: 0x70
    ::Pathfinding::Ionic::Crc::CRC32* crc;
    // Field size check
    static_assert(sizeof(::Pathfinding::Ionic::Crc::CRC32*) == 0x8);
    // protected internal System.String _GzipFileName
    // Size: 0x8
    // Offset: 0x78
    ::StringW GzipFileName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // protected internal System.String _GzipComment
    // Size: 0x8
    // Offset: 0x80
    ::StringW GzipComment;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // protected internal System.DateTime _GzipMtime
    // Size: 0x8
    // Offset: 0x88
    ::System::DateTime GzipMtime;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    // protected internal System.Int32 _gzipHeaderByteCount
    // Size: 0x4
    // Offset: 0x90
    int gzipHeaderByteCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean nomoreinput
    // Size: 0x1
    // Offset: 0x94
    bool nomoreinput;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: protected internal Pathfinding.Ionic.Zlib.ZlibCodec _z
    [[deprecated("Use field access instead!")]] ::Pathfinding::Ionic::Zlib::ZlibCodec*& dyn__z();
    // Get instance field reference: protected internal Pathfinding.Ionic.Zlib.ZlibBaseStream/StreamMode _streamMode
    [[deprecated("Use field access instead!")]] ::Pathfinding::Ionic::Zlib::ZlibBaseStream::StreamMode& dyn__streamMode();
    // Get instance field reference: protected internal Pathfinding.Ionic.Zlib.FlushType _flushMode
    [[deprecated("Use field access instead!")]] ::Pathfinding::Ionic::Zlib::FlushType& dyn__flushMode();
    // Get instance field reference: protected internal Pathfinding.Ionic.Zlib.ZlibStreamFlavor _flavor
    [[deprecated("Use field access instead!")]] ::Pathfinding::Ionic::Zlib::ZlibStreamFlavor& dyn__flavor();
    // Get instance field reference: protected internal Pathfinding.Ionic.Zlib.CompressionMode _compressionMode
    [[deprecated("Use field access instead!")]] ::Pathfinding::Ionic::Zlib::CompressionMode& dyn__compressionMode();
    // Get instance field reference: protected internal Pathfinding.Ionic.Zlib.CompressionLevel _level
    [[deprecated("Use field access instead!")]] ::Pathfinding::Ionic::Zlib::CompressionLevel& dyn__level();
    // Get instance field reference: protected internal System.Boolean _leaveOpen
    [[deprecated("Use field access instead!")]] bool& dyn__leaveOpen();
    // Get instance field reference: protected internal System.Byte[] _workingBuffer
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn__workingBuffer();
    // Get instance field reference: protected internal System.Int32 _bufferSize
    [[deprecated("Use field access instead!")]] int& dyn__bufferSize();
    // Get instance field reference: protected internal System.Byte[] _buf1
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn__buf1();
    // Get instance field reference: protected internal System.IO.Stream _stream
    [[deprecated("Use field access instead!")]] ::System::IO::Stream*& dyn__stream();
    // Get instance field reference: protected internal Pathfinding.Ionic.Zlib.CompressionStrategy Strategy
    [[deprecated("Use field access instead!")]] ::Pathfinding::Ionic::Zlib::CompressionStrategy& dyn_Strategy();
    // Get instance field reference: private Pathfinding.Ionic.Crc.CRC32 crc
    [[deprecated("Use field access instead!")]] ::Pathfinding::Ionic::Crc::CRC32*& dyn_crc();
    // Get instance field reference: protected internal System.String _GzipFileName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__GzipFileName();
    // Get instance field reference: protected internal System.String _GzipComment
    [[deprecated("Use field access instead!")]] ::StringW& dyn__GzipComment();
    // Get instance field reference: protected internal System.DateTime _GzipMtime
    [[deprecated("Use field access instead!")]] ::System::DateTime& dyn__GzipMtime();
    // Get instance field reference: protected internal System.Int32 _gzipHeaderByteCount
    [[deprecated("Use field access instead!")]] int& dyn__gzipHeaderByteCount();
    // Get instance field reference: private System.Boolean nomoreinput
    [[deprecated("Use field access instead!")]] bool& dyn_nomoreinput();
    // public System.Void .ctor(System.IO.Stream stream, Pathfinding.Ionic.Zlib.CompressionMode compressionMode, Pathfinding.Ionic.Zlib.CompressionLevel level, Pathfinding.Ionic.Zlib.ZlibStreamFlavor flavor, System.Boolean leaveOpen)
    // Offset: 0x49BF380
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ZlibBaseStream* New_ctor(::System::IO::Stream* stream, ::Pathfinding::Ionic::Zlib::CompressionMode compressionMode, ::Pathfinding::Ionic::Zlib::CompressionLevel level, ::Pathfinding::Ionic::Zlib::ZlibStreamFlavor flavor, bool leaveOpen) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Ionic::Zlib::ZlibBaseStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ZlibBaseStream*, creationType>(stream, compressionMode, level, flavor, leaveOpen)));
    }
    // protected internal System.Boolean get__wantCompress()
    // Offset: 0x49BF4E0
    bool get__wantCompress();
    // private Pathfinding.Ionic.Zlib.ZlibCodec get_z()
    // Offset: 0x49BF4F0
    ::Pathfinding::Ionic::Zlib::ZlibCodec* get_z();
    // private System.Byte[] get_workingBuffer()
    // Offset: 0x49BF5E8
    ::ArrayW<uint8_t> get_workingBuffer();
    // private System.Void finish()
    // Offset: 0x49BF8F4
    void finish();
    // private System.Void end()
    // Offset: 0x49BFE34
    void end();
    // private System.String ReadZeroTerminatedString()
    // Offset: 0x49C0080
    ::StringW ReadZeroTerminatedString();
    // private System.Int32 _ReadAndValidateGzipHeader()
    // Offset: 0x49C026C
    int _ReadAndValidateGzipHeader();
    // public override System.Void Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x49BF654
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    void Write(::ArrayW<uint8_t> buffer, int offset, int count);
    // public override System.Void Close()
    // Offset: 0x49BFF04
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Close()
    void Close();
    // public override System.Void Flush()
    // Offset: 0x49C0000
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Flush()
    void Flush();
    // public override System.Int64 Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    // Offset: 0x49C0024
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);
    // public override System.Void SetLength(System.Int64 value)
    // Offset: 0x49C005C
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::SetLength(System.Int64 value)
    void SetLength(int64_t value);
    // public override System.Int32 Read(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x49C056C
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::Read(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    int Read(::ArrayW<uint8_t> buffer, int offset, int count);
    // public override System.Boolean get_CanRead()
    // Offset: 0x49C09C8
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanRead()
    bool get_CanRead();
    // public override System.Boolean get_CanSeek()
    // Offset: 0x49C09E8
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanSeek()
    bool get_CanSeek();
    // public override System.Boolean get_CanWrite()
    // Offset: 0x49C0A08
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanWrite()
    bool get_CanWrite();
    // public override System.Int64 get_Length()
    // Offset: 0x49C0A28
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Length()
    int64_t get_Length();
    // public override System.Int64 get_Position()
    // Offset: 0x49C0A48
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Position()
    int64_t get_Position();
    // public override System.Void set_Position(System.Int64 value)
    // Offset: 0x49C0A80
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::set_Position(System.Int64 value)
    void set_Position(int64_t value);
  }; // Pathfinding.Ionic.Zlib.ZlibBaseStream
  #pragma pack(pop)
  static check_size<sizeof(ZlibBaseStream), 148 + sizeof(bool)> __Pathfinding_Ionic_Zlib_ZlibBaseStreamSizeCheck;
  static_assert(sizeof(ZlibBaseStream) == 0x95);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Ionic::Zlib::ZlibBaseStream::StreamMode, "Pathfinding.Ionic.Zlib", "ZlibBaseStream/StreamMode");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::Ionic::Zlib::ZlibBaseStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::Ionic::Zlib::ZlibBaseStream::get__wantCompress
// Il2CppName: get__wantCompress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::Ionic::Zlib::ZlibBaseStream::*)()>(&Pathfinding::Ionic::Zlib::ZlibBaseStream::get__wantCompress)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zlib::ZlibBaseStream*), "get__wantCompress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zlib::ZlibBaseStream::get_z
// Il2CppName: get_z
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::Ionic::Zlib::ZlibCodec* (Pathfinding::Ionic::Zlib::ZlibBaseStream::*)()>(&Pathfinding::Ionic::Zlib::ZlibBaseStream::get_z)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zlib::ZlibBaseStream*), "get_z", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zlib::ZlibBaseStream::get_workingBuffer
// Il2CppName: get_workingBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Pathfinding::Ionic::Zlib::ZlibBaseStream::*)()>(&Pathfinding::Ionic::Zlib::ZlibBaseStream::get_workingBuffer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zlib::ZlibBaseStream*), "get_workingBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zlib::ZlibBaseStream::finish
// Il2CppName: finish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Ionic::Zlib::ZlibBaseStream::*)()>(&Pathfinding::Ionic::Zlib::ZlibBaseStream::finish)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zlib::ZlibBaseStream*), "finish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zlib::ZlibBaseStream::end
// Il2CppName: end
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Ionic::Zlib::ZlibBaseStream::*)()>(&Pathfinding::Ionic::Zlib::ZlibBaseStream::end)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zlib::ZlibBaseStream*), "end", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zlib::ZlibBaseStream::ReadZeroTerminatedString
// Il2CppName: ReadZeroTerminatedString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Pathfinding::Ionic::Zlib::ZlibBaseStream::*)()>(&Pathfinding::Ionic::Zlib::ZlibBaseStream::ReadZeroTerminatedString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zlib::ZlibBaseStream*), "ReadZeroTerminatedString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zlib::ZlibBaseStream::_ReadAndValidateGzipHeader
// Il2CppName: _ReadAndValidateGzipHeader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Pathfinding::Ionic::Zlib::ZlibBaseStream::*)()>(&Pathfinding::Ionic::Zlib::ZlibBaseStream::_ReadAndValidateGzipHeader)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zlib::ZlibBaseStream*), "_ReadAndValidateGzipHeader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zlib::ZlibBaseStream::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Ionic::Zlib::ZlibBaseStream::*)(::ArrayW<uint8_t>, int, int)>(&Pathfinding::Ionic::Zlib::ZlibBaseStream::Write)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zlib::ZlibBaseStream*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zlib::ZlibBaseStream::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Ionic::Zlib::ZlibBaseStream::*)()>(&Pathfinding::Ionic::Zlib::ZlibBaseStream::Close)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zlib::ZlibBaseStream*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zlib::ZlibBaseStream::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Ionic::Zlib::ZlibBaseStream::*)()>(&Pathfinding::Ionic::Zlib::ZlibBaseStream::Flush)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zlib::ZlibBaseStream*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zlib::ZlibBaseStream::Seek
// Il2CppName: Seek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (Pathfinding::Ionic::Zlib::ZlibBaseStream::*)(int64_t, ::System::IO::SeekOrigin)>(&Pathfinding::Ionic::Zlib::ZlibBaseStream::Seek)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* origin = &::il2cpp_utils::GetClassFromName("System.IO", "SeekOrigin")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zlib::ZlibBaseStream*), "Seek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset, origin});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zlib::ZlibBaseStream::SetLength
// Il2CppName: SetLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Ionic::Zlib::ZlibBaseStream::*)(int64_t)>(&Pathfinding::Ionic::Zlib::ZlibBaseStream::SetLength)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zlib::ZlibBaseStream*), "SetLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zlib::ZlibBaseStream::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Pathfinding::Ionic::Zlib::ZlibBaseStream::*)(::ArrayW<uint8_t>, int, int)>(&Pathfinding::Ionic::Zlib::ZlibBaseStream::Read)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zlib::ZlibBaseStream*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zlib::ZlibBaseStream::get_CanRead
// Il2CppName: get_CanRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::Ionic::Zlib::ZlibBaseStream::*)()>(&Pathfinding::Ionic::Zlib::ZlibBaseStream::get_CanRead)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zlib::ZlibBaseStream*), "get_CanRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zlib::ZlibBaseStream::get_CanSeek
// Il2CppName: get_CanSeek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::Ionic::Zlib::ZlibBaseStream::*)()>(&Pathfinding::Ionic::Zlib::ZlibBaseStream::get_CanSeek)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zlib::ZlibBaseStream*), "get_CanSeek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zlib::ZlibBaseStream::get_CanWrite
// Il2CppName: get_CanWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::Ionic::Zlib::ZlibBaseStream::*)()>(&Pathfinding::Ionic::Zlib::ZlibBaseStream::get_CanWrite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zlib::ZlibBaseStream*), "get_CanWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zlib::ZlibBaseStream::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (Pathfinding::Ionic::Zlib::ZlibBaseStream::*)()>(&Pathfinding::Ionic::Zlib::ZlibBaseStream::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zlib::ZlibBaseStream*), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zlib::ZlibBaseStream::get_Position
// Il2CppName: get_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (Pathfinding::Ionic::Zlib::ZlibBaseStream::*)()>(&Pathfinding::Ionic::Zlib::ZlibBaseStream::get_Position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zlib::ZlibBaseStream*), "get_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zlib::ZlibBaseStream::set_Position
// Il2CppName: set_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Ionic::Zlib::ZlibBaseStream::*)(int64_t)>(&Pathfinding::Ionic::Zlib::ZlibBaseStream::set_Position)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zlib::ZlibBaseStream*), "set_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
