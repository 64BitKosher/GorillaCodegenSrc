// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Dynamic.BindingRestrictions
#include "System/Dynamic/BindingRestrictions.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Linq::Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: Expression
  class Expression;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Dynamic::BindingRestrictions::TypeRestriction);
DEFINE_IL2CPP_ARG_TYPE(::System::Dynamic::BindingRestrictions::TypeRestriction*, "System.Dynamic", "BindingRestrictions/TypeRestriction");
// Type namespace: System.Dynamic
namespace System::Dynamic {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Dynamic.BindingRestrictions/TypeRestriction
  // [TokenAttribute] Offset: FFFFFFFF
  class BindingRestrictions::TypeRestriction : public ::System::Dynamic::BindingRestrictions {
    public:
    public:
    // private readonly System.Linq.Expressions.Expression _expression
    // Size: 0x8
    // Offset: 0x10
    ::System::Linq::Expressions::Expression* expression;
    // Field size check
    static_assert(sizeof(::System::Linq::Expressions::Expression*) == 0x8);
    // private readonly System.Type _type
    // Size: 0x8
    // Offset: 0x18
    ::System::Type* type;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Get instance field reference: private readonly System.Linq.Expressions.Expression _expression
    [[deprecated("Use field access instead!")]] ::System::Linq::Expressions::Expression*& dyn__expression();
    // Get instance field reference: private readonly System.Type _type
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn__type();
    // System.Void .ctor(System.Linq.Expressions.Expression parameter, System.Type type)
    // Offset: 0x4BE1060
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BindingRestrictions::TypeRestriction* New_ctor(::System::Linq::Expressions::Expression* parameter, ::System::Type* type) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Dynamic::BindingRestrictions::TypeRestriction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BindingRestrictions::TypeRestriction*, creationType>(parameter, type)));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x4BE1A30
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x4BE1AF4
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // override System.Linq.Expressions.Expression GetExpression()
    // Offset: 0x4BE1B48
    // Implemented from: System.Dynamic.BindingRestrictions
    // Base method: System.Linq.Expressions.Expression BindingRestrictions::GetExpression()
    ::System::Linq::Expressions::Expression* GetExpression();
  }; // System.Dynamic.BindingRestrictions/TypeRestriction
  #pragma pack(pop)
  static check_size<sizeof(BindingRestrictions::TypeRestriction), 24 + sizeof(::System::Type*)> __System_Dynamic_BindingRestrictions_TypeRestrictionSizeCheck;
  static_assert(sizeof(BindingRestrictions::TypeRestriction) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Dynamic::BindingRestrictions::TypeRestriction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Dynamic::BindingRestrictions::TypeRestriction::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Dynamic::BindingRestrictions::TypeRestriction::*)(::Il2CppObject*)>(&System::Dynamic::BindingRestrictions::TypeRestriction::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::BindingRestrictions::TypeRestriction*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Dynamic::BindingRestrictions::TypeRestriction::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Dynamic::BindingRestrictions::TypeRestriction::*)()>(&System::Dynamic::BindingRestrictions::TypeRestriction::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::BindingRestrictions::TypeRestriction*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Dynamic::BindingRestrictions::TypeRestriction::GetExpression
// Il2CppName: GetExpression
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Dynamic::BindingRestrictions::TypeRestriction::*)()>(&System::Dynamic::BindingRestrictions::TypeRestriction::GetExpression)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::BindingRestrictions::TypeRestriction*), "GetExpression", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
