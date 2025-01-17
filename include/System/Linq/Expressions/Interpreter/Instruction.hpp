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
  // Forward declaring type: Instruction
  class Instruction;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::Instruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::Instruction*, "System.Linq.Expressions.Interpreter", "Instruction");
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.Interpreter.Instruction
  // [TokenAttribute] Offset: FFFFFFFF
  class Instruction : public ::Il2CppObject {
    public:
    // public System.Int32 get_ConsumedStack()
    // Offset: 0x4BB2530
    int get_ConsumedStack();
    // public System.Int32 get_ProducedStack()
    // Offset: 0x4BB2538
    int get_ProducedStack();
    // public System.Int32 get_ConsumedContinuations()
    // Offset: 0x4BB2540
    int get_ConsumedContinuations();
    // public System.Int32 get_ProducedContinuations()
    // Offset: 0x4BB2548
    int get_ProducedContinuations();
    // public System.Int32 get_StackBalance()
    // Offset: 0x4BB2550
    int get_StackBalance();
    // public System.Int32 get_ContinuationsBalance()
    // Offset: 0x4BB258C
    int get_ContinuationsBalance();
    // public System.Int32 Run(System.Linq.Expressions.Interpreter.InterpretedFrame frame)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);
    // public System.String get_InstructionName()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_InstructionName();
    // public System.String ToDebugString(System.Int32 instructionIndex, System.Object cookie, System.Func`2<System.Int32,System.Int32> labelIndexer, System.Collections.Generic.IReadOnlyList`1<System.Object> objects)
    // Offset: 0x4BB2620
    ::StringW ToDebugString(int instructionIndex, ::Il2CppObject* cookie, ::System::Func_2<int, int>* labelIndexer, ::System::Collections::Generic::IReadOnlyList_1<::Il2CppObject*>* objects);
    // static protected System.Void NullCheck(System.Object o)
    // Offset: 0x4BAEC18
    static void NullCheck(::Il2CppObject* o);
    // protected System.Void .ctor()
    // Offset: 0x4BAE9D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Instruction* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::Instruction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Instruction*, creationType>()));
    }
    // public override System.String ToString()
    // Offset: 0x4BB25C8
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.Linq.Expressions.Interpreter.Instruction
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::Instruction::get_ConsumedStack
// Il2CppName: get_ConsumedStack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::Instruction::*)()>(&System::Linq::Expressions::Interpreter::Instruction::get_ConsumedStack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::Instruction*), "get_ConsumedStack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::Instruction::get_ProducedStack
// Il2CppName: get_ProducedStack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::Instruction::*)()>(&System::Linq::Expressions::Interpreter::Instruction::get_ProducedStack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::Instruction*), "get_ProducedStack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::Instruction::get_ConsumedContinuations
// Il2CppName: get_ConsumedContinuations
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::Instruction::*)()>(&System::Linq::Expressions::Interpreter::Instruction::get_ConsumedContinuations)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::Instruction*), "get_ConsumedContinuations", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::Instruction::get_ProducedContinuations
// Il2CppName: get_ProducedContinuations
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::Instruction::*)()>(&System::Linq::Expressions::Interpreter::Instruction::get_ProducedContinuations)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::Instruction*), "get_ProducedContinuations", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::Instruction::get_StackBalance
// Il2CppName: get_StackBalance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::Instruction::*)()>(&System::Linq::Expressions::Interpreter::Instruction::get_StackBalance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::Instruction*), "get_StackBalance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::Instruction::get_ContinuationsBalance
// Il2CppName: get_ContinuationsBalance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::Instruction::*)()>(&System::Linq::Expressions::Interpreter::Instruction::get_ContinuationsBalance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::Instruction*), "get_ContinuationsBalance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::Instruction::Run
// Il2CppName: Run
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Interpreter::Instruction::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&System::Linq::Expressions::Interpreter::Instruction::Run)> {
  static const MethodInfo* get() {
    static auto* frame = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions.Interpreter", "InterpretedFrame")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::Instruction*), "Run", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frame});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::Instruction::get_InstructionName
// Il2CppName: get_InstructionName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Linq::Expressions::Interpreter::Instruction::*)()>(&System::Linq::Expressions::Interpreter::Instruction::get_InstructionName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::Instruction*), "get_InstructionName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::Instruction::ToDebugString
// Il2CppName: ToDebugString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Linq::Expressions::Interpreter::Instruction::*)(int, ::Il2CppObject*, ::System::Func_2<int, int>*, ::System::Collections::Generic::IReadOnlyList_1<::Il2CppObject*>*)>(&System::Linq::Expressions::Interpreter::Instruction::ToDebugString)> {
  static const MethodInfo* get() {
    static auto* instructionIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cookie = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* labelIndexer = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    static auto* objects = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IReadOnlyList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::Instruction*), "ToDebugString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instructionIndex, cookie, labelIndexer, objects});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::Instruction::NullCheck
// Il2CppName: NullCheck
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&System::Linq::Expressions::Interpreter::Instruction::NullCheck)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::Instruction*), "NullCheck", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::Instruction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::Instruction::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Linq::Expressions::Interpreter::Instruction::*)()>(&System::Linq::Expressions::Interpreter::Instruction::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::Instruction*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
