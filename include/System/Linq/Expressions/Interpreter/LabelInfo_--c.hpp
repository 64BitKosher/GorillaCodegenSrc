// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Expressions.Interpreter.LabelInfo
#include "System/Linq/Expressions/Interpreter/LabelInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: System::Linq::Expressions::Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Forward declaring type: LabelScopeInfo
  class LabelScopeInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::LabelInfo::$$c);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::LabelInfo::$$c*, "System.Linq.Expressions.Interpreter", "LabelInfo/<>c");
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.Interpreter.LabelInfo/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class LabelInfo::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Linq.Expressions.Interpreter.LabelInfo/<>c <>9
    static ::System::Linq::Expressions::Interpreter::LabelInfo::$$c* _get_$$9();
    // Set static field: static public readonly System.Linq.Expressions.Interpreter.LabelInfo/<>c <>9
    static void _set_$$9(::System::Linq::Expressions::Interpreter::LabelInfo::$$c* value);
    // Get static field: static public System.Func`2<System.Linq.Expressions.Interpreter.LabelScopeInfo,System.Linq.Expressions.Interpreter.LabelScopeInfo> <>9__9_0
    static ::System::Func_2<::System::Linq::Expressions::Interpreter::LabelScopeInfo*, ::System::Linq::Expressions::Interpreter::LabelScopeInfo*>* _get_$$9__9_0();
    // Set static field: static public System.Func`2<System.Linq.Expressions.Interpreter.LabelScopeInfo,System.Linq.Expressions.Interpreter.LabelScopeInfo> <>9__9_0
    static void _set_$$9__9_0(::System::Func_2<::System::Linq::Expressions::Interpreter::LabelScopeInfo*, ::System::Linq::Expressions::Interpreter::LabelScopeInfo*>* value);
    // static private System.Void .cctor()
    // Offset: 0x4BBA748
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x4BBA7B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LabelInfo::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::LabelInfo::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LabelInfo::$$c*, creationType>()));
    }
    // System.Linq.Expressions.Interpreter.LabelScopeInfo <ValidateJump>b__9_0(System.Linq.Expressions.Interpreter.LabelScopeInfo b)
    // Offset: 0x4BBA7B8
    ::System::Linq::Expressions::Interpreter::LabelScopeInfo* $ValidateJump$b__9_0(::System::Linq::Expressions::Interpreter::LabelScopeInfo* b);
  }; // System.Linq.Expressions.Interpreter.LabelInfo/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LabelInfo::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Linq::Expressions::Interpreter::LabelInfo::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LabelInfo::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LabelInfo::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LabelInfo::$$c::$ValidateJump$b__9_0
// Il2CppName: <ValidateJump>b__9_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::LabelScopeInfo* (System::Linq::Expressions::Interpreter::LabelInfo::$$c::*)(::System::Linq::Expressions::Interpreter::LabelScopeInfo*)>(&System::Linq::Expressions::Interpreter::LabelInfo::$$c::$ValidateJump$b__9_0)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions.Interpreter", "LabelScopeInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LabelInfo::$$c*), "<ValidateJump>b__9_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
