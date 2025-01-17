// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ExpressionEvaluator
#include "UnityEngine/ExpressionEvaluator.hpp"
// Including type: UnityEngine.ExpressionEvaluator/Op
#include "UnityEngine/ExpressionEvaluator_Op.hpp"
// Including type: UnityEngine.ExpressionEvaluator/Associativity
#include "UnityEngine/ExpressionEvaluator_Associativity.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ExpressionEvaluator::Operator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ExpressionEvaluator::Operator*, "UnityEngine", "ExpressionEvaluator/Operator");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ExpressionEvaluator/Operator
  // [TokenAttribute] Offset: FFFFFFFF
  class ExpressionEvaluator::Operator : public ::Il2CppObject {
    public:
    public:
    // public readonly UnityEngine.ExpressionEvaluator/Op op
    // Size: 0x4
    // Offset: 0x10
    ::UnityEngine::ExpressionEvaluator::Op op;
    // Field size check
    static_assert(sizeof(::UnityEngine::ExpressionEvaluator::Op) == 0x4);
    // public readonly System.Int32 precedence
    // Size: 0x4
    // Offset: 0x14
    int precedence;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly UnityEngine.ExpressionEvaluator/Associativity associativity
    // Size: 0x4
    // Offset: 0x18
    ::UnityEngine::ExpressionEvaluator::Associativity associativity;
    // Field size check
    static_assert(sizeof(::UnityEngine::ExpressionEvaluator::Associativity) == 0x4);
    // public readonly System.Int32 inputs
    // Size: 0x4
    // Offset: 0x1C
    int inputs;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public readonly UnityEngine.ExpressionEvaluator/Op op
    [[deprecated("Use field access instead!")]] ::UnityEngine::ExpressionEvaluator::Op& dyn_op();
    // Get instance field reference: public readonly System.Int32 precedence
    [[deprecated("Use field access instead!")]] int& dyn_precedence();
    // Get instance field reference: public readonly UnityEngine.ExpressionEvaluator/Associativity associativity
    [[deprecated("Use field access instead!")]] ::UnityEngine::ExpressionEvaluator::Associativity& dyn_associativity();
    // Get instance field reference: public readonly System.Int32 inputs
    [[deprecated("Use field access instead!")]] int& dyn_inputs();
    // public System.Void .ctor(UnityEngine.ExpressionEvaluator/Op op, System.Int32 precedence, System.Int32 inputs, UnityEngine.ExpressionEvaluator/Associativity associativity)
    // Offset: 0x5484C5C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExpressionEvaluator::Operator* New_ctor(::UnityEngine::ExpressionEvaluator::Op op, int precedence, int inputs, ::UnityEngine::ExpressionEvaluator::Associativity associativity) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ExpressionEvaluator::Operator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExpressionEvaluator::Operator*, creationType>(op, precedence, inputs, associativity)));
    }
  }; // UnityEngine.ExpressionEvaluator/Operator
  #pragma pack(pop)
  static check_size<sizeof(ExpressionEvaluator::Operator), 28 + sizeof(int)> __UnityEngine_ExpressionEvaluator_OperatorSizeCheck;
  static_assert(sizeof(ExpressionEvaluator::Operator) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ExpressionEvaluator::Operator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
