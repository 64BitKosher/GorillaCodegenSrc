// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Data.ExpressionNode
#include "System/Data/ExpressionNode.hpp"
// Including type: System.Data.ValueType
#include "System/Data/ValueType.hpp"
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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: System.Data
namespace System::Data {
  // Forward declaring type: ConstNode
  class ConstNode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Data::ConstNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::ConstNode*, "System.Data", "ConstNode");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.ConstNode
  // [TokenAttribute] Offset: FFFFFFFF
  class ConstNode : public ::System::Data::ExpressionNode {
    public:
    public:
    // readonly System.Object _val
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* val;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::Data::DataTable*
    constexpr operator ::System::Data::DataTable*() const noexcept = delete;
    // Get instance field reference: readonly System.Object _val
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__val();
    // System.Void .ctor(System.Data.DataTable table, System.Data.ValueType type, System.Object constant)
    // Offset: 0x4C5EEC8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConstNode* New_ctor(::System::Data::DataTable* table, ::System::Data::ValueType type, ::Il2CppObject* constant) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::ConstNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConstNode*, creationType>(table, type, constant)));
    }
    // System.Void .ctor(System.Data.DataTable table, System.Data.ValueType type, System.Object constant, System.Boolean fParseQuotes)
    // Offset: 0x4C5C44C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConstNode* New_ctor(::System::Data::DataTable* table, ::System::Data::ValueType type, ::Il2CppObject* constant, bool fParseQuotes) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::ConstNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConstNode*, creationType>(table, type, constant, fParseQuotes)));
    }
    // private System.Object SmallestDecimal(System.Object constant)
    // Offset: 0x4C5F500
    ::Il2CppObject* SmallestDecimal(::Il2CppObject* constant);
    // private System.Object SmallestNumeric(System.Object constant)
    // Offset: 0x4C5EED0
    ::Il2CppObject* SmallestNumeric(::Il2CppObject* constant);
    // override System.Void Bind(System.Data.DataTable table, System.Collections.Generic.List`1<System.Data.DataColumn> list)
    // Offset: 0x4C5F990
    // Implemented from: System.Data.ExpressionNode
    // Base method: System.Void ExpressionNode::Bind(System.Data.DataTable table, System.Collections.Generic.List`1<System.Data.DataColumn> list)
    void Bind(::System::Data::DataTable* table, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>* list);
    // override System.Object Eval()
    // Offset: 0x4C5F998
    // Implemented from: System.Data.ExpressionNode
    // Base method: System.Object ExpressionNode::Eval()
    ::Il2CppObject* Eval();
    // override System.Object Eval(System.Data.DataRow row, System.Data.DataRowVersion version)
    // Offset: 0x4C5F9A0
    // Implemented from: System.Data.ExpressionNode
    // Base method: System.Object ExpressionNode::Eval(System.Data.DataRow row, System.Data.DataRowVersion version)
    ::Il2CppObject* Eval(::System::Data::DataRow* row, ::System::Data::DataRowVersion version);
    // override System.Object Eval(System.Int32[] recordNos)
    // Offset: 0x4C5F9AC
    // Implemented from: System.Data.ExpressionNode
    // Base method: System.Object ExpressionNode::Eval(System.Int32[] recordNos)
    ::Il2CppObject* Eval(::ArrayW<int> recordNos);
    // override System.Boolean IsConstant()
    // Offset: 0x4C5F9B8
    // Implemented from: System.Data.ExpressionNode
    // Base method: System.Boolean ExpressionNode::IsConstant()
    bool IsConstant();
    // override System.Boolean IsTableConstant()
    // Offset: 0x4C5F9C0
    // Implemented from: System.Data.ExpressionNode
    // Base method: System.Boolean ExpressionNode::IsTableConstant()
    bool IsTableConstant();
    // override System.Boolean HasLocalAggregate()
    // Offset: 0x4C5F9C8
    // Implemented from: System.Data.ExpressionNode
    // Base method: System.Boolean ExpressionNode::HasLocalAggregate()
    bool HasLocalAggregate();
    // override System.Boolean HasRemoteAggregate()
    // Offset: 0x4C5F9D0
    // Implemented from: System.Data.ExpressionNode
    // Base method: System.Boolean ExpressionNode::HasRemoteAggregate()
    bool HasRemoteAggregate();
    // override System.Data.ExpressionNode Optimize()
    // Offset: 0x4C5F9D8
    // Implemented from: System.Data.ExpressionNode
    // Base method: System.Data.ExpressionNode ExpressionNode::Optimize()
    ::System::Data::ExpressionNode* Optimize();
  }; // System.Data.ConstNode
  #pragma pack(pop)
  static check_size<sizeof(ConstNode), 24 + sizeof(::Il2CppObject*)> __System_Data_ConstNodeSizeCheck;
  static_assert(sizeof(ConstNode) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::ConstNode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::ConstNode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::ConstNode::SmallestDecimal
// Il2CppName: SmallestDecimal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Data::ConstNode::*)(::Il2CppObject*)>(&System::Data::ConstNode::SmallestDecimal)> {
  static const MethodInfo* get() {
    static auto* constant = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ConstNode*), "SmallestDecimal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{constant});
  }
};
// Writing MetadataGetter for method: System::Data::ConstNode::SmallestNumeric
// Il2CppName: SmallestNumeric
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Data::ConstNode::*)(::Il2CppObject*)>(&System::Data::ConstNode::SmallestNumeric)> {
  static const MethodInfo* get() {
    static auto* constant = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ConstNode*), "SmallestNumeric", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{constant});
  }
};
// Writing MetadataGetter for method: System::Data::ConstNode::Bind
// Il2CppName: Bind
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::ConstNode::*)(::System::Data::DataTable*, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>*)>(&System::Data::ConstNode::Bind)> {
  static const MethodInfo* get() {
    static auto* table = &::il2cpp_utils::GetClassFromName("System.Data", "DataTable")->byval_arg;
    static auto* list = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Data", "DataColumn")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ConstNode*), "Bind", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{table, list});
  }
};
// Writing MetadataGetter for method: System::Data::ConstNode::Eval
// Il2CppName: Eval
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Data::ConstNode::*)()>(&System::Data::ConstNode::Eval)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::ConstNode*), "Eval", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::ConstNode::Eval
// Il2CppName: Eval
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Data::ConstNode::*)(::System::Data::DataRow*, ::System::Data::DataRowVersion)>(&System::Data::ConstNode::Eval)> {
  static const MethodInfo* get() {
    static auto* row = &::il2cpp_utils::GetClassFromName("System.Data", "DataRow")->byval_arg;
    static auto* version = &::il2cpp_utils::GetClassFromName("System.Data", "DataRowVersion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ConstNode*), "Eval", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{row, version});
  }
};
// Writing MetadataGetter for method: System::Data::ConstNode::Eval
// Il2CppName: Eval
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Data::ConstNode::*)(::ArrayW<int>)>(&System::Data::ConstNode::Eval)> {
  static const MethodInfo* get() {
    static auto* recordNos = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ConstNode*), "Eval", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{recordNos});
  }
};
// Writing MetadataGetter for method: System::Data::ConstNode::IsConstant
// Il2CppName: IsConstant
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::ConstNode::*)()>(&System::Data::ConstNode::IsConstant)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::ConstNode*), "IsConstant", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::ConstNode::IsTableConstant
// Il2CppName: IsTableConstant
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::ConstNode::*)()>(&System::Data::ConstNode::IsTableConstant)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::ConstNode*), "IsTableConstant", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::ConstNode::HasLocalAggregate
// Il2CppName: HasLocalAggregate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::ConstNode::*)()>(&System::Data::ConstNode::HasLocalAggregate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::ConstNode*), "HasLocalAggregate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::ConstNode::HasRemoteAggregate
// Il2CppName: HasRemoteAggregate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::ConstNode::*)()>(&System::Data::ConstNode::HasRemoteAggregate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::ConstNode*), "HasRemoteAggregate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::ConstNode::Optimize
// Il2CppName: Optimize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::ExpressionNode* (System::Data::ConstNode::*)()>(&System::Data::ConstNode::Optimize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::ConstNode*), "Optimize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
