// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: FileVersionInfo
  class FileVersionInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Diagnostics::FileVersionInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::FileVersionInfo*, "System.Diagnostics", "FileVersionInfo");
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Size: 0xA8
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.FileVersionInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class FileVersionInfo : public ::Il2CppObject {
    public:
    public:
    // private System.String comments
    // Size: 0x8
    // Offset: 0x10
    ::StringW comments;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String companyname
    // Size: 0x8
    // Offset: 0x18
    ::StringW companyname;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String filedescription
    // Size: 0x8
    // Offset: 0x20
    ::StringW filedescription;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String filename
    // Size: 0x8
    // Offset: 0x28
    ::StringW filename;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String fileversion
    // Size: 0x8
    // Offset: 0x30
    ::StringW fileversion;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String internalname
    // Size: 0x8
    // Offset: 0x38
    ::StringW internalname;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String language
    // Size: 0x8
    // Offset: 0x40
    ::StringW language;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String legalcopyright
    // Size: 0x8
    // Offset: 0x48
    ::StringW legalcopyright;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String legaltrademarks
    // Size: 0x8
    // Offset: 0x50
    ::StringW legaltrademarks;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String originalfilename
    // Size: 0x8
    // Offset: 0x58
    ::StringW originalfilename;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String privatebuild
    // Size: 0x8
    // Offset: 0x60
    ::StringW privatebuild;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String productname
    // Size: 0x8
    // Offset: 0x68
    ::StringW productname;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String productversion
    // Size: 0x8
    // Offset: 0x70
    ::StringW productversion;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String specialbuild
    // Size: 0x8
    // Offset: 0x78
    ::StringW specialbuild;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean isdebug
    // Size: 0x1
    // Offset: 0x80
    bool isdebug;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean ispatched
    // Size: 0x1
    // Offset: 0x81
    bool ispatched;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean isprerelease
    // Size: 0x1
    // Offset: 0x82
    bool isprerelease;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean isprivatebuild
    // Size: 0x1
    // Offset: 0x83
    bool isprivatebuild;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean isspecialbuild
    // Size: 0x1
    // Offset: 0x84
    bool isspecialbuild;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isspecialbuild and: filemajorpart
    char __padding18[0x3] = {};
    // private System.Int32 filemajorpart
    // Size: 0x4
    // Offset: 0x88
    int filemajorpart;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 fileminorpart
    // Size: 0x4
    // Offset: 0x8C
    int fileminorpart;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 filebuildpart
    // Size: 0x4
    // Offset: 0x90
    int filebuildpart;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 fileprivatepart
    // Size: 0x4
    // Offset: 0x94
    int fileprivatepart;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 productmajorpart
    // Size: 0x4
    // Offset: 0x98
    int productmajorpart;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 productminorpart
    // Size: 0x4
    // Offset: 0x9C
    int productminorpart;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 productbuildpart
    // Size: 0x4
    // Offset: 0xA0
    int productbuildpart;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 productprivatepart
    // Size: 0x4
    // Offset: 0xA4
    int productprivatepart;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.String comments
    [[deprecated("Use field access instead!")]] ::StringW& dyn_comments();
    // Get instance field reference: private System.String companyname
    [[deprecated("Use field access instead!")]] ::StringW& dyn_companyname();
    // Get instance field reference: private System.String filedescription
    [[deprecated("Use field access instead!")]] ::StringW& dyn_filedescription();
    // Get instance field reference: private System.String filename
    [[deprecated("Use field access instead!")]] ::StringW& dyn_filename();
    // Get instance field reference: private System.String fileversion
    [[deprecated("Use field access instead!")]] ::StringW& dyn_fileversion();
    // Get instance field reference: private System.String internalname
    [[deprecated("Use field access instead!")]] ::StringW& dyn_internalname();
    // Get instance field reference: private System.String language
    [[deprecated("Use field access instead!")]] ::StringW& dyn_language();
    // Get instance field reference: private System.String legalcopyright
    [[deprecated("Use field access instead!")]] ::StringW& dyn_legalcopyright();
    // Get instance field reference: private System.String legaltrademarks
    [[deprecated("Use field access instead!")]] ::StringW& dyn_legaltrademarks();
    // Get instance field reference: private System.String originalfilename
    [[deprecated("Use field access instead!")]] ::StringW& dyn_originalfilename();
    // Get instance field reference: private System.String privatebuild
    [[deprecated("Use field access instead!")]] ::StringW& dyn_privatebuild();
    // Get instance field reference: private System.String productname
    [[deprecated("Use field access instead!")]] ::StringW& dyn_productname();
    // Get instance field reference: private System.String productversion
    [[deprecated("Use field access instead!")]] ::StringW& dyn_productversion();
    // Get instance field reference: private System.String specialbuild
    [[deprecated("Use field access instead!")]] ::StringW& dyn_specialbuild();
    // Get instance field reference: private System.Boolean isdebug
    [[deprecated("Use field access instead!")]] bool& dyn_isdebug();
    // Get instance field reference: private System.Boolean ispatched
    [[deprecated("Use field access instead!")]] bool& dyn_ispatched();
    // Get instance field reference: private System.Boolean isprerelease
    [[deprecated("Use field access instead!")]] bool& dyn_isprerelease();
    // Get instance field reference: private System.Boolean isprivatebuild
    [[deprecated("Use field access instead!")]] bool& dyn_isprivatebuild();
    // Get instance field reference: private System.Boolean isspecialbuild
    [[deprecated("Use field access instead!")]] bool& dyn_isspecialbuild();
    // Get instance field reference: private System.Int32 filemajorpart
    [[deprecated("Use field access instead!")]] int& dyn_filemajorpart();
    // Get instance field reference: private System.Int32 fileminorpart
    [[deprecated("Use field access instead!")]] int& dyn_fileminorpart();
    // Get instance field reference: private System.Int32 filebuildpart
    [[deprecated("Use field access instead!")]] int& dyn_filebuildpart();
    // Get instance field reference: private System.Int32 fileprivatepart
    [[deprecated("Use field access instead!")]] int& dyn_fileprivatepart();
    // Get instance field reference: private System.Int32 productmajorpart
    [[deprecated("Use field access instead!")]] int& dyn_productmajorpart();
    // Get instance field reference: private System.Int32 productminorpart
    [[deprecated("Use field access instead!")]] int& dyn_productminorpart();
    // Get instance field reference: private System.Int32 productbuildpart
    [[deprecated("Use field access instead!")]] int& dyn_productbuildpart();
    // Get instance field reference: private System.Int32 productprivatepart
    [[deprecated("Use field access instead!")]] int& dyn_productprivatepart();
    // private System.Void .ctor()
    // Offset: 0x4F8DE18
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileVersionInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::FileVersionInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileVersionInfo*, creationType>()));
    }
    // public System.String get_FileName()
    // Offset: 0x4F8DF20
    ::StringW get_FileName();
    // private System.Void GetVersionInfo_icall(System.Char* fileName, System.Int32 fileName_length)
    // Offset: 0x4F8DF28
    void GetVersionInfo_icall(::Il2CppChar* fileName, int fileName_length);
    // private System.Void GetVersionInfo_internal(System.String fileName)
    // Offset: 0x4F8DF2C
    void GetVersionInfo_internal(::StringW fileName);
    // static public System.Diagnostics.FileVersionInfo GetVersionInfo(System.String fileName)
    // Offset: 0x4F8DF70
    static ::System::Diagnostics::FileVersionInfo* GetVersionInfo(::StringW fileName);
    // static private System.Void AppendFormat(System.Text.StringBuilder sb, System.String format, params System.Object[] args)
    // Offset: 0x4F8E04C
    static void AppendFormat(::System::Text::StringBuilder* sb, ::StringW format, ::ArrayW<::Il2CppObject*> args);
    // public override System.String ToString()
    // Offset: 0x4F8E060
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.Diagnostics.FileVersionInfo
  #pragma pack(pop)
  static check_size<sizeof(FileVersionInfo), 164 + sizeof(int)> __System_Diagnostics_FileVersionInfoSizeCheck;
  static_assert(sizeof(FileVersionInfo) == 0xA8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::FileVersionInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Diagnostics::FileVersionInfo::get_FileName
// Il2CppName: get_FileName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Diagnostics::FileVersionInfo::*)()>(&System::Diagnostics::FileVersionInfo::get_FileName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::FileVersionInfo*), "get_FileName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::FileVersionInfo::GetVersionInfo_icall
// Il2CppName: GetVersionInfo_icall
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::FileVersionInfo::*)(::Il2CppChar*, int)>(&System::Diagnostics::FileVersionInfo::GetVersionInfo_icall)> {
  static const MethodInfo* get() {
    static auto* fileName = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* fileName_length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::FileVersionInfo*), "GetVersionInfo_icall", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fileName, fileName_length});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::FileVersionInfo::GetVersionInfo_internal
// Il2CppName: GetVersionInfo_internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::FileVersionInfo::*)(::StringW)>(&System::Diagnostics::FileVersionInfo::GetVersionInfo_internal)> {
  static const MethodInfo* get() {
    static auto* fileName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::FileVersionInfo*), "GetVersionInfo_internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fileName});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::FileVersionInfo::GetVersionInfo
// Il2CppName: GetVersionInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::FileVersionInfo* (*)(::StringW)>(&System::Diagnostics::FileVersionInfo::GetVersionInfo)> {
  static const MethodInfo* get() {
    static auto* fileName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::FileVersionInfo*), "GetVersionInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fileName});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::FileVersionInfo::AppendFormat
// Il2CppName: AppendFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Text::StringBuilder*, ::StringW, ::ArrayW<::Il2CppObject*>)>(&System::Diagnostics::FileVersionInfo::AppendFormat)> {
  static const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::FileVersionInfo*), "AppendFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb, format, args});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::FileVersionInfo::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Diagnostics::FileVersionInfo::*)()>(&System::Diagnostics::FileVersionInfo::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::FileVersionInfo*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
