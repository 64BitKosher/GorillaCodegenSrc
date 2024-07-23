// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Span`1
#include "System/Span_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: ReadOnlySpan`1 because it is already included!
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Forward declaring type: ValueUtf8Converter
  struct ValueUtf8Converter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Text::ValueUtf8Converter, "System.Text", "ValueUtf8Converter");
// Type namespace: System.Text
namespace System::Text {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Text.ValueUtf8Converter
  // [TokenAttribute] Offset: FFFFFFFF
  // [ObsoleteAttribute] Offset: FFFFFFFF
  // [IsByRefLikeAttribute] Offset: FFFFFFFF
  struct ValueUtf8Converter/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Byte[] _arrayToReturnToPool
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<uint8_t> arrayToReturnToPool;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Span`1<System.Byte> _bytes
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Span_1<uint8_t> bytes;
    public:
    // Creating value type constructor for type: ValueUtf8Converter
    constexpr ValueUtf8Converter(::ArrayW<uint8_t> arrayToReturnToPool_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), ::System::Span_1<uint8_t> bytes_ = {}) noexcept : arrayToReturnToPool{arrayToReturnToPool_}, bytes{bytes_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.Byte[] _arrayToReturnToPool
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn__arrayToReturnToPool();
    // Get instance field reference: private System.Span`1<System.Byte> _bytes
    [[deprecated("Use field access instead!")]] ::System::Span_1<uint8_t>& dyn__bytes();
    // public System.Void .ctor(System.Span`1<System.Byte> initialBuffer)
    // Offset: 0x44DE64C
    ValueUtf8Converter(::System::Span_1<uint8_t> initialBuffer);
    // public System.Span`1<System.Byte> ConvertAndTerminateString(System.ReadOnlySpan`1<System.Char> value)
    // Offset: 0x44DE658
    ::System::Span_1<uint8_t> ConvertAndTerminateString(::System::ReadOnlySpan_1<::Il2CppChar> value);
    // public System.Void Dispose()
    // Offset: 0x44DE8F0
    void Dispose();
  }; // System.Text.ValueUtf8Converter
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::ValueUtf8Converter::ValueUtf8Converter
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::ValueUtf8Converter::ConvertAndTerminateString
// Il2CppName: ConvertAndTerminateString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Span_1<uint8_t> (System::Text::ValueUtf8Converter::*)(::System::ReadOnlySpan_1<::Il2CppChar>)>(&System::Text::ValueUtf8Converter::ConvertAndTerminateString)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::ValueUtf8Converter), "ConvertAndTerminateString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Text::ValueUtf8Converter::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::ValueUtf8Converter::*)()>(&System::Text::ValueUtf8Converter::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::ValueUtf8Converter), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
