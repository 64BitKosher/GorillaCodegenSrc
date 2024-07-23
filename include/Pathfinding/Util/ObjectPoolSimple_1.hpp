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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Completed forward declares
// Type namespace: Pathfinding.Util
namespace Pathfinding::Util {
  // Forward declaring type: ObjectPoolSimple`1<T>
  template<typename T>
  class ObjectPoolSimple_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Pathfinding::Util::ObjectPoolSimple_1, "Pathfinding.Util", "ObjectPoolSimple`1");
// Type namespace: Pathfinding.Util
namespace Pathfinding::Util {
  // WARNING Size may be invalid!
  // Autogenerated type: Pathfinding.Util.ObjectPoolSimple`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class ObjectPoolSimple_1 : public ::Il2CppObject {
    public:
    // Autogenerated static field getter
    // Get static field: static private System.Collections.Generic.List`1<T> pool
    static ::System::Collections::Generic::List_1<T>* _get_pool() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Util::ObjectPoolSimple_1::_get_pool");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<::System::Collections::Generic::List_1<T>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ObjectPoolSimple_1<T>*>::get(), "pool"));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Collections.Generic.List`1<T> pool
    static void _set_pool(::System::Collections::Generic::List_1<T>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Util::ObjectPoolSimple_1::_set_pool");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ObjectPoolSimple_1<T>*>::get(), "pool", value));
    }
    // Autogenerated static field getter
    // Get static field: static private readonly System.Collections.Generic.HashSet`1<T> inPool
    static ::System::Collections::Generic::HashSet_1<T>* _get_inPool() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Util::ObjectPoolSimple_1::_get_inPool");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<::System::Collections::Generic::HashSet_1<T>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ObjectPoolSimple_1<T>*>::get(), "inPool"));
    }
    // Autogenerated static field setter
    // Set static field: static private readonly System.Collections.Generic.HashSet`1<T> inPool
    static void _set_inPool(::System::Collections::Generic::HashSet_1<T>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Util::ObjectPoolSimple_1::_set_inPool");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ObjectPoolSimple_1<T>*>::get(), "inPool", value));
    }
    // static public T Claim()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static T Claim() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Util::ObjectPoolSimple_1::Claim");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ObjectPoolSimple_1<T>*>::get(), "Claim", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
    // static public System.Void Release(ref T obj)
    // Offset: 0xFFFFFFFFFFFFFFFF
    static void Release(ByRef<T> obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Util::ObjectPoolSimple_1::Release");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ObjectPoolSimple_1<T>*>::get(), "Release", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(obj)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, byref(obj));
    }
    // static public System.Void Clear()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static void Clear() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Util::ObjectPoolSimple_1::Clear");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ObjectPoolSimple_1<T>*>::get(), "Clear", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
    // static public System.Int32 GetSize()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static int GetSize() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Util::ObjectPoolSimple_1::GetSize");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ObjectPoolSimple_1<T>*>::get(), "GetSize", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static void _cctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Util::ObjectPoolSimple_1::.cctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ObjectPoolSimple_1<T>*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
  }; // Pathfinding.Util.ObjectPoolSimple`1
  // Could not write size check! Type: Pathfinding.Util.ObjectPoolSimple`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
