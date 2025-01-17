// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: ComplexBindingPropertiesAttribute
  class ComplexBindingPropertiesAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::ComplexBindingPropertiesAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ComplexBindingPropertiesAttribute*, "System.ComponentModel", "ComplexBindingPropertiesAttribute");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.ComplexBindingPropertiesAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  class ComplexBindingPropertiesAttribute : public ::System::Attribute {
    public:
    public:
    // private readonly System.String <DataSource>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW DataSource;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly System.String <DataMember>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::StringW DataMember;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get static field: static public readonly System.ComponentModel.ComplexBindingPropertiesAttribute Default
    static ::System::ComponentModel::ComplexBindingPropertiesAttribute* _get_Default();
    // Set static field: static public readonly System.ComponentModel.ComplexBindingPropertiesAttribute Default
    static void _set_Default(::System::ComponentModel::ComplexBindingPropertiesAttribute* value);
    // Get instance field reference: private readonly System.String <DataSource>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$DataSource$k__BackingField();
    // Get instance field reference: private readonly System.String <DataMember>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$DataMember$k__BackingField();
    // public System.Void .ctor()
    // Offset: 0x4EF77F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ComplexBindingPropertiesAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::ComplexBindingPropertiesAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ComplexBindingPropertiesAttribute*, creationType>()));
    }
    // public System.Void .ctor(System.String dataSource)
    // Offset: 0x4EF77FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ComplexBindingPropertiesAttribute* New_ctor(::StringW dataSource) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::ComplexBindingPropertiesAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ComplexBindingPropertiesAttribute*, creationType>(dataSource)));
    }
    // public System.Void .ctor(System.String dataSource, System.String dataMember)
    // Offset: 0x4EF782C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ComplexBindingPropertiesAttribute* New_ctor(::StringW dataSource, ::StringW dataMember) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::ComplexBindingPropertiesAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ComplexBindingPropertiesAttribute*, creationType>(dataSource, dataMember)));
    }
    // public System.String get_DataSource()
    // Offset: 0x4EF7870
    ::StringW get_DataSource();
    // public System.String get_DataMember()
    // Offset: 0x4EF7878
    ::StringW get_DataMember();
    // static private System.Void .cctor()
    // Offset: 0x4EF791C
    static void _cctor();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x4EF7880
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x4EF7914
    // Implemented from: System.Attribute
    // Base method: System.Int32 Attribute::GetHashCode()
    int GetHashCode();
  }; // System.ComponentModel.ComplexBindingPropertiesAttribute
  #pragma pack(pop)
  static check_size<sizeof(ComplexBindingPropertiesAttribute), 24 + sizeof(::StringW)> __System_ComponentModel_ComplexBindingPropertiesAttributeSizeCheck;
  static_assert(sizeof(ComplexBindingPropertiesAttribute) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::ComplexBindingPropertiesAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::ComplexBindingPropertiesAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::ComplexBindingPropertiesAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::ComplexBindingPropertiesAttribute::get_DataSource
// Il2CppName: get_DataSource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::ComplexBindingPropertiesAttribute::*)()>(&System::ComponentModel::ComplexBindingPropertiesAttribute::get_DataSource)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ComplexBindingPropertiesAttribute*), "get_DataSource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ComplexBindingPropertiesAttribute::get_DataMember
// Il2CppName: get_DataMember
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::ComplexBindingPropertiesAttribute::*)()>(&System::ComponentModel::ComplexBindingPropertiesAttribute::get_DataMember)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ComplexBindingPropertiesAttribute*), "get_DataMember", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ComplexBindingPropertiesAttribute::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::ComponentModel::ComplexBindingPropertiesAttribute::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ComplexBindingPropertiesAttribute*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ComplexBindingPropertiesAttribute::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::ComplexBindingPropertiesAttribute::*)(::Il2CppObject*)>(&System::ComponentModel::ComplexBindingPropertiesAttribute::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ComplexBindingPropertiesAttribute*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ComplexBindingPropertiesAttribute::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ComponentModel::ComplexBindingPropertiesAttribute::*)()>(&System::ComponentModel::ComplexBindingPropertiesAttribute::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ComplexBindingPropertiesAttribute*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
