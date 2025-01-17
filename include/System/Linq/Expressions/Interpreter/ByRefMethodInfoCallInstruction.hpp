// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Expressions.Interpreter.MethodInfoCallInstruction
#include "System/Linq/Expressions/Interpreter/MethodInfoCallInstruction.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Linq::Expressions::Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Forward declaring type: ByRefUpdater
  class ByRefUpdater;
  // Forward declaring type: InterpretedFrame
  class InterpretedFrame;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Forward declaring type: ByRefMethodInfoCallInstruction
  class ByRefMethodInfoCallInstruction;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::ByRefMethodInfoCallInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::ByRefMethodInfoCallInstruction*, "System.Linq.Expressions.Interpreter", "ByRefMethodInfoCallInstruction");
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.Interpreter.ByRefMethodInfoCallInstruction
  // [TokenAttribute] Offset: FFFFFFFF
  class ByRefMethodInfoCallInstruction : public ::System::Linq::Expressions::Interpreter::MethodInfoCallInstruction {
    public:
    // Writing base type padding for base size: 0x1C to desired offset: 0x20
    char ___base_padding[0x4] = {};
    public:
    // private readonly System.Linq.Expressions.Interpreter.ByRefUpdater[] _byrefArgs
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*> byrefArgs;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*>) == 0x8);
    public:
    // Creating conversion operator: operator ::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*>
    constexpr operator ::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*>() const noexcept {
      return byrefArgs;
    }
    // Get instance field reference: private readonly System.Linq.Expressions.Interpreter.ByRefUpdater[] _byrefArgs
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*>& dyn__byrefArgs();
    // System.Void .ctor(System.Reflection.MethodInfo target, System.Int32 argumentCount, System.Linq.Expressions.Interpreter.ByRefUpdater[] byrefArgs)
    // Offset: 0x4BA73C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ByRefMethodInfoCallInstruction* New_ctor(::System::Reflection::MethodInfo* target, int argumentCount, ::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*> byrefArgs) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::ByRefMethodInfoCallInstruction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ByRefMethodInfoCallInstruction*, creationType>(target, argumentCount, byrefArgs)));
    }
    // public override System.Int32 get_ProducedStack()
    // Offset: 0x4BA741C
    // Implemented from: System.Linq.Expressions.Interpreter.MethodInfoCallInstruction
    // Base method: System.Int32 MethodInfoCallInstruction::get_ProducedStack()
    int get_ProducedStack();
    // public override System.Int32 Run(System.Linq.Expressions.Interpreter.InterpretedFrame frame)
    // Offset: 0x4BA74CC
    // Implemented from: System.Linq.Expressions.Interpreter.MethodInfoCallInstruction
    // Base method: System.Int32 MethodInfoCallInstruction::Run(System.Linq.Expressions.Interpreter.InterpretedFrame frame)
    int Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);
  }; // System.Linq.Expressions.Interpreter.ByRefMethodInfoCallInstruction
  #pragma pack(pop)
  static check_size<sizeof(ByRefMethodInfoCallInstruction), 32 + sizeof(::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*>)> __System_Linq_Expressions_Interpreter_ByRefMethodInfoCallInstructionSizeCheck;
  static_assert(sizeof(ByRefMethodInfoCallInstruction) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::ByRefMethodInfoCallInstruction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::ByRefMethodInfoCallInstruction::get_ProducedStack
// Il2CppName: get_ProducedStack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::ByRefMethodInfoCallInstruction::*)()>(&System::Linq::Expressions::Interpreter::ByRefMethodInfoCallInstruction::get_ProducedStack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::ByRefMethodInfoCallInstruction*), "get_ProducedStack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::ByRefMethodInfoCallInstruction::Run
// Il2CppName: Run
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::ByRefMethodInfoCallInstruction::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&System::Linq::Expressions::Interpreter::ByRefMethodInfoCallInstruction::Run)> {
  static const MethodInfo* get() {
    static auto* frame = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions.Interpreter", "InterpretedFrame")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::ByRefMethodInfoCallInstruction*), "Run", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frame});
  }
};
