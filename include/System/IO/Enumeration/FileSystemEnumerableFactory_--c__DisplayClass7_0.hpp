// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.Enumeration.FileSystemEnumerableFactory
#include "System/IO/Enumeration/FileSystemEnumerableFactory.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: EnumerationOptions
  class EnumerationOptions;
}
// Forward declaring namespace: System::IO::Enumeration
namespace System::IO::Enumeration {
  // Forward declaring type: FileSystemEntry
  struct FileSystemEntry;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::Enumeration::FileSystemEnumerableFactory::$$c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Enumeration::FileSystemEnumerableFactory::$$c__DisplayClass7_0*, "System.IO.Enumeration", "FileSystemEnumerableFactory/<>c__DisplayClass7_0");
// Type namespace: System.IO.Enumeration
namespace System::IO::Enumeration {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.Enumeration.FileSystemEnumerableFactory/<>c__DisplayClass7_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class FileSystemEnumerableFactory::$$c__DisplayClass7_0 : public ::Il2CppObject {
    public:
    public:
    // public System.String expression
    // Size: 0x8
    // Offset: 0x10
    ::StringW expression;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.IO.EnumerationOptions options
    // Size: 0x8
    // Offset: 0x18
    ::System::IO::EnumerationOptions* options;
    // Field size check
    static_assert(sizeof(::System::IO::EnumerationOptions*) == 0x8);
    public:
    // Get instance field reference: public System.String expression
    [[deprecated("Use field access instead!")]] ::StringW& dyn_expression();
    // Get instance field reference: public System.IO.EnumerationOptions options
    [[deprecated("Use field access instead!")]] ::System::IO::EnumerationOptions*& dyn_options();
    // System.Boolean <DirectoryInfos>b__1(ref System.IO.Enumeration.FileSystemEntry entry)
    // Offset: 0x45E3C08
    bool $DirectoryInfos$b__1(ByRef<::System::IO::Enumeration::FileSystemEntry> entry);
    // public System.Void .ctor()
    // Offset: 0x45E3570
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileSystemEnumerableFactory::$$c__DisplayClass7_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::Enumeration::FileSystemEnumerableFactory::$$c__DisplayClass7_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileSystemEnumerableFactory::$$c__DisplayClass7_0*, creationType>()));
    }
  }; // System.IO.Enumeration.FileSystemEnumerableFactory/<>c__DisplayClass7_0
  #pragma pack(pop)
  static check_size<sizeof(FileSystemEnumerableFactory::$$c__DisplayClass7_0), 24 + sizeof(::System::IO::EnumerationOptions*)> __System_IO_Enumeration_FileSystemEnumerableFactory_$$c__DisplayClass7_0SizeCheck;
  static_assert(sizeof(FileSystemEnumerableFactory::$$c__DisplayClass7_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::Enumeration::FileSystemEnumerableFactory::$$c__DisplayClass7_0::$DirectoryInfos$b__1
// Il2CppName: <DirectoryInfos>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::Enumeration::FileSystemEnumerableFactory::$$c__DisplayClass7_0::*)(ByRef<::System::IO::Enumeration::FileSystemEntry>)>(&System::IO::Enumeration::FileSystemEnumerableFactory::$$c__DisplayClass7_0::$DirectoryInfos$b__1)> {
  static const MethodInfo* get() {
    static auto* entry = &::il2cpp_utils::GetClassFromName("System.IO.Enumeration", "FileSystemEntry")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Enumeration::FileSystemEnumerableFactory::$$c__DisplayClass7_0*), "<DirectoryInfos>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{entry});
  }
};
// Writing MetadataGetter for method: System::IO::Enumeration::FileSystemEnumerableFactory::$$c__DisplayClass7_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
