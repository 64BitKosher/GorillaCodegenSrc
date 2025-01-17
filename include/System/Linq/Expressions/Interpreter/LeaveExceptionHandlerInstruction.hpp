// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Expressions.Interpreter.IndexedBranchInstruction
#include "System/Linq/Expressions/Interpreter/IndexedBranchInstruction.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Linq::Expressions::Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Forward declaring type: InterpretedFrame
  class InterpretedFrame;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Forward declaring type: LeaveExceptionHandlerInstruction
  class LeaveExceptionHandlerInstruction;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction*, "System.Linq.Expressions.Interpreter", "LeaveExceptionHandlerInstruction");
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Size: 0x15
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.Interpreter.LeaveExceptionHandlerInstruction
  // [TokenAttribute] Offset: FFFFFFFF
  class LeaveExceptionHandlerInstruction : public ::System::Linq::Expressions::Interpreter::IndexedBranchInstruction {
    public:
    public:
    // private readonly System.Boolean _hasValue
    // Size: 0x1
    // Offset: 0x14
    bool hasValue;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator int
    constexpr operator int() const noexcept = delete;
    // Get static field: static private readonly System.Linq.Expressions.Interpreter.LeaveExceptionHandlerInstruction[] s_cache
    static ::ArrayW<::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction*> _get_s_cache();
    // Set static field: static private readonly System.Linq.Expressions.Interpreter.LeaveExceptionHandlerInstruction[] s_cache
    static void _set_s_cache(::ArrayW<::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction*> value);
    // Get instance field reference: private readonly System.Boolean _hasValue
    [[deprecated("Use field access instead!")]] bool& dyn__hasValue();
    // private System.Void .ctor(System.Int32 labelIndex, System.Boolean hasValue)
    // Offset: 0x4BA9A4C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LeaveExceptionHandlerInstruction* New_ctor(int labelIndex, bool hasValue) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LeaveExceptionHandlerInstruction*, creationType>(labelIndex, hasValue)));
    }
    // static System.Linq.Expressions.Interpreter.LeaveExceptionHandlerInstruction Create(System.Int32 labelIndex, System.Boolean hasValue)
    // Offset: 0x4BA9ACC
    static ::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction* Create(int labelIndex, bool hasValue);
    // static private System.Void .cctor()
    // Offset: 0x4BA9C14
    static void _cctor();
    // public override System.String get_InstructionName()
    // Offset: 0x4BA9A7C
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.String Instruction::get_InstructionName()
    ::StringW get_InstructionName();
    // public override System.Int32 get_ConsumedStack()
    // Offset: 0x4BA9ABC
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.Int32 Instruction::get_ConsumedStack()
    int get_ConsumedStack();
    // public override System.Int32 get_ProducedStack()
    // Offset: 0x4BA9AC4
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.Int32 Instruction::get_ProducedStack()
    int get_ProducedStack();
    // public override System.Int32 Run(System.Linq.Expressions.Interpreter.InterpretedFrame frame)
    // Offset: 0x4BA9BF0
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.Int32 Instruction::Run(System.Linq.Expressions.Interpreter.InterpretedFrame frame)
    int Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);
  }; // System.Linq.Expressions.Interpreter.LeaveExceptionHandlerInstruction
  #pragma pack(pop)
  static check_size<sizeof(LeaveExceptionHandlerInstruction), 20 + sizeof(bool)> __System_Linq_Expressions_Interpreter_LeaveExceptionHandlerInstructionSizeCheck;
  static_assert(sizeof(LeaveExceptionHandlerInstruction) == 0x15);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction* (*)(int, bool)>(&System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction::Create)> {
  static const MethodInfo* get() {
    static auto* labelIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* hasValue = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{labelIndex, hasValue});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction::get_InstructionName
// Il2CppName: get_InstructionName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction::*)()>(&System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction::get_InstructionName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction*), "get_InstructionName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction::get_ConsumedStack
// Il2CppName: get_ConsumedStack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction::*)()>(&System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction::get_ConsumedStack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction*), "get_ConsumedStack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction::get_ProducedStack
// Il2CppName: get_ProducedStack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction::*)()>(&System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction::get_ProducedStack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction*), "get_ProducedStack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction::Run
// Il2CppName: Run
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction::Run)> {
  static const MethodInfo* get() {
    static auto* frame = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions.Interpreter", "InterpretedFrame")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LeaveExceptionHandlerInstruction*), "Run", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frame});
  }
};
