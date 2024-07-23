// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VYaml.Serialization.IYamlFormatter`1
#include "VYaml/Serialization/IYamlFormatter_1.hpp"
// Including type: System.ValueTuple`2
#include "System/ValueTuple_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VYaml::Serialization
namespace VYaml::Serialization {
  // Skipping declaration: <>c because it is already included!
  // Skipping declaration: <>c__DisplayClass2_0 because it is already included!
  // Forward declaring type: YamlSerializationContext
  class YamlSerializationContext;
  // Forward declaring type: YamlDeserializationContext
  class YamlDeserializationContext;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Enum because it is already included!
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: FieldInfo
  class FieldInfo;
}
// Completed forward declares
// Type namespace: VYaml.Serialization
namespace VYaml::Serialization {
  // Forward declaring type: EnumAsStringFormatter`1<T>
  template<typename T>
  class EnumAsStringFormatter_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::VYaml::Serialization::EnumAsStringFormatter_1, "VYaml.Serialization", "EnumAsStringFormatter`1");
// Type namespace: VYaml.Serialization
namespace VYaml::Serialization {
  // WARNING Size may be invalid!
  // Autogenerated type: VYaml.Serialization.EnumAsStringFormatter`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [NullableContextAttribute] Offset: FFFFFFFF
  // [NullableAttribute] Offset: FFFFFFFF
  template<typename T>
  class EnumAsStringFormatter_1 : public ::Il2CppObject/*, public ::VYaml::Serialization::IYamlFormatter_1<T>*/ {
    public:
    // Nested type: ::VYaml::Serialization::EnumAsStringFormatter_1::$$c<T>
    class $$c;
    // Nested type: ::VYaml::Serialization::EnumAsStringFormatter_1::$$c__DisplayClass2_0<T>
    class $$c__DisplayClass2_0;
    // WARNING Size may be invalid!
    // Autogenerated type: VYaml.Serialization.EnumAsStringFormatter`1/<>c
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    class $$c : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = EnumAsStringFormatter_1<T>*;
      static constexpr std::string_view NESTED_NAME = "<>c";
      static constexpr bool IS_VALUE_TYPE = false;
      // Autogenerated static field getter
      // Get static field: static public readonly VYaml.Serialization.EnumAsStringFormatter`1/<>c<T> <>9
      static typename ::VYaml::Serialization::EnumAsStringFormatter_1<T>::$$c* _get_$$9() {
        static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Serialization::EnumAsStringFormatter_1::$$c::_get_$$9");
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<typename ::VYaml::Serialization::EnumAsStringFormatter_1<T>::$$c*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename EnumAsStringFormatter_1<T>::$$c*>::get(), "<>9")));
      }
      // Autogenerated static field setter
      // Set static field: static public readonly VYaml.Serialization.EnumAsStringFormatter`1/<>c<T> <>9
      static void _set_$$9(typename ::VYaml::Serialization::EnumAsStringFormatter_1<T>::$$c* value) {
        static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Serialization::EnumAsStringFormatter_1::$$c::_set_$$9");
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename EnumAsStringFormatter_1<T>::$$c*>::get(), "<>9", value)));
      }
      // static private System.Void .cctor()
      // Offset: 0xFFFFFFFFFFFFFFFF
      static void _cctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Serialization::EnumAsStringFormatter_1::$$c::.cctor");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename EnumAsStringFormatter_1<T>::$$c*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFFFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename EnumAsStringFormatter_1<T>::$$c* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Serialization::EnumAsStringFormatter_1::$$c::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename EnumAsStringFormatter_1<T>::$$c*, creationType>()));
      }
      // System.ValueTuple`2<System.Object,System.String> <.cctor>b__2_1(System.Object v, System.String n)
      // Offset: 0xFFFFFFFFFFFFFFFF
      ::System::ValueTuple_2<::Il2CppObject*, ::StringW> $_cctor$b__2_1(::Il2CppObject* v, ::StringW n) {
        static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Serialization::EnumAsStringFormatter_1::$$c::<.cctor>b__2_1");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<.cctor>b__2_1", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(v), ::il2cpp_utils::ExtractType(n)})));
        return ::il2cpp_utils::RunMethodRethrow<::System::ValueTuple_2<::Il2CppObject*, ::StringW>, false>(this, ___internal__method, v, n);
      }
    }; // VYaml.Serialization.EnumAsStringFormatter`1/<>c
    // Could not write size check! Type: VYaml.Serialization.EnumAsStringFormatter`1/<>c is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: VYaml.Serialization.EnumAsStringFormatter`1/<>c__DisplayClass2_0
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    class $$c__DisplayClass2_0 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = EnumAsStringFormatter_1<T>*;
      static constexpr std::string_view NESTED_NAME = "<>c__DisplayClass2_0";
      static constexpr bool IS_VALUE_TYPE = false;
      public:
      // public System.Type type
      // Size: 0x8
      // Offset: 0x0
      ::System::Type* type;
      // Field size check
      static_assert(sizeof(::System::Type*) == 0x8);
      // public System.Func`2<System.Reflection.FieldInfo,System.Boolean> <>9__0
      // Size: 0x8
      // Offset: 0x0
      ::System::Func_2<::System::Reflection::FieldInfo*, bool>* $$9__0;
      // Field size check
      static_assert(sizeof(::System::Func_2<::System::Reflection::FieldInfo*, bool>*) == 0x8);
      public:
      // Autogenerated instance field getter
      // Get instance field: public System.Type type
      [[deprecated("Use field access instead!")]] ::System::Type*& dyn_type() {
        static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Serialization::EnumAsStringFormatter_1::$$c__DisplayClass2_0::dyn_type");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "type"))->offset;
        return *reinterpret_cast<::System::Type**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public System.Func`2<System.Reflection.FieldInfo,System.Boolean> <>9__0
      [[deprecated("Use field access instead!")]] ::System::Func_2<::System::Reflection::FieldInfo*, bool>*& dyn_$$9__0() {
        static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Serialization::EnumAsStringFormatter_1::$$c__DisplayClass2_0::dyn_$$9__0");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>9__0"))->offset;
        return *reinterpret_cast<::System::Func_2<::System::Reflection::FieldInfo*, bool>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFFFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename EnumAsStringFormatter_1<T>::$$c__DisplayClass2_0* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Serialization::EnumAsStringFormatter_1::$$c__DisplayClass2_0::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename EnumAsStringFormatter_1<T>::$$c__DisplayClass2_0*, creationType>()));
      }
      // System.Boolean <.cctor>b__0(System.Reflection.FieldInfo x)
      // Offset: 0xFFFFFFFFFFFFFFFF
      bool $_cctor$b__0(::System::Reflection::FieldInfo* x) {
        static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Serialization::EnumAsStringFormatter_1::$$c__DisplayClass2_0::<.cctor>b__0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<.cctor>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(x)})));
        return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, x);
      }
    }; // VYaml.Serialization.EnumAsStringFormatter`1/<>c__DisplayClass2_0
    // Could not write size check! Type: VYaml.Serialization.EnumAsStringFormatter`1/<>c__DisplayClass2_0 is generic, or has no fields that are valid for size checks!
    // Creating interface conversion operator: operator ::VYaml::Serialization::IYamlFormatter_1<T>
    operator ::VYaml::Serialization::IYamlFormatter_1<T>() noexcept {
      return *reinterpret_cast<::VYaml::Serialization::IYamlFormatter_1<T>*>(this);
    }
    // Autogenerated static field getter
    // Get static field: static private readonly System.Collections.Generic.Dictionary`2<System.String,T> NameValueMapping
    static ::System::Collections::Generic::Dictionary_2<::StringW, T>* _get_NameValueMapping() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Serialization::EnumAsStringFormatter_1::_get_NameValueMapping");
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<::System::Collections::Generic::Dictionary_2<::StringW, T>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<EnumAsStringFormatter_1<T>*>::get(), "NameValueMapping")));
    }
    // Autogenerated static field setter
    // Set static field: static private readonly System.Collections.Generic.Dictionary`2<System.String,T> NameValueMapping
    static void _set_NameValueMapping(::System::Collections::Generic::Dictionary_2<::StringW, T>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Serialization::EnumAsStringFormatter_1::_set_NameValueMapping");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<EnumAsStringFormatter_1<T>*>::get(), "NameValueMapping", value));
    }
    // Autogenerated static field getter
    // Get static field: static private readonly System.Collections.Generic.Dictionary`2<T,System.String> ValueNameMapping
    static ::System::Collections::Generic::Dictionary_2<T, ::StringW>* _get_ValueNameMapping() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Serialization::EnumAsStringFormatter_1::_get_ValueNameMapping");
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<::System::Collections::Generic::Dictionary_2<T, ::StringW>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<EnumAsStringFormatter_1<T>*>::get(), "ValueNameMapping")));
    }
    // Autogenerated static field setter
    // Set static field: static private readonly System.Collections.Generic.Dictionary`2<T,System.String> ValueNameMapping
    static void _set_ValueNameMapping(::System::Collections::Generic::Dictionary_2<T, ::StringW>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Serialization::EnumAsStringFormatter_1::_set_ValueNameMapping");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<EnumAsStringFormatter_1<T>*>::get(), "ValueNameMapping", value));
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static void _cctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Serialization::EnumAsStringFormatter_1::.cctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<EnumAsStringFormatter_1<T>*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
    // public System.Void Serialize(ref VYaml.Emitter.Utf8YamlEmitter emitter, T value, VYaml.Serialization.YamlSerializationContext context)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Serialize(ByRef<::VYaml::Emitter::Utf8YamlEmitter> emitter, T value, ::VYaml::Serialization::YamlSerializationContext* context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Serialization::EnumAsStringFormatter_1::Serialize");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::VYaml::Serialization::EnumAsStringFormatter_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, byref(emitter), value, context);
    }
    // public T Deserialize(ref VYaml.Parser.YamlParser parser, VYaml.Serialization.YamlDeserializationContext context)
    // Offset: 0xFFFFFFFFFFFFFFFF
    T Deserialize(ByRef<::VYaml::Parser::YamlParser> parser, ::VYaml::Serialization::YamlDeserializationContext* context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Serialization::EnumAsStringFormatter_1::Deserialize");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::VYaml::Serialization::EnumAsStringFormatter_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method, byref(parser), context);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnumAsStringFormatter_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Serialization::EnumAsStringFormatter_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnumAsStringFormatter_1<T>*, creationType>()));
    }
  }; // VYaml.Serialization.EnumAsStringFormatter`1
  // Could not write size check! Type: VYaml.Serialization.EnumAsStringFormatter`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"