// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Meta::WitAi::Data
namespace Meta::WitAi::Data {
  // Skipping declaration: OnDataAdded because it is already included!
  // Skipping declaration: ByteDataWriter because it is already included!
  // Skipping declaration: Marker because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: Meta.WitAi.Data
namespace Meta::WitAi::Data {
  // Forward declaring type: RingBuffer`1<T>
  template<typename T>
  class RingBuffer_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Meta::WitAi::Data::RingBuffer_1, "Meta.WitAi.Data", "RingBuffer`1");
// Type namespace: Meta.WitAi.Data
namespace Meta::WitAi::Data {
  // WARNING Size may be invalid!
  // Autogenerated type: Meta.WitAi.Data.RingBuffer`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: FFFFFFFF
  template<typename T>
  class RingBuffer_1 : public ::Il2CppObject {
    public:
    // Nested type: ::Meta::WitAi::Data::RingBuffer_1::OnDataAdded<T>
    class OnDataAdded;
    // Nested type: ::Meta::WitAi::Data::RingBuffer_1::ByteDataWriter<T>
    class ByteDataWriter;
    // Nested type: ::Meta::WitAi::Data::RingBuffer_1::Marker<T>
    class Marker;
    // WARNING Size may be invalid!
    // Autogenerated type: Meta.WitAi.Data.RingBuffer`1/OnDataAdded
    // [TokenAttribute] Offset: FFFFFFFF
    class OnDataAdded : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::System::MulticastDelegate {
      public:
      using declaring_type = RingBuffer_1<T>*;
      static constexpr std::string_view NESTED_NAME = "OnDataAdded";
      static constexpr bool IS_VALUE_TYPE = false;
      // public System.Void .ctor(System.Object object, System.IntPtr method)
      // Offset: 0xFFFFFFFFFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename RingBuffer_1<T>::OnDataAdded* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
        static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::RingBuffer_1::OnDataAdded::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename RingBuffer_1<T>::OnDataAdded*, creationType>(object, method)));
      }
      // public System.Void Invoke(T[] data, System.Int32 offset, System.Int32 length)
      // Offset: 0xFFFFFFFFFFFFFFFF
      void Invoke(::ArrayW<T> data, int offset, int length) {
        static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::RingBuffer_1::OnDataAdded::Invoke");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(typename ::Meta::WitAi::Data::RingBuffer_1<T>::OnDataAdded*), -1));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, data, offset, length);
      }
      // public System.IAsyncResult BeginInvoke(T[] data, System.Int32 offset, System.Int32 length, System.AsyncCallback callback, System.Object object)
      // Offset: 0xFFFFFFFFFFFFFFFF
      ::System::IAsyncResult* BeginInvoke(::ArrayW<T> data, int offset, int length, ::System::AsyncCallback* callback, ::Il2CppObject* object) {
        static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::RingBuffer_1::OnDataAdded::BeginInvoke");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(typename ::Meta::WitAi::Data::RingBuffer_1<T>::OnDataAdded*), -1));
        return ::il2cpp_utils::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal__method, data, offset, length, callback, object);
      }
      // public System.Void EndInvoke(System.IAsyncResult result)
      // Offset: 0xFFFFFFFFFFFFFFFF
      void EndInvoke(::System::IAsyncResult* result) {
        static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::RingBuffer_1::OnDataAdded::EndInvoke");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(typename ::Meta::WitAi::Data::RingBuffer_1<T>::OnDataAdded*), -1));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, result);
      }
    }; // Meta.WitAi.Data.RingBuffer`1/OnDataAdded
    // Could not write size check! Type: Meta.WitAi.Data.RingBuffer`1/OnDataAdded is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: Meta.WitAi.Data.RingBuffer`1/ByteDataWriter
    // [TokenAttribute] Offset: FFFFFFFF
    class ByteDataWriter : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::System::MulticastDelegate {
      public:
      using declaring_type = RingBuffer_1<T>*;
      static constexpr std::string_view NESTED_NAME = "ByteDataWriter";
      static constexpr bool IS_VALUE_TYPE = false;
      // public System.Void .ctor(System.Object object, System.IntPtr method)
      // Offset: 0xFFFFFFFFFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename RingBuffer_1<T>::ByteDataWriter* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
        static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::RingBuffer_1::ByteDataWriter::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename RingBuffer_1<T>::ByteDataWriter*, creationType>(object, method)));
      }
      // public System.Void Invoke(T[] buffer, System.Int32 offset, System.Int32 length)
      // Offset: 0xFFFFFFFFFFFFFFFF
      void Invoke(::ArrayW<T> buffer, int offset, int length) {
        static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::RingBuffer_1::ByteDataWriter::Invoke");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(typename ::Meta::WitAi::Data::RingBuffer_1<T>::ByteDataWriter*), -1));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, buffer, offset, length);
      }
      // public System.IAsyncResult BeginInvoke(T[] buffer, System.Int32 offset, System.Int32 length, System.AsyncCallback callback, System.Object object)
      // Offset: 0xFFFFFFFFFFFFFFFF
      ::System::IAsyncResult* BeginInvoke(::ArrayW<T> buffer, int offset, int length, ::System::AsyncCallback* callback, ::Il2CppObject* object) {
        static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::RingBuffer_1::ByteDataWriter::BeginInvoke");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(typename ::Meta::WitAi::Data::RingBuffer_1<T>::ByteDataWriter*), -1));
        return ::il2cpp_utils::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal__method, buffer, offset, length, callback, object);
      }
      // public System.Void EndInvoke(System.IAsyncResult result)
      // Offset: 0xFFFFFFFFFFFFFFFF
      void EndInvoke(::System::IAsyncResult* result) {
        static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::RingBuffer_1::ByteDataWriter::EndInvoke");
        auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(typename ::Meta::WitAi::Data::RingBuffer_1<T>::ByteDataWriter*), -1));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, result);
      }
    }; // Meta.WitAi.Data.RingBuffer`1/ByteDataWriter
    // Could not write size check! Type: Meta.WitAi.Data.RingBuffer`1/ByteDataWriter is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: Meta.WitAi.Data.RingBuffer`1/Marker
    // [TokenAttribute] Offset: FFFFFFFF
    class Marker : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = RingBuffer_1<T>*;
      static constexpr std::string_view NESTED_NAME = "Marker";
      static constexpr bool IS_VALUE_TYPE = false;
      public:
      // private System.Int64 bufferDataIndex
      // Size: 0x8
      // Offset: 0x0
      int64_t bufferDataIndex;
      // Field size check
      static_assert(sizeof(int64_t) == 0x8);
      // private System.Int32 index
      // Size: 0x4
      // Offset: 0x0
      int index;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // private readonly Meta.WitAi.Data.RingBuffer`1<T> ringBuffer
      // Size: 0x8
      // Offset: 0x0
      ::Meta::WitAi::Data::RingBuffer_1<T>* ringBuffer;
      // Field size check
      static_assert(sizeof(::Meta::WitAi::Data::RingBuffer_1<T>*) == 0x8);
      public:
      // Autogenerated instance field getter
      // Get instance field: private System.Int64 bufferDataIndex
      [[deprecated("Use field access instead!")]] int64_t& dyn_bufferDataIndex() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::RingBuffer_1::Marker::dyn_bufferDataIndex");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "bufferDataIndex"))->offset;
        return *reinterpret_cast<int64_t*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: private System.Int32 index
      [[deprecated("Use field access instead!")]] int& dyn_index() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::RingBuffer_1::Marker::dyn_index");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "index"))->offset;
        return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: private readonly Meta.WitAi.Data.RingBuffer`1<T> ringBuffer
      [[deprecated("Use field access instead!")]] ::Meta::WitAi::Data::RingBuffer_1<T>*& dyn_ringBuffer() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::RingBuffer_1::Marker::dyn_ringBuffer");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "ringBuffer"))->offset;
        return *reinterpret_cast<::Meta::WitAi::Data::RingBuffer_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // public Meta.WitAi.Data.RingBuffer`1<T> get_RingBuffer()
      // Offset: 0xFFFFFFFFFFFFFFFF
      ::Meta::WitAi::Data::RingBuffer_1<T>* get_RingBuffer() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::RingBuffer_1::Marker::get_RingBuffer");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_RingBuffer", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodRethrow<::Meta::WitAi::Data::RingBuffer_1<T>*, false>(this, ___internal__method);
      }
      // public System.Void .ctor(Meta.WitAi.Data.RingBuffer`1<T> ringBuffer, System.Int64 markerPosition, System.Int32 bufIndex)
      // Offset: 0xFFFFFFFFFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename RingBuffer_1<T>::Marker* New_ctor(::Meta::WitAi::Data::RingBuffer_1<T>* ringBuffer, int64_t markerPosition, int bufIndex) {
        static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::RingBuffer_1::Marker::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename RingBuffer_1<T>::Marker*, creationType>(ringBuffer, markerPosition, bufIndex)));
      }
      // public System.Boolean get_IsValid()
      // Offset: 0xFFFFFFFFFFFFFFFF
      bool get_IsValid() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::RingBuffer_1::Marker::get_IsValid");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_IsValid", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
      }
      // public System.Int64 get_AvailableByteCount()
      // Offset: 0xFFFFFFFFFFFFFFFF
      int64_t get_AvailableByteCount() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::RingBuffer_1::Marker::get_AvailableByteCount");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_AvailableByteCount", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodRethrow<int64_t, false>(this, ___internal__method);
      }
      // public System.Int64 get_RequestedByteCount()
      // Offset: 0xFFFFFFFFFFFFFFFF
      int64_t get_RequestedByteCount() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::RingBuffer_1::Marker::get_RequestedByteCount");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_RequestedByteCount", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodRethrow<int64_t, false>(this, ___internal__method);
      }
      // public System.Int64 get_CurrentBufferDataIndex()
      // Offset: 0xFFFFFFFFFFFFFFFF
      int64_t get_CurrentBufferDataIndex() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::RingBuffer_1::Marker::get_CurrentBufferDataIndex");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_CurrentBufferDataIndex", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodRethrow<int64_t, false>(this, ___internal__method);
      }
      // public System.Int32 Read(T[] buffer, System.Int32 offset, System.Int32 length, System.Boolean skipToNextValid)
      // Offset: 0xFFFFFFFFFFFFFFFF
      int Read(::ArrayW<T> buffer, int offset, int length, bool skipToNextValid) {
        static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::RingBuffer_1::Marker::Read");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Read", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(buffer), ::il2cpp_utils::ExtractType(offset), ::il2cpp_utils::ExtractType(length), ::il2cpp_utils::ExtractType(skipToNextValid)})));
        return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, buffer, offset, length, skipToNextValid);
      }
      // public System.Void ReadIntoWriters(params Meta.WitAi.Data.RingBuffer`1/ByteDataWriter<T>[] writers)
      // Offset: 0xFFFFFFFFFFFFFFFF
      void ReadIntoWriters(::ArrayW<typename ::Meta::WitAi::Data::RingBuffer_1<T>::ByteDataWriter*> writers) {
        static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::RingBuffer_1::Marker::ReadIntoWriters");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ReadIntoWriters", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(writers)})));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, writers);
      }
      // public Meta.WitAi.Data.RingBuffer`1/Marker<T> Clone()
      // Offset: 0xFFFFFFFFFFFFFFFF
      typename ::Meta::WitAi::Data::RingBuffer_1<T>::Marker* Clone() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::RingBuffer_1::Marker::Clone");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Clone", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodRethrow<typename ::Meta::WitAi::Data::RingBuffer_1<T>::Marker*, false>(this, ___internal__method);
      }
      // public System.Void Offset(System.Int32 amount)
      // Offset: 0xFFFFFFFFFFFFFFFF
      void Offset(int amount) {
        static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::RingBuffer_1::Marker::Offset");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Offset", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(amount)})));
        ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, amount);
      }
    }; // Meta.WitAi.Data.RingBuffer`1/Marker
    // Could not write size check! Type: Meta.WitAi.Data.RingBuffer`1/Marker is generic, or has no fields that are valid for size checks!
    public:
    // public Meta.WitAi.Data.RingBuffer`1/OnDataAdded<T> OnDataAddedEvent
    // Size: 0x8
    // Offset: 0x0
    typename ::Meta::WitAi::Data::RingBuffer_1<T>::OnDataAdded* OnDataAddedEvent;
    // Field size check
    static_assert(sizeof(typename ::Meta::WitAi::Data::RingBuffer_1<T>::OnDataAdded*) == 0x8);
    // private readonly T[] buffer
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<T> buffer;
    // Field size check
    static_assert(sizeof(::ArrayW<T>) == 0x8);
    // private System.Int32 bufferIndex
    // Size: 0x4
    // Offset: 0x0
    int bufferIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int64 bufferDataLength
    // Size: 0x8
    // Offset: 0x0
    int64_t bufferDataLength;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    public:
    // Autogenerated instance field getter
    // Get instance field: public Meta.WitAi.Data.RingBuffer`1/OnDataAdded<T> OnDataAddedEvent
    [[deprecated("Use field access instead!")]] typename ::Meta::WitAi::Data::RingBuffer_1<T>::OnDataAdded*& dyn_OnDataAddedEvent() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::RingBuffer_1::dyn_OnDataAddedEvent");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "OnDataAddedEvent"))->offset;
      return *reinterpret_cast<typename ::Meta::WitAi::Data::RingBuffer_1<T>::OnDataAdded**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly T[] buffer
    [[deprecated("Use field access instead!")]] ::ArrayW<T>& dyn_buffer() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::RingBuffer_1::dyn_buffer");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "buffer"))->offset;
      return *reinterpret_cast<::ArrayW<T>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 bufferIndex
    [[deprecated("Use field access instead!")]] int& dyn_bufferIndex() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::RingBuffer_1::dyn_bufferIndex");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "bufferIndex"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int64 bufferDataLength
    [[deprecated("Use field access instead!")]] int64_t& dyn_bufferDataLength() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::RingBuffer_1::dyn_bufferDataLength");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "bufferDataLength"))->offset;
      return *reinterpret_cast<int64_t*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Int32 get_Capacity()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_Capacity() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::RingBuffer_1::get_Capacity");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Capacity", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public System.Int32 GetBufferArrayIndex(System.Int64 bufferDataIndex)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int GetBufferArrayIndex(int64_t bufferDataIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::RingBuffer_1::GetBufferArrayIndex");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetBufferArrayIndex", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(bufferDataIndex)})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, bufferDataIndex);
    }
    // public T get_Item(System.Int64 bufferDataIndex)
    // Offset: 0xFFFFFFFFFFFFFFFF
    T get_Item(int64_t bufferDataIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::RingBuffer_1::get_Item");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Item", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(bufferDataIndex)})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method, bufferDataIndex);
    }
    // public System.Void Clear(System.Boolean eraseData)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Clear(bool eraseData) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::RingBuffer_1::Clear");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Clear", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(eraseData)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, eraseData);
    }
    // public System.Void .ctor(System.Int32 capacity)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RingBuffer_1<T>* New_ctor(int capacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::RingBuffer_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RingBuffer_1<T>*, creationType>(capacity)));
    }
    // private System.Int32 CopyToBuffer(T[] data, System.Int32 offset, System.Int32 length, System.Int32 bufferIndex)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int CopyToBuffer(::ArrayW<T> data, int offset, int length, int bufferIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::RingBuffer_1::CopyToBuffer");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CopyToBuffer", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(data), ::il2cpp_utils::ExtractType(offset), ::il2cpp_utils::ExtractType(length), ::il2cpp_utils::ExtractType(bufferIndex)})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, data, offset, length, bufferIndex);
    }
    // public System.Void WriteFromBuffer(Meta.WitAi.Data.RingBuffer`1/ByteDataWriter<T> writer, System.Int64 bufferIndex, System.Int32 length)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void WriteFromBuffer(typename ::Meta::WitAi::Data::RingBuffer_1<T>::ByteDataWriter* writer, int64_t bufferIndex, int length) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::RingBuffer_1::WriteFromBuffer");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "WriteFromBuffer", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(writer), ::il2cpp_utils::ExtractType(bufferIndex), ::il2cpp_utils::ExtractType(length)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, writer, bufferIndex, length);
    }
    // private System.Int32 CopyFromBuffer(T[] data, System.Int32 offset, System.Int32 length, System.Int32 bufferIndex)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int CopyFromBuffer(::ArrayW<T> data, int offset, int length, int bufferIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::RingBuffer_1::CopyFromBuffer");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CopyFromBuffer", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(data), ::il2cpp_utils::ExtractType(offset), ::il2cpp_utils::ExtractType(length), ::il2cpp_utils::ExtractType(bufferIndex)})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, data, offset, length, bufferIndex);
    }
    // public System.Void Push(T[] data, System.Int32 offset, System.Int32 length)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Push(::ArrayW<T> data, int offset, int length) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::RingBuffer_1::Push");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Push", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(data), ::il2cpp_utils::ExtractType(offset), ::il2cpp_utils::ExtractType(length)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, data, offset, length);
    }
    // public System.Void Push(T data)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Push(T data) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::RingBuffer_1::Push");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Push", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(data)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, data);
    }
    // public System.Int32 Read(T[] data, System.Int32 offset, System.Int32 length, System.Int64 bufferDataIndex)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int Read(::ArrayW<T> data, int offset, int length, int64_t bufferDataIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::RingBuffer_1::Read");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Read", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(data), ::il2cpp_utils::ExtractType(offset), ::il2cpp_utils::ExtractType(length), ::il2cpp_utils::ExtractType(bufferDataIndex)})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, data, offset, length, bufferDataIndex);
    }
    // public Meta.WitAi.Data.RingBuffer`1/Marker<T> CreateMarker(System.Int32 offset)
    // Offset: 0xFFFFFFFFFFFFFFFF
    typename ::Meta::WitAi::Data::RingBuffer_1<T>::Marker* CreateMarker(int offset) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::RingBuffer_1::CreateMarker");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CreateMarker", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(offset)})));
      return ::il2cpp_utils::RunMethodRethrow<typename ::Meta::WitAi::Data::RingBuffer_1<T>::Marker*, false>(this, ___internal__method, offset);
    }
  }; // Meta.WitAi.Data.RingBuffer`1
  // Could not write size check! Type: Meta.WitAi.Data.RingBuffer`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
