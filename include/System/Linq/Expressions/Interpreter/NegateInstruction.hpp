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
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Forward declaring type: NegateInstruction
  class NegateInstruction;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::NegateInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::NegateInstruction*, "System.Linq.Expressions.Interpreter", "NegateInstruction");
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.Interpreter.NegateInstruction
  // [TokenAttribute] Offset: FFFFFFFF
  class NegateInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
    public:
    // Nested type: ::System::Linq::Expressions::Interpreter::NegateInstruction::NegateInt16
    class NegateInt16;
    // Nested type: ::System::Linq::Expressions::Interpreter::NegateInstruction::NegateInt32
    class NegateInt32;
    // Nested type: ::System::Linq::Expressions::Interpreter::NegateInstruction::NegateInt64
    class NegateInt64;
    // Nested type: ::System::Linq::Expressions::Interpreter::NegateInstruction::NegateSingle
    class NegateSingle;
    // Nested type: ::System::Linq::Expressions::Interpreter::NegateInstruction::NegateDouble
    class NegateDouble;
    // Get static field: static private System.Linq.Expressions.Interpreter.Instruction s_Int16
    static ::System::Linq::Expressions::Interpreter::Instruction* _get_s_Int16();
    // Set static field: static private System.Linq.Expressions.Interpreter.Instruction s_Int16
    static void _set_s_Int16(::System::Linq::Expressions::Interpreter::Instruction* value);
    // Get static field: static private System.Linq.Expressions.Interpreter.Instruction s_Int32
    static ::System::Linq::Expressions::Interpreter::Instruction* _get_s_Int32();
    // Set static field: static private System.Linq.Expressions.Interpreter.Instruction s_Int32
    static void _set_s_Int32(::System::Linq::Expressions::Interpreter::Instruction* value);
    // Get static field: static private System.Linq.Expressions.Interpreter.Instruction s_Int64
    static ::System::Linq::Expressions::Interpreter::Instruction* _get_s_Int64();
    // Set static field: static private System.Linq.Expressions.Interpreter.Instruction s_Int64
    static void _set_s_Int64(::System::Linq::Expressions::Interpreter::Instruction* value);
    // Get static field: static private System.Linq.Expressions.Interpreter.Instruction s_Single
    static ::System::Linq::Expressions::Interpreter::Instruction* _get_s_Single();
    // Set static field: static private System.Linq.Expressions.Interpreter.Instruction s_Single
    static void _set_s_Single(::System::Linq::Expressions::Interpreter::Instruction* value);
    // Get static field: static private System.Linq.Expressions.Interpreter.Instruction s_Double
    static ::System::Linq::Expressions::Interpreter::Instruction* _get_s_Double();
    // Set static field: static private System.Linq.Expressions.Interpreter.Instruction s_Double
    static void _set_s_Double(::System::Linq::Expressions::Interpreter::Instruction* value);
    // static public System.Linq.Expressions.Interpreter.Instruction Create(System.Type type)
    // Offset: 0x4BD3B08
    static ::System::Linq::Expressions::Interpreter::Instruction* Create(::System::Type* type);
    // public override System.Int32 get_ConsumedStack()
    // Offset: 0x4BD3AB0
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.Int32 Instruction::get_ConsumedStack()
    int get_ConsumedStack();
    // public override System.Int32 get_ProducedStack()
    // Offset: 0x4BD3AB8
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.Int32 Instruction::get_ProducedStack()
    int get_ProducedStack();
    // public override System.String get_InstructionName()
    // Offset: 0x4BD3AC0
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.String Instruction::get_InstructionName()
    ::StringW get_InstructionName();
    // private System.Void .ctor()
    // Offset: 0x4BD3B00
    // Implemented from: System.Linq.Expressions.Interpreter.Instruction
    // Base method: System.Void Instruction::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NegateInstruction* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::NegateInstruction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NegateInstruction*, creationType>()));
    }
  }; // System.Linq.Expressions.Interpreter.NegateInstruction
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::NegateInstruction::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::Instruction* (*)(::System::Type*)>(&System::Linq::Expressions::Interpreter::NegateInstruction::Create)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::NegateInstruction*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::NegateInstruction::get_ConsumedStack
// Il2CppName: get_ConsumedStack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::NegateInstruction::*)()>(&System::Linq::Expressions::Interpreter::NegateInstruction::get_ConsumedStack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::NegateInstruction*), "get_ConsumedStack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::NegateInstruction::get_ProducedStack
// Il2CppName: get_ProducedStack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::NegateInstruction::*)()>(&System::Linq::Expressions::Interpreter::NegateInstruction::get_ProducedStack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::NegateInstruction*), "get_ProducedStack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::NegateInstruction::get_InstructionName
// Il2CppName: get_InstructionName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Linq::Expressions::Interpreter::NegateInstruction::*)()>(&System::Linq::Expressions::Interpreter::NegateInstruction::get_InstructionName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::NegateInstruction*), "get_InstructionName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::NegateInstruction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
