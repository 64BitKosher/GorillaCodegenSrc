// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VYaml.Serialization.YamlSerializer
#include "VYaml/Serialization/YamlSerializer.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncValueTaskMethodBuilder_1.hpp"
// Including type: System.Runtime.CompilerServices.ValueTaskAwaiter`1
#include "System/Runtime/CompilerServices/ValueTaskAwaiter_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: VYaml::Serialization
namespace VYaml::Serialization {
  // Forward declaring type: YamlSerializerOptions
  class YamlSerializerOptions;
}
// Forward declaring namespace: VYaml::Internal
namespace VYaml::Internal {
  // Forward declaring type: ReusableByteSequenceBuilder
  class ReusableByteSequenceBuilder;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::VYaml::Serialization::YamlSerializer::$DeserializeAsync$d__14_1, "VYaml.Serialization", "YamlSerializer/<DeserializeAsync>d__14`1");
// Type namespace: VYaml.Serialization
namespace VYaml::Serialization {
  // WARNING Size may be invalid!
  // Autogenerated type: VYaml.Serialization.YamlSerializer/<DeserializeAsync>d__14`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename T>
  struct YamlSerializer::$DeserializeAsync$d__14_1/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1<T> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<T> $$t__builder;
    // public System.IO.Stream stream
    // Size: 0x8
    // Offset: 0x0
    ::System::IO::Stream* stream;
    // Field size check
    static_assert(sizeof(::System::IO::Stream*) == 0x8);
    // public VYaml.Serialization.YamlSerializerOptions options
    // Size: 0x8
    // Offset: 0x0
    ::VYaml::Serialization::YamlSerializerOptions* options;
    // Field size check
    static_assert(sizeof(::VYaml::Serialization::YamlSerializerOptions*) == 0x8);
    // private System.Runtime.CompilerServices.ValueTaskAwaiter`1<VYaml.Internal.ReusableByteSequenceBuilder> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    ::System::Runtime::CompilerServices::ValueTaskAwaiter_1<::VYaml::Internal::ReusableByteSequenceBuilder*> $$u__1;
    public:
    // Creating value type constructor for type: $DeserializeAsync$d__14_1
    constexpr $DeserializeAsync$d__14_1(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<T> $$t__builder_ = {}, ::System::IO::Stream* stream_ = {}, ::VYaml::Serialization::YamlSerializerOptions* options_ = {}, ::System::Runtime::CompilerServices::ValueTaskAwaiter_1<::VYaml::Internal::ReusableByteSequenceBuilder*> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, stream{stream_}, options{options_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::CompilerServices::IAsyncStateMachine
    operator ::System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Serialization::YamlSerializer::$DeserializeAsync$d__14_1::dyn_$$1__state");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>1__state"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1<T> <>t__builder
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<T>& dyn_$$t__builder() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Serialization::YamlSerializer::$DeserializeAsync$d__14_1::dyn_$$t__builder");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>t__builder"))->offset;
      return *reinterpret_cast<::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<T>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.IO.Stream stream
    [[deprecated("Use field access instead!")]] ::System::IO::Stream*& dyn_stream() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Serialization::YamlSerializer::$DeserializeAsync$d__14_1::dyn_stream");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "stream"))->offset;
      return *reinterpret_cast<::System::IO::Stream**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public VYaml.Serialization.YamlSerializerOptions options
    [[deprecated("Use field access instead!")]] ::VYaml::Serialization::YamlSerializerOptions*& dyn_options() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Serialization::YamlSerializer::$DeserializeAsync$d__14_1::dyn_options");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "options"))->offset;
      return *reinterpret_cast<::VYaml::Serialization::YamlSerializerOptions**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Runtime.CompilerServices.ValueTaskAwaiter`1<VYaml.Internal.ReusableByteSequenceBuilder> <>u__1
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::ValueTaskAwaiter_1<::VYaml::Internal::ReusableByteSequenceBuilder*>& dyn_$$u__1() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Serialization::YamlSerializer::$DeserializeAsync$d__14_1::dyn_$$u__1");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>u__1"))->offset;
      return *reinterpret_cast<::System::Runtime::CompilerServices::ValueTaskAwaiter_1<::VYaml::Internal::ReusableByteSequenceBuilder*>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // private System.Void MoveNext()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void MoveNext() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Serialization::YamlSerializer::$DeserializeAsync$d__14_1::MoveNext");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::VYaml::Serialization::YamlSerializer::$DeserializeAsync$d__14_1<T>), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Serialization::YamlSerializer::$DeserializeAsync$d__14_1::SetStateMachine");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::VYaml::Serialization::YamlSerializer::$DeserializeAsync$d__14_1<T>), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, stateMachine);
    }
  }; // VYaml.Serialization.YamlSerializer/<DeserializeAsync>d__14`1
  // Could not write size check! Type: VYaml.Serialization.YamlSerializer/<DeserializeAsync>d__14`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
