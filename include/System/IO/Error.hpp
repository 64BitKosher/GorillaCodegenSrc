// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Forward declaring type: Error
  class Error;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::Error);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Error*, "System.IO", "Error");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.Error
  // [TokenAttribute] Offset: FFFFFFFF
  class Error : public ::Il2CppObject {
    public:
    // static System.Exception GetStreamIsClosed()
    // Offset: 0x459C898
    static ::System::Exception* GetStreamIsClosed();
    // static System.Exception GetEndOfFile()
    // Offset: 0x459C908
    static ::System::Exception* GetEndOfFile();
    // static System.Exception GetReadNotSupported()
    // Offset: 0x459C980
    static ::System::Exception* GetReadNotSupported();
    // static System.Exception GetWriteNotSupported()
    // Offset: 0x459C9EC
    static ::System::Exception* GetWriteNotSupported();
  }; // System.IO.Error
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::Error::GetStreamIsClosed
// Il2CppName: GetStreamIsClosed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)()>(&System::IO::Error::GetStreamIsClosed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Error*), "GetStreamIsClosed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Error::GetEndOfFile
// Il2CppName: GetEndOfFile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)()>(&System::IO::Error::GetEndOfFile)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Error*), "GetEndOfFile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Error::GetReadNotSupported
// Il2CppName: GetReadNotSupported
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)()>(&System::IO::Error::GetReadNotSupported)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Error*), "GetReadNotSupported", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Error::GetWriteNotSupported
// Il2CppName: GetWriteNotSupported
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)()>(&System::IO::Error::GetWriteNotSupported)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Error*), "GetWriteNotSupported", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
