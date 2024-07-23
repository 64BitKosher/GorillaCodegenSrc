// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Expressions.Expression
#include "System/Linq/Expressions/Expression.hpp"
// Including type: System.Linq.Expressions.IArgumentProvider
#include "System/Linq/Expressions/IArgumentProvider.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: PropertyInfo
  class PropertyInfo;
}
// Forward declaring namespace: System::Linq::Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: ExpressionType
  struct ExpressionType;
  // Forward declaring type: ExpressionVisitor
  class ExpressionVisitor;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: IndexExpression
  class IndexExpression;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::IndexExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::IndexExpression*, "System.Linq.Expressions", "IndexExpression");
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.IndexExpression
  // [TokenAttribute] Offset: FFFFFFFF
  // [DebuggerTypeProxyAttribute] Offset: FFFFFFFF
  class IndexExpression : public ::System::Linq::Expressions::Expression/*, public ::System::Linq::Expressions::IArgumentProvider*/ {
    public:
    public:
    // private System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.Expression> _arguments
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* arguments;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*) == 0x8);
    // private readonly System.Linq.Expressions.Expression <Object>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::System::Linq::Expressions::Expression* Object;
    // Field size check
    static_assert(sizeof(::System::Linq::Expressions::Expression*) == 0x8);
    // private readonly System.Reflection.PropertyInfo <Indexer>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::System::Reflection::PropertyInfo* Indexer;
    // Field size check
    static_assert(sizeof(::System::Reflection::PropertyInfo*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Linq::Expressions::IArgumentProvider
    operator ::System::Linq::Expressions::IArgumentProvider() noexcept {
      return *reinterpret_cast<::System::Linq::Expressions::IArgumentProvider*>(this);
    }
    // Get instance field reference: private System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.Expression> _arguments
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*& dyn__arguments();
    // Get instance field reference: private readonly System.Linq.Expressions.Expression <Object>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Linq::Expressions::Expression*& dyn_$Object$k__BackingField();
    // Get instance field reference: private readonly System.Reflection.PropertyInfo <Indexer>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Reflection::PropertyInfo*& dyn_$Indexer$k__BackingField();
    // System.Void .ctor(System.Linq.Expressions.Expression instance, System.Reflection.PropertyInfo indexer, System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.Expression> arguments)
    // Offset: 0x4B9CBEC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IndexExpression* New_ctor(::System::Linq::Expressions::Expression* instance, ::System::Reflection::PropertyInfo* indexer, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* arguments) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::IndexExpression::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IndexExpression*, creationType>(instance, indexer, arguments)));
    }
    // public System.Linq.Expressions.Expression get_Object()
    // Offset: 0x4B9CD0C
    ::System::Linq::Expressions::Expression* get_Object();
    // public System.Reflection.PropertyInfo get_Indexer()
    // Offset: 0x4B9CD14
    ::System::Reflection::PropertyInfo* get_Indexer();
    // public System.Linq.Expressions.Expression GetArgument(System.Int32 index)
    // Offset: 0x4B9B3C8
    ::System::Linq::Expressions::Expression* GetArgument(int index);
    // public System.Int32 get_ArgumentCount()
    // Offset: 0x4B9B328
    int get_ArgumentCount();
    // System.Linq.Expressions.Expression Rewrite(System.Linq.Expressions.Expression instance, System.Linq.Expressions.Expression[] arguments)
    // Offset: 0x4B9C208
    ::System::Linq::Expressions::Expression* Rewrite(::System::Linq::Expressions::Expression* instance, ::ArrayW<::System::Linq::Expressions::Expression*> arguments);
    // public override System.Linq.Expressions.ExpressionType get_NodeType()
    // Offset: 0x4B9CCA0
    // Implemented from: System.Linq.Expressions.Expression
    // Base method: System.Linq.Expressions.ExpressionType Expression::get_NodeType()
    ::System::Linq::Expressions::ExpressionType get_NodeType();
    // public override System.Type get_Type()
    // Offset: 0x4B9CCA8
    // Implemented from: System.Linq.Expressions.Expression
    // Base method: System.Type Expression::get_Type()
    ::System::Type* get_Type();
    // protected internal override System.Linq.Expressions.Expression Accept(System.Linq.Expressions.ExpressionVisitor visitor)
    // Offset: 0x4B9CD1C
    // Implemented from: System.Linq.Expressions.Expression
    // Base method: System.Linq.Expressions.Expression Expression::Accept(System.Linq.Expressions.ExpressionVisitor visitor)
    ::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor);
  }; // System.Linq.Expressions.IndexExpression
  #pragma pack(pop)
  static check_size<sizeof(IndexExpression), 32 + sizeof(::System::Reflection::PropertyInfo*)> __System_Linq_Expressions_IndexExpressionSizeCheck;
  static_assert(sizeof(IndexExpression) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::IndexExpression::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::IndexExpression::get_Object
// Il2CppName: get_Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::IndexExpression::*)()>(&System::Linq::Expressions::IndexExpression::get_Object)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::IndexExpression*), "get_Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::IndexExpression::get_Indexer
// Il2CppName: get_Indexer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::PropertyInfo* (System::Linq::Expressions::IndexExpression::*)()>(&System::Linq::Expressions::IndexExpression::get_Indexer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::IndexExpression*), "get_Indexer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::IndexExpression::GetArgument
// Il2CppName: GetArgument
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::IndexExpression::*)(int)>(&System::Linq::Expressions::IndexExpression::GetArgument)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::IndexExpression*), "GetArgument", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::IndexExpression::get_ArgumentCount
// Il2CppName: get_ArgumentCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::IndexExpression::*)()>(&System::Linq::Expressions::IndexExpression::get_ArgumentCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::IndexExpression*), "get_ArgumentCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::IndexExpression::Rewrite
// Il2CppName: Rewrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::IndexExpression::*)(::System::Linq::Expressions::Expression*, ::ArrayW<::System::Linq::Expressions::Expression*>)>(&System::Linq::Expressions::IndexExpression::Rewrite)> {
  static const MethodInfo* get() {
    static auto* instance = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "Expression")->byval_arg;
    static auto* arguments = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "Expression"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::IndexExpression*), "Rewrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instance, arguments});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::IndexExpression::get_NodeType
// Il2CppName: get_NodeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::ExpressionType (System::Linq::Expressions::IndexExpression::*)()>(&System::Linq::Expressions::IndexExpression::get_NodeType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::IndexExpression*), "get_NodeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::IndexExpression::get_Type
// Il2CppName: get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Linq::Expressions::IndexExpression::*)()>(&System::Linq::Expressions::IndexExpression::get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::IndexExpression*), "get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::IndexExpression::Accept
// Il2CppName: Accept
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::IndexExpression::*)(::System::Linq::Expressions::ExpressionVisitor*)>(&System::Linq::Expressions::IndexExpression::Accept)> {
  static const MethodInfo* get() {
    static auto* visitor = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "ExpressionVisitor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::IndexExpression*), "Accept", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{visitor});
  }
};
