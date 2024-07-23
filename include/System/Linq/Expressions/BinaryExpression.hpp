// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Expressions.Expression
#include "System/Linq/Expressions/Expression.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Linq::Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: ExpressionType
  struct ExpressionType;
  // Forward declaring type: LambdaExpression
  class LambdaExpression;
  // Forward declaring type: ExpressionVisitor
  class ExpressionVisitor;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: BinaryExpression
  class BinaryExpression;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::BinaryExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::BinaryExpression*, "System.Linq.Expressions", "BinaryExpression");
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.BinaryExpression
  // [TokenAttribute] Offset: FFFFFFFF
  // [DebuggerTypeProxyAttribute] Offset: FFFFFFFF
  class BinaryExpression : public ::System::Linq::Expressions::Expression {
    public:
    public:
    // private readonly System.Linq.Expressions.Expression <Right>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::System::Linq::Expressions::Expression* Right;
    // Field size check
    static_assert(sizeof(::System::Linq::Expressions::Expression*) == 0x8);
    // private readonly System.Linq.Expressions.Expression <Left>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::System::Linq::Expressions::Expression* Left;
    // Field size check
    static_assert(sizeof(::System::Linq::Expressions::Expression*) == 0x8);
    public:
    // Get instance field reference: private readonly System.Linq.Expressions.Expression <Right>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Linq::Expressions::Expression*& dyn_$Right$k__BackingField();
    // Get instance field reference: private readonly System.Linq.Expressions.Expression <Left>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Linq::Expressions::Expression*& dyn_$Left$k__BackingField();
    // System.Void .ctor(System.Linq.Expressions.Expression left, System.Linq.Expressions.Expression right)
    // Offset: 0x4B76A40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BinaryExpression* New_ctor(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::Expression* right) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::BinaryExpression::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BinaryExpression*, creationType>(left, right)));
    }
    // static private System.Boolean IsOpAssignment(System.Linq.Expressions.ExpressionType op)
    // Offset: 0x4B76AF4
    static bool IsOpAssignment(::System::Linq::Expressions::ExpressionType op);
    // public System.Linq.Expressions.Expression get_Right()
    // Offset: 0x4B76B04
    ::System::Linq::Expressions::Expression* get_Right();
    // public System.Linq.Expressions.Expression get_Left()
    // Offset: 0x4B76B0C
    ::System::Linq::Expressions::Expression* get_Left();
    // public System.Reflection.MethodInfo get_Method()
    // Offset: 0x4B76B14
    ::System::Reflection::MethodInfo* get_Method();
    // System.Reflection.MethodInfo GetMethod()
    // Offset: 0x4B76B20
    ::System::Reflection::MethodInfo* GetMethod();
    // public System.Linq.Expressions.BinaryExpression Update(System.Linq.Expressions.Expression left, System.Linq.Expressions.LambdaExpression conversion, System.Linq.Expressions.Expression right)
    // Offset: 0x4B76B28
    ::System::Linq::Expressions::BinaryExpression* Update(::System::Linq::Expressions::Expression* left, ::System::Linq::Expressions::LambdaExpression* conversion, ::System::Linq::Expressions::Expression* right);
    // static private System.Linq.Expressions.ExpressionType GetBinaryOpFromAssignmentOp(System.Linq.Expressions.ExpressionType op)
    // Offset: 0x4B7856C
    static ::System::Linq::Expressions::ExpressionType GetBinaryOpFromAssignmentOp(::System::Linq::Expressions::ExpressionType op);
    // private System.Linq.Expressions.Expression ReduceVariable()
    // Offset: 0x4B78468
    ::System::Linq::Expressions::Expression* ReduceVariable();
    // private System.Linq.Expressions.Expression ReduceMember()
    // Offset: 0x4B77BB0
    ::System::Linq::Expressions::Expression* ReduceMember();
    // private System.Linq.Expressions.Expression ReduceIndex()
    // Offset: 0x4B7800C
    ::System::Linq::Expressions::Expression* ReduceIndex();
    // public System.Linq.Expressions.LambdaExpression get_Conversion()
    // Offset: 0x4B76C8C
    ::System::Linq::Expressions::LambdaExpression* get_Conversion();
    // System.Linq.Expressions.LambdaExpression GetConversion()
    // Offset: 0x4B78DD0
    ::System::Linq::Expressions::LambdaExpression* GetConversion();
    // public System.Boolean get_IsLifted()
    // Offset: 0x4B78DD8
    bool get_IsLifted();
    // public System.Boolean get_IsLiftedToNull()
    // Offset: 0x4B7707C
    bool get_IsLiftedToNull();
    // System.Boolean get_IsLiftedLogical()
    // Offset: 0x4B78F90
    bool get_IsLiftedLogical();
    // System.Boolean get_IsReferenceComparison()
    // Offset: 0x4B76C98
    bool get_IsReferenceComparison();
    // System.Linq.Expressions.Expression ReduceUserdefinedLifted()
    // Offset: 0x4B790F8
    ::System::Linq::Expressions::Expression* ReduceUserdefinedLifted();
    // public override System.Boolean get_CanReduce()
    // Offset: 0x4B76AD0
    // Implemented from: System.Linq.Expressions.Expression
    // Base method: System.Boolean Expression::get_CanReduce()
    bool get_CanReduce();
    // public override System.Linq.Expressions.Expression Reduce()
    // Offset: 0x4B77B38
    // Implemented from: System.Linq.Expressions.Expression
    // Base method: System.Linq.Expressions.Expression Expression::Reduce()
    ::System::Linq::Expressions::Expression* Reduce();
    // protected internal override System.Linq.Expressions.Expression Accept(System.Linq.Expressions.ExpressionVisitor visitor)
    // Offset: 0x4B78F68
    // Implemented from: System.Linq.Expressions.Expression
    // Base method: System.Linq.Expressions.Expression Expression::Accept(System.Linq.Expressions.ExpressionVisitor visitor)
    ::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor);
  }; // System.Linq.Expressions.BinaryExpression
  #pragma pack(pop)
  static check_size<sizeof(BinaryExpression), 24 + sizeof(::System::Linq::Expressions::Expression*)> __System_Linq_Expressions_BinaryExpressionSizeCheck;
  static_assert(sizeof(BinaryExpression) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::BinaryExpression::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::BinaryExpression::IsOpAssignment
// Il2CppName: IsOpAssignment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Linq::Expressions::ExpressionType)>(&System::Linq::Expressions::BinaryExpression::IsOpAssignment)> {
  static const MethodInfo* get() {
    static auto* op = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "ExpressionType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::BinaryExpression*), "IsOpAssignment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{op});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::BinaryExpression::get_Right
// Il2CppName: get_Right
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::BinaryExpression::*)()>(&System::Linq::Expressions::BinaryExpression::get_Right)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::BinaryExpression*), "get_Right", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::BinaryExpression::get_Left
// Il2CppName: get_Left
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::BinaryExpression::*)()>(&System::Linq::Expressions::BinaryExpression::get_Left)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::BinaryExpression*), "get_Left", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::BinaryExpression::get_Method
// Il2CppName: get_Method
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (System::Linq::Expressions::BinaryExpression::*)()>(&System::Linq::Expressions::BinaryExpression::get_Method)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::BinaryExpression*), "get_Method", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::BinaryExpression::GetMethod
// Il2CppName: GetMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (System::Linq::Expressions::BinaryExpression::*)()>(&System::Linq::Expressions::BinaryExpression::GetMethod)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::BinaryExpression*), "GetMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::BinaryExpression::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::BinaryExpression* (System::Linq::Expressions::BinaryExpression::*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::LambdaExpression*, ::System::Linq::Expressions::Expression*)>(&System::Linq::Expressions::BinaryExpression::Update)> {
  static const MethodInfo* get() {
    static auto* left = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "Expression")->byval_arg;
    static auto* conversion = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "LambdaExpression")->byval_arg;
    static auto* right = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "Expression")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::BinaryExpression*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{left, conversion, right});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::BinaryExpression::GetBinaryOpFromAssignmentOp
