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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Linq::Expressions::Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Forward declaring type: ExceptionFilter
  class ExceptionFilter;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Forward declaring type: ExceptionHandler
  class ExceptionHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::ExceptionHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::ExceptionHandler*, "System.Linq.Expressions.Interpreter", "ExceptionHandler");
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.Interpreter.ExceptionHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class ExceptionHandler : public ::Il2CppObject {
    public:
    public:
    // private readonly System.Type _exceptionType
    // Size: 0x8
    // Offset: 0x10
    ::System::Type* exceptionType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // public readonly System.Int32 LabelIndex
    // Size: 0x4
    // Offset: 0x18
    int LabelIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 HandlerStartIndex
    // Size: 0x4
    // Offset: 0x1C
    int HandlerStartIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 HandlerEndIndex
    // Size: 0x4
    // Offset: 0x20
    int HandlerEndIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: HandlerEndIndex and: Filter
    char __padding3[0x4] = {};
    // public readonly System.Linq.Expressions.Interpreter.ExceptionFilter Filter
    // Size: 0x8
    // Offset: 0x28
    ::System::Linq::Expressions::Interpreter::ExceptionFilter* Filter;
    // Field size check
    static_assert(sizeof(::System::Linq::Expressions::Interpreter::ExceptionFilter*) == 0x8);
    public:
    // Get instance field reference: private readonly System.Type _exceptionType
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn__exceptionType();
    // Get instance field reference: public readonly System.Int32 LabelIndex
    [[deprecated("Use field access instead!")]] int& dyn_LabelIndex();
    // Get instance field reference: public readonly System.Int32 HandlerStartIndex
    [[deprecated("Use field access instead!")]] int& dyn_HandlerStartIndex();
    // Get instance field reference: public readonly System.Int32 HandlerEndIndex
    [[deprecated("Use field access instead!")]] int& dyn_HandlerEndIndex();
    // Get instance field reference: public readonly System.Linq.Expressions.Interpreter.ExceptionFilter Filter
    [[deprecated("Use field access instead!")]] ::System::Linq::Expressions::Interpreter::ExceptionFilter*& dyn_Filter();
    // System.Void .ctor(System.Int32 labelIndex, System.Int32 handlerStartIndex, System.Int32 handlerEndIndex, System.Type exceptionType, System.Linq.Expressions.Interpreter.ExceptionFilter filter)
    // Offset: 0x4BBC904
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExceptionHandler* New_ctor(int labelIndex, int handlerStartIndex, int handlerEndIndex, ::System::Type* exceptionType, ::System::Linq::Expressions::Interpreter::ExceptionFilter* filter) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::ExceptionHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExceptionHandler*, creationType>(labelIndex, handlerStartIndex, handlerEndIndex, exceptionType, filter)));
    }
    // public System.Boolean Matches(System.Type exceptionType)
    // Offset: 0x4BBC96C
    bool Matches(::System::Type* exceptionType);
    // public override System.String ToString()
    // Offset: 0x4BBC990
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.Linq.Expressions.Interpreter.ExceptionHandler
  #pragma pack(pop)
  static check_size<sizeof(ExceptionHandler), 40 + sizeof(::System::Linq::Expressions::Interpreter::ExceptionFilter*)> __System_Linq_Expressions_Interpreter_ExceptionHandlerSizeCheck;
  static_assert(sizeof(ExceptionHandler) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::ExceptionHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::ExceptionHandler::Matches
// Il2CppName: Matches
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Linq::Expressions::Interpreter::ExceptionHandler::*)(::System::Type*)>(&System::Linq::Expressions::Interpreter::ExceptionHandler::Matches)> {
  static const MethodInfo* get() {
    static auto* exceptionType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::ExceptionHandler*), "Matches", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exceptionType});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::ExceptionHandler::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Linq::Expressions::Interpreter::ExceptionHandler::*)()>(&System::Linq::Expressions::Interpreter::ExceptionHandler::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::ExceptionHandler*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
