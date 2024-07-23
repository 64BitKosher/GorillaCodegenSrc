// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: emotitron.Compression
namespace emotitron::Compression {
  // Forward declaring type: ArrayPackBytesExt
  class ArrayPackBytesExt;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::emotitron::Compression::ArrayPackBytesExt);
DEFINE_IL2CPP_ARG_TYPE(::emotitron::Compression::ArrayPackBytesExt*, "emotitron.Compression", "ArrayPackBytesExt");
// Type namespace: emotitron.Compression
namespace emotitron::Compression {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: emotitron.Compression.ArrayPackBytesExt
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class ArrayPackBytesExt : public ::Il2CppObject {
    public:
    // static public System.Void WritePackedBytes(System.UInt64* uPtr, System.UInt64 value, ref System.Int32 bitposition, System.Int32 bits)
    // Offset: 0x28C4498
    static void WritePackedBytes(uint64_t* uPtr, uint64_t value, ByRef<int> bitposition, int bits);
    // static public System.Void WritePackedBytes(System.UInt64[] buffer, System.UInt64 value, ref System.Int32 bitposition, System.Int32 bits)
    // Offset: 0x28C45A8
    static void WritePackedBytes(::ArrayW<uint64_t> buffer, uint64_t value, ByRef<int> bitposition, int bits);
    // static public System.Void WritePackedBytes(System.UInt32[] buffer, System.UInt64 value, ref System.Int32 bitposition, System.Int32 bits)
    // Offset: 0x28C4660
    static void WritePackedBytes(::ArrayW<uint> buffer, uint64_t value, ByRef<int> bitposition, int bits);
    // static public System.Void WritePackedBytes(System.Byte[] buffer, System.UInt64 value, ref System.Int32 bitposition, System.Int32 bits)
    // Offset: 0x28C4718
    static void WritePackedBytes(::ArrayW<uint8_t> buffer, uint64_t value, ByRef<int> bitposition, int bits);
    // static public System.UInt64 ReadPackedBytes(System.UInt64* uPtr, ref System.Int32 bitposition, System.Int32 bits)
    // Offset: 0x28C47D0
    static uint64_t ReadPackedBytes(uint64_t* uPtr, ByRef<int> bitposition, int bits);
    // static public System.UInt64 ReadPackedBytes(System.UInt64[] buffer, ref System.Int32 bitposition, System.Int32 bits)
    // Offset: 0x28C4870
    static uint64_t ReadPackedBytes(::ArrayW<uint64_t> buffer, ByRef<int> bitposition, int bits);
    // static public System.UInt64 ReadPackedBytes(System.UInt32[] buffer, ref System.Int32 bitposition, System.Int32 bits)
    // Offset: 0x28C4910
    static uint64_t ReadPackedBytes(::ArrayW<uint> buffer, ByRef<int> bitposition, int bits);
    // static public System.UInt64 ReadPackedBytes(System.Byte[] buffer, ref System.Int32 bitposition, System.Int32 bits)
    // Offset: 0x28C49B0
    static uint64_t ReadPackedBytes(::ArrayW<uint8_t> buffer, ByRef<int> bitposition, int bits);
    // static public System.Void WriteSignedPackedBytes(System.UInt64* uPtr, System.Int32 value, ref System.Int32 bitposition, System.Int32 bits)
    // Offset: 0x28C4A50
    static void WriteSignedPackedBytes(uint64_t* uPtr, int value, ByRef<int> bitposition, int bits);
    // static public System.Int32 ReadSignedPackedBytes(System.UInt64* uPtr, ref System.Int32 bitposition, System.Int32 bits)
    // Offset: 0x28C4A5C
    static int ReadSignedPackedBytes(uint64_t* uPtr, ByRef<int> bitposition, int bits);
    // static public System.Void WriteSignedPackedBytes(System.UInt64[] buffer, System.Int32 value, ref System.Int32 bitposition, System.Int32 bits)
    // Offset: 0x28C4A78
    static void WriteSignedPackedBytes(::ArrayW<uint64_t> buffer, int value, ByRef<int> bitposition, int bits);
    // static public System.Int32 ReadSignedPackedBytes(System.UInt64[] buffer, ref System.Int32 bitposition, System.Int32 bits)
    // Offset: 0x28C4A84
    static int ReadSignedPackedBytes(::ArrayW<uint64_t> buffer, ByRef<int> bitposition, int bits);
    // static public System.Void WriteSignedPackedBytes(System.UInt32[] buffer, System.Int32 value, ref System.Int32 bitposition, System.Int32 bits)
    // Offset: 0x28C4AA0
    static void WriteSignedPackedBytes(::ArrayW<uint> buffer, int value, ByRef<int> bitposition, int bits);
    // static public System.Int32 ReadSignedPackedBytes(System.UInt32[] buffer, ref System.Int32 bitposition, System.Int32 bits)
    // Offset: 0x28C4AAC
    static int ReadSignedPackedBytes(::ArrayW<uint> buffer, ByRef<int> bitposition, int bits);
    // static public System.Void WriteSignedPackedBytes(System.Byte[] buffer, System.Int32 value, ref System.Int32 bitposition, System.Int32 bits)
    // Offset: 0x28C4AC8
    static void WriteSignedPackedBytes(::ArrayW<uint8_t> buffer, int value, ByRef<int> bitposition, int bits);
    // static public System.Int32 ReadSignedPackedBytes(System.Byte[] buffer, ref System.Int32 bitposition, System.Int32 bits)
    // Offset: 0x28C4AD4
    static int ReadSignedPackedBytes(::ArrayW<uint8_t> buffer, ByRef<int> bitposition, int bits);
    // static public System.Void WriteSignedPackedBytes64(System.Byte[] buffer, System.Int64 value, ref System.Int32 bitposition, System.Int32 bits)
    // Offset: 0x28C4AF0
    static void WriteSignedPackedBytes64(::ArrayW<uint8_t> buffer, int64_t value, ByRef<int> bitposition, int bits);
    // static public System.Int64 ReadSignedPackedBytes64(System.Byte[] buffer, ref System.Int32 bitposition, System.Int32 bits)
    // Offset: 0x28C4AFC
    static int64_t ReadSignedPackedBytes64(::ArrayW<uint8_t> buffer, ByRef<int> bitposition, int bits);
  }; // emotitron.Compression.ArrayPackBytesExt
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: emotitron::Compression::ArrayPackBytesExt::WritePackedBytes
// Il2CppName: WritePackedBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t*, uint64_t, ByRef<int>, int)>(&emotitron::Compression::ArrayPackBytesExt::WritePackedBytes)> {
  static const MethodInfo* get() {
    static auto* uPtr = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "UInt64"))->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* bitposition = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* bits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(emotitron::Compression::ArrayPackBytesExt*), "WritePackedBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uPtr, value, bitposition, bits});
  }
};
// Writing MetadataGetter for method: emotitron::Compression::ArrayPackBytesExt::WritePackedBytes
// Il2CppName: WritePackedBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint64_t>, uint64_t, ByRef<int>, int)>(&emotitron::Compression::ArrayPackBytesExt::WritePackedBytes)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* bitposition = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* bits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(emotitron::Compression::ArrayPackBytesExt*), "WritePackedBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, value, bitposition, bits});
  }
};
// Writing MetadataGetter for method: emotitron::Compression::ArrayPackBytesExt::WritePackedBytes
// Il2CppName: WritePackedBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint>, uint64_t, ByRef<int>, int)>(&emotitron::Compression::ArrayPackBytesExt::WritePackedBytes)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* bitposition = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* bits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(emotitron::Compression::ArrayPackBytesExt*), "WritePackedBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, value, bitposition, bits});
  }
};
// Writing MetadataGetter for method: emotitron::Compression::ArrayPackBytesExt::WritePackedBytes
// Il2CppName: WritePackedBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, uint64_t, ByRef<int>, int)>(&emotitron::Compression::ArrayPackBytesExt::WritePackedBytes)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* bitposition = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* bits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(emotitron::Compression::ArrayPackBytesExt*), "WritePackedBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, value, bitposition, bits});
  }
};
// Writing MetadataGetter for method: emotitron::Compression::ArrayPackBytesExt::ReadPackedBytes
// Il2CppName: ReadPackedBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint64_t*, ByRef<int>, int)>(&emotitron::Compression::ArrayPackBytesExt::ReadPackedBytes)> {
  static const MethodInfo* get() {
    static auto* uPtr = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "UInt64"))->byval_arg;
    static auto* bitposition = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* bits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(emotitron::Compression::ArrayPackBytesExt*), "ReadPackedBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uPtr, bitposition, bits});
  }
};
// Writing MetadataGetter for method: emotitron::Compression::ArrayPackBytesExt::ReadPackedBytes
// Il2CppName: ReadPackedBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(::ArrayW<uint64_t>, ByRef<int>, int)>(&emotitron::Compression::ArrayPackBytesExt::ReadPackedBytes)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* bitposition = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* bits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(emotitron::Compression::ArrayPackBytesExt*), "ReadPackedBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, bitposition, bits});
  }
};
// Writing MetadataGetter for method: emotitron::Compression::ArrayPackBytesExt::ReadPackedBytes
// Il2CppName: ReadPackedBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(::ArrayW<uint>, ByRef<int>, int)>(&emotitron::Compression::ArrayPackBytesExt::ReadPackedBytes)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* bitposition = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* bits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(emotitron::Compression::ArrayPackBytesExt*), "ReadPackedBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, bitposition, bits});
  }
};
// Writing MetadataGetter for method: emotitron::Compression::ArrayPackBytesExt::ReadPackedBytes
// Il2CppName: ReadPackedBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(::ArrayW<uint8_t>, ByRef<int>, int)>(&emotitron::Compression::ArrayPackBytesExt::ReadPackedBytes)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* bitposition = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* bits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(emotitron::Compression::ArrayPackBytesExt*), "ReadPackedBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, bitposition, bits});
  }
};
// Writing MetadataGetter for method: emotitron::Compression::ArrayPackBytesExt::WriteSignedPackedBytes
// Il2CppName: WriteSignedPackedBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t*, int, ByRef<int>, int)>(&emotitron::Compression::ArrayPackBytesExt::WriteSignedPackedBytes)> {
  static const MethodInfo* get() {
    static auto* uPtr = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "UInt64"))->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bitposition = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* bits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(emotitron::Compression::ArrayPackBytesExt*), "WriteSignedPackedBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uPtr, value, bitposition, bits});
  }
};
// Writing MetadataGetter for method: emotitron::Compression::ArrayPackBytesExt::ReadSignedPackedBytes
// Il2CppName: ReadSignedPackedBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(uint64_t*, ByRef<int>, int)>(&emotitron::Compression::ArrayPackBytesExt::ReadSignedPackedBytes)> {
  static const MethodInfo* get() {
    static auto* uPtr = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "UInt64"))->byval_arg;
    static auto* bitposition = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* bits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(emotitron::Compression::ArrayPackBytesExt*), "ReadSignedPackedBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uPtr, bitposition, bits});
  }
};
// Writing MetadataGetter for method: emotitron::Compression::ArrayPackBytesExt::WriteSignedPackedBytes
// Il2CppName: WriteSignedPackedBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint64_t>, int, ByRef<int>, int)>(&emotitron::Compression::ArrayPackBytesExt::WriteSignedPackedBytes)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bitposition = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* bits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(emotitron::Compression::ArrayPackBytesExt*), "WriteSignedPackedBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, value, bitposition, bits});
  }
};
// Writing MetadataGetter for method: emotitron::Compression::ArrayPackBytesExt::ReadSignedPackedBytes
// Il2CppName: ReadSignedPackedBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ArrayW<uint64_t>, ByRef<int>, int)>(&emotitron::Compression::ArrayPackBytesExt::ReadSignedPackedBytes)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    static auto* bitposition = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* bits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(emotitron::Compression::ArrayPackBytesExt*), "ReadSignedPackedBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, bitposition, bits});
  }
};
// Writing MetadataGetter for method: emotitron::Compression::ArrayPackBytesExt::WriteSignedPackedBytes
// Il2CppName: WriteSignedPackedBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint>, int, ByRef<int>, int)>(&emotitron::Compression::ArrayPackBytesExt::WriteSignedPackedBytes)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bitposition = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* bits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(emotitron::Compression::ArrayPackBytesExt*), "WriteSignedPackedBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, value, bitposition, bits});
  }
};
// Writing MetadataGetter for method: emotitron::Compression::ArrayPackBytesExt::ReadSignedPackedBytes
// Il2CppName: ReadSignedPackedBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ArrayW<uint>, ByRef<int>, int)>(&emotitron::Compression::ArrayPackBytesExt::ReadSignedPackedBytes)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    static auto* bitposition = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* bits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(emotitron::Compression::ArrayPackBytesExt*), "ReadSignedPackedBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, bitposition, bits});
  }
};
// Writing MetadataGetter for method: emotitron::Compression::ArrayPackBytesExt::WriteSignedPackedBytes
// Il2CppName: WriteSignedPackedBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int, ByRef<int>, int)>(&emotitron::Compression::ArrayPackBytesExt::WriteSignedPackedBytes)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bitposition = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* bits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(emotitron::Compression::ArrayPackBytesExt*), "WriteSignedPackedBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, value, bitposition, bits});
  }
};
// Writing MetadataGetter for method: emotitron::Compression::ArrayPackBytesExt::ReadSignedPackedBytes
// Il2CppName: ReadSignedPackedBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ArrayW<uint8_t>, ByRef<int>, int)>(&emotitron::Compression::ArrayPackBytesExt::ReadSignedPackedBytes)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* bitposition = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* bits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(emotitron::Compression::ArrayPackBytesExt*), "ReadSignedPackedBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, bitposition, bits});
  }
};
// Writing MetadataGetter for method: emotitron::Compression::ArrayPackBytesExt::WriteSignedPackedBytes64
// Il2CppName: WriteSignedPackedBytes64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int64_t, ByRef<int>, int)>(&emotitron::Compression::ArrayPackBytesExt::WriteSignedPackedBytes64)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* bitposition = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* bits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(emotitron::Compression::ArrayPackBytesExt*), "WriteSignedPackedBytes64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, value, bitposition, bits});
  }
};
// Writing MetadataGetter for method: emotitron::Compression::ArrayPackBytesExt::ReadSignedPackedBytes64
// Il2CppName: ReadSignedPackedBytes64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::ArrayW<uint8_t>, ByRef<int>, int)>(&emotitron::Compression::ArrayPackBytesExt::ReadSignedPackedBytes64)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* bitposition = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* bits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(emotitron::Compression::ArrayPackBytesExt*), "ReadSignedPackedBytes64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, bitposition, bits});
  }
};