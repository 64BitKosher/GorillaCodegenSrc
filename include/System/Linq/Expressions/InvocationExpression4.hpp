// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Expressions.InvocationExpression
#include "System/Linq/Expressions/InvocationExpression.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Linq::Expressions
namespace System::Linq::Expressions {
  // Skipping declaration: Expression because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: InvocationExpression4
  class InvocationExpression4;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::InvocationExpression4);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::InvocationExpression4*, "System.Linq.Expressions", "InvocationExpression4");
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.InvocationExpression4
  // [TokenAttribute] Offset: FFFFFFFF
  class InvocationExpression4 : public ::System::Linq::Expressions::InvocationExpression {
    public:
    public:
    // private System.Object _arg0
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* arg0;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private readonly System.Linq.Expressions.Expression _arg1
    // Size: 0x8
    // Offset: 0x28
    ::System::Linq::Expressions::Expression* arg1;
    // Field size check
    static_assert(sizeof(::System::Linq::Expressions::Expression*) == 0x8);
    // private readonly System.Linq.Expressions.Expression _arg2
    // Size: 0x8
    // Offset: 0x30
    ::System::Linq::Expressions::Expression* arg2;
    // Field size check
    static_assert(sizeof(::System::Linq::Expressions::Expression*) == 0x8);
    // private readonly System.Linq.Expressions.Expression _arg3
    // Size: 0x8
    // Offset: 0x38
    ::System::Linq::Expressions::Expression* arg3;
    // Field size check
    static_assert(sizeof(::System::Linq::Expressions::Expression*) == 0x8);
    public:
    // Get instance field reference: private System.Object _arg0
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__arg0();
    // Get instance field reference: private readonly System.Linq.Expressions.Expression _arg1
    [[deprecated("Use field access instead!")]] ::System::Linq::Expressions::Expression*& dyn__arg1();
    // Get instance field reference: private readonly System.Linq.Expressions.Expression _arg2
    [[deprecated("Use field access instead!")]] ::System::Linq::Expressions::Expression*& dyn__arg2();
    // Get instance field reference: private readonly System.Linq.Expressions.Expression _arg3
    [[deprecated("Use field access instead!")]] ::System::Linq::Expressions::Expression*& dyn__arg3();
    // public System.Void .ctor(System.Linq.Expressions.Expression lambda, System.Type returnType, System.Linq.Expressions.Expression arg0, System.Linq.Expressions.Expression arg1, System.Linq.Expressions.Expression arg2, System.Linq.Expressions.Expression arg3)
    // Offset: 0x4B9D674
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InvocationExpression4* New_ctor(::System::Linq::Expressions::Expression* lambda, ::System::Type* returnType, ::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1, ::System::Linq::Expressions::Expression* arg2, ::System::Linq::Expressions::Expression* arg3) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::InvocationExpression4::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InvocationExpression4*, creationType>(lambda, returnType, arg0, arg1, arg2, arg3)));
    }
    // public override System.Linq.Expressions.Expression GetArgument(System.Int32 index)
    // Offset: 0x4B9D6E4
    // Implemented from: System.Linq.Expressions.InvocationExpression
    // Base method: System.Linq.Expressions.Expression InvocationExpression::GetArgument(System.Int32 index)
    ::System::Linq::Expressions::Expression* GetArgument(int index);
    // public override System.Int32 get_ArgumentCount()
    // Offset: 0x4B9D7BC
    // Implemented from: System.Linq.Expressions.InvocationExpression
    // Base method: System.Int32 InvocationExpression::get_ArgumentCount()
    int get_ArgumentCount();
    // override System.Linq.Expressions.InvocationExpression Rewrite(System.Linq.Expressions.Expression lambda, System.Linq.Expressions.Expression[] arguments)
    // Offset: 0x4B9D7C4
    // Implemented from: System.Linq.Expressions.InvocationExpression
    // Base method: System.Linq.Expressions.InvocationExpression InvocationExpression::Rewrite(System.Linq.Expressions.Expression lambda, System.Linq.Expressions.Expression[] arguments)
    ::System::Linq::Expressions::InvocationExpression* Rewrite(::System::Linq::Expressions::Expression* lambda, ::ArrayW<::System::Linq::Expressions::Expression*> arguments);
  }; // System.Linq.Expressions.InvocationExpression4
  #pragma pack(pop)
  static check_size<sizeof(InvocationExpression4), 56 + sizeof(::System::Linq::Expressions::Expression*)> __System_Linq_Expressions_InvocationExpression4SizeCheck;
  static_assert(sizeof(InvocationExpression4) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::InvocationExpression4::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::InvocationExpression4::GetArgument
// Il2CppName: GetArgument
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::InvocationExpression4::*)(int)>(&System::Linq::Expressions::InvocationExpression4::GetArgument)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::InvocationExpression4*), "GetArgument", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::InvocationExpression4::get_ArgumentCount
// Il2CppName: get_ArgumentCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::InvocationExpression4::*)()>(&System::Linq::Expressions::InvocationExpression4::get_ArgumentCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::InvocationExpression4*), "get_ArgumentCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::InvocationExpression4::Rewrite
// Il2CppName: Rewrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::InvocationExpression* (System::Linq::Expressions::InvocationExpression4::*)(::System::Linq::Expressions::Expression*, ::ArrayW<::System::Linq::Expressions::Expression*>)>(&System::Linq::Expressions::InvocationExpression4::Rewrite)> {
  static const MethodInfo* get() {
    static auto* lambda = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "Expression")->byval_arg;
    static auto* arguments = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "Expression"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::InvocationExpression4*), "Rewrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lambda, arguments});
  }
};
