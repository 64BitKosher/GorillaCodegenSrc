// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: System.Span`1
#include "System/Span_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: VYaml.Internal
namespace VYaml::Internal {
  // Forward declaring type: ExpandBuffer`1<T>
  template<typename T>
  class ExpandBuffer_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::VYaml::Internal::ExpandBuffer_1, "VYaml.Internal", "ExpandBuffer`1");
// Type namespace: VYaml.Internal
namespace VYaml::Internal {
  // WARNING Size may be invalid!
  // Autogenerated type: VYaml.Internal.ExpandBuffer`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [NullableAttribute] Offset: FFFFFFFF
  // [NullableContextAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: FFFFFFFF
  template<typename T>
  class ExpandBuffer_1 : public ::Il2CppObject {
    public:
    public:
    // private System.Int32 <Length>k__BackingField
    // Size: 0x4
    // Offset: 0x0
    int Length;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private T[] buffer
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<T> buffer;
    // Field size check
    static_assert(sizeof(::ArrayW<T>) == 0x8);
    public:
    // Autogenerated static field getter
    // Get static field: static private System.Int32 MinimumGrow
    static int _get_MinimumGrow() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Internal::ExpandBuffer_1::_get_MinimumGrow");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ExpandBuffer_1<T>*>::get(), "MinimumGrow"));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Int32 MinimumGrow
    static void _set_MinimumGrow(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Internal::ExpandBuffer_1::_set_MinimumGrow");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ExpandBuffer_1<T>*>::get(), "MinimumGrow", value));
    }
    // Autogenerated static field getter
    // Get static field: static private System.Int32 GrowFactor
    static int _get_GrowFactor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Internal::ExpandBuffer_1::_get_GrowFactor");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ExpandBuffer_1<T>*>::get(), "GrowFactor"));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Int32 GrowFactor
    static void _set_GrowFactor(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Internal::ExpandBuffer_1::_set_GrowFactor");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ExpandBuffer_1<T>*>::get(), "GrowFactor", value));
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 <Length>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$Length$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Internal::ExpandBuffer_1::dyn_$Length$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<Length>k__BackingField"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private T[] buffer
    [[deprecated("Use field access instead!")]] ::ArrayW<T>& dyn_buffer() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Internal::ExpandBuffer_1::dyn_buffer");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "buffer"))->offset;
      return *reinterpret_cast<::ArrayW<T>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Int32 get_Length()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_Length() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Internal::ExpandBuffer_1::get_Length");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Length", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // private System.Void set_Length(System.Int32 value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Length(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Internal::ExpandBuffer_1::set_Length");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_Length", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public System.Void .ctor(System.Int32 capacity)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExpandBuffer_1<T>* New_ctor(int capacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Internal::ExpandBuffer_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExpandBuffer_1<T>*, creationType>(capacity)));
    }
    // public T get_Item(System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    T get_Item(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Internal::ExpandBuffer_1::get_Item");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Item", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index)})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method, index);
    }
    // public System.Span`1<T> AsSpan()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Span_1<T> AsSpan() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Internal::ExpandBuffer_1::AsSpan");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "AsSpan", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Span_1<T>, false>(this, ___internal__method);
    }
    // public System.Span`1<T> AsSpan(System.Int32 length)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Span_1<T> AsSpan(int length) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Internal::ExpandBuffer_1::AsSpan");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "AsSpan", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(length)})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Span_1<T>, false>(this, ___internal__method, length);
    }
    // public System.Void Clear()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Clear() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Internal::ExpandBuffer_1::Clear");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Clear", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public T Peek()
    // Offset: 0xFFFFFFFFFFFFFFFF
    T Peek() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Internal::ExpandBuffer_1::Peek");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Peek", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
    }
    // public T Pop()
    // Offset: 0xFFFFFFFFFFFFFFFF
    T Pop() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Internal::ExpandBuffer_1::Pop");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Pop", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
    }
    // public System.Boolean TryPop(out T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool TryPop(ByRef<T> value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Internal::ExpandBuffer_1::TryPop");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "TryPop", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<T&>()})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, byref(value));
    }
    // public System.Void Add(T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Add(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Internal::ExpandBuffer_1::Add");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Add", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, item);
    }
    // private System.Void SetCapacity(System.Int32 newCapacity)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetCapacity(int newCapacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Internal::ExpandBuffer_1::SetCapacity");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SetCapacity", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(newCapacity)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, newCapacity);
    }
    // private System.Void Grow()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Grow() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Internal::ExpandBuffer_1::Grow");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Grow", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
  }; // VYaml.Internal.ExpandBuffer`1
  // Could not write size check! Type: VYaml.Internal.ExpandBuffer`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
