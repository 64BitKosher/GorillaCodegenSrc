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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: ReadOnlySpan`1<T>
  template<typename T>
  struct ReadOnlySpan_1;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Forward declaring type: PathInternal
  class PathInternal;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::PathInternal);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::PathInternal*, "System.IO", "PathInternal");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.PathInternal
  // [TokenAttribute] Offset: FFFFFFFF
  class PathInternal : public ::Il2CppObject {
    public:
    // Get static field: static private readonly System.Boolean s_isCaseSensitive
    static bool _get_s_isCaseSensitive();
    // Set static field: static private readonly System.Boolean s_isCaseSensitive
    static void _set_s_isCaseSensitive(bool value);
    // static System.Int32 GetRootLength(System.ReadOnlySpan`1<System.Char> path)
    // Offset: 0x459FDC4
    static int GetRootLength(::System::ReadOnlySpan_1<::Il2CppChar> path);
    // static System.Boolean IsDirectorySeparator(System.Char c)
    // Offset: 0x459FE40
    static bool IsDirectorySeparator(::Il2CppChar c);
    // static System.Boolean EndsInDirectorySeparator(System.ReadOnlySpan`1<System.Char> path)
    // Offset: 0x459FE50
    static bool EndsInDirectorySeparator(::System::ReadOnlySpan_1<::Il2CppChar> path);
    // static System.Boolean StartsWithDirectorySeparator(System.ReadOnlySpan`1<System.Char> path)
    // Offset: 0x459FED0
    static bool StartsWithDirectorySeparator(::System::ReadOnlySpan_1<::Il2CppChar> path);
    // static System.String TrimEndingDirectorySeparator(System.String path)
    // Offset: 0x459FF4C
    static ::StringW TrimEndingDirectorySeparator(::StringW path);
    // static System.ReadOnlySpan`1<System.Char> TrimEndingDirectorySeparator(System.ReadOnlySpan`1<System.Char> path)
    // Offset: 0x45A0108
    static ::System::ReadOnlySpan_1<::Il2CppChar> TrimEndingDirectorySeparator(::System::ReadOnlySpan_1<::Il2CppChar> path);
    // static System.Boolean IsRoot(System.ReadOnlySpan`1<System.Char> path)
    // Offset: 0x45A008C
    static bool IsRoot(::System::ReadOnlySpan_1<::Il2CppChar> path);
    // static System.Boolean get_IsCaseSensitive()
    // Offset: 0x45A01E8
    static bool get_IsCaseSensitive();
    // static private System.Boolean GetIsCaseSensitive()
    // Offset: 0x45A0240
    static bool GetIsCaseSensitive();
    // static public System.Boolean IsPartiallyQualified(System.String path)
    // Offset: 0x45A054C
    static bool IsPartiallyQualified(::StringW path);
    // static private System.Void .cctor()
    // Offset: 0x45A0554
    static void _cctor();
  }; // System.IO.PathInternal
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::PathInternal::GetRootLength
// Il2CppName: GetRootLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::ReadOnlySpan_1<::Il2CppChar>)>(&System::IO::PathInternal::GetRootLength)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::PathInternal*), "GetRootLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::PathInternal::IsDirectorySeparator
// Il2CppName: IsDirectorySeparator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppChar)>(&System::IO::PathInternal::IsDirectorySeparator)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::PathInternal*), "IsDirectorySeparator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: System::IO::PathInternal::EndsInDirectorySeparator
// Il2CppName: EndsInDirectorySeparator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ReadOnlySpan_1<::Il2CppChar>)>(&System::IO::PathInternal::EndsInDirectorySeparator)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::PathInternal*), "EndsInDirectorySeparator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::PathInternal::StartsWithDirectorySeparator
// Il2CppName: StartsWithDirectorySeparator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ReadOnlySpan_1<::Il2CppChar>)>(&System::IO::PathInternal::StartsWithDirectorySeparator)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::PathInternal*), "StartsWithDirectorySeparator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::PathInternal::TrimEndingDirectorySeparator
// Il2CppName: TrimEndingDirectorySeparator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::IO::PathInternal::TrimEndingDirectorySeparator)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::PathInternal*), "TrimEndingDirectorySeparator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::PathInternal::TrimEndingDirectorySeparator
// Il2CppName: TrimEndingDirectorySeparator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ReadOnlySpan_1<::Il2CppChar> (*)(::System::ReadOnlySpan_1<::Il2CppChar>)>(&System::IO::PathInternal::TrimEndingDirectorySeparator)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::PathInternal*), "TrimEndingDirectorySeparator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::PathInternal::IsRoot
// Il2CppName: IsRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ReadOnlySpan_1<::Il2CppChar>)>(&System::IO::PathInternal::IsRoot)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::PathInternal*), "IsRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::PathInternal::get_IsCaseSensitive
// Il2CppName: get_IsCaseSensitive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::IO::PathInternal::get_IsCaseSensitive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::PathInternal*), "get_IsCaseSensitive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::PathInternal::GetIsCaseSensitive
// Il2CppName: GetIsCaseSensitive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::IO::PathInternal::GetIsCaseSensitive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::PathInternal*), "GetIsCaseSensitive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::PathInternal::IsPartiallyQualified
// Il2CppName: IsPartiallyQualified
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&System::IO::PathInternal::IsPartiallyQualified)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::PathInternal*), "IsPartiallyQualified", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::PathInternal::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::IO::PathInternal::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::PathInternal*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};