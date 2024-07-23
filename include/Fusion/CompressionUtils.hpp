// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: CompressionUtils
  class CompressionUtils;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::CompressionUtils);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::CompressionUtils*, "Fusion", "CompressionUtils");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.CompressionUtils
  // [TokenAttribute] Offset: FFFFFFFF
  class CompressionUtils : public ::Il2CppObject {
    public:
    // static public System.Byte[] Compress(System.Byte[] data)
    // Offset: 0x2AD6498
    static ::ArrayW<uint8_t> Compress(::ArrayW<uint8_t> data);
    // static public System.Byte[] Decompress(System.Byte[] data)
    // Offset: 0x2AD67E8
    static ::ArrayW<uint8_t> Decompress(::ArrayW<uint8_t> data);
    // static public System.Void SnapshotCompress(System.Int32* Current, System.Int32* Previous, System.Int32* Result, System.Int32 totalLenght, out System.Int32 count)
    // Offset: 0x2AD6C50
    static void SnapshotCompress(int* Current, int* Previous, int* Result, int totalLenght, ByRef<int> count);
  }; // Fusion.CompressionUtils
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::CompressionUtils::Compress
// Il2CppName: Compress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&Fusion::CompressionUtils::Compress)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::CompressionUtils*), "Compress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: Fusion::CompressionUtils::Decompress
// Il2CppName: Decompress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&Fusion::CompressionUtils::Decompress)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::CompressionUtils*), "Decompress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: Fusion::CompressionUtils::SnapshotCompress
// Il2CppName: SnapshotCompress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int*, int*, int*, int, ByRef<int>)>(&Fusion::CompressionUtils::SnapshotCompress)> {
  static const MethodInfo* get() {
    static auto* Current = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Int32"))->byval_arg;
    static auto* Previous = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Int32"))->byval_arg;
    static auto* Result = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Int32"))->byval_arg;
    static auto* totalLenght = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::CompressionUtils*), "SnapshotCompress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{Current, Previous, Result, totalLenght, count});
  }
};
