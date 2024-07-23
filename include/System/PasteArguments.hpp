// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: PasteArguments
  class PasteArguments;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::PasteArguments);
DEFINE_IL2CPP_ARG_TYPE(::System::PasteArguments*, "System", "PasteArguments");
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.PasteArguments
  // [TokenAttribute] Offset: FFFFFFFF
  class PasteArguments : public ::Il2CppObject {
    public:
    // static System.Void AppendArgument(System.Text.StringBuilder stringBuilder, System.String argument)
    // Offset: 0x4F5EFB8
    static void AppendArgument(::System::Text::StringBuilder* stringBuilder, ::StringW argument);
    // static private System.Boolean ContainsNoWhitespaceOrQuotes(System.String s)
    // Offset: 0x4F5F194
    static bool ContainsNoWhitespaceOrQuotes(::StringW s);
  }; // System.PasteArguments
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::PasteArguments::AppendArgument
// Il2CppName: AppendArgument
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Text::StringBuilder*, ::StringW)>(&System::PasteArguments::AppendArgument)> {
  static const MethodInfo* get() {
    static auto* stringBuilder = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* argument = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::PasteArguments*), "AppendArgument", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stringBuilder, argument});
  }
};
// Writing MetadataGetter for method: System::PasteArguments::ContainsNoWhitespaceOrQuotes
// Il2CppName: ContainsNoWhitespaceOrQuotes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&System::PasteArguments::ContainsNoWhitespaceOrQuotes)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::PasteArguments*), "ContainsNoWhitespaceOrQuotes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
