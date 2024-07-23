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
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: Base64Encoder
  class Base64Encoder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Base64Encoder);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Base64Encoder*, "System.Xml", "Base64Encoder");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Base64Encoder
  // [TokenAttribute] Offset: FFFFFFFF
  class Base64Encoder : public ::Il2CppObject {
    public:
    public:
    // private System.Byte[] leftOverBytes
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint8_t> leftOverBytes;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Int32 leftOverBytesCount
    // Size: 0x4
    // Offset: 0x18
    int leftOverBytesCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: leftOverBytesCount and: charsLine
    char __padding1[0x4] = {};
    // private System.Char[] charsLine
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::Il2CppChar> charsLine;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppChar>) == 0x8);
    public:
    // Get instance field reference: private System.Byte[] leftOverBytes
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_leftOverBytes();
    // Get instance field reference: private System.Int32 leftOverBytesCount
    [[deprecated("Use field access instead!")]] int& dyn_leftOverBytesCount();
    // Get instance field reference: private System.Char[] charsLine
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppChar>& dyn_charsLine();
    // System.Void .ctor()
    // Offset: 0x4D06AE4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Base64Encoder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Base64Encoder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Base64Encoder*, creationType>()));
    }
    // System.Void WriteChars(System.Char[] chars, System.Int32 index, System.Int32 count)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void WriteChars(::ArrayW<::Il2CppChar> chars, int index, int count);
    // System.Void Encode(System.Byte[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x4D06B48
    void Encode(::ArrayW<uint8_t> buffer, int index, int count);
    // System.Void Flush()
    // Offset: 0x4D06EA0
    void Flush();
  }; // System.Xml.Base64Encoder
  #pragma pack(pop)
  static check_size<sizeof(Base64Encoder), 32 + sizeof(::ArrayW<::Il2CppChar>)> __System_Xml_Base64EncoderSizeCheck;
  static_assert(sizeof(Base64Encoder) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Base64Encoder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Base64Encoder::WriteChars
// Il2CppName: WriteChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Base64Encoder::*)(::ArrayW<::Il2CppChar>, int, int)>(&System::Xml::Base64Encoder::WriteChars)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Base64Encoder*), "WriteChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, index, count});
  }
};
// Writing MetadataGetter for method: System::Xml::Base64Encoder::Encode
// Il2CppName: Encode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Base64Encoder::*)(::ArrayW<uint8_t>, int, int)>(&System::Xml::Base64Encoder::Encode)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Base64Encoder*), "Encode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: System::Xml::Base64Encoder::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Base64Encoder::*)()>(&System::Xml::Base64Encoder::Flush)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Base64Encoder*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
