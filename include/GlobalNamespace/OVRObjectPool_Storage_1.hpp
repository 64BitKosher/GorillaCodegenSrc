// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRObjectPool
#include "GlobalNamespace/OVRObjectPool.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::OVRObjectPool::Storage_1, "", "OVRObjectPool/Storage`1");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: OVRObjectPool/Storage`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class OVRObjectPool::Storage_1 : public ::Il2CppObject {
    public:
    // Autogenerated static field getter
    // Get static field: static public readonly System.Collections.Generic.HashSet`1<T> HashSet
    static ::System::Collections::Generic::HashSet_1<T>* _get_HashSet() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRObjectPool::Storage_1::_get_HashSet");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<::System::Collections::Generic::HashSet_1<T>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRObjectPool::Storage_1<T>*>::get(), "HashSet"));
    }
    // Autogenerated static field setter
    // Set static field: static public readonly System.Collections.Generic.HashSet`1<T> HashSet
    static void _set_HashSet(::System::Collections::Generic::HashSet_1<T>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRObjectPool::Storage_1::_set_HashSet");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRObjectPool::Storage_1<T>*>::get(), "HashSet", value));
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static void _cctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRObjectPool::Storage_1::.cctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRObjectPool::Storage_1<T>*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
  }; // OVRObjectPool/Storage`1
  // Could not write size check! Type: OVRObjectPool/Storage`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
