// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: ISerializableJsonDictionary
  class ISerializableJsonDictionary;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::ISerializableJsonDictionary);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ISerializableJsonDictionary*, "UnityEngine.UIElements", "ISerializableJsonDictionary");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.ISerializableJsonDictionary
  // [TokenAttribute] Offset: FFFFFFFF
  class ISerializableJsonDictionary {
    public:
    // public System.Void Set(System.String key, T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    void Set(::StringW key, T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::ISerializableJsonDictionary::Set");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::UIElements::ISerializableJsonDictionary*), -1));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method, key, value);
    }
    // public T Get(System.String key)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    T Get(::StringW key) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::ISerializableJsonDictionary::Get");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::UIElements::ISerializableJsonDictionary*), -1));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___generic__method, key);
    }
    // public System.Void Overwrite(System.Object obj, System.String key)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Overwrite(::Il2CppObject* obj, ::StringW key);
    // public System.Boolean ContainsKey(System.String key)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool ContainsKey(::StringW key);
  }; // UnityEngine.UIElements.ISerializableJsonDictionary
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::ISerializableJsonDictionary::Set
// Il2CppName: Set
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::UIElements::ISerializableJsonDictionary::Get
// Il2CppName: Get
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::UIElements::ISerializableJsonDictionary::Overwrite
// Il2CppName: Overwrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::ISerializableJsonDictionary::*)(::Il2CppObject*, ::StringW)>(&UnityEngine::UIElements::ISerializableJsonDictionary::Overwrite)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ISerializableJsonDictionary*), "Overwrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, key});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ISerializableJsonDictionary::ContainsKey
// Il2CppName: ContainsKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::ISerializableJsonDictionary::*)(::StringW)>(&UnityEngine::UIElements::ISerializableJsonDictionary::ContainsKey)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ISerializableJsonDictionary*), "ContainsKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
