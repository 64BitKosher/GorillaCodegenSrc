// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Data.FunctionId
#include "System/Data/FunctionId.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Data
namespace System::Data {
  // Forward declaring type: Function
  class Function;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Data::Function);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Function*, "System.Data", "Function");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.Function
  // [TokenAttribute] Offset: FFFFFFFF
  class Function : public ::Il2CppObject {
    public:
    public:
    // readonly System.String _name
    // Size: 0x8
    // Offset: 0x10
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // readonly System.Data.FunctionId _id
    // Size: 0x4
    // Offset: 0x18
    ::System::Data::FunctionId id;
    // Field size check
    static_assert(sizeof(::System::Data::FunctionId) == 0x4);
    // Padding between fields: id and: result
    char __padding1[0x4] = {};
    // readonly System.Type _result
    // Size: 0x8
    // Offset: 0x20
    ::System::Type* result;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // readonly System.Boolean _isValidateArguments
    // Size: 0x1
    // Offset: 0x28
    bool isValidateArguments;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // readonly System.Boolean _isVariantArgumentList
    // Size: 0x1
    // Offset: 0x29
    bool isVariantArgumentList;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isVariantArgumentList and: argumentCount
    char __padding4[0x2] = {};
    // readonly System.Int32 _argumentCount
    // Size: 0x4
    // Offset: 0x2C
    int argumentCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // readonly System.Type[] _parameters
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::System::Type*> parameters;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Type*>) == 0x8);
    public:
    // Get static field: static System.String[] s_functionName
    static ::ArrayW<::StringW> _get_s_functionName();
    // Set static field: static System.String[] s_functionName
    static void _set_s_functionName(::ArrayW<::StringW> value);
    // Get instance field reference: readonly System.String _name
    [[deprecated("Use field access instead!")]] ::StringW& dyn__name();
    // Get instance field reference: readonly System.Data.FunctionId _id
    [[deprecated("Use field access instead!")]] ::System::Data::FunctionId& dyn__id();
    // Get instance field reference: readonly System.Type _result
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn__result();
    // Get instance field reference: readonly System.Boolean _isValidateArguments
    [[deprecated("Use field access instead!")]] bool& dyn__isValidateArguments();
    // Get instance field reference: readonly System.Boolean _isVariantArgumentList
    [[deprecated("Use field access instead!")]] bool& dyn__isVariantArgumentList();
    // Get instance field reference: readonly System.Int32 _argumentCount
    [[deprecated("Use field access instead!")]] int& dyn__argumentCount();
    // Get instance field reference: readonly System.Type[] _parameters
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Type*>& dyn__parameters();
    // System.Void .ctor(System.String name, System.Data.FunctionId id, System.Type result, System.Boolean IsValidateArguments, System.Boolean IsVariantArgumentList, System.Int32 argumentCount, System.Type a1, System.Type a2, System.Type a3)
    // Offset: 0x4C671DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Function* New_ctor(::StringW name, ::System::Data::FunctionId id, ::System::Type* result, bool IsValidateArguments, bool IsVariantArgumentList, int argumentCount, ::System::Type* a1, ::System::Type* a2, ::System::Type* a3) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::Function::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Function*, creationType>(name, id, result, IsValidateArguments, IsVariantArgumentList, argumentCount, a1, a2, a3)));
    }
    // static private System.Void .cctor()
    // Offset: 0x4C67428
    static void _cctor();
  }; // System.Data.Function
  #pragma pack(pop)
  static check_size<sizeof(Function), 48 + sizeof(::ArrayW<::System::Type*>)> __System_Data_FunctionSizeCheck;
  static_assert(sizeof(Function) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::Function::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::Function::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Data::Function::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::Function*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
