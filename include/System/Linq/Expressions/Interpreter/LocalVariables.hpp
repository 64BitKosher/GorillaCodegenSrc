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
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Linq::Expressions::Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Forward declaring type: HybridReferenceDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class HybridReferenceDictionary_2;
  // Forward declaring type: LocalVariable
  class LocalVariable;
  // Forward declaring type: LocalDefinition
  struct LocalDefinition;
  // Forward declaring type: InstructionList
  class InstructionList;
}
// Forward declaring namespace: System::Linq::Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: ParameterExpression
  class ParameterExpression;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Forward declaring type: LocalVariables
  class LocalVariables;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::LocalVariables);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::LocalVariables*, "System.Linq.Expressions.Interpreter", "LocalVariables");
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.Interpreter.LocalVariables
  // [TokenAttribute] Offset: FFFFFFFF
  class LocalVariables : public ::Il2CppObject {
    public:
    // Nested type: ::System::Linq::Expressions::Interpreter::LocalVariables::VariableScope
    class VariableScope;
    public:
    // private readonly System.Linq.Expressions.Interpreter.HybridReferenceDictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariables/VariableScope> _variables
    // Size: 0x8
    // Offset: 0x10
    ::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariables::VariableScope*>* variables;
    // Field size check
    static_assert(sizeof(::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariables::VariableScope*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable> _closureVariables
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* closureVariables;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>*) == 0x8);
    // private System.Int32 _localCount
    // Size: 0x4
    // Offset: 0x20
    int localCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _maxLocalCount
    // Size: 0x4
    // Offset: 0x24
    int maxLocalCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private readonly System.Linq.Expressions.Interpreter.HybridReferenceDictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariables/VariableScope> _variables
    [[deprecated("Use field access instead!")]] ::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariables::VariableScope*>*& dyn__variables();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable> _closureVariables
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>*& dyn__closureVariables();
    // Get instance field reference: private System.Int32 _localCount
    [[deprecated("Use field access instead!")]] int& dyn__localCount();
    // Get instance field reference: private System.Int32 _maxLocalCount
    [[deprecated("Use field access instead!")]] int& dyn__maxLocalCount();
    // public System.Linq.Expressions.Interpreter.LocalDefinition DefineLocal(System.Linq.Expressions.ParameterExpression variable, System.Int32 start)
    // Offset: 0x4BD04B4
    ::System::Linq::Expressions::Interpreter::LocalDefinition DefineLocal(::System::Linq::Expressions::ParameterExpression* variable, int start);
    // public System.Void UndefineLocal(System.Linq.Expressions.Interpreter.LocalDefinition definition, System.Int32 end)
    // Offset: 0x4BCAE88
    void UndefineLocal(::System::Linq::Expressions::Interpreter::LocalDefinition definition, int end);
    // System.Void Box(System.Linq.Expressions.ParameterExpression variable, System.Linq.Expressions.Interpreter.InstructionList instructions)
    // Offset: 0x4BD0794
    void Box(::System::Linq::Expressions::ParameterExpression* variable, ::System::Linq::Expressions::Interpreter::InstructionList* instructions);
    // public System.Int32 get_LocalCount()
    // Offset: 0x4BD08E8
    int get_LocalCount();
    // public System.Boolean TryGetLocalOrClosure(System.Linq.Expressions.ParameterExpression var, out System.Linq.Expressions.Interpreter.LocalVariable local)
    // Offset: 0x4BD08F0
    bool TryGetLocalOrClosure(::System::Linq::Expressions::ParameterExpression* var, ByRef<::System::Linq::Expressions::Interpreter::LocalVariable*> local);
    // System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable> get_ClosureVariables()
    // Offset: 0x4BD09CC
    ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* get_ClosureVariables();
    // System.Linq.Expressions.Interpreter.LocalVariable AddClosureVariable(System.Linq.Expressions.ParameterExpression variable)
    // Offset: 0x4BD09D4
    ::System::Linq::Expressions::Interpreter::LocalVariable* AddClosureVariable(::System::Linq::Expressions::ParameterExpression* variable);
    // public System.Void .ctor()
    // Offset: 0x4BD0AF0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalVariables* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::LocalVariables::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalVariables*, creationType>()));
    }
  }; // System.Linq.Expressions.Interpreter.LocalVariables
  #pragma pack(pop)
  static check_size<sizeof(LocalVariables), 36 + sizeof(int)> __System_Linq_Expressions_Interpreter_LocalVariablesSizeCheck;
  static_assert(sizeof(LocalVariables) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LocalVariables::DefineLocal
// Il2CppName: DefineLocal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::LocalDefinition (System::Linq::Expressions::Interpreter::LocalVariables::*)(::System::Linq::Expressions::ParameterExpression*, int)>(&System::Linq::Expressions::Interpreter::LocalVariables::DefineLocal)> {
  static const MethodInfo* get() {
    static auto* variable = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "ParameterExpression")->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LocalVariables*), "DefineLocal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{variable, start});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LocalVariables::UndefineLocal
// Il2CppName: UndefineLocal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::Expressions::Interpreter::LocalVariables::*)(::System::Linq::Expressions::Interpreter::LocalDefinition, int)>(&System::Linq::Expressions::Interpreter::LocalVariables::UndefineLocal)> {
  static const MethodInfo* get() {
    static auto* definition = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions.Interpreter", "LocalDefinition")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LocalVariables*), "UndefineLocal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{definition, end});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LocalVariables::Box
// Il2CppName: Box
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::Expressions::Interpreter::LocalVariables::*)(::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::InstructionList*)>(&System::Linq::Expressions::Interpreter::LocalVariables::Box)> {
  static const MethodInfo* get() {
    static auto* variable = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "ParameterExpression")->byval_arg;
    static auto* instructions = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions.Interpreter", "InstructionList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LocalVariables*), "Box", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{variable, instructions});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LocalVariables::get_LocalCount
// Il2CppName: get_LocalCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::LocalVariables::*)()>(&System::Linq::Expressions::Interpreter::LocalVariables::get_LocalCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LocalVariables*), "get_LocalCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LocalVariables::TryGetLocalOrClosure
// Il2CppName: TryGetLocalOrClosure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Linq::Expressions::Interpreter::LocalVariables::*)(::System::Linq::Expressions::ParameterExpression*, ByRef<::System::Linq::Expressions::Interpreter::LocalVariable*>)>(&System::Linq::Expressions::Interpreter::LocalVariables::TryGetLocalOrClosure)> {
  static const MethodInfo* get() {
    static auto* var = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "ParameterExpression")->byval_arg;
    static auto* local = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions.Interpreter", "LocalVariable")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LocalVariables*), "TryGetLocalOrClosure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{var, local});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LocalVariables::get_ClosureVariables
// Il2CppName: get_ClosureVariables
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*, ::System::Linq::Expressions::Interpreter::LocalVariable*>* (System::Linq::Expressions::Interpreter::LocalVariables::*)()>(&System::Linq::Expressions::Interpreter::LocalVariables::get_ClosureVariables)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LocalVariables*), "get_ClosureVariables", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LocalVariables::AddClosureVariable
// Il2CppName: AddClosureVariable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::LocalVariable* (System::Linq::Expressions::Interpreter::LocalVariables::*)(::System::Linq::Expressions::ParameterExpression*)>(&System::Linq::Expressions::Interpreter::LocalVariables::AddClosureVariable)> {
  static const MethodInfo* get() {
    static auto* variable = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "ParameterExpression")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LocalVariables*), "AddClosureVariable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{variable});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LocalVariables::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
