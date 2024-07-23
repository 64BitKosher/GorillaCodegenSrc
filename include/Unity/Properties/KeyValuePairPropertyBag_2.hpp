// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Unity.Properties.PropertyBag`1
#include "Unity/Properties/PropertyBag_1.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Unity::Properties
namespace Unity::Properties {
  // Skipping declaration: <>c because it is already included!
  // Forward declaring type: DelegateProperty`2<TContainer, TValue>
  template<typename TContainer, typename TValue>
  class DelegateProperty_2;
}
// Completed forward declares
// Type namespace: Unity.Properties
namespace Unity::Properties {
  // Forward declaring type: KeyValuePairPropertyBag`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class KeyValuePairPropertyBag_2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::KeyValuePairPropertyBag_2, "Unity.Properties", "KeyValuePairPropertyBag`2");
// Type namespace: Unity.Properties
namespace Unity::Properties {
  // WARNING Size may be invalid!
  // Autogenerated type: Unity.Properties.KeyValuePairPropertyBag`2
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TKey, typename TValue>
  class KeyValuePairPropertyBag_2 : public ::Unity::Properties::PropertyBag_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>> {
    public:
    // Nested type: ::Unity::Properties::KeyValuePairPropertyBag_2::$$c<TKey, TValue>
    class $$c;
    // WARNING Size may be invalid!
    // Autogenerated type: Unity.Properties.KeyValuePairPropertyBag`2/<>c
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    class $$c : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = KeyValuePairPropertyBag_2<TKey, TValue>*;
      static constexpr std::string_view NESTED_NAME = "<>c";
      static constexpr bool IS_VALUE_TYPE = false;
      // Autogenerated static field getter
      // Get static field: static public readonly Unity.Properties.KeyValuePairPropertyBag`2/<>c<TKey,TValue> <>9
      static typename ::Unity::Properties::KeyValuePairPropertyBag_2<TKey, TValue>::$$c* _get_$$9() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::KeyValuePairPropertyBag_2::$$c::_get_$$9");
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<typename ::Unity::Properties::KeyValuePairPropertyBag_2<TKey, TValue>::$$c*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename KeyValuePairPropertyBag_2<TKey, TValue>::$$c*>::get(), "<>9")));
      }
      // Autogenerated static field setter
      // Set static field: static public readonly Unity.Properties.KeyValuePairPropertyBag`2/<>c<TKey,TValue> <>9
      static void _set_$$9(typename ::Unity::Properties::KeyValuePairPropertyBag_2<TKey, TValue>::$$c* value) {
        static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::KeyValuePairPropertyBag_2::$$c::_set_$$9");
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename KeyValuePairPropertyBag_2<TKey, TValue>::$$c*>::get(), "<>9", value)));
      }
      // static private System.Void .cctor()
      // Offset: 0xFFFFFFFFFFFFFFFF
      static void _cctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::KeyValuePairPropertyBag_2::$$c::.cctor");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename KeyValuePairPropertyBag_2<TKey, TValue>::$$c*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFFFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename KeyValuePairPropertyBag_2<TKey, TValue>::$$c* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::KeyValuePairPropertyBag_2::$$c::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename KeyValuePairPropertyBag_2<TKey, TValue>::$$c*, creationType>()));
      }
      // TKey <.cctor>b__7_0(ref System.Collections.Generic.KeyValuePair`2<TKey,TValue> container)
      // Offset: 0xFFFFFFFFFFFFFFFF
      TKey $_cctor$b__7_0(ByRef<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>> container) {
        static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::KeyValuePairPropertyBag_2::$$c::<.cctor>b__7_0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<.cctor>b__7_0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(container)})));
        return ::il2cpp_utils::RunMethodRethrow<TKey, false>(this, ___internal__method, byref(container));
      }
      // TValue <.cctor>b__7_1(ref System.Collections.Generic.KeyValuePair`2<TKey,TValue> container)
      // Offset: 0xFFFFFFFFFFFFFFFF
      TValue $_cctor$b__7_1(ByRef<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>> container) {
        static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::KeyValuePairPropertyBag_2::$$c::<.cctor>b__7_1");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<.cctor>b__7_1", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(container)})));
        return ::il2cpp_utils::RunMethodRethrow<TValue, false>(this, ___internal__method, byref(container));
      }
    }; // Unity.Properties.KeyValuePairPropertyBag`2/<>c
    // Could not write size check! Type: Unity.Properties.KeyValuePairPropertyBag`2/<>c is generic, or has no fields that are valid for size checks!
    // Autogenerated static field getter
    // Get static field: static private readonly Unity.Properties.DelegateProperty`2<System.Collections.Generic.KeyValuePair`2<TKey,TValue>,TKey> s_KeyProperty
    static ::Unity::Properties::DelegateProperty_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, TKey>* _get_s_KeyProperty() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::KeyValuePairPropertyBag_2::_get_s_KeyProperty");
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<::Unity::Properties::DelegateProperty_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, TKey>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<KeyValuePairPropertyBag_2<TKey, TValue>*>::get(), "s_KeyProperty")));
    }
    // Autogenerated static field setter
    // Set static field: static private readonly Unity.Properties.DelegateProperty`2<System.Collections.Generic.KeyValuePair`2<TKey,TValue>,TKey> s_KeyProperty
    static void _set_s_KeyProperty(::Unity::Properties::DelegateProperty_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, TKey>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::KeyValuePairPropertyBag_2::_set_s_KeyProperty");
      THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<KeyValuePairPropertyBag_2<TKey, TValue>*>::get(), "s_KeyProperty", value)));
    }
    // Autogenerated static field getter
    // Get static field: static private readonly Unity.Properties.DelegateProperty`2<System.Collections.Generic.KeyValuePair`2<TKey,TValue>,TValue> s_ValueProperty
    static ::Unity::Properties::DelegateProperty_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, TValue>* _get_s_ValueProperty() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::KeyValuePairPropertyBag_2::_get_s_ValueProperty");
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<::Unity::Properties::DelegateProperty_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, TValue>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<KeyValuePairPropertyBag_2<TKey, TValue>*>::get(), "s_ValueProperty")));
    }
    // Autogenerated static field setter
    // Set static field: static private readonly Unity.Properties.DelegateProperty`2<System.Collections.Generic.KeyValuePair`2<TKey,TValue>,TValue> s_ValueProperty
    static void _set_s_ValueProperty(::Unity::Properties::DelegateProperty_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, TValue>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::KeyValuePairPropertyBag_2::_set_s_ValueProperty");
      THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<KeyValuePairPropertyBag_2<TKey, TValue>*>::get(), "s_ValueProperty", value)));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Unity.Properties.PropertyBag`1
    // Base method: System.Void PropertyBag_1::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KeyValuePairPropertyBag_2<TKey, TValue>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::KeyValuePairPropertyBag_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KeyValuePairPropertyBag_2<TKey, TValue>*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Unity.Properties.PropertyBag`1
    // Base method: System.Void PropertyBag_1::.cctor()
    static void _cctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::KeyValuePairPropertyBag_2::.cctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<KeyValuePairPropertyBag_2<TKey, TValue>*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
  }; // Unity.Properties.KeyValuePairPropertyBag`2
  // Could not write size check! Type: Unity.Properties.KeyValuePairPropertyBag`2 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
