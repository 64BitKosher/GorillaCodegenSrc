// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Linq::Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: ParameterExpression
  class ParameterExpression;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: IParameterProvider
  class IParameterProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::IParameterProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::IParameterProvider*, "System.Linq.Expressions", "IParameterProvider");
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.IParameterProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class IParameterProvider {
    public:
    // public System.Linq.Expressions.ParameterExpression GetParameter(System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Linq::Expressions::ParameterExpression* GetParameter(int index);
    // public System.Int32 get_ParameterCount()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_ParameterCount();
  }; // System.Linq.Expressions.IParameterProvider
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::IParameterProvider::GetParameter
// Il2CppName: GetParameter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::ParameterExpression* (System::Linq::Expressions::IParameterProvider::*)(int)>(&System::Linq::Expressions::IParameterProvider::GetParameter)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::IParameterProvider*), "GetParameter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::IParameterProvider::get_ParameterCount
// Il2CppName: get_ParameterCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::IParameterProvider::*)()>(&System::Linq::Expressions::IParameterProvider::get_ParameterCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::IParameterProvider*), "get_ParameterCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
