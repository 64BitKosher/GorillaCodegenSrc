// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Expressions.Interpreter.LocalAccessInstruction
#include "System/Linq/Expressions/Interpreter/LocalAccessInstruction.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Linq::Expressions::Interpreter
namespace System::Linq::Expressions::Interpreter {
}
// Completed forward declares
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Forward declaring type: InitializeLocalInstruction
  class InitializeLocalInstruction;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::InitializeLocalInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::InitializeLocalInstruction*, "System.Linq.Expressions.Interpreter", "InitializeLocalInstruction");
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.Interpreter.InitializeLocalInstruction
  // [TokenAttribute] Offset: FFFFFFFF
  class InitializeLocalInstruction : public ::System::Linq::Expressions::Interpreter::LocalAccessInstruction {
    public:
    // Nested type: ::System::Linq::Expressions::Interpreter::InitializeLocalInstruction::Reference
    class Reference;
    // Nested type: ::System::Linq::Expressions::Interpreter::InitializeLocalInstruction::ImmutableValue
    class ImmutableValue;
    // Nested type: ::System::Linq::Expressions::Interpreter::InitializeLocalInstruction::ImmutableBox
    class ImmutableBox;
    // Nested type: ::System::Linq::Expressions::Interpreter::InitializeLocalInstruction::ImmutableRefBox
    class ImmutableRefBox;
    // Nested type: ::System::Linq::Expressions::Interpreter::InitializeLocalInstruction::ParameterBox
    class ParameterBox;
    // Nested type: ::System::Linq::Expressions::Interpreter::InitializeLocalInstruction::Parameter
    class Parameter;
    // Nested type: ::System::Linq::Expressions::Interpreter::InitializeLocalInstruction::MutableValue
    class MutableValue;
    // Nested type: ::System::Linq::Expressions::Interpreter::InitializeLocalInstruction::MutableBox
    class MutableBox;
    // System.Void .ctor(System.Int32 index)
    // Offset: 0x4BCF4C8
    // Implemented from: System.Linq.Expressions.Interpreter.LocalAccessInstruction
    // Base method: System.Void LocalAccessInstruction::.ctor(System.Int32 index)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InitializeLocalInstruction* New_ctor(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::InitializeLocalInstruction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InitializeLocalInstruction*, creationType>(index)));
    }
  }; // System.Linq.Expressions.Interpreter.InitializeLocalInstruction
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::InitializeLocalInstruction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!