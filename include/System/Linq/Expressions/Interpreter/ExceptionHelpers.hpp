// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: TargetInvocationException
  class TargetInvocationException;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Forward declaring type: ExceptionHelpers
  class ExceptionHelpers;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::ExceptionHelpers);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::ExceptionHelpers*, "System.Linq.Expressions.Interpreter", "ExceptionHelpers");
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.Interpreter.ExceptionHelpers
  // [TokenAttribute] Offset: FFFFFFFF
  class ExceptionHelpers : public ::Il2CppObject {
    public:
    // static public System.Void UnwrapAndRethrow(System.Reflection.TargetInvocationException exception)
    // Offset: 0x4BCB2A0
    static void UnwrapAndRethrow(::System::Reflection::TargetInvocationException* exception);
  }; // System.Linq.Expressions.Interpreter.ExceptionHelpers
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::ExceptionHelpers::UnwrapAndRethrow
// Il2CppName: UnwrapAndRethrow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Reflection::TargetInvocationException*)>(&System::Linq::Expressions::Interpreter::ExceptionHelpers::UnwrapAndRethrow)> {
  static const MethodInfo* get() {
    static auto* exception = &::il2cpp_utils::GetClassFromName("System.Reflection", "TargetInvocationException")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::ExceptionHelpers*), "UnwrapAndRethrow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exception});
  }
};
