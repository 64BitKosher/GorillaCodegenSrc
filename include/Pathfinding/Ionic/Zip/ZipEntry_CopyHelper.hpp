// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.Ionic.Zip.ZipEntry
#include "Pathfinding/Ionic/Zip/ZipEntry.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: Regex
  class Regex;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::Ionic::Zip::ZipEntry::CopyHelper);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Ionic::Zip::ZipEntry::CopyHelper*, "Pathfinding.Ionic.Zip", "ZipEntry/CopyHelper");
// Type namespace: Pathfinding.Ionic.Zip
namespace Pathfinding::Ionic::Zip {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Ionic.Zip.ZipEntry/CopyHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class ZipEntry::CopyHelper : public ::Il2CppObject {
    public:
    // Get static field: static private System.Text.RegularExpressions.Regex re
    static ::System::Text::RegularExpressions::Regex* _get_re();
    // Set static field: static private System.Text.RegularExpressions.Regex re
    static void _set_re(::System::Text::RegularExpressions::Regex* value);
    // Get static field: static private System.Int32 callCount
    static int _get_callCount();
    // Set static field: static private System.Int32 callCount
    static void _set_callCount(int value);
    // static private System.Void .cctor()
    // Offset: 0x49AB090
    static void _cctor();
    // static System.String AppendCopyToFileName(System.String f)
    // Offset: 0x49A1738
    static ::StringW AppendCopyToFileName(::StringW f);
  }; // Pathfinding.Ionic.Zip.ZipEntry/CopyHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::Ionic::Zip::ZipEntry::CopyHelper::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Pathfinding::Ionic::Zip::ZipEntry::CopyHelper::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zip::ZipEntry::CopyHelper*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zip::ZipEntry::CopyHelper::AppendCopyToFileName
// Il2CppName: AppendCopyToFileName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&Pathfinding::Ionic::Zip::ZipEntry::CopyHelper::AppendCopyToFileName)> {
  static const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zip::ZipEntry::CopyHelper*), "AppendCopyToFileName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
