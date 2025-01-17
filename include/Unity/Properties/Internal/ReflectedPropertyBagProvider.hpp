// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Unity::Properties::Internal
namespace Unity::Properties::Internal {
  // Forward declaring type: ReflectedPropertyBag`1<TContainer>
  template<typename TContainer>
  class ReflectedPropertyBag_1;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
  // Forward declaring type: MemberInfo
  class MemberInfo;
}
// Forward declaring namespace: Unity::Properties
namespace Unity::Properties {
  // Forward declaring type: IPropertyBag
  class IPropertyBag;
  // Forward declaring type: IPropertyBag`1<TContainer>
  template<typename TContainer>
  class IPropertyBag_1;
  // Forward declaring type: IMemberInfo
  class IMemberInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: ISet`1<T>
  template<typename T>
  class ISet_1;
  // Forward declaring type: IDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IDictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: Unity.Properties.Internal
namespace Unity::Properties::Internal {
  // Forward declaring type: ReflectedPropertyBagProvider
  class ReflectedPropertyBagProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::Properties::Internal::ReflectedPropertyBagProvider);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::ReflectedPropertyBagProvider*, "Unity.Properties.Internal", "ReflectedPropertyBagProvider");
// Type namespace: Unity.Properties.Internal
namespace Unity::Properties::Internal {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: Unity.Properties.Internal.ReflectedPropertyBagProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class ReflectedPropertyBagProvider : public ::Il2CppObject {
    public:
    // Nested type: ::Unity::Properties::Internal::ReflectedPropertyBagProvider::$$c
    class $$c;
    // Nested type: ::Unity::Properties::Internal::ReflectedPropertyBagProvider::$GetPropertyMembers$d__22
    class $GetPropertyMembers$d__22;
    public:
    // private readonly System.Reflection.MethodInfo m_CreatePropertyMethod
    // Size: 0x8
    // Offset: 0x10
    ::System::Reflection::MethodInfo* m_CreatePropertyMethod;
    // Field size check
    static_assert(sizeof(::System::Reflection::MethodInfo*) == 0x8);
    // private readonly System.Reflection.MethodInfo m_CreatePropertyBagMethod
    // Size: 0x8
    // Offset: 0x18
    ::System::Reflection::MethodInfo* m_CreatePropertyBagMethod;
    // Field size check
    static_assert(sizeof(::System::Reflection::MethodInfo*) == 0x8);
    // private readonly System.Reflection.MethodInfo m_CreateIndexedCollectionPropertyBagMethod
    // Size: 0x8
    // Offset: 0x20
    ::System::Reflection::MethodInfo* m_CreateIndexedCollectionPropertyBagMethod;
    // Field size check
    static_assert(sizeof(::System::Reflection::MethodInfo*) == 0x8);
    // private readonly System.Reflection.MethodInfo m_CreateSetPropertyBagMethod
    // Size: 0x8
    // Offset: 0x28
    ::System::Reflection::MethodInfo* m_CreateSetPropertyBagMethod;
    // Field size check
    static_assert(sizeof(::System::Reflection::MethodInfo*) == 0x8);
    // private readonly System.Reflection.MethodInfo m_CreateKeyValueCollectionPropertyBagMethod
    // Size: 0x8
    // Offset: 0x30
    ::System::Reflection::MethodInfo* m_CreateKeyValueCollectionPropertyBagMethod;
    // Field size check
    static_assert(sizeof(::System::Reflection::MethodInfo*) == 0x8);
    // private readonly System.Reflection.MethodInfo m_CreateKeyValuePairPropertyBagMethod
    // Size: 0x8
    // Offset: 0x38
    ::System::Reflection::MethodInfo* m_CreateKeyValuePairPropertyBagMethod;
    // Field size check
    static_assert(sizeof(::System::Reflection::MethodInfo*) == 0x8);
    // private readonly System.Reflection.MethodInfo m_CreateArrayPropertyBagMethod
    // Size: 0x8
    // Offset: 0x40
    ::System::Reflection::MethodInfo* m_CreateArrayPropertyBagMethod;
    // Field size check
    static_assert(sizeof(::System::Reflection::MethodInfo*) == 0x8);
    // private readonly System.Reflection.MethodInfo m_CreateListPropertyBagMethod
    // Size: 0x8
    // Offset: 0x48
    ::System::Reflection::MethodInfo* m_CreateListPropertyBagMethod;
    // Field size check
    static_assert(sizeof(::System::Reflection::MethodInfo*) == 0x8);
    // private readonly System.Reflection.MethodInfo m_CreateHashSetPropertyBagMethod
    // Size: 0x8
    // Offset: 0x50
    ::System::Reflection::MethodInfo* m_CreateHashSetPropertyBagMethod;
    // Field size check
    static_assert(sizeof(::System::Reflection::MethodInfo*) == 0x8);
    // private readonly System.Reflection.MethodInfo m_CreateDictionaryPropertyBagMethod
    // Size: 0x8
    // Offset: 0x58
    ::System::Reflection::MethodInfo* m_CreateDictionaryPropertyBagMethod;
    // Field size check
    static_assert(sizeof(::System::Reflection::MethodInfo*) == 0x8);
    public:
    // Get instance field reference: private readonly System.Reflection.MethodInfo m_CreatePropertyMethod
    [[deprecated("Use field access instead!")]] ::System::Reflection::MethodInfo*& dyn_m_CreatePropertyMethod();
    // Get instance field reference: private readonly System.Reflection.MethodInfo m_CreatePropertyBagMethod
    [[deprecated("Use field access instead!")]] ::System::Reflection::MethodInfo*& dyn_m_CreatePropertyBagMethod();
    // Get instance field reference: private readonly System.Reflection.MethodInfo m_CreateIndexedCollectionPropertyBagMethod
    [[deprecated("Use field access instead!")]] ::System::Reflection::MethodInfo*& dyn_m_CreateIndexedCollectionPropertyBagMethod();
    // Get instance field reference: private readonly System.Reflection.MethodInfo m_CreateSetPropertyBagMethod
    [[deprecated("Use field access instead!")]] ::System::Reflection::MethodInfo*& dyn_m_CreateSetPropertyBagMethod();
    // Get instance field reference: private readonly System.Reflection.MethodInfo m_CreateKeyValueCollectionPropertyBagMethod
    [[deprecated("Use field access instead!")]] ::System::Reflection::MethodInfo*& dyn_m_CreateKeyValueCollectionPropertyBagMethod();
    // Get instance field reference: private readonly System.Reflection.MethodInfo m_CreateKeyValuePairPropertyBagMethod
    [[deprecated("Use field access instead!")]] ::System::Reflection::MethodInfo*& dyn_m_CreateKeyValuePairPropertyBagMethod();
    // Get instance field reference: private readonly System.Reflection.MethodInfo m_CreateArrayPropertyBagMethod
    [[deprecated("Use field access instead!")]] ::System::Reflection::MethodInfo*& dyn_m_CreateArrayPropertyBagMethod();
    // Get instance field reference: private readonly System.Reflection.MethodInfo m_CreateListPropertyBagMethod
    [[deprecated("Use field access instead!")]] ::System::Reflection::MethodInfo*& dyn_m_CreateListPropertyBagMethod();
    // Get instance field reference: private readonly System.Reflection.MethodInfo m_CreateHashSetPropertyBagMethod
    [[deprecated("Use field access instead!")]] ::System::Reflection::MethodInfo*& dyn_m_CreateHashSetPropertyBagMethod();
    // Get instance field reference: private readonly System.Reflection.MethodInfo m_CreateDictionaryPropertyBagMethod
    [[deprecated("Use field access instead!")]] ::System::Reflection::MethodInfo*& dyn_m_CreateDictionaryPropertyBagMethod();
    // public System.Void .ctor()
    // Offset: 0x5539824
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectedPropertyBagProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::Internal::ReflectedPropertyBagProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectedPropertyBagProvider*, creationType>()));
    }
    // public Unity.Properties.IPropertyBag CreatePropertyBag(System.Type type)
    // Offset: 0x5539C30
    ::Unity::Properties::IPropertyBag* CreatePropertyBag(::System::Type* type);
    // public Unity.Properties.IPropertyBag`1<TContainer> CreatePropertyBag()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TContainer>
    ::Unity::Properties::IPropertyBag_1<TContainer>* CreatePropertyBag() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::Internal::ReflectedPropertyBagProvider::CreatePropertyBag");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CreatePropertyBag", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContainer>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContainer>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::Unity::Properties::IPropertyBag_1<TContainer>*, false>(this, ___generic__method);
    }
    // private System.Void CreateProperty(Unity.Properties.IMemberInfo member, Unity.Properties.Internal.ReflectedPropertyBag`1<TContainer> propertyBag)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TContainer, class TValue>
    void CreateProperty(::Unity::Properties::IMemberInfo* member, ::Unity::Properties::Internal::ReflectedPropertyBag_1<TContainer>* propertyBag) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::Internal::ReflectedPropertyBagProvider::CreateProperty");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CreateProperty", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(member), ::il2cpp_utils::ExtractType(propertyBag)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method, member, propertyBag);
    }
    // private Unity.Properties.IPropertyBag`1<TList> CreateIndexedCollectionPropertyBag()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TList, class TElement>
    ::Unity::Properties::IPropertyBag_1<TList>* CreateIndexedCollectionPropertyBag() {
      static_assert(std::is_convertible_v<std::remove_pointer_t<TList>, ::System::Collections::Generic::IList_1<TElement>>);
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::Internal::ReflectedPropertyBagProvider::CreateIndexedCollectionPropertyBag");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CreateIndexedCollectionPropertyBag", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TElement>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TElement>::get()})));
      return ::il2cpp_utils::RunMethodRethrow<::Unity::Properties::IPropertyBag_1<TList>*, false>(this, ___generic__method);
    }
    // private Unity.Properties.IPropertyBag`1<TSet> CreateSetPropertyBag()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TSet, class TValue>
    ::Unity::Properties::IPropertyBag_1<TSet>* CreateSetPropertyBag() {
      static_assert(std::is_convertible_v<std::remove_pointer_t<TSet>, ::System::Collections::Generic::ISet_1<TValue>>);
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::Internal::ReflectedPropertyBagProvider::CreateSetPropertyBag");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CreateSetPropertyBag", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSet>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()})));
      return ::il2cpp_utils::RunMethodRethrow<::Unity::Properties::IPropertyBag_1<TSet>*, false>(this, ___generic__method);
    }
    // private Unity.Properties.IPropertyBag`1<TDictionary> CreateKeyValueCollectionPropertyBag()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TDictionary, class TKey, class TValue>
    ::Unity::Properties::IPropertyBag_1<TDictionary>* CreateKeyValueCollectionPropertyBag() {
      static_assert(std::is_convertible_v<std::remove_pointer_t<TDictionary>, ::System::Collections::Generic::IDictionary_2<TKey, TValue>>);
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::Internal::ReflectedPropertyBagProvider::CreateKeyValueCollectionPropertyBag");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CreateKeyValueCollectionPropertyBag", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDictionary>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDictionary>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()})));
      return ::il2cpp_utils::RunMethodRethrow<::Unity::Properties::IPropertyBag_1<TDictionary>*, false>(this, ___generic__method);
    }
    // private Unity.Properties.IPropertyBag`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> CreateKeyValuePairPropertyBag()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TKey, class TValue>
    ::Unity::Properties::IPropertyBag_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* CreateKeyValuePairPropertyBag() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::Internal::ReflectedPropertyBagProvider::CreateKeyValuePairPropertyBag");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CreateKeyValuePairPropertyBag", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()})));
      return ::il2cpp_utils::RunMethodRethrow<::Unity::Properties::IPropertyBag_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*, false>(this, ___generic__method);
    }
    // private Unity.Properties.IPropertyBag`1<TElement[]> CreateArrayPropertyBag()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TElement>
    ::Unity::Properties::IPropertyBag_1<::ArrayW<TElement>>* CreateArrayPropertyBag() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::Internal::ReflectedPropertyBagProvider::CreateArrayPropertyBag");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CreateArrayPropertyBag", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TElement>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TElement>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::Unity::Properties::IPropertyBag_1<::ArrayW<TElement>>*, false>(this, ___generic__method);
    }
    // private Unity.Properties.IPropertyBag`1<System.Collections.Generic.List`1<TElement>> CreateListPropertyBag()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TElement>
    ::Unity::Properties::IPropertyBag_1<::System::Collections::Generic::List_1<TElement>*>* CreateListPropertyBag() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::Internal::ReflectedPropertyBagProvider::CreateListPropertyBag");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CreateListPropertyBag", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TElement>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TElement>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::Unity::Properties::IPropertyBag_1<::System::Collections::Generic::List_1<TElement>*>*, false>(this, ___generic__method);
    }
    // private Unity.Properties.IPropertyBag`1<System.Collections.Generic.HashSet`1<TElement>> CreateHashSetPropertyBag()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TElement>
    ::Unity::Properties::IPropertyBag_1<::System::Collections::Generic::HashSet_1<TElement>*>* CreateHashSetPropertyBag() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::Internal::ReflectedPropertyBagProvider::CreateHashSetPropertyBag");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CreateHashSetPropertyBag", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TElement>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TElement>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::Unity::Properties::IPropertyBag_1<::System::Collections::Generic::HashSet_1<TElement>*>*, false>(this, ___generic__method);
    }
    // private Unity.Properties.IPropertyBag`1<System.Collections.Generic.Dictionary`2<TKey,TValue>> CreateDictionaryPropertyBag()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TKey, class TValue>
    ::Unity::Properties::IPropertyBag_1<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>* CreateDictionaryPropertyBag() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::Internal::ReflectedPropertyBagProvider::CreateDictionaryPropertyBag");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CreateDictionaryPropertyBag", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()})));
      return ::il2cpp_utils::RunMethodRethrow<::Unity::Properties::IPropertyBag_1<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>*, false>(this, ___generic__method);
    }
    // static private System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo> GetPropertyMembers(System.Type type)
    // Offset: 0x5539D68
    static ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MemberInfo*>* GetPropertyMembers(::System::Type* type);
    // static private System.Boolean IsValidMember(System.Reflection.MemberInfo memberInfo)
    // Offset: 0x5539E18
    static bool IsValidMember(::System::Reflection::MemberInfo* memberInfo);
    // static private System.Boolean IsValidPropertyType(System.Type type)
    // Offset: 0x5539F50
    static bool IsValidPropertyType(::System::Type* type);
  }; // Unity.Properties.Internal.ReflectedPropertyBagProvider
  #pragma pack(pop)
  static check_size<sizeof(ReflectedPropertyBagProvider), 88 + sizeof(::System::Reflection::MethodInfo*)> __Unity_Properties_Internal_ReflectedPropertyBagProviderSizeCheck;
  static_assert(sizeof(ReflectedPropertyBagProvider) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::Properties::Internal::ReflectedPropertyBagProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Unity::Properties::Internal::ReflectedPropertyBagProvider::CreatePropertyBag
// Il2CppName: CreatePropertyBag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Properties::IPropertyBag* (Unity::Properties::Internal::ReflectedPropertyBagProvider::*)(::System::Type*)>(&Unity::Properties::Internal::ReflectedPropertyBagProvider::CreatePropertyBag)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Properties::Internal::ReflectedPropertyBagProvider*), "CreatePropertyBag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Unity::Properties::Internal::ReflectedPropertyBagProvider::CreatePropertyBag
// Il2CppName: CreatePropertyBag
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Unity::Properties::Internal::ReflectedPropertyBagProvider::CreateProperty
// Il2CppName: CreateProperty
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Unity::Properties::Internal::ReflectedPropertyBagProvider::CreateIndexedCollectionPropertyBag
// Il2CppName: CreateIndexedCollectionPropertyBag
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Unity::Properties::Internal::ReflectedPropertyBagProvider::CreateSetPropertyBag
// Il2CppName: CreateSetPropertyBag
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Unity::Properties::Internal::ReflectedPropertyBagProvider::CreateKeyValueCollectionPropertyBag
// Il2CppName: CreateKeyValueCollectionPropertyBag
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Unity::Properties::Internal::ReflectedPropertyBagProvider::CreateKeyValuePairPropertyBag
// Il2CppName: CreateKeyValuePairPropertyBag
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Unity::Properties::Internal::ReflectedPropertyBagProvider::CreateArrayPropertyBag
// Il2CppName: CreateArrayPropertyBag
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Unity::Properties::Internal::ReflectedPropertyBagProvider::CreateListPropertyBag
// Il2CppName: CreateListPropertyBag
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Unity::Properties::Internal::ReflectedPropertyBagProvider::CreateHashSetPropertyBag
// Il2CppName: CreateHashSetPropertyBag
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Unity::Properties::Internal::ReflectedPropertyBagProvider::CreateDictionaryPropertyBag
// Il2CppName: CreateDictionaryPropertyBag
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Unity::Properties::Internal::ReflectedPropertyBagProvider::GetPropertyMembers
// Il2CppName: GetPropertyMembers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Reflection::MemberInfo*>* (*)(::System::Type*)>(&Unity::Properties::Internal::ReflectedPropertyBagProvider::GetPropertyMembers)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Properties::Internal::ReflectedPropertyBagProvider*), "GetPropertyMembers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Unity::Properties::Internal::ReflectedPropertyBagProvider::IsValidMember
// Il2CppName: IsValidMember
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Reflection::MemberInfo*)>(&Unity::Properties::Internal::ReflectedPropertyBagProvider::IsValidMember)> {
  static const MethodInfo* get() {
    static auto* memberInfo = &::il2cpp_utils::GetClassFromName("System.Reflection", "MemberInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Properties::Internal::ReflectedPropertyBagProvider*), "IsValidMember", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{memberInfo});
  }
};
// Writing MetadataGetter for method: Unity::Properties::Internal::ReflectedPropertyBagProvider::IsValidPropertyType
// Il2CppName: IsValidPropertyType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&Unity::Properties::Internal::ReflectedPropertyBagProvider::IsValidPropertyType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Properties::Internal::ReflectedPropertyBagProvider*), "IsValidPropertyType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
