// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Expressions.TypedParameterExpression
#include "System/Linq/Expressions/TypedParameterExpression.hpp"
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
// Completed forward declares
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: ByRefParameterExpression
  class ByRefParameterExpression;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::ByRefParameterExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::ByRefParameterExpression*, "System.Linq.Expressions", "ByRefParameterExpression");
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.ByRefParameterExpression
  // [TokenAttribute] Offset: FFFFFFFF
  class ByRefParameterExpression : public ::System::Linq::Expressions::TypedParameterExpression {
    public:
    // System.Void .ctor(System.Type type, System.String name)
    // Offset: 0x4BA09FC
    // Implemented from: System.Linq.Expressions.TypedParameterExpression
    // Base method: System.Void TypedParameterExpression::.ctor(System.Type type, System.String name)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ByRefParameterExpression* New_ctor(::System::Type* type, ::StringW name) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::ByRefParameterExpression::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ByRefParameterExpression*, creationType>(type, name)));
    }
    // override System.Boolean GetIsByRef()
    // Offset: 0x4BA0B0C
    // Implemented from: System.Linq.Expressions.ParameterExpression
    // Base method: System.Boolean ParameterExpression::GetIsByRef()
    bool GetIsByRef();
  }; // System.Linq.Expressions.ByRefParameterExpression
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::ByRefParameterExpression::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::ByRefParameterExpression::GetIsByRef
// Il2CppName: GetIsByRef
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Linq::Expressions::ByRefParameterExpression::*)()>(&System::Linq::Expressions::ByRefParameterExpression::GetIsByRef)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::ByRefParameterExpression*), "GetIsByRef", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