// Il2CppName: GetBinaryOpFromAssignmentOp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::ExpressionType (*)(::System::Linq::Expressions::ExpressionType)>(&System::Linq::Expressions::BinaryExpression::GetBinaryOpFromAssignmentOp)> {
  static const MethodInfo* get() {
    static auto* op = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "ExpressionType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::BinaryExpression*), "GetBinaryOpFromAssignmentOp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{op});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::BinaryExpression::ReduceVariable
// Il2CppName: ReduceVariable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::BinaryExpression::*)()>(&System::Linq::Expressions::BinaryExpression::ReduceVariable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::BinaryExpression*), "ReduceVariable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::BinaryExpression::ReduceMember
// Il2CppName: ReduceMember
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::BinaryExpression::*)()>(&System::Linq::Expressions::BinaryExpression::ReduceMember)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::BinaryExpression*), "ReduceMember", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::BinaryExpression::ReduceIndex
// Il2CppName: ReduceIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::BinaryExpression::*)()>(&System::Linq::Expressions::BinaryExpression::ReduceIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::BinaryExpression*), "ReduceIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::BinaryExpression::get_Conversion
// Il2CppName: get_Conversion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::LambdaExpression* (System::Linq::Expressions::BinaryExpression::*)()>(&System::Linq::Expressions::BinaryExpression::get_Conversion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::BinaryExpression*), "get_Conversion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::BinaryExpression::GetConversion
// Il2CppName: GetConversion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::LambdaExpression* (System::Linq::Expressions::BinaryExpression::*)()>(&System::Linq::Expressions::BinaryExpression::GetConversion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::BinaryExpression*), "GetConversion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::BinaryExpression::get_IsLifted
// Il2CppName: get_IsLifted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Linq::Expressions::BinaryExpression::*)()>(&System::Linq::Expressions::BinaryExpression::get_IsLifted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::BinaryExpression*), "get_IsLifted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::BinaryExpression::get_IsLiftedToNull
// Il2CppName: get_IsLiftedToNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Linq::Expressions::BinaryExpression::*)()>(&System::Linq::Expressions::BinaryExpression::get_IsLiftedToNull)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::BinaryExpression*), "get_IsLiftedToNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::BinaryExpression::get_IsLiftedLogical
// Il2CppName: get_IsLiftedLogical
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Linq::Expressions::BinaryExpression::*)()>(&System::Linq::Expressions::BinaryExpression::get_IsLiftedLogical)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::BinaryExpression*), "get_IsLiftedLogical", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::BinaryExpression::get_IsReferenceComparison
// Il2CppName: get_IsReferenceComparison
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Linq::Expressions::BinaryExpression::*)()>(&System::Linq::Expressions::BinaryExpression::get_IsReferenceComparison)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::BinaryExpression*), "get_IsReferenceComparison", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::BinaryExpression::ReduceUserdefinedLifted
// Il2CppName: ReduceUserdefinedLifted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::BinaryExpression::*)()>(&System::Linq::Expressions::BinaryExpression::ReduceUserdefinedLifted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::BinaryExpression*), "ReduceUserdefinedLifted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::BinaryExpression::get_CanReduce
// Il2CppName: get_CanReduce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Linq::Expressions::BinaryExpression::*)()>(&System::Linq::Expressions::BinaryExpression::get_CanReduce)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::BinaryExpression*), "get_CanReduce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::BinaryExpression::Reduce
// Il2CppName: Reduce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::BinaryExpression::*)()>(&System::Linq::Expressions::BinaryExpression::Reduce)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::BinaryExpression*), "Reduce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::BinaryExpression::Accept
// Il2CppName: Accept
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::BinaryExpression::*)(::System::Linq::Expressions::ExpressionVisitor*)>(&System::Linq::Expressions::BinaryExpression::Accept)> {
  static const MethodInfo* get() {
    static auto* visitor = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "ExpressionVisitor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::BinaryExpression*), "Accept", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{visitor});
  }
};
