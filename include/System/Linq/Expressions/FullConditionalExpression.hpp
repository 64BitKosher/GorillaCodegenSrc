// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Expressions.ConditionalExpression
#include "System/Linq/Expressions/ConditionalExpression.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Linq::Expressions
namespace System::Linq::Expressions {
  // Skipping declaration: Expression because it is already included!
}
// Completed forward declares
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: FullConditionalExpression
  class FullConditionalExpression;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::FullConditionalExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::FullConditionalExpression*, "System.Linq.Expressions", "FullConditionalExpression");
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.FullConditionalExpression
  // [TokenAttribute] Offset: FFFFFFFF
  class FullConditionalExpression : public ::System::Linq::Expressions::ConditionalExpression {
    public:
    public:
    // private readonly System.Linq.Expressions.Expression _false
    // Size: 0x8
    // Offset: 0x20
    ::System::Linq::Expressions::Expression* _false;
    // Field size check
    static_assert(sizeof(::System::Linq::Expressions::Expression*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Linq::Expressions::Expression*
    constexpr operator ::System::Linq::Expressions::Expression*() const noexcept {
      return _false;
    }
    // Get instance field reference: private readonly System.Linq.Expressions.Expression _false
    [[deprecated("Use field access instead!")]] ::System::Linq::Expressions::Expression*& dyn__false();
    // System.Void .ctor(System.Linq.Expressions.Expression test, System.Linq.Expressions.Expression ifTrue, System.Linq.Expressions.Expression ifFalse)
    // Offset: 0x4B92814
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FullConditionalExpression* New_ctor(::System::Linq::Expressions::Expression* test, ::System::Linq::Expressions::Expression* ifTrue, ::System::Linq::Expressions::Expression* ifFalse) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::FullConditionalExpression::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FullConditionalExpression*, creationType>(test, ifTrue, ifFalse)));
    }
    // override System.Linq.Expressions.Expression GetFalse()
    // Offset: 0x4B929D8
    // Implemented from: System.Linq.Expressions.ConditionalExpression
    // Base method: System.Linq.Expressions.Expression ConditionalExpression::GetFalse()
    ::System::Linq::Expressions::Expression* GetFalse();
  }; // System.Linq.Expressions.FullConditionalExpression
  #pragma pack(pop)
  static check_size<sizeof(FullConditionalExpression), 32 + sizeof(::System::Linq::Expressions::Expression*)> __System_Linq_Expressions_FullConditionalExpressionSizeCheck;
  static_assert(sizeof(FullConditionalExpression) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::FullConditionalExpression::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::FullConditionalExpression::GetFalse
// Il2CppName: GetFalse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::FullConditionalExpression::*)()>(&System::Linq::Expressions::FullConditionalExpression::GetFalse)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::FullConditionalExpression*), "GetFalse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
