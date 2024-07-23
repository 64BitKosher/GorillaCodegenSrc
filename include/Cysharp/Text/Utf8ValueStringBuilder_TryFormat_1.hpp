// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Cysharp.Text.Utf8ValueStringBuilder
#include "Cysharp/Text/Utf8ValueStringBuilder.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: System.Span`1
#include "System/Span_1.hpp"
// Including type: System.Buffers.StandardFormat
#include "System/Buffers/StandardFormat.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Cysharp::Text::Utf8ValueStringBuilder::TryFormat_1, "Cysharp.Text", "Utf8ValueStringBuilder/TryFormat`1");
// Type namespace: Cysharp.Text
namespace Cysharp::Text {
  // WARNING Size may be invalid!
  // Autogenerated type: Cysharp.Text.Utf8ValueStringBuilder/TryFormat`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [NullableContextAttribute] Offset: FFFFFFFF
  template<typename T>
  class Utf8ValueStringBuilder::TryFormat_1 : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Utf8ValueStringBuilder::TryFormat_1<T>* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cysharp::Text::Utf8ValueStringBuilder::TryFormat_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Utf8ValueStringBuilder::TryFormat_1<T>*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(T value, System.Span`1<System.Byte> destination, out System.Int32 written, System.Buffers.StandardFormat format)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Invoke(T value, ::System::Span_1<uint8_t> destination, ByRef<int> written, ::System::Buffers::StandardFormat format) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cysharp::Text::Utf8ValueStringBuilder::TryFormat_1::Invoke");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Cysharp::Text::Utf8ValueStringBuilder::TryFormat_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, value, destination, byref(written), format);
    }
    // public System.IAsyncResult BeginInvoke(T value, System.Span`1<System.Byte> destination, out System.Int32 written, System.Buffers.StandardFormat format, System.AsyncCallback callback, System.Object object)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::IAsyncResult* BeginInvoke(T value, ::System::Span_1<uint8_t> destination, ByRef<int> written, ::System::Buffers::StandardFormat format, ::System::AsyncCallback* callback, ::Il2CppObject* object) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cysharp::Text::Utf8ValueStringBuilder::TryFormat_1::BeginInvoke");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Cysharp::Text::Utf8ValueStringBuilder::TryFormat_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal__method, value, destination, byref(written), format, callback, object);
    }
    // public System.Boolean EndInvoke(out System.Int32 written, System.IAsyncResult result)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool EndInvoke(ByRef<int> written, ::System::IAsyncResult* result) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cysharp::Text::Utf8ValueStringBuilder::TryFormat_1::EndInvoke");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Cysharp::Text::Utf8ValueStringBuilder::TryFormat_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, byref(written), result);
    }
  }; // Cysharp.Text.Utf8ValueStringBuilder/TryFormat`1
  // Could not write size check! Type: Cysharp.Text.Utf8ValueStringBuilder/TryFormat`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
