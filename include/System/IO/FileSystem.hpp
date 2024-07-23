// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Interop
#include "GlobalNamespace/Interop.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: DirectoryInfo
  class DirectoryInfo;
  // Forward declaring type: FileAttributes
  struct FileAttributes;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: ReadOnlySpan`1<T>
  template<typename T>
  struct ReadOnlySpan_1;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Forward declaring type: FileSystem
  class FileSystem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::FileSystem);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::FileSystem*, "System.IO", "FileSystem");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.FileSystem
  // [TokenAttribute] Offset: FFFFFFFF
  class FileSystem : public ::Il2CppObject {
    public:
    // static private System.Boolean CopyDanglingSymlink(System.String sourceFullPath, System.String destFullPath)
    // Offset: 0x45CF634
    static bool CopyDanglingSymlink(::StringW sourceFullPath, ::StringW destFullPath);
    // static public System.Void CopyFile(System.String sourceFullPath, System.String destFullPath, System.Boolean overwrite)
    // Offset: 0x45CB8E0
    static void CopyFile(::StringW sourceFullPath, ::StringW destFullPath, bool overwrite);
    // static private System.Void LinkOrCopyFile(System.String sourceFullPath, System.String destFullPath)
    // Offset: 0x45CFA1C
    static void LinkOrCopyFile(::StringW sourceFullPath, ::StringW destFullPath);
    // static public System.Void MoveFile(System.String sourceFullPath, System.String destFullPath)
    // Offset: 0x45CE2B8
    static void MoveFile(::StringW sourceFullPath, ::StringW destFullPath);
    // static public System.Void DeleteFile(System.String fullPath)
    // Offset: 0x45CBE7C
    static void DeleteFile(::StringW fullPath);
    // static public System.Void CreateDirectory(System.String fullPath)
    // Offset: 0x45C96F0
    static void CreateDirectory(::StringW fullPath);
    // static public System.Void RemoveDirectory(System.String fullPath, System.Boolean recursive)
    // Offset: 0x45CA694
    static void RemoveDirectory(::StringW fullPath, bool recursive);
    // static private System.Void RemoveDirectoryInternal(System.IO.DirectoryInfo directory, System.Boolean recursive, System.Boolean throwOnTopLevelDirectoryNotFound)
    // Offset: 0x45CFCB0
    static void RemoveDirectoryInternal(::System::IO::DirectoryInfo* directory, bool recursive, bool throwOnTopLevelDirectoryNotFound);
    // static public System.Boolean DirectoryExists(System.ReadOnlySpan`1<System.Char> fullPath)
    // Offset: 0x45C9E88
    static bool DirectoryExists(::System::ReadOnlySpan_1<::Il2CppChar> fullPath);
    // static private System.Boolean DirectoryExists(System.ReadOnlySpan`1<System.Char> fullPath, out Interop/ErrorInfo errorInfo)
    // Offset: 0x45CFCA4
    static bool DirectoryExists(::System::ReadOnlySpan_1<::Il2CppChar> fullPath, ByRef<::GlobalNamespace::Interop::ErrorInfo> errorInfo);
    // static public System.Boolean FileExists(System.ReadOnlySpan`1<System.Char> fullPath)
    // Offset: 0x45CC1EC
    static bool FileExists(::System::ReadOnlySpan_1<::Il2CppChar> fullPath);
    // static private System.Boolean FileExists(System.ReadOnlySpan`1<System.Char> fullPath, System.Int32 fileType, out Interop/ErrorInfo errorInfo)
    // Offset: 0x45CFB94
    static bool FileExists(::System::ReadOnlySpan_1<::Il2CppChar> fullPath, int fileType, ByRef<::GlobalNamespace::Interop::ErrorInfo> errorInfo);
    // static private System.Boolean ShouldIgnoreDirectory(System.String name)
    // Offset: 0x45D0340
    static bool ShouldIgnoreDirectory(::StringW name);
    // static public System.IO.FileAttributes GetAttributes(System.String fullPath)
    // Offset: 0x45CC390
    static ::System::IO::FileAttributes GetAttributes(::StringW fullPath);
    // static public System.Void SetAttributes(System.String fullPath, System.IO.FileAttributes attributes)
    // Offset: 0x45CCD34
    static void SetAttributes(::StringW fullPath, ::System::IO::FileAttributes attributes);
  }; // System.IO.FileSystem
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::FileSystem::CopyDanglingSymlink
// Il2CppName: CopyDanglingSymlink
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW)>(&System::IO::FileSystem::CopyDanglingSymlink)> {
  static const MethodInfo* get() {
    static auto* sourceFullPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* destFullPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystem*), "CopyDanglingSymlink", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sourceFullPath, destFullPath});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystem::CopyFile
