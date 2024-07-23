// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Expressions.Interpreter.ByRefUpdater
#include "System/Linq/Expressions/Interpreter/ByRefUpdater.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: System.Linq.Expressions.Interpreter.LocalDefinition
#include "System/Linq/Expressions/Interpreter/LocalDefinition.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: FieldInfo
  class FieldInfo;
}
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
  // Forward declaring type: FieldByRefUpdater
  class FieldByRefUpdater;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::FieldByRefUpdater);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::FieldByRefUpdater*, "System.Linq.Expressions.Interpreter", "FieldByRefUpdater");
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Linq.Expressions.Interpreter.FieldByRefUpdater
  // [TokenAttribute] Offset: FFFFFFFF
  class FieldByRefUpdater : public ::System::Linq::Expressions::Interpreter::ByRefUpdater {
    public:
    // Writing base type padding for base size: 0x14 to desired offset: 0x18
    char ___base_padding[0x4] = {};
    public:
    // private readonly System.Nullable`1<System.Linq.Expressions.Interpreter.LocalDefinition> _object
    // Size: 0xFFFFFFFF
    // Offset: 0x18
    ::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition> object;
    // private readonly System.Reflection.FieldInfo _field
    // Size: 0x8
    // Offset: 0x30
    ::System::Reflection::FieldInfo* field;
    // Field size check
    static_assert(sizeof(::System::Reflection::FieldInfo*) == 0x8);
    public:
    // Deleting conversion operator: operator int
    constexpr operator int() const noexcept = delete;
    // Get instance field reference: private readonly System.Nullable`1<System.Linq.Expressions.Interpreter.LocalDefinition> _object
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition>& dyn__object();
    // Get instance field reference: private readonly System.Reflection.FieldInfo _field
    [[deprecated("Use field access instead!")]] ::System::Reflection::FieldInfo*& dyn__field();
    // public System.Void .ctor(System.Nullable`1<System.Linq.Expressions.Interpreter.LocalDefinition> obj, System.Reflection.FieldInfo field, System.Int32 argumentIndex)
    // Offset: 0x4BCAF5C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FieldByRefUpdater* New_ctor(::System::Nullable_1<::System::Linq::Expressions::Interpreter::LocalDefinition> obj, ::System::Reflection::FieldInfo* field, int argumentIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::FieldByRefUpdater::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FieldByRefUpdater*, creationType>(obj, field, argumentIndex)));
    }
    // public override System.Void Update(System.Linq.Expressions.Interpreter.InterpretedFrame frame, System.Object value)
    // Offset: 0x4BCAFBC
    // Implemented from: System.Linq.Expressions.Interpreter.ByRefUpdater
    // Base method: System.Void ByRefUpdater::Update(System.Linq.Expressions.Interpreter.InterpretedFrame frame, System.Object value)
    void Update(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame, ::Il2CppObject* value);
    // public override System.Void UndefineTemps(System.Linq.Expressions.Interpreter.InstructionList instructions, System.Linq.Expressions.Interpreter.LocalVariables locals)
    // Offset: 0x4BCB060
    // Implemented from: System.Linq.Expressions.Interpreter.ByRefUpdater
    // Base method: System.Void ByRefUpdater::UndefineTemps(System.Linq.Expressions.Interpreter.InstructionList instructions, System.Linq.Expressions.Interpreter.LocalVariables locals)
    void UndefineTemps(::System::Linq::Expressions::Interpreter::InstructionList* instructions, ::System::Linq::Expressions::Interpreter::LocalVariables* locals);
  }; // System.Linq.Expressions.Interpreter.FieldByRefUpdater
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::FieldByRefUpdater::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::FieldByRefUpdater::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::Expressions::Interpreter::FieldByRefUpdater::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::Il2CppObject*)>(&System::Linq::Expressions::Interpreter::FieldByRefUpdater::Update)> {
  static const MethodInfo* get() {
    static auto* frame = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions.Interpreter", "InterpretedFrame")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::FieldByRefUpdater*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frame, value});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::FieldByRefUpdater::UndefineTemps
// Il2CppName: UndefineTemps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::Expressions::Interpreter::FieldByRefUpdater::*)(::System::Linq::Expressions::Interpreter::InstructionList*, ::System::Linq::Expressions::Interpreter::LocalVariables*)>(&System::Linq::Expressions::Interpreter::FieldByRefUpdater::UndefineTemps)> {
  static const MethodInfo* get() {
    static auto* instructions = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions.Interpreter", "InstructionList")->byval_arg;
    static auto* locals = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions.Interpreter", "LocalVariables")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::FieldByRefUpdater*), "UndefineTemps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instructions, locals});
  }
};
