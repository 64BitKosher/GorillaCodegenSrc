// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Cysharp.Text.Utf8ValueStringBuilder
#include "Cysharp/Text/Utf8ValueStringBuilder.hpp"
// Including type: System.Span`1
#include "System/Span_1.hpp"
// Including type: System.Buffers.StandardFormat
#include "System/Buffers/StandardFormat.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Cysharp::Text::Utf8ValueStringBuilder::FormatterCache_1, "Cysharp.Text", "Utf8ValueStringBuilder/FormatterCache`1");
// Type namespace: Cysharp.Text
namespace Cysharp::Text {
  // WARNING Size may be invalid!
  // Autogenerated type: Cysharp.Text.Utf8ValueStringBuilder/FormatterCache`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [NullableContextAttribute] Offset: FFFFFFFF
  template<typename T>
  class Utf8ValueStringBuilder::FormatterCache_1 : public ::Il2CppObject {
    public:
    // Autogenerated static field getter
    // Get static field: static public Cysharp.Text.Utf8ValueStringBuilder/TryFormat`1<T> TryFormatDelegate
    static ::Cysharp::Text::Utf8ValueStringBuilder::TryFormat_1<T>* _get_TryFormatDelegate() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cysharp::Text::Utf8ValueStringBuilder::FormatterCache_1::_get_TryFormatDelegate");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Cysharp::Text::Utf8ValueStringBuilder::TryFormat_1<T>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Utf8ValueStringBuilder::FormatterCache_1<T>*>::get(), "TryFormatDelegate"));
    }
    // Autogenerated static field setter
    // Set static field: static public Cysharp.Text.Utf8ValueStringBuilder/TryFormat`1<T> TryFormatDelegate
    static void _set_TryFormatDelegate(::Cysharp::Text::Utf8ValueStringBuilder::TryFormat_1<T>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cysharp::Text::Utf8ValueStringBuilder::FormatterCache_1::_set_TryFormatDelegate");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Utf8ValueStringBuilder::FormatterCache_1<T>*>::get(), "TryFormatDelegate", value));
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static void _cctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cysharp::Text::Utf8ValueStringBuilder::FormatterCache_1::.cctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Utf8ValueStringBuilder::FormatterCache_1<T>*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
    // static private System.Boolean TryFormatDefault(T value, System.Span`1<System.Byte> dest, out System.Int32 written, System.Buffers.StandardFormat format)
    // Offset: 0xFFFFFFFFFFFFFFFF
    static bool TryFormatDefault(T value, ::System::Span_1<uint8_t> dest, ByRef<int> written, ::System::Buffers::StandardFormat format) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cysharp::Text::Utf8ValueStringBuilder::FormatterCache_1::TryFormatDefault");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Utf8ValueStringBuilder::FormatterCache_1<T>*>::get(), "TryFormatDefault", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value), ::il2cpp_utils::ExtractType(dest), ::il2cpp_utils::ExtractIndependentType<int&>(), ::il2cpp_utils::ExtractType(format)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, value, dest, byref(written), format);
    }
  }; // Cysharp.Text.Utf8ValueStringBuilder/FormatterCache`1
  // Could not write size check! Type: Cysharp.Text.Utf8ValueStringBuilder/FormatterCache`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
