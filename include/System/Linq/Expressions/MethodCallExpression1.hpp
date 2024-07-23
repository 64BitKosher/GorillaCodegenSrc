// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Expressions.MethodCallExpression
#include "System/Linq/Expressions/MethodCallExpression.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: System::Linq::Expressions
namespace System::Linq::Expressions {
  // Skipping declaration: Expression because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: MethodCallExpression1
  class MethodCallExpression1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::MethodCallExpression1);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::MethodCallExpression1*, "System.Linq.Expressions", "MethodCallExpression1");
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.MethodCallExpression1
  // [TokenAttribute] Offset: FFFFFFFF
  class MethodCallExpression1 : public ::System::Linq::Expressions::MethodCallExpression {
    public:
    public:
    // private System.Object _arg0
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* arg0;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::Reflection::MethodInfo*
    constexpr operator ::System::Reflection::MethodInfo*() const noexcept = delete;
    // Get instance field reference: private System.Object _arg0
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__arg0();
    // public System.Void .ctor(System.Reflection.MethodInfo method, System.Linq.Expressions.Expression arg0)
    // Offset: 0x4B9E8E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MethodCallExpression1* New_ctor(::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::Expression* arg0) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::MethodCallExpression1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MethodCallExpression1*, creationType>(method, arg0)));
    }
    // public override System.Linq.Expressions.Expression GetArgument(System.Int32 index)
    // Offset: 0x4B9E914
    // Implemented from: System.Linq.Expressions.MethodCallExpression
    // Base method: System.Linq.Expressions.Expression MethodCallExpression::GetArgument(System.Int32 index)
    ::System::Linq::Expressions::Expression* GetArgument(int index);
    // public override System.Int32 get_ArgumentCount()
    // Offset: 0x4B9E9AC
    // Implemented from: System.Linq.Expressions.MethodCallExpression
    // Base method: System.Int32 MethodCallExpression::get_ArgumentCount()
    int get_ArgumentCount();
    // override System.Linq.Expressions.MethodCallExpression Rewrite(System.Linq.Expressions.Expression instance, System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.Expression> args)
    // Offset: 0x4B9E9B4
    // Implemented from: System.Linq.Expressions.MethodCallExpression
    // Base method: System.Linq.Expressions.MethodCallExpression MethodCallExpression::Rewrite(System.Linq.Expressions.Expression instance, System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.Expression> args)
    ::System::Linq::Expressions::MethodCallExpression* Rewrite(::System::Linq::Expressions::Expression* instance, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* args);
  }; // System.Linq.Expressions.MethodCallExpression1
  #pragma pack(pop)
  static check_size<sizeof(MethodCallExpression1), 24 + sizeof(::Il2CppObject*)> __System_Linq_Expressions_MethodCallExpression1SizeCheck;
  static_assert(sizeof(MethodCallExpression1) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::MethodCallExpression1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::MethodCallExpression1::GetArgument
// Il2CppName: GetArgument
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::MethodCallExpression1::*)(int)>(&System::Linq::Expressions::MethodCallExpression1::GetArgument)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::MethodCallExpression1*), "GetArgument", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::MethodCallExpression1::get_ArgumentCount
// Il2CppName: get_ArgumentCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::MethodCallExpression1::*)()>(&System::Linq::Expressions::MethodCallExpression1::get_ArgumentCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::MethodCallExpression1*), "get_ArgumentCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::MethodCallExpression1::Rewrite
// Il2CppName: Rewrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::MethodCallExpression* (System::Linq::Expressions::MethodCallExpression1::*)(::System::Linq::Expressions::Expression*, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*)>(&System::Linq::Expressions::MethodCallExpression1::Rewrite)> {
  static const MethodInfo* get() {
    static auto* instance = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "Expression")->byval_arg;
    static auto* args = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IReadOnlyList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "Expression")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::MethodCallExpression1*), "Rewrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instance, args});
  }
};
