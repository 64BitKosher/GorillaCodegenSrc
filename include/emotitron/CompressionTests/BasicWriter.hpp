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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: emotitron.CompressionTests
namespace emotitron::CompressionTests {
  // Forward declaring type: BasicWriter
  class BasicWriter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::emotitron::CompressionTests::BasicWriter);
DEFINE_IL2CPP_ARG_TYPE(::emotitron::CompressionTests::BasicWriter*, "emotitron.CompressionTests", "BasicWriter");
// Type namespace: emotitron.CompressionTests
namespace emotitron::CompressionTests {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: emotitron.CompressionTests.BasicWriter
  // [TokenAttribute] Offset: FFFFFFFF
  class BasicWriter : public ::Il2CppObject {
    public:
    // Get static field: static public System.Int32 pos
    static int _get_pos();
    // Set static field: static public System.Int32 pos
    static void _set_pos(int value);
    // static public System.Void Reset()
    // Offset: 0x28CD32C
    static void Reset();
    // static public System.Byte[] BasicWrite(System.Byte[] buffer, System.Byte value)
    // Offset: 0x28CD374
    static ::ArrayW<uint8_t> BasicWrite(::ArrayW<uint8_t> buffer, uint8_t value);
    // static public System.Byte BasicRead(System.Byte[] buffer)
    // Offset: 0x28CD3FC
    static uint8_t BasicRead(::ArrayW<uint8_t> buffer);
    // public System.Void .ctor()
    // Offset: 0x28CDBA4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BasicWriter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::emotitron::CompressionTests::BasicWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BasicWriter*, creationType>()));
    }
  }; // emotitron.CompressionTests.BasicWriter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: emotitron::CompressionTests::BasicWriter::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&emotitron::CompressionTests::BasicWriter::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(emotitron::CompressionTests::BasicWriter*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: emotitron::CompressionTests::BasicWriter::BasicWrite
// Il2CppName: BasicWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, uint8_t)>(&emotitron::CompressionTests::BasicWriter::BasicWrite)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(emotitron::CompressionTests::BasicWriter*), "BasicWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, value});
  }
};
// Writing MetadataGetter for method: emotitron::CompressionTests::BasicWriter::BasicRead
// Il2CppName: BasicRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(::ArrayW<uint8_t>)>(&emotitron::CompressionTests::BasicWriter::BasicRead)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(emotitron::CompressionTests::BasicWriter*), "BasicRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer});
  }
};
// Writing MetadataGetter for method: emotitron::CompressionTests::BasicWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
