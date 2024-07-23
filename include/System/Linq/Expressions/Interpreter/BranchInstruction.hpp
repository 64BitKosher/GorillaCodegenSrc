// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Expressions.Interpreter.OffsetInstruction
#include "System/Linq/Expressions/Interpreter/OffsetInstruction.hpp"
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
  // Forward declaring type: BranchInstruction
  class BranchInstruction;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::BranchInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::BranchInstruction*, "System.Linq.Expressions.Interpreter", "BranchInstruction");
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Size: 0x16
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.Interpreter.BranchInstruction
  // [TokenAttribute] Offset: FFFFFFFF
  class BranchInstruction : public ::System::Linq::Expressions::Interpreter::OffsetInstruction {
    public:
    public:
    // readonly System.Boolean _hasResult
    // Size: 0x1
    // Offset: 0x14
    bool hasResult;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // readonly System.Boolean _hasValue
    // Size: 0x1
    // Offset: 0x15
    bool hasValue;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator int
    constexpr operator int() const noexcept = delete;
    // Get static field: static private System.Linq.Expressions.Interpreter.Instruction[][][] s_caches
    static ::ArrayW<::ArrayW<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>>> _get_s_caches();
    // Set static field: static private System.Linq.Expressions.Interpreter.Instruction[][][] s_caches
    static void _set_s_caches(::ArrayW<::ArrayW<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>>> value);
    // Get instance field reference: readonly System.Boolean _hasResult
    [[deprecated("Use field access instead!")]] bool& dyn__hasResult();
    // Get instance field reference: readonly System.Boolean _hasValue
    [[deprecated("Use field access instead!")]] bool& dyn__hasValue();
    // public System.Void .ctor(System.Boolean hasResult, System.Boolean hasValue)
    // Offset: 0x4BA8258
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BranchInstruction* New_ctor(bool hasResult, bool hasValue) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::BranchInstruction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BranchInstruction*, creationType>(hasResult, hasValue)));
    }
    // public override System.Linq.Expressions.Interpreter.Instruction[] get_Cache()
    // Offset: 0x4BA7FDC
    // Implemented from: System.Linq.Expressions.Interpreter.OffsetInstruction
    // Base method: System.Linq.Expressions.Interpreter.Instruction[] OffsetInstruction::get_Cache()
    ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*> get_Cache();
    // System.Void .ctor()
    // Offset: 0x4BA8234
    // Implemented from: System.Linq.Expressions.Interpreter.OffsetInstruction
    // Base method: System.Void OffsetInstruction::.ctor()
    // Base method: System.Void Instruction::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BranchInstruction* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::BranchInstruction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BranchInstruction*, creationType>()));
    }
    // public override System.String get_InstructionName()
    // Offset: 0x4BA8290
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.String Instruction::get_InstructionName()
    ::StringW get_InstructionName();
    // public override System.Int32 get_ConsumedStack()
    // Offset: 0x4BA82D0
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.Int32 Instruction::get_ConsumedStack()
    int get_ConsumedStack();
    // public override System.Int32 get_ProducedStack()
    // Offset: 0x4BA82D8
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.Int32 Instruction::get_ProducedStack()
    int get_ProducedStack();
    // public override System.Int32 Run(System.Linq.Expressions.Interpreter.InterpretedFrame frame)
    // Offset: 0x4BA82E0
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.Int32 Instruction::Run(System.Linq.Expressions.Interpreter.InterpretedFrame frame)
    int Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);
  }; // System.Linq.Expressions.Interpreter.BranchInstruction
  #pragma pack(pop)
  static check_size<sizeof(BranchInstruction), 21 + sizeof(bool)> __System_Linq_Expressions_Interpreter_BranchInstructionSizeCheck;
  static_assert(sizeof(BranchInstruction) == 0x16);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::BranchInstruction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::BranchInstruction::get_Cache
// Il2CppName: get_Cache
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*> (System::Linq::Expressions::Interpreter::BranchInstruction::*)()>(&System::Linq::Expressions::Interpreter::BranchInstruction::get_Cache)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::BranchInstruction*), "get_Cache", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::BranchInstruction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::BranchInstruction::get_InstructionName
// Il2CppName: get_InstructionName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Linq::Expressions::Interpreter::BranchInstruction::*)()>(&System::Linq::Expressions::Interpreter::BranchInstruction::get_InstructionName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::BranchInstruction*), "get_InstructionName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::BranchInstruction::get_ConsumedStack
// Il2CppName: get_ConsumedStack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::BranchInstruction::*)()>(&System::Linq::Expressions::Interpreter::BranchInstruction::get_ConsumedStack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::BranchInstruction*), "get_ConsumedStack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::BranchInstruction::get_ProducedStack
// Il2CppName: get_ProducedStack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::BranchInstruction::*)()>(&System::Linq::Expressions::Interpreter::BranchInstruction::get_ProducedStack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::BranchInstruction*), "get_ProducedStack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::BranchInstruction::Run
// Il2CppName: Run
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::BranchInstruction::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&System::Linq::Expressions::Interpreter::BranchInstruction::Run)> {
  static const MethodInfo* get() {
    static auto* frame = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions.Interpreter", "InterpretedFrame")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::BranchInstruction*), "Run", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frame});
  }
};
