// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: LitJson.PropertyMetadata
#include "LitJson/PropertyMetadata.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IDictionary_2;
}
// Completed forward declares
// Type namespace: LitJson
namespace LitJson {
  // Forward declaring type: ObjectMetadata
  struct ObjectMetadata;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::LitJson::ObjectMetadata, "LitJson", "ObjectMetadata");
// Type namespace: LitJson
namespace LitJson {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: LitJson.ObjectMetadata
  // [TokenAttribute] Offset: FFFFFFFF
  struct ObjectMetadata/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Type element_type
    // Size: 0x8
    // Offset: 0x0
    ::System::Type* element_type;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private System.Boolean is_dictionary
    // Size: 0x1
    // Offset: 0x8
    bool is_dictionary;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: is_dictionary and: properties
    char __padding1[0x7] = {};
    // private System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata> properties
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::IDictionary_2<::StringW, ::LitJson::PropertyMetadata>* properties;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IDictionary_2<::StringW, ::LitJson::PropertyMetadata>*) == 0x8);
    public:
    // Creating value type constructor for type: ObjectMetadata
    constexpr ObjectMetadata(::System::Type* element_type_ = {}, bool is_dictionary_ = {}, ::System::Collections::Generic::IDictionary_2<::StringW, ::LitJson::PropertyMetadata>* properties_ = {}) noexcept : element_type{element_type_}, is_dictionary{is_dictionary_}, properties{properties_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.Type element_type
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_element_type();
    // Get instance field reference: private System.Boolean is_dictionary
    [[deprecated("Use field access instead!")]] bool& dyn_is_dictionary();
    // Get instance field reference: private System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata> properties
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IDictionary_2<::StringW, ::LitJson::PropertyMetadata>*& dyn_properties();
    // public System.Type get_ElementType()
    // Offset: 0x27BF804
    ::System::Type* get_ElementType();
    // public System.Void set_ElementType(System.Type value)
    // Offset: 0x27BF8AC
    void set_ElementType(::System::Type* value);
    // public System.Boolean get_IsDictionary()
    // Offset: 0x27BF8B4
    bool get_IsDictionary();
    // public System.Void set_IsDictionary(System.Boolean value)
    // Offset: 0x27BF8BC
    void set_IsDictionary(bool value);
    // public System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata> get_Properties()
    // Offset: 0x27BF8C8
    ::System::Collections::Generic::IDictionary_2<::StringW, ::LitJson::PropertyMetadata>* get_Properties();
    // public System.Void set_Properties(System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata> value)
    // Offset: 0x27BF8D0
    void set_Properties(::System::Collections::Generic::IDictionary_2<::StringW, ::LitJson::PropertyMetadata>* value);
  }; // LitJson.ObjectMetadata
  #pragma pack(pop)
  static check_size<sizeof(ObjectMetadata), 16 + sizeof(::System::Collections::Generic::IDictionary_2<::StringW, ::LitJson::PropertyMetadata>*)> __LitJson_ObjectMetadataSizeCheck;
  static_assert(sizeof(ObjectMetadata) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LitJson::ObjectMetadata::get_ElementType
// Il2CppName: get_ElementType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (LitJson::ObjectMetadata::*)()>(&LitJson::ObjectMetadata::get_ElementType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LitJson::ObjectMetadata), "get_ElementType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LitJson::ObjectMetadata::set_ElementType
// Il2CppName: set_ElementType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LitJson::ObjectMetadata::*)(::System::Type*)>(&LitJson::ObjectMetadata::set_ElementType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::ObjectMetadata), "set_ElementType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LitJson::ObjectMetadata::get_IsDictionary
// Il2CppName: get_IsDictionary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (LitJson::ObjectMetadata::*)()>(&LitJson::ObjectMetadata::get_IsDictionary)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LitJson::ObjectMetadata), "get_IsDictionary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LitJson::ObjectMetadata::set_IsDictionary
// Il2CppName: set_IsDictionary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LitJson::ObjectMetadata::*)(bool)>(&LitJson::ObjectMetadata::set_IsDictionary)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::ObjectMetadata), "set_IsDictionary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LitJson::ObjectMetadata::get_Properties
// Il2CppName: get_Properties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW, ::LitJson::PropertyMetadata>* (LitJson::ObjectMetadata::*)()>(&LitJson::ObjectMetadata::get_Properties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LitJson::ObjectMetadata), "get_Properties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LitJson::ObjectMetadata::set_Properties
// Il2CppName: set_Properties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LitJson::ObjectMetadata::*)(::System::Collections::Generic::IDictionary_2<::StringW, ::LitJson::PropertyMetadata>*)>(&LitJson::ObjectMetadata::set_Properties)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IDictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("LitJson", "PropertyMetadata")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LitJson::ObjectMetadata), "set_Properties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
