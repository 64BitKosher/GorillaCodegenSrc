// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Expressions.Interpreter.Instruction
#include "System/Linq/Expressions/Interpreter/Instruction.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Linq::Expressions::Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Forward declaring type: RuntimeLabel
  struct RuntimeLabel;
  // Forward declaring type: InterpretedFrame
  class InterpretedFrame;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Forward declaring type: IndexedBranchInstruction
  class IndexedBranchInstruction;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::IndexedBranchInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::IndexedBranchInstruction*, "System.Linq.Expressions.Interpreter", "IndexedBranchInstruction");
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.Interpreter.IndexedBranchInstruction
  // [TokenAttribute] Offset: FFFFFFFF
  class IndexedBranchInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
    public:
    public:
    // readonly System.Int32 _labelIndex
    // Size: 0x4
    // Offset: 0x10
    int labelIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return labelIndex;
    }
    // Get instance field reference: readonly System.Int32 _labelIndex
    [[deprecated("Use field access instead!")]] int& dyn__labelIndex();
    // public System.Void .ctor(System.Int32 labelIndex)
    // Offset: 0x4BA82E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IndexedBranchInstruction* New_ctor(int labelIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::IndexedBranchInstruction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IndexedBranchInstruction*, creationType>(labelIndex)));
    }
    // public System.Linq.Expressions.Interpreter.RuntimeLabel GetLabel(System.Linq.Expressions.Interpreter.InterpretedFrame frame)
    // Offset: 0x4BA8310
    ::System::Linq::Expressions::Interpreter::RuntimeLabel GetLabel(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);
    // public override System.String ToDebugString(System.Int32 instructionIndex, System.Object cookie, System.Func`2<System.Int32,System.Int32> labelIndexer, System.Collections.Generic.IReadOnlyList`1<System.Object> objects)
    // Offset: 0x4BA8358
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.String Instruction::ToDebugString(System.Int32 instructionIndex, System.Object cookie, System.Func`2<System.Int32,System.Int32> labelIndexer, System.Collections.Generic.IReadOnlyList`1<System.Object> objects)
    ::StringW ToDebugString(int instructionIndex, ::Il2CppObject* cookie, ::System::Func_2<int, int>* labelIndexer, ::System::Collections::Generic::IReadOnlyList_1<::Il2CppObject*>* objects);
    // public override System.String ToString()
    // Offset: 0x4BA8434
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.String Instruction::ToString()
    ::StringW ToString();
  }; // System.Linq.Expressions.Interpreter.IndexedBranchInstruction
  #pragma pack(pop)
  static check_size<sizeof(IndexedBranchInstruction), 16 + sizeof(int)> __System_Linq_Expressions_Interpreter_IndexedBranchInstructionSizeCheck;
  static_assert(sizeof(IndexedBranchInstruction) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::IndexedBranchInstruction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::IndexedBranchInstruction::GetLabel
// Il2CppName: GetLabel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::RuntimeLabel (System::Linq::Expressions::Interpreter::IndexedBranchInstruction::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&System::Linq::Expressions::Interpreter::IndexedBranchInstruction::GetLabel)> {
  static const MethodInfo* get() {
    static auto* frame = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions.Interpreter", "InterpretedFrame")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::IndexedBranchInstruction*), "GetLabel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frame});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::IndexedBranchInstruction::ToDebugString
// Il2CppName: ToDebugString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Linq::Expressions::Interpreter::IndexedBranchInstruction::*)(int, ::Il2CppObject*, ::System::Func_2<int, int>*, ::System::Collections::Generic::IReadOnlyList_1<::Il2CppObject*>*)>(&System::Linq::Expressions::Interpreter::IndexedBranchInstruction::ToDebugString)> {
  static const MethodInfo* get() {
    static auto* instructionIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cookie = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* labelIndexer = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    static auto* objects = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IReadOnlyList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::IndexedBranchInstruction*), "ToDebugString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instructionIndex, cookie, labelIndexer, objects});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::IndexedBranchInstruction::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Linq::Expressions::Interpreter::IndexedBranchInstruction::*)()>(&System::Linq::Expressions::Interpreter::IndexedBranchInstruction::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::IndexedBranchInstruction*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
