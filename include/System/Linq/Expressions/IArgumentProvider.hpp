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
  // Forward declaring type: Expression
  class Expression;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: IArgumentProvider
  class IArgumentProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::IArgumentProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::IArgumentProvider*, "System.Linq.Expressions", "IArgumentProvider");
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.IArgumentProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class IArgumentProvider {
    public:
    // public System.Linq.Expressions.Expression GetArgument(System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Linq::Expressions::Expression* GetArgument(int index);
    // public System.Int32 get_ArgumentCount()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_ArgumentCount();
  }; // System.Linq.Expressions.IArgumentProvider
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::IArgumentProvider::GetArgument
// Il2CppName: GetArgument
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::IArgumentProvider::*)(int)>(&System::Linq::Expressions::IArgumentProvider::GetArgument)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::IArgumentProvider*), "GetArgument", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::IArgumentProvider::get_ArgumentCount
// Il2CppName: get_ArgumentCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::IArgumentProvider::*)()>(&System::Linq::Expressions::IArgumentProvider::get_ArgumentCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::IArgumentProvider*), "get_ArgumentCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
