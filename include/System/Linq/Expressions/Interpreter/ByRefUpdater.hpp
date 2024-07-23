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
  // Forward declaring type: InterpretedFrame
  class InterpretedFrame;
  // Forward declaring type: InstructionList
  class InstructionList;
  // Forward declaring type: LocalVariables
  class LocalVariables;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Forward declaring type: ByRefUpdater
  class ByRefUpdater;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::ByRefUpdater);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::ByRefUpdater*, "System.Linq.Expressions.Interpreter", "ByRefUpdater");
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.Interpreter.ByRefUpdater
  // [TokenAttribute] Offset: FFFFFFFF
  class ByRefUpdater : public ::Il2CppObject {
    public:
    public:
    // public readonly System.Int32 ArgumentIndex
    // Size: 0x4
    // Offset: 0x10
    int ArgumentIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return ArgumentIndex;
    }
    // Get instance field reference: public readonly System.Int32 ArgumentIndex
    [[deprecated("Use field access instead!")]] int& dyn_ArgumentIndex();
    // public System.Void .ctor(System.Int32 argumentIndex)
    // Offset: 0x4BCAA30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ByRefUpdater* New_ctor(int argumentIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::ByRefUpdater::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ByRefUpdater*, creationType>(argumentIndex)));
    }
    // public System.Void Update(System.Linq.Expressions.Interpreter.InterpretedFrame frame, System.Object value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Update(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame, ::Il2CppObject* value);
    // public System.Void UndefineTemps(System.Linq.Expressions.Interpreter.InstructionList instructions, System.Linq.Expressions.Interpreter.LocalVariables locals)
    // Offset: 0x4BCAA58
    void UndefineTemps(::System::Linq::Expressions::Interpreter::InstructionList* instructions, ::System::Linq::Expressions::Interpreter::LocalVariables* locals);
  }; // System.Linq.Expressions.Interpreter.ByRefUpdater
  #pragma pack(pop)
  static check_size<sizeof(ByRefUpdater), 16 + sizeof(int)> __System_Linq_Expressions_Interpreter_ByRefUpdaterSizeCheck;
  static_assert(sizeof(ByRefUpdater) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::ByRefUpdater::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::ByRefUpdater::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::Expressions::Interpreter::ByRefUpdater::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::Il2CppObject*)>(&System::Linq::Expressions::Interpreter::ByRefUpdater::Update)> {
  static const MethodInfo* get() {
    static auto* frame = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions.Interpreter", "InterpretedFrame")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::ByRefUpdater*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frame, value});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::ByRefUpdater::UndefineTemps
// Il2CppName: UndefineTemps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::Expressions::Interpreter::ByRefUpdater::*)(::System::Linq::Expressions::Interpreter::InstructionList*, ::System::Linq::Expressions::Interpreter::LocalVariables*)>(&System::Linq::Expressions::Interpreter::ByRefUpdater::UndefineTemps)> {
  static const MethodInfo* get() {
    static auto* instructions = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions.Interpreter", "InstructionList")->byval_arg;
    static auto* locals = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions.Interpreter", "LocalVariables")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::ByRefUpdater*), "UndefineTemps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instructions, locals});
  }
};
