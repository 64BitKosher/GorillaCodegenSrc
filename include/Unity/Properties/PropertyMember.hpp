// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Unity.Properties.IMemberInfo
#include "Unity/Properties/IMemberInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: PropertyInfo
  class PropertyInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Attribute
  class Attribute;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: Unity.Properties
namespace Unity::Properties {
  // Forward declaring type: PropertyMember
  struct PropertyMember;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::PropertyMember, "Unity.Properties", "PropertyMember");
// Type namespace: Unity.Properties
namespace Unity::Properties {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Unity.Properties.PropertyMember
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct PropertyMember/*, public ::System::ValueType, public ::Unity::Properties::IMemberInfo*/ {
    public:
    public:
    // readonly System.Reflection.PropertyInfo m_PropertyInfo
    // Size: 0x8
    // Offset: 0x0
    ::System::Reflection::PropertyInfo* m_PropertyInfo;
    // Field size check
    static_assert(sizeof(::System::Reflection::PropertyInfo*) == 0x8);
    public:
    // Creating value type constructor for type: PropertyMember
    constexpr PropertyMember(::System::Reflection::PropertyInfo* m_PropertyInfo_ = {}) noexcept : m_PropertyInfo{m_PropertyInfo_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::Unity::Properties::IMemberInfo
    operator ::Unity::Properties::IMemberInfo() noexcept {
      return *reinterpret_cast<::Unity::Properties::IMemberInfo*>(this);
    }
    // Creating conversion operator: operator ::System::Reflection::PropertyInfo*
    constexpr operator ::System::Reflection::PropertyInfo*() const noexcept {
      return m_PropertyInfo;
    }
    // Get instance field reference: readonly System.Reflection.PropertyInfo m_PropertyInfo
    [[deprecated("Use field access instead!")]] ::System::Reflection::PropertyInfo*& dyn_m_PropertyInfo();
    // public System.String get_Name()
    // Offset: 0x5536378
    ::StringW get_Name();
    // public System.Boolean get_IsReadOnly()
    // Offset: 0x5536398
    bool get_IsReadOnly();
    // public System.Type get_ValueType()
    // Offset: 0x55363C8
    ::System::Type* get_ValueType();
    // public System.Void .ctor(System.Reflection.PropertyInfo propertyInfo)
    // Offset: 0x55363EC
    // ABORTED: conflicts with another method.  PropertyMember(::System::Reflection::PropertyInfo* propertyInfo);
    // public System.Collections.Generic.IEnumerable`1<System.Attribute> GetCustomAttributes()
    // Offset: 0x55363F4
    ::System::Collections::Generic::IEnumerable_1<::System::Attribute*>* GetCustomAttributes();
  }; // Unity.Properties.PropertyMember
  #pragma pack(pop)
  static check_size<sizeof(PropertyMember), 0 + sizeof(::System::Reflection::PropertyInfo*)> __Unity_Properties_PropertyMemberSizeCheck;
  static_assert(sizeof(PropertyMember) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::Properties::PropertyMember::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Unity::Properties::PropertyMember::*)()>(&Unity::Properties::PropertyMember::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Properties::PropertyMember), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::Properties::PropertyMember::get_IsReadOnly
// Il2CppName: get_IsReadOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Unity::Properties::PropertyMember::*)()>(&Unity::Properties::PropertyMember::get_IsReadOnly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Properties::PropertyMember), "get_IsReadOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::Properties::PropertyMember::get_ValueType
// Il2CppName: get_ValueType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Unity::Properties::PropertyMember::*)()>(&Unity::Properties::PropertyMember::get_ValueType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Properties::PropertyMember), "get_ValueType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::Properties::PropertyMember::PropertyMember
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Unity::Properties::PropertyMember::GetCustomAttributes
// Il2CppName: GetCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Attribute*>* (Unity::Properties::PropertyMember::*)()>(&Unity::Properties::PropertyMember::GetCustomAttributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Properties::PropertyMember), "GetCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
