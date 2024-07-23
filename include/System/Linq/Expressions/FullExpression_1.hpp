// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Expressions.ExpressionN`1
#include "System/Linq/Expressions/ExpressionN_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Linq::Expressions
namespace System::Linq::Expressions {
  // Skipping declaration: Expression because it is already included!
  // Forward declaring type: ParameterExpression
  class ParameterExpression;
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
  // Forward declaring type: FullExpression`1<TDelegate>
  template<typename TDelegate>
  class FullExpression_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::Expressions::FullExpression_1, "System.Linq.Expressions", "FullExpression`1");
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Linq.Expressions.FullExpression`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TDelegate>
  class FullExpression_1 : public ::System::Linq::Expressions::ExpressionN_1<TDelegate> {
    public:
    public:
    // private readonly System.String <NameCore>k__BackingField
    // Size: 0x8
    // Offset: 0x0
    ::StringW NameCore;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly System.Boolean <TailCallCore>k__BackingField
    // Size: 0x1
    // Offset: 0x0
    bool TailCallCore;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Autogenerated instance field getter
    // Get instance field: private readonly System.String <NameCore>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$NameCore$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::FullExpression_1::dyn_$NameCore$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<NameCore>k__BackingField"))->offset;
      return *reinterpret_cast<::StringW*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Boolean <TailCallCore>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$TailCallCore$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::FullExpression_1::dyn_$TailCallCore$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<TailCallCore>k__BackingField"))->offset;
      return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(System.Linq.Expressions.Expression body, System.String name, System.Boolean tailCall, System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.ParameterExpression> parameters)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FullExpression_1<TDelegate>* New_ctor(::System::Linq::Expressions::Expression* body, ::StringW name, bool tailCall, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::ParameterExpression*>* parameters) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::FullExpression_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FullExpression_1<TDelegate>*, creationType>(body, name, tailCall, parameters)));
    }
    // override System.String get_NameCore()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Linq.Expressions.LambdaExpression
    // Base method: System.String LambdaExpression::get_NameCore()
    ::StringW get_NameCore() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::FullExpression_1::get_NameCore");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Linq::Expressions::LambdaExpression*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::StringW, false>(this, ___internal__method);
    }
    // override System.Boolean get_TailCallCore()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Linq.Expressions.LambdaExpression
    // Base method: System.Boolean LambdaExpression::get_TailCallCore()
    bool get_TailCallCore() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::FullExpression_1::get_TailCallCore");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Linq::Expressions::LambdaExpression*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
  }; // System.Linq.Expressions.FullExpression`1
  // Could not write size check! Type: System.Linq.Expressions.FullExpression`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
