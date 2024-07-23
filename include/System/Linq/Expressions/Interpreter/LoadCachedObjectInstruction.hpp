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
  // Forward declaring type: LoadCachedObjectInstruction
  class LoadCachedObjectInstruction;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::LoadCachedObjectInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::LoadCachedObjectInstruction*, "System.Linq.Expressions.Interpreter", "LoadCachedObjectInstruction");
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.Interpreter.LoadCachedObjectInstruction
  // [TokenAttribute] Offset: FFFFFFFF
  class LoadCachedObjectInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
    public:
    public:
    // private readonly System.UInt32 _index
    // Size: 0x4
    // Offset: 0x10
    uint index;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return index;
    }
    // Get instance field reference: private readonly System.UInt32 _index
    [[deprecated("Use field access instead!")]] uint& dyn__index();
    // System.Void .ctor(System.UInt32 index)
    // Offset: 0x4BDB644
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoadCachedObjectInstruction* New_ctor(uint index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::LoadCachedObjectInstruction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoadCachedObjectInstruction*, creationType>(index)));
    }
    // public override System.Int32 get_ProducedStack()
    // Offset: 0x4BDB66C
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.Int32 Instruction::get_ProducedStack()
    int get_ProducedStack();
    // public override System.String get_InstructionName()
    // Offset: 0x4BDB674
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.String Instruction::get_InstructionName()
    ::StringW get_InstructionName();
    // public override System.Int32 Run(System.Linq.Expressions.Interpreter.InterpretedFrame frame)
    // Offset: 0x4BDB6B4
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.Int32 Instruction::Run(System.Linq.Expressions.Interpreter.InterpretedFrame frame)
    int Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);
    // public override System.String ToDebugString(System.Int32 instructionIndex, System.Object cookie, System.Func`2<System.Int32,System.Int32> labelIndexer, System.Collections.Generic.IReadOnlyList`1<System.Object> objects)
    // Offset: 0x4BDB754
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.String Instruction::ToDebugString(System.Int32 instructionIndex, System.Object cookie, System.Func`2<System.Int32,System.Int32> labelIndexer, System.Collections.Generic.IReadOnlyList`1<System.Object> objects)
    ::StringW ToDebugString(int instructionIndex, ::Il2CppObject* cookie, ::System::Func_2<int, int>* labelIndexer, ::System::Collections::Generic::IReadOnlyList_1<::Il2CppObject*>* objects);
    // public override System.String ToString()
    // Offset: 0x4BDB898
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.String Instruction::ToString()
    ::StringW ToString();
  }; // System.Linq.Expressions.Interpreter.LoadCachedObjectInstruction
  #pragma pack(pop)
  static check_size<sizeof(LoadCachedObjectInstruction), 16 + sizeof(uint)> __System_Linq_Expressions_Interpreter_LoadCachedObjectInstructionSizeCheck;
  static_assert(sizeof(LoadCachedObjectInstruction) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LoadCachedObjectInstruction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LoadCachedObjectInstruction::get_ProducedStack
// Il2CppName: get_ProducedStack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::LoadCachedObjectInstruction::*)()>(&System::Linq::Expressions::Interpreter::LoadCachedObjectInstruction::get_ProducedStack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LoadCachedObjectInstruction*), "get_ProducedStack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LoadCachedObjectInstruction::get_InstructionName
// Il2CppName: get_InstructionName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Linq::Expressions::Interpreter::LoadCachedObjectInstruction::*)()>(&System::Linq::Expressions::Interpreter::LoadCachedObjectInstruction::get_InstructionName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LoadCachedObjectInstruction*), "get_InstructionName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LoadCachedObjectInstruction::Run
// Il2CppName: Run
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::LoadCachedObjectInstruction::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&System::Linq::Expressions::Interpreter::LoadCachedObjectInstruction::Run)> {
  static const MethodInfo* get() {
    static auto* frame = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions.Interpreter", "InterpretedFrame")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LoadCachedObjectInstruction*), "Run", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frame});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LoadCachedObjectInstruction::ToDebugString
// Il2CppName: ToDebugString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Linq::Expressions::Interpreter::LoadCachedObjectInstruction::*)(int, ::Il2CppObject*, ::System::Func_2<int, int>*, ::System::Collections::Generic::IReadOnlyList_1<::Il2CppObject*>*)>(&System::Linq::Expressions::Interpreter::LoadCachedObjectInstruction::ToDebugString)> {
  static const MethodInfo* get() {
    static auto* instructionIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cookie = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* labelIndexer = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    static auto* objects = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IReadOnlyList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LoadCachedObjectInstruction*), "ToDebugString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instructionIndex, cookie, labelIndexer, objects});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LoadCachedObjectInstruction::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Linq::Expressions::Interpreter::LoadCachedObjectInstruction::*)()>(&System::Linq::Expressions::Interpreter::LoadCachedObjectInstruction::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LoadCachedObjectInstruction*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
