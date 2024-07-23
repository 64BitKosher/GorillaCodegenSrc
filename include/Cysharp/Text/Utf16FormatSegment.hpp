// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Type namespace: Cysharp.Text
namespace Cysharp::Text {
  // Forward declaring type: Utf16FormatSegment
  struct Utf16FormatSegment;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Cysharp::Text::Utf16FormatSegment, "Cysharp.Text", "Utf16FormatSegment");
// Type namespace: Cysharp.Text
namespace Cysharp::Text {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Cysharp.Text.Utf16FormatSegment
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct Utf16FormatSegment/*, public ::System::ValueType*/ {
    public:
    public:
    // public readonly System.Int32 Offset
    // Size: 0x4
    // Offset: 0x0
    int Offset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 Count
    // Size: 0x4
    // Offset: 0x4
    int Count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 FormatIndex
    // Size: 0x4
    // Offset: 0x8
    int FormatIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 Alignment
    // Size: 0x4
    // Offset: 0xC
    int Alignment;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Utf16FormatSegment
    constexpr Utf16FormatSegment(int Offset_ = {}, int Count_ = {}, int FormatIndex_ = {}, int Alignment_ = {}) noexcept : Offset{Offset_}, Count{Count_}, FormatIndex{FormatIndex_}, Alignment{Alignment_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // static field const value: static public System.Int32 NotFormatIndex
    static constexpr const int NotFormatIndex = -1;
    // Get static field: static public System.Int32 NotFormatIndex
    static int _get_NotFormatIndex();
    // Set static field: static public System.Int32 NotFormatIndex
    static void _set_NotFormatIndex(int value);
    // Get instance field reference: public readonly System.Int32 Offset
    [[deprecated("Use field access instead!")]] int& dyn_Offset();
    // Get instance field reference: public readonly System.Int32 Count
    [[deprecated("Use field access instead!")]] int& dyn_Count();
    // Get instance field reference: public readonly System.Int32 FormatIndex
    [[deprecated("Use field access instead!")]] int& dyn_FormatIndex();
    // Get instance field reference: public readonly System.Int32 Alignment
    [[deprecated("Use field access instead!")]] int& dyn_Alignment();
    // public System.Boolean get_IsFormatArgument()
    // Offset: 0x57613AC
    bool get_IsFormatArgument();
    // public System.Void .ctor(System.Int32 offset, System.Int32 count, System.Int32 formatIndex, System.Int32 alignment)
    // Offset: 0x5760FC4
    // ABORTED: conflicts with another method.  Utf16FormatSegment(int offset, int count, int formatIndex, int alignment);
  }; // Cysharp.Text.Utf16FormatSegment
  #pragma pack(pop)
  static check_size<sizeof(Utf16FormatSegment), 12 + sizeof(int)> __Cysharp_Text_Utf16FormatSegmentSizeCheck;
  static_assert(sizeof(Utf16FormatSegment) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Cysharp::Text::Utf16FormatSegment::get_IsFormatArgument
// Il2CppName: get_IsFormatArgument
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Cysharp::Text::Utf16FormatSegment::*)()>(&Cysharp::Text::Utf16FormatSegment::get_IsFormatArgument)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cysharp::Text::Utf16FormatSegment), "get_IsFormatArgument", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cysharp::Text::Utf16FormatSegment::Utf16FormatSegment
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
