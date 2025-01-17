// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationEntry
  struct SerializationEntry;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::SerializationEntry, "System.Runtime.Serialization", "SerializationEntry");
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Runtime.Serialization.SerializationEntry
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct SerializationEntry/*, public ::System::ValueType*/ {
    public:
    public:
    // private readonly System.String _name
    // Size: 0x8
    // Offset: 0x0
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly System.Object _value
    // Size: 0x8
    // Offset: 0x8
    ::Il2CppObject* value;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private readonly System.Type _type
    // Size: 0x8
    // Offset: 0x10
    ::System::Type* type;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Creating value type constructor for type: SerializationEntry
    constexpr SerializationEntry(::StringW name_ = {}, ::Il2CppObject* value_ = {}, ::System::Type* type_ = {}) noexcept : name{name_}, value{value_}, type{type_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private readonly System.String _name
    [[deprecated("Use field access instead!")]] ::StringW& dyn__name();
    // Get instance field reference: private readonly System.Object _value
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__value();
    // Get instance field reference: private readonly System.Type _type
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn__type();
    // System.Void .ctor(System.String entryName, System.Object entryValue, System.Type entryType)
    // Offset: 0x4550358
    // ABORTED: conflicts with another method.  SerializationEntry(::StringW entryName, ::Il2CppObject* entryValue, ::System::Type* entryType);
    // public System.Object get_Value()
    // Offset: 0x455039C
    ::Il2CppObject* get_Value();
    // public System.String get_Name()
    // Offset: 0x45503A4
    ::StringW get_Name();
  }; // System.Runtime.Serialization.SerializationEntry
  #pragma pack(pop)
  static check_size<sizeof(SerializationEntry), 16 + sizeof(::System::Type*)> __System_Runtime_Serialization_SerializationEntrySizeCheck;
  static_assert(sizeof(SerializationEntry) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationEntry::SerializationEntry
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationEntry::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Serialization::SerializationEntry::*)()>(&System::Runtime::Serialization::SerializationEntry::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SerializationEntry), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationEntry::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Serialization::SerializationEntry::*)()>(&System::Runtime::Serialization::SerializationEntry::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SerializationEntry), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
