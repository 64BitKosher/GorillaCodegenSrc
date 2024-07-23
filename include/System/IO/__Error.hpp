// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.IO
namespace System::IO {
  // Forward declaring type: __Error
  class __Error;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::__Error);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::__Error*, "System.IO", "__Error");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.__Error
  // [TokenAttribute] Offset: FFFFFFFF
  class __Error : public ::Il2CppObject {
    public:
    // static System.Void EndOfFile()
    // Offset: 0x45D4CC8
    static void EndOfFile();
    // static System.Void FileNotOpen()
    // Offset: 0x45D4D20
    static void FileNotOpen();
    // static System.Void ReaderClosed()
    // Offset: 0x45D4D7C
    static void ReaderClosed();
    // static System.String GetDisplayablePath(System.String path, System.Boolean isInvalidPath)
    // Offset: 0x45D4DD8
    static ::StringW GetDisplayablePath(::StringW path, bool isInvalidPath);
    // static System.Void WinIOError(System.Int32 errorCode, System.String maybeFullPath)
    // Offset: 0x45D4FA8
    static void WinIOError(int errorCode, ::StringW maybeFullPath);
    // static System.Void WriterClosed()
    // Offset: 0x45D5504
    static void WriterClosed();
  }; // System.IO.__Error
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::__Error::EndOfFile
// Il2CppName: EndOfFile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::IO::__Error::EndOfFile)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::__Error*), "EndOfFile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::__Error::FileNotOpen
// Il2CppName: FileNotOpen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::IO::__Error::FileNotOpen)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::__Error*), "FileNotOpen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::__Error::ReaderClosed
// Il2CppName: ReaderClosed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::IO::__Error::ReaderClosed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::__Error*), "ReaderClosed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::__Error::GetDisplayablePath
// Il2CppName: GetDisplayablePath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, bool)>(&System::IO::__Error::GetDisplayablePath)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* isInvalidPath = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::__Error*), "GetDisplayablePath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, isInvalidPath});
  }
};
// Writing MetadataGetter for method: System::IO::__Error::WinIOError
// Il2CppName: WinIOError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::StringW)>(&System::IO::__Error::WinIOError)> {
  static const MethodInfo* get() {
    static auto* errorCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* maybeFullPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::__Error*), "WinIOError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{errorCode, maybeFullPath});
  }
};
// Writing MetadataGetter for method: System::IO::__Error::WriterClosed
// Il2CppName: WriterClosed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::IO::__Error::WriterClosed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::__Error*), "WriterClosed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
