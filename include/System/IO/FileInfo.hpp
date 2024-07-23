// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.FileSystemInfo
#include "System/IO/FileSystemInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: DirectoryInfo
  class DirectoryInfo;
  // Forward declaring type: StreamReader
  class StreamReader;
  // Forward declaring type: StreamWriter
  class StreamWriter;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Forward declaring type: FileInfo
  class FileInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::FileInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::FileInfo*, "System.IO", "FileInfo");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0xA8
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.FileInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class FileInfo : public ::System::IO::FileSystemInfo {
    public:
    // public System.Void .ctor(System.String fileName)
    // Offset: 0x45CE3D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileInfo* New_ctor(::StringW fileName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::FileInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileInfo*, creationType>(fileName)));
    }
    // System.Void .ctor(System.String originalPath, System.String fullPath, System.String fileName, System.Boolean isNormalized)
    // Offset: 0x45CE3E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileInfo* New_ctor(::StringW originalPath, ::StringW fullPath, ::StringW fileName, bool isNormalized) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::FileInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileInfo*, creationType>(originalPath, fullPath, fileName, isNormalized)));
    }
    // public System.Int64 get_Length()
    // Offset: 0x45CE630
    int64_t get_Length();
    // public System.String get_DirectoryName()
    // Offset: 0x45CE7F4
    ::StringW get_DirectoryName();
    // public System.IO.DirectoryInfo get_Directory()
    // Offset: 0x45CEBA0
    ::System::IO::DirectoryInfo* get_Directory();
    // public System.IO.StreamReader OpenText()
    // Offset: 0x45CEC08
    ::System::IO::StreamReader* OpenText();
    // public System.IO.StreamWriter CreateText()
    // Offset: 0x45CEC80
    ::System::IO::StreamWriter* CreateText();
    // public System.IO.StreamWriter AppendText()
    // Offset: 0x45CECE4
    ::System::IO::StreamWriter* AppendText();
    // private System.Void .ctor()
    // Offset: 0x45CE3D0
    // Implemented from: System.IO.FileSystemInfo
    // Base method: System.Void FileSystemInfo::.ctor()
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::FileInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileInfo*, creationType>()));
    }
    // public override System.Void Delete()
    // Offset: 0x45CED48
    // Implemented from: System.IO.FileSystemInfo
    // Base method: System.Void FileSystemInfo::Delete()
    void Delete();
    // private System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x45CED50
    // Implemented from: System.IO.FileSystemInfo
    // Base method: System.Void FileSystemInfo::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileInfo* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::FileInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileInfo*, creationType>(info, context)));
    }
    // public override System.String get_Name()
    // Offset: 0x45CED54
    // Implemented from: System.IO.FileSystemInfo
    // Base method: System.String FileSystemInfo::get_Name()
    ::StringW get_Name();
  }; // System.IO.FileInfo
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::FileInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::FileInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::FileInfo::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::IO::FileInfo::*)()>(&System::IO::FileInfo::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileInfo*), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::FileInfo::get_DirectoryName
// Il2CppName: get_DirectoryName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::IO::FileInfo::*)()>(&System::IO::FileInfo::get_DirectoryName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileInfo*), "get_DirectoryName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::FileInfo::get_Directory
// Il2CppName: get_Directory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::DirectoryInfo* (System::IO::FileInfo::*)()>(&System::IO::FileInfo::get_Directory)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileInfo*), "get_Directory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::FileInfo::OpenText
// Il2CppName: OpenText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::StreamReader* (System::IO::FileInfo::*)()>(&System::IO::FileInfo::OpenText)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileInfo*), "OpenText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::FileInfo::CreateText
// Il2CppName: CreateText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::StreamWriter* (System::IO::FileInfo::*)()>(&System::IO::FileInfo::CreateText)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileInfo*), "CreateText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::FileInfo::AppendText
// Il2CppName: AppendText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::StreamWriter* (System::IO::FileInfo::*)()>(&System::IO::FileInfo::AppendText)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileInfo*), "AppendText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::FileInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::FileInfo::Delete
// Il2CppName: Delete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileInfo::*)()>(&System::IO::FileInfo::Delete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileInfo*), "Delete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::FileInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::FileInfo::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::IO::FileInfo::*)()>(&System::IO::FileInfo::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileInfo*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
