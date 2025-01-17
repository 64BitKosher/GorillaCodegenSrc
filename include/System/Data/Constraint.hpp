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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Data
namespace System::Data {
  // Forward declaring type: DataSet
  class DataSet;
  // Forward declaring type: PropertyCollection
  class PropertyCollection;
  // Forward declaring type: DataTable
  class DataTable;
  // Forward declaring type: DataColumn
  class DataColumn;
  // Forward declaring type: ConstraintCollection
  class ConstraintCollection;
  // Forward declaring type: DataRow
  class DataRow;
  // Forward declaring type: DataRowAction
  struct DataRowAction;
}
// Completed forward declares
// Type namespace: System.Data
namespace System::Data {
  // Forward declaring type: Constraint
  class Constraint;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Data::Constraint);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Constraint*, "System.Data", "Constraint");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.Constraint
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultPropertyAttribute] Offset: FFFFFFFF
  // [TypeConverterAttribute] Offset: FFFFFFFF
  class Constraint : public ::Il2CppObject {
    public:
    public:
    // private System.String _schemaName
    // Size: 0x8
    // Offset: 0x10
    ::StringW schemaName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean _inCollection
    // Size: 0x1
    // Offset: 0x18
    bool inCollection;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: inCollection and: dataSet
    char __padding1[0x7] = {};
    // private System.Data.DataSet _dataSet
    // Size: 0x8
    // Offset: 0x20
    ::System::Data::DataSet* dataSet;
    // Field size check
    static_assert(sizeof(::System::Data::DataSet*) == 0x8);
    // System.String _name
    // Size: 0x8
    // Offset: 0x28
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.Data.PropertyCollection _extendedProperties
    // Size: 0x8
    // Offset: 0x30
    ::System::Data::PropertyCollection* extendedProperties;
    // Field size check
    static_assert(sizeof(::System::Data::PropertyCollection*) == 0x8);
    public:
    // Get instance field reference: private System.String _schemaName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__schemaName();
    // Get instance field reference: private System.Boolean _inCollection
    [[deprecated("Use field access instead!")]] bool& dyn__inCollection();
    // Get instance field reference: private System.Data.DataSet _dataSet
    [[deprecated("Use field access instead!")]] ::System::Data::DataSet*& dyn__dataSet();
    // Get instance field reference: System.String _name
    [[deprecated("Use field access instead!")]] ::StringW& dyn__name();
    // Get instance field reference: System.Data.PropertyCollection _extendedProperties
    [[deprecated("Use field access instead!")]] ::System::Data::PropertyCollection*& dyn__extendedProperties();
    // public System.String get_ConstraintName()
    // Offset: 0x4C05F1C
    ::StringW get_ConstraintName();
    // public System.Void set_ConstraintName(System.String value)
    // Offset: 0x4C05F24
    void set_ConstraintName(::StringW value);
    // System.String get_SchemaName()
    // Offset: 0x4C063BC
    ::StringW get_SchemaName();
    // System.Void set_SchemaName(System.String value)
    // Offset: 0x4C063F4
    void set_SchemaName(::StringW value);
    // System.Boolean get_InCollection()
    // Offset: 0x4C06438
    bool get_InCollection();
    // System.Void set_InCollection(System.Boolean value)
    // Offset: 0x4C06440
    void set_InCollection(bool value);
    // public System.Data.DataTable get_Table()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Data::DataTable* get_Table();
    // public System.Data.PropertyCollection get_ExtendedProperties()
    // Offset: 0x4C06488
    ::System::Data::PropertyCollection* get_ExtendedProperties();
    // System.Boolean ContainsColumn(System.Data.DataColumn column)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool ContainsColumn(::System::Data::DataColumn* column);
    // System.Boolean CanEnableConstraint()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool CanEnableConstraint();
    // System.Data.Constraint Clone(System.Data.DataSet destination)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Data::Constraint* Clone(::System::Data::DataSet* destination);
    // System.Data.Constraint Clone(System.Data.DataSet destination, System.Boolean ignoreNSforTableLookup)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Data::Constraint* Clone(::System::Data::DataSet* destination, bool ignoreNSforTableLookup);
    // System.Void CheckConstraint()
    // Offset: 0x4C064F8
    void CheckConstraint();
    // System.Void CheckCanAddToCollection(System.Data.ConstraintCollection constraint)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void CheckCanAddToCollection(::System::Data::ConstraintCollection* constraint);
    // System.Boolean CanBeRemovedFromCollection(System.Data.ConstraintCollection constraint, System.Boolean fThrowException)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool CanBeRemovedFromCollection(::System::Data::ConstraintCollection* constraint, bool fThrowException);
    // System.Void CheckConstraint(System.Data.DataRow row, System.Data.DataRowAction action)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void CheckConstraint(::System::Data::DataRow* row, ::System::Data::DataRowAction action);
    // System.Void CheckState()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void CheckState();
    // protected System.Void CheckStateForProperty()
    // Offset: 0x4C06594
    void CheckStateForProperty();
    // protected System.Data.DataSet get__DataSet()
    // Offset: 0x4C066D4
    ::System::Data::DataSet* get__DataSet();
    // System.Boolean IsConstraintViolated()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool IsConstraintViolated();
    // protected System.Void .ctor()
    // Offset: 0x4C066E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Constraint* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::Constraint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Constraint*, creationType>()));
    }
    // public override System.String ToString()
    // Offset: 0x4C066DC
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.Data.Constraint
  #pragma pack(pop)
  static check_size<sizeof(Constraint), 48 + sizeof(::System::Data::PropertyCollection*)> __System_Data_ConstraintSizeCheck;
  static_assert(sizeof(Constraint) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::Constraint::get_ConstraintName
// Il2CppName: get_ConstraintName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Data::Constraint::*)()>(&System::Data::Constraint::get_ConstraintName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::Constraint*), "get_ConstraintName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::Constraint::set_ConstraintName
// Il2CppName: set_ConstraintName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::Constraint::*)(::StringW)>(&System::Data::Constraint::set_ConstraintName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Constraint*), "set_ConstraintName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Data::Constraint::get_SchemaName
// Il2CppName: get_SchemaName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Data::Constraint::*)()>(&System::Data::Constraint::get_SchemaName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::Constraint*), "get_SchemaName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::Constraint::set_SchemaName
// Il2CppName: set_SchemaName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::Constraint::*)(::StringW)>(&System::Data::Constraint::set_SchemaName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Constraint*), "set_SchemaName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Data::Constraint::get_InCollection
// Il2CppName: get_InCollection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::Constraint::*)()>(&System::Data::Constraint::get_InCollection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::Constraint*), "get_InCollection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::Constraint::set_InCollection
// Il2CppName: set_InCollection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::Constraint::*)(bool)>(&System::Data::Constraint::set_InCollection)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Constraint*), "set_InCollection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Data::Constraint::get_Table
// Il2CppName: get_Table
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataTable* (System::Data::Constraint::*)()>(&System::Data::Constraint::get_Table)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::Constraint*), "get_Table", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::Constraint::get_ExtendedProperties
// Il2CppName: get_ExtendedProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::PropertyCollection* (System::Data::Constraint::*)()>(&System::Data::Constraint::get_ExtendedProperties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::Constraint*), "get_ExtendedProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::Constraint::ContainsColumn
// Il2CppName: ContainsColumn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::Constraint::*)(::System::Data::DataColumn*)>(&System::Data::Constraint::ContainsColumn)> {
  static const MethodInfo* get() {
    static auto* column = &::il2cpp_utils::GetClassFromName("System.Data", "DataColumn")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Constraint*), "ContainsColumn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{column});
  }
};
// Writing MetadataGetter for method: System::Data::Constraint::CanEnableConstraint
// Il2CppName: CanEnableConstraint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::Constraint::*)()>(&System::Data::Constraint::CanEnableConstraint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::Constraint*), "CanEnableConstraint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::Constraint::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::Constraint* (System::Data::Constraint::*)(::System::Data::DataSet*)>(&System::Data::Constraint::Clone)> {
  static const MethodInfo* get() {
    static auto* destination = &::il2cpp_utils::GetClassFromName("System.Data", "DataSet")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Constraint*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{destination});
  }
};
// Writing MetadataGetter for method: System::Data::Constraint::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::Constraint* (System::Data::Constraint::*)(::System::Data::DataSet*, bool)>(&System::Data::Constraint::Clone)> {
  static const MethodInfo* get() {
    static auto* destination = &::il2cpp_utils::GetClassFromName("System.Data", "DataSet")->byval_arg;
    static auto* ignoreNSforTableLookup = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Constraint*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{destination, ignoreNSforTableLookup});
  }
};
// Writing MetadataGetter for method: System::Data::Constraint::CheckConstraint
// Il2CppName: CheckConstraint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::Constraint::*)()>(&System::Data::Constraint::CheckConstraint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::Constraint*), "CheckConstraint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::Constraint::CheckCanAddToCollection
// Il2CppName: CheckCanAddToCollection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::Constraint::*)(::System::Data::ConstraintCollection*)>(&System::Data::Constraint::CheckCanAddToCollection)> {
  static const MethodInfo* get() {
    static auto* constraint = &::il2cpp_utils::GetClassFromName("System.Data", "ConstraintCollection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Constraint*), "CheckCanAddToCollection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{constraint});
  }
};
// Writing MetadataGetter for method: System::Data::Constraint::CanBeRemovedFromCollection
// Il2CppName: CanBeRemovedFromCollection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::Constraint::*)(::System::Data::ConstraintCollection*, bool)>(&System::Data::Constraint::CanBeRemovedFromCollection)> {
  static const MethodInfo* get() {
    static auto* constraint = &::il2cpp_utils::GetClassFromName("System.Data", "ConstraintCollection")->byval_arg;
    static auto* fThrowException = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Constraint*), "CanBeRemovedFromCollection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{constraint, fThrowException});
  }
};
// Writing MetadataGetter for method: System::Data::Constraint::CheckConstraint
// Il2CppName: CheckConstraint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::Constraint::*)(::System::Data::DataRow*, ::System::Data::DataRowAction)>(&System::Data::Constraint::CheckConstraint)> {
  static const MethodInfo* get() {
    static auto* row = &::il2cpp_utils::GetClassFromName("System.Data", "DataRow")->byval_arg;
    static auto* action = &::il2cpp_utils::GetClassFromName("System.Data", "DataRowAction")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Constraint*), "CheckConstraint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{row, action});
  }
};
// Writing MetadataGetter for method: System::Data::Constraint::CheckState
// Il2CppName: CheckState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::Constraint::*)()>(&System::Data::Constraint::CheckState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::Constraint*), "CheckState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::Constraint::CheckStateForProperty
// Il2CppName: CheckStateForProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::Constraint::*)()>(&System::Data::Constraint::CheckStateForProperty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::Constraint*), "CheckStateForProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::Constraint::get__DataSet
// Il2CppName: get__DataSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataSet* (System::Data::Constraint::*)()>(&System::Data::Constraint::get__DataSet)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::Constraint*), "get__DataSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::Constraint::IsConstraintViolated
// Il2CppName: IsConstraintViolated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::Constraint::*)()>(&System::Data::Constraint::IsConstraintViolated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::Constraint*), "IsConstraintViolated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::Constraint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::Constraint::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Data::Constraint::*)()>(&System::Data::Constraint::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::Constraint*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
