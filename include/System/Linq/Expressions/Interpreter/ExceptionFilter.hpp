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
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Forward declaring type: ExceptionFilter
  class ExceptionFilter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::ExceptionFilter);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::ExceptionFilter*, "System.Linq.Expressions.Interpreter", "ExceptionFilter");
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.Interpreter.ExceptionFilter
  // [TokenAttribute] Offset: FFFFFFFF
  class ExceptionFilter : public ::Il2CppObject {
    public:
    public:
    // public readonly System.Int32 LabelIndex
    // Size: 0x4
    // Offset: 0x10
    int LabelIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 StartIndex
    // Size: 0x4
    // Offset: 0x14
    int StartIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 EndIndex
    // Size: 0x4
    // Offset: 0x18
    int EndIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public readonly System.Int32 LabelIndex
    [[deprecated("Use field access instead!")]] int& dyn_LabelIndex();
    // Get instance field reference: public readonly System.Int32 StartIndex
    [[deprecated("Use field access instead!")]] int& dyn_StartIndex();
    // Get instance field reference: public readonly System.Int32 EndIndex
    [[deprecated("Use field access instead!")]] int& dyn_EndIndex();
    // System.Void .ctor(System.Int32 labelIndex, System.Int32 start, System.Int32 end)
    // Offset: 0x4BBC8C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExceptionFilter* New_ctor(int labelIndex, int start, int end) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::ExceptionFilter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExceptionFilter*, creationType>(labelIndex, start, end)));
    }
  }; // System.Linq.Expressions.Interpreter.ExceptionFilter
  #pragma pack(pop)
  static check_size<sizeof(ExceptionFilter), 24 + sizeof(int)> __System_Linq_Expressions_Interpreter_ExceptionFilterSizeCheck;
  static_assert(sizeof(ExceptionFilter) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::ExceptionFilter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
