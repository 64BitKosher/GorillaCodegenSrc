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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Data
namespace System::Data {
  // Forward declaring type: DataTable
  class DataTable;
  // Forward declaring type: DataColumn
  class DataColumn;
  // Forward declaring type: DataRow
  class DataRow;
  // Forward declaring type: DataRowVersion
  struct DataRowVersion;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Data::Common
namespace System::Data::Common {
  // Forward declaring type: StorageType
  struct StorageType;
}
// Completed forward declares
// Type namespace: System.Data
namespace System::Data {
  // Forward declaring type: ExpressionNode
  class ExpressionNode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Data::ExpressionNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::ExpressionNode*, "System.Data", "ExpressionNode");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.ExpressionNode
  // [TokenAttribute] Offset: FFFFFFFF
  class ExpressionNode : public ::Il2CppObject {
    public:
    public:
    // private System.Data.DataTable _table
    // Size: 0x8
    // Offset: 0x10
    ::System::Data::DataTable* table;
    // Field size check
    static_assert(sizeof(::System::Data::DataTable*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Data::DataTable*
    constexpr operator ::System::Data::DataTable*() const noexcept {
      return table;
    }
    // Get instance field reference: private System.Data.DataTable _table
    [[deprecated("Use field access instead!")]] ::System::Data::DataTable*& dyn__table();
    // protected System.Void .ctor(System.Data.DataTable table)
    // Offset: 0x4C55CF4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExpressionNode* New_ctor(::System::Data::DataTable* table) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::ExpressionNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExpressionNode*, creationType>(table)));
    }
    // System.IFormatProvider get_FormatProvider()
    // Offset: 0x4C5D6B8
    ::System::IFormatProvider* get_FormatProvider();
    // System.Boolean get_IsSqlColumn()
    // Offset: 0x4C61118
    bool get_IsSqlColumn();
    // protected System.Data.DataTable get_table()
    // Offset: 0x4C61120
    ::System::Data::DataTable* get_table();
    // protected System.Void BindTable(System.Data.DataTable table)
    // Offset: 0x4C61128
    void BindTable(::System::Data::DataTable* table);
    // System.Void Bind(System.Data.DataTable table, System.Collections.Generic.List`1<System.Data.DataColumn> list)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Bind(::System::Data::DataTable* table, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>* list);
    // System.Object Eval()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* Eval();
    // System.Object Eval(System.Data.DataRow row, System.Data.DataRowVersion version)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* Eval(::System::Data::DataRow* row, ::System::Data::DataRowVersion version);
    // System.Object Eval(System.Int32[] recordNos)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* Eval(::ArrayW<int> recordNos);
    // System.Boolean IsConstant()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool IsConstant();
    // System.Boolean IsTableConstant()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool IsTableConstant();
    // System.Boolean HasLocalAggregate()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool HasLocalAggregate();
    // System.Boolean HasRemoteAggregate()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool HasRemoteAggregate();
    // System.Data.ExpressionNode Optimize()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Data::ExpressionNode* Optimize();
    // System.Boolean DependsOn(System.Data.DataColumn column)
    // Offset: 0x4C61130
    bool DependsOn(::System::Data::DataColumn* column);
    // static System.Boolean IsInteger(System.Data.Common.StorageType type)
    // Offset: 0x4C5E500
    static bool IsInteger(::System::Data::Common::StorageType type);
    // static System.Boolean IsIntegerSql(System.Data.Common.StorageType type)
    // Offset: 0x4C5E178
    static bool IsIntegerSql(::System::Data::Common::StorageType type);
    // static System.Boolean IsSigned(System.Data.Common.StorageType type)
    // Offset: 0x4C5E3B0
    static bool IsSigned(::System::Data::Common::StorageType type);
    // static System.Boolean IsSignedSql(System.Data.Common.StorageType type)
    // Offset: 0x4C5E48C
    static bool IsSignedSql(::System::Data::Common::StorageType type);
    // static System.Boolean IsUnsigned(System.Data.Common.StorageType type)
    // Offset: 0x4C5E3E0
    static bool IsUnsigned(::System::Data::Common::StorageType type);
    // static System.Boolean IsUnsignedSql(System.Data.Common.StorageType type)
    // Offset: 0x4C5E4B8
    static bool IsUnsignedSql(::System::Data::Common::StorageType type);
    // static System.Boolean IsNumeric(System.Data.Common.StorageType type)
    // Offset: 0x4C5E4E0
    static bool IsNumeric(::System::Data::Common::StorageType type);
    // static System.Boolean IsNumericSql(System.Data.Common.StorageType type)
    // Offset: 0x4C5E614
    static bool IsNumericSql(::System::Data::Common::StorageType type);
    // static System.Boolean IsFloat(System.Data.Common.StorageType type)
    // Offset: 0x4C61138
    static bool IsFloat(::System::Data::Common::StorageType type);
    // static System.Boolean IsFloatSql(System.Data.Common.StorageType type)
    // Offset: 0x4C61148
    static bool IsFloatSql(::System::Data::Common::StorageType type);
  }; // System.Data.ExpressionNode
  #pragma pack(pop)
  static check_size<sizeof(ExpressionNode), 16 + sizeof(::System::Data::DataTable*)> __System_Data_ExpressionNodeSizeCheck;
  static_assert(sizeof(ExpressionNode) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::ExpressionNode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::ExpressionNode::get_FormatProvider
// Il2CppName: get_FormatProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IFormatProvider* (System::Data::ExpressionNode::*)()>(&System::Data::ExpressionNode::get_FormatProvider)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::ExpressionNode*), "get_FormatProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::ExpressionNode::get_IsSqlColumn
// Il2CppName: get_IsSqlColumn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::ExpressionNode::*)()>(&System::Data::ExpressionNode::get_IsSqlColumn)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::ExpressionNode*), "get_IsSqlColumn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::ExpressionNode::get_table
// Il2CppName: get_table
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataTable* (System::Data::ExpressionNode::*)()>(&System::Data::ExpressionNode::get_table)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::ExpressionNode*), "get_table", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::ExpressionNode::BindTable
// Il2CppName: BindTable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::ExpressionNode::*)(::System::Data::DataTable*)>(&System::Data::ExpressionNode::BindTable)> {
  static const MethodInfo* get() {
    static auto* table = &::il2cpp_utils::GetClassFromName("System.Data", "DataTable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ExpressionNode*), "BindTable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{table});
  }
};
// Writing MetadataGetter for method: System::Data::ExpressionNode::Bind
// Il2CppName: Bind
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::ExpressionNode::*)(::System::Data::DataTable*, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>*)>(&System::Data::ExpressionNode::Bind)> {
  static const MethodInfo* get() {
    static auto* table = &::il2cpp_utils::GetClassFromName("System.Data", "DataTable")->byval_arg;
    static auto* list = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Data", "DataColumn")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ExpressionNode*), "Bind", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{table, list});
  }
};
// Writing MetadataGetter for method: System::Data::ExpressionNode::Eval
// Il2CppName: Eval
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Data::ExpressionNode::*)()>(&System::Data::ExpressionNode::Eval)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::ExpressionNode*), "Eval", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::ExpressionNode::Eval
// Il2CppName: Eval
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Data::ExpressionNode::*)(::System::Data::DataRow*, ::System::Data::DataRowVersion)>(&System::Data::ExpressionNode::Eval)> {
  static const MethodInfo* get() {
    static auto* row = &::il2cpp_utils::GetClassFromName("System.Data", "DataRow")->byval_arg;
    static auto* version = &::il2cpp_utils::GetClassFromName("System.Data", "DataRowVersion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ExpressionNode*), "Eval", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{row, version});
  }
};
// Writing MetadataGetter for method: System::Data::ExpressionNode::Eval
// Il2CppName: Eval
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Data::ExpressionNode::*)(::ArrayW<int>)>(&System::Data::ExpressionNode::Eval)> {
  static const MethodInfo* get() {
    static auto* recordNos = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ExpressionNode*), "Eval", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{recordNos});
  }
};
// Writing MetadataGetter for method: System::Data::ExpressionNode::IsConstant
// Il2CppName: IsConstant
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::ExpressionNode::*)()>(&System::Data::ExpressionNode::IsConstant)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::ExpressionNode*), "IsConstant", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::ExpressionNode::IsTableConstant
// Il2CppName: IsTableConstant
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::ExpressionNode::*)()>(&System::Data::ExpressionNode::IsTableConstant)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::ExpressionNode*), "IsTableConstant", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::ExpressionNode::HasLocalAggregate
// Il2CppName: HasLocalAggregate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::ExpressionNode::*)()>(&System::Data::ExpressionNode::HasLocalAggregate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::ExpressionNode*), "HasLocalAggregate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::ExpressionNode::HasRemoteAggregate
// Il2CppName: HasRemoteAggregate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::ExpressionNode::*)()>(&System::Data::ExpressionNode::HasRemoteAggregate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::ExpressionNode*), "HasRemoteAggregate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::ExpressionNode::Optimize
// Il2CppName: Optimize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::ExpressionNode* (System::Data::ExpressionNode::*)()>(&System::Data::ExpressionNode::Optimize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::ExpressionNode*), "Optimize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::ExpressionNode::DependsOn
// Il2CppName: DependsOn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::ExpressionNode::*)(::System::Data::DataColumn*)>(&System::Data::ExpressionNode::DependsOn)> {
  static const MethodInfo* get() {
    static auto* column = &::il2cpp_utils::GetClassFromName("System.Data", "DataColumn")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ExpressionNode*), "DependsOn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{column});
  }
};
// Writing MetadataGetter for method: System::Data::ExpressionNode::IsInteger
// Il2CppName: IsInteger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Data::Common::StorageType)>(&System::Data::ExpressionNode::IsInteger)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System.Data.Common", "StorageType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ExpressionNode*), "IsInteger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Data::ExpressionNode::IsIntegerSql
// Il2CppName: IsIntegerSql
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Data::Common::StorageType)>(&System::Data::ExpressionNode::IsIntegerSql)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System.Data.Common", "StorageType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ExpressionNode*), "IsIntegerSql", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Data::ExpressionNode::IsSigned
// Il2CppName: IsSigned
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Data::Common::StorageType)>(&System::Data::ExpressionNode::IsSigned)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System.Data.Common", "StorageType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ExpressionNode*), "IsSigned", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Data::ExpressionNode::IsSignedSql
// Il2CppName: IsSignedSql
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Data::Common::StorageType)>(&System::Data::ExpressionNode::IsSignedSql)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System.Data.Common", "StorageType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ExpressionNode*), "IsSignedSql", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Data::ExpressionNode::IsUnsigned
// Il2CppName: IsUnsigned
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Data::Common::StorageType)>(&System::Data::ExpressionNode::IsUnsigned)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System.Data.Common", "StorageType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ExpressionNode*), "IsUnsigned", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Data::ExpressionNode::IsUnsignedSql
// Il2CppName: IsUnsignedSql
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Data::Common::StorageType)>(&System::Data::ExpressionNode::IsUnsignedSql)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System.Data.Common", "StorageType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ExpressionNode*), "IsUnsignedSql", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Data::ExpressionNode::IsNumeric
// Il2CppName: IsNumeric
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Data::Common::StorageType)>(&System::Data::ExpressionNode::IsNumeric)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System.Data.Common", "StorageType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ExpressionNode*), "IsNumeric", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Data::ExpressionNode::IsNumericSql
// Il2CppName: IsNumericSql
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Data::Common::StorageType)>(&System::Data::ExpressionNode::IsNumericSql)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System.Data.Common", "StorageType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ExpressionNode*), "IsNumericSql", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Data::ExpressionNode::IsFloat
// Il2CppName: IsFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Data::Common::StorageType)>(&System::Data::ExpressionNode::IsFloat)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System.Data.Common", "StorageType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ExpressionNode*), "IsFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Data::ExpressionNode::IsFloatSql
// Il2CppName: IsFloatSql
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Data::Common::StorageType)>(&System::Data::ExpressionNode::IsFloatSql)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System.Data.Common", "StorageType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ExpressionNode*), "IsFloatSql", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
