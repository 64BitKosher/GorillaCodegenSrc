// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::CompilerServices
namespace System::Runtime::CompilerServices {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: FormattableString
  class FormattableString;
}
// Completed forward declares
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Forward declaring type: FormattableStringFactory
  class FormattableStringFactory;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::CompilerServices::FormattableStringFactory);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::FormattableStringFactory*, "System.Runtime.CompilerServices", "FormattableStringFactory");
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.CompilerServices.FormattableStringFactory
  // [TokenAttribute] Offset: FFFFFFFF
  class FormattableStringFactory : public ::Il2CppObject {
    public:
    // Nested type: ::System::Runtime::CompilerServices::FormattableStringFactory::ConcreteFormattableString
    class ConcreteFormattableString;
    // static public System.FormattableString Create(System.String format, params System.Object[] arguments)
    // Offset: 0x4577338
    static ::System::FormattableString* Create(::StringW format, ::ArrayW<::Il2CppObject*> arguments);
  }; // System.Runtime.CompilerServices.FormattableStringFactory
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::CompilerServices::FormattableStringFactory::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::FormattableString* (*)(::StringW, ::ArrayW<::Il2CppObject*>)>(&System::Runtime::CompilerServices::FormattableStringFactory::Create)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* arguments = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::FormattableStringFactory*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, arguments});
  }
};