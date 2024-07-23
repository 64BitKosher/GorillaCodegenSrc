// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Attribute
  class Attribute;
}
// Forward declaring namespace: Newtonsoft::Json::Utilities
namespace Newtonsoft::Json::Utilities {
  // Forward declaring type: ThreadSafeStore`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class ThreadSafeStore_2;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Forward declaring type: CachedAttributeGetter`1<T>
  template<typename T>
  class CachedAttributeGetter_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Serialization::CachedAttributeGetter_1, "Newtonsoft.Json.Serialization", "CachedAttributeGetter`1");
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // WARNING Size may be invalid!
  // Autogenerated type: Newtonsoft.Json.Serialization.CachedAttributeGetter`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class CachedAttributeGetter_1 : public ::Il2CppObject {
    public:
    // Autogenerated static field getter
    // Get static field: static private readonly Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Object,T> TypeAttributeCache
    static ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Il2CppObject*, T>* _get_TypeAttributeCache() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Serialization::CachedAttributeGetter_1::_get_TypeAttributeCache");
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Il2CppObject*, T>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<CachedAttributeGetter_1<T>*>::get(), "TypeAttributeCache")));
    }
    // Autogenerated static field setter
    // Set static field: static private readonly Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Object,T> TypeAttributeCache
    static void _set_TypeAttributeCache(::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Il2CppObject*, T>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Serialization::CachedAttributeGetter_1::_set_TypeAttributeCache");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<CachedAttributeGetter_1<T>*>::get(), "TypeAttributeCache", value));
    }
    // static public T GetAttribute(System.Object type)
    // Offset: 0xFFFFFFFFFFFFFFFF
    static T GetAttribute(::Il2CppObject* type) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Serialization::CachedAttributeGetter_1::GetAttribute");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<CachedAttributeGetter_1<T>*>::get(), "GetAttribute", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(type)})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, type);
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static void _cctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Serialization::CachedAttributeGetter_1::.cctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<CachedAttributeGetter_1<T>*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
  }; // Newtonsoft.Json.Serialization.CachedAttributeGetter`1
  // Could not write size check! Type: Newtonsoft.Json.Serialization.CachedAttributeGetter`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
