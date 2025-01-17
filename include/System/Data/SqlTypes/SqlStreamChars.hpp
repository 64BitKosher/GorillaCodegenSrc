// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: SeekOrigin
  struct SeekOrigin;
}
// Completed forward declares
// Type namespace: System.Data.SqlTypes
namespace System::Data::SqlTypes {
  // Forward declaring type: SqlStreamChars
  class SqlStreamChars;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Data::SqlTypes::SqlStreamChars);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::SqlTypes::SqlStreamChars*, "System.Data.SqlTypes", "SqlStreamChars");
// Type namespace: System.Data.SqlTypes
namespace System::Data::SqlTypes {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.SqlTypes.SqlStreamChars
  // [TokenAttribute] Offset: FFFFFFFF
  class SqlStreamChars : public ::Il2CppObject {
    public:
    // public System.Int64 get_Length()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int64_t get_Length();
    // public System.Int64 get_Position()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int64_t get_Position();
    // public System.Int32 Read(System.Char[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int Read(::ArrayW<::Il2CppChar> buffer, int offset, int count);
    // public System.Int64 Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);
  }; // System.Data.SqlTypes.SqlStreamChars
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlStreamChars::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Data::SqlTypes::SqlStreamChars::*)()>(&System::Data::SqlTypes::SqlStreamChars::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlStreamChars*), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlStreamChars::get_Position
// Il2CppName: get_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Data::SqlTypes::SqlStreamChars::*)()>(&System::Data::SqlTypes::SqlStreamChars::get_Position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlStreamChars*), "get_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlStreamChars::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Data::SqlTypes::SqlStreamChars::*)(::ArrayW<::Il2CppChar>, int, int)>(&System::Data::SqlTypes::SqlStreamChars::Read)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlStreamChars*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count});
  }
};
// Writing MetadataGetter for method: System::Data::SqlTypes::SqlStreamChars::Seek
// Il2CppName: Seek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Data::SqlTypes::SqlStreamChars::*)(int64_t, ::System::IO::SeekOrigin)>(&System::Data::SqlTypes::SqlStreamChars::Seek)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* origin = &::il2cpp_utils::GetClassFromName("System.IO", "SeekOrigin")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::SqlTypes::SqlStreamChars*), "Seek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset, origin});
  }
};