// Il2CppName: CopyFile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, bool)>(&System::IO::FileSystem::CopyFile)> {
  static const MethodInfo* get() {
    static auto* sourceFullPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* destFullPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* overwrite = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystem*), "CopyFile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sourceFullPath, destFullPath, overwrite});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystem::LinkOrCopyFile
// Il2CppName: LinkOrCopyFile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW)>(&System::IO::FileSystem::LinkOrCopyFile)> {
  static const MethodInfo* get() {
    static auto* sourceFullPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* destFullPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystem*), "LinkOrCopyFile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sourceFullPath, destFullPath});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystem::MoveFile
// Il2CppName: MoveFile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW)>(&System::IO::FileSystem::MoveFile)> {
  static const MethodInfo* get() {
    static auto* sourceFullPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* destFullPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystem*), "MoveFile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sourceFullPath, destFullPath});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystem::DeleteFile
// Il2CppName: DeleteFile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&System::IO::FileSystem::DeleteFile)> {
  static const MethodInfo* get() {
    static auto* fullPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystem*), "DeleteFile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fullPath});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystem::CreateDirectory
// Il2CppName: CreateDirectory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&System::IO::FileSystem::CreateDirectory)> {
  static const MethodInfo* get() {
    static auto* fullPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystem*), "CreateDirectory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fullPath});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystem::RemoveDirectory
// Il2CppName: RemoveDirectory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, bool)>(&System::IO::FileSystem::RemoveDirectory)> {
  static const MethodInfo* get() {
    static auto* fullPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* recursive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystem*), "RemoveDirectory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fullPath, recursive});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystem::RemoveDirectoryInternal
// Il2CppName: RemoveDirectoryInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IO::DirectoryInfo*, bool, bool)>(&System::IO::FileSystem::RemoveDirectoryInternal)> {
  static const MethodInfo* get() {
    static auto* directory = &::il2cpp_utils::GetClassFromName("System.IO", "DirectoryInfo")->byval_arg;
    static auto* recursive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* throwOnTopLevelDirectoryNotFound = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystem*), "RemoveDirectoryInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{directory, recursive, throwOnTopLevelDirectoryNotFound});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystem::DirectoryExists
// Il2CppName: DirectoryExists
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ReadOnlySpan_1<::Il2CppChar>)>(&System::IO::FileSystem::DirectoryExists)> {
  static const MethodInfo* get() {
    static auto* fullPath = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystem*), "DirectoryExists", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fullPath});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystem::DirectoryExists
// Il2CppName: DirectoryExists
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ReadOnlySpan_1<::Il2CppChar>, ByRef<::GlobalNamespace::Interop::ErrorInfo>)>(&System::IO::FileSystem::DirectoryExists)> {
  static const MethodInfo* get() {
    static auto* fullPath = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    static auto* errorInfo = &::il2cpp_utils::GetClassFromName("", "Interop/ErrorInfo")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystem*), "DirectoryExists", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fullPath, errorInfo});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystem::FileExists
// Il2CppName: FileExists
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ReadOnlySpan_1<::Il2CppChar>)>(&System::IO::FileSystem::FileExists)> {
  static const MethodInfo* get() {
    static auto* fullPath = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystem*), "FileExists", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fullPath});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystem::FileExists
// Il2CppName: FileExists
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ReadOnlySpan_1<::Il2CppChar>, int, ByRef<::GlobalNamespace::Interop::ErrorInfo>)>(&System::IO::FileSystem::FileExists)> {
  static const MethodInfo* get() {
    static auto* fullPath = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    static auto* fileType = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* errorInfo = &::il2cpp_utils::GetClassFromName("", "Interop/ErrorInfo")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystem*), "FileExists", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fullPath, fileType, errorInfo});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystem::ShouldIgnoreDirectory
// Il2CppName: ShouldIgnoreDirectory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&System::IO::FileSystem::ShouldIgnoreDirectory)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystem*), "ShouldIgnoreDirectory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystem::GetAttributes
// Il2CppName: GetAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::FileAttributes (*)(::StringW)>(&System::IO::FileSystem::GetAttributes)> {
  static const MethodInfo* get() {
    static auto* fullPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystem*), "GetAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fullPath});
  }
};
// Writing MetadataGetter for method: System::IO::FileSystem::SetAttributes
// Il2CppName: SetAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::System::IO::FileAttributes)>(&System::IO::FileSystem::SetAttributes)> {
  static const MethodInfo* get() {
    static auto* fullPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* attributes = &::il2cpp_utils::GetClassFromName("System.IO", "FileAttributes")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileSystem*), "SetAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fullPath, attributes});
  }
};
