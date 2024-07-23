// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Char
#include "System/Char.hpp"
// Including type: System.ReadOnlySpan`1
#include "System/ReadOnlySpan_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Buffers
namespace System::Buffers {
  // Forward declaring type: IBufferWriter`1<T>
  template<typename T>
  class IBufferWriter_1;
}
// Completed forward declares
// Type namespace: Cysharp.Text
namespace Cysharp::Text {
  // Forward declaring type: Utf16FormatHelper
  class Utf16FormatHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Cysharp::Text::Utf16FormatHelper);
DEFINE_IL2CPP_ARG_TYPE(::Cysharp::Text::Utf16FormatHelper*, "Cysharp.Text", "Utf16FormatHelper");
// Type namespace: Cysharp.Text
namespace Cysharp::Text {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Cysharp.Text.Utf16FormatHelper
  // [TokenAttribute] Offset: FFFFFFFF
  // [NullableContextAttribute] Offset: FFFFFFFF
  // [NullableAttribute] Offset: FFFFFFFF
  class Utf16FormatHelper : public ::Il2CppObject {
    public:
    // static field const value: static private System.Char sp
    static constexpr const ::Il2CppChar sp = u' ';
    // Get static field: static private System.Char sp
    static ::Il2CppChar _get_sp();
    // Set static field: static private System.Char sp
    static void _set_sp(::Il2CppChar value);
    // static public System.Void FormatTo(ref TBufferWriter sb, T arg, System.Int32 width, System.ReadOnlySpan`1<System.Char> format, System.String argName)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TBufferWriter, class T>
    static void FormatTo(ByRef<TBufferWriter> sb, T arg, int width, ::System::ReadOnlySpan_1<::Il2CppChar> format, ::StringW argName) {
      static_assert(std::is_convertible_v<std::remove_pointer_t<TBufferWriter>, ::System::Buffers::IBufferWriter_1<::Il2CppChar>>);
      static auto ___internal__logger = ::Logger::get().WithContext("::Cysharp::Text::Utf16FormatHelper::FormatTo");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Cysharp.Text", "Utf16FormatHelper", "FormatTo", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TBufferWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(sb), ::il2cpp_utils::ExtractType(arg), ::il2cpp_utils::ExtractType(width), ::il2cpp_utils::ExtractType(format), ::il2cpp_utils::ExtractType(argName)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TBufferWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, byref(sb), arg, width, format, argName);
    }
    // static private System.Void FormatToRightJustify(ref TBufferWriter sb, T arg, System.Int32 width, System.ReadOnlySpan`1<System.Char> format, System.String argName)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TBufferWriter, class T>
    static void FormatToRightJustify(ByRef<TBufferWriter> sb, T arg, int width, ::System::ReadOnlySpan_1<::Il2CppChar> format, ::StringW argName) {
      static_assert(std::is_convertible_v<std::remove_pointer_t<TBufferWriter>, ::System::Buffers::IBufferWriter_1<::Il2CppChar>>);
      static auto ___internal__logger = ::Logger::get().WithContext("::Cysharp::Text::Utf16FormatHelper::FormatToRightJustify");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Cysharp.Text", "Utf16FormatHelper", "FormatToRightJustify", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TBufferWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(sb), ::il2cpp_utils::ExtractType(arg), ::il2cpp_utils::ExtractType(width), ::il2cpp_utils::ExtractType(format), ::il2cpp_utils::ExtractType(argName)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TBufferWriter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, byref(sb), arg, width, format, argName);
    }
  }; // Cysharp.Text.Utf16FormatHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Cysharp::Text::Utf16FormatHelper::FormatTo
// Il2CppName: FormatTo
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Cysharp::Text::Utf16FormatHelper::FormatToRightJustify
// Il2CppName: FormatToRightJustify
// Cannot write MetadataGetter for generic methods!
