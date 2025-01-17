// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: System::Runtime::InteropServices
namespace System::Runtime::InteropServices {
  // Forward declaring type: SafeHandle
  class SafeHandle;
}
// Forward declaring namespace: Backtrace::Unity::Common
namespace Backtrace::Unity::Common {
  // Forward declaring type: MiniDumpExceptionInformation
  struct MiniDumpExceptionInformation;
}
// Forward declaring namespace: Backtrace::Unity::Types
namespace Backtrace::Unity::Types {
  // Forward declaring type: MiniDumpType
  struct MiniDumpType;
  // Forward declaring type: MinidumpException
  struct MinidumpException;
}
// Completed forward declares
// Type namespace: Backtrace.Unity.Common
namespace Backtrace::Unity::Common {
  // Forward declaring type: MinidumpHelper
  class MinidumpHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Backtrace::Unity::Common::MinidumpHelper);
DEFINE_IL2CPP_ARG_TYPE(::Backtrace::Unity::Common::MinidumpHelper*, "Backtrace.Unity.Common", "MinidumpHelper");
// Type namespace: Backtrace.Unity.Common
namespace Backtrace::Unity::Common {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Backtrace.Unity.Common.MinidumpHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class MinidumpHelper : public ::Il2CppObject {
    public:
    // Get static field: static private readonly System.String[] Libraries
    static ::ArrayW<::StringW> _get_Libraries();
    // Set static field: static private readonly System.String[] Libraries
    static void _set_Libraries(::ArrayW<::StringW> value);
    // static private System.Boolean IsMemoryDumpAvailable()
    // Offset: 0x2A78188
    static bool IsMemoryDumpAvailable();
    // static System.Boolean MiniDumpWriteDump(System.IntPtr hProcess, System.UInt32 processId, System.Runtime.InteropServices.SafeHandle hFile, System.UInt32 dumpType, ref Backtrace.Unity.Common.MiniDumpExceptionInformation expParam, System.IntPtr userStreamParam, System.IntPtr callbackParam)
    // Offset: 0x2A7835C
    static bool MiniDumpWriteDump(::System::IntPtr hProcess, uint processId, ::System::Runtime::InteropServices::SafeHandle* hFile, uint dumpType, ByRef<::Backtrace::Unity::Common::MiniDumpExceptionInformation> expParam, ::System::IntPtr userStreamParam, ::System::IntPtr callbackParam);
    // static System.Boolean MiniDumpWriteDump(System.IntPtr hProcess, System.UInt32 processId, System.Runtime.InteropServices.SafeHandle hFile, System.UInt32 dumpType, System.IntPtr expParam, System.IntPtr userStreamParam, System.IntPtr callbackParam)
    // Offset: 0x2A784B4
    static bool MiniDumpWriteDump(::System::IntPtr hProcess, uint processId, ::System::Runtime::InteropServices::SafeHandle* hFile, uint dumpType, ::System::IntPtr expParam, ::System::IntPtr userStreamParam, ::System::IntPtr callbackParam);
    // static System.Boolean Write(System.String filePath, Backtrace.Unity.Types.MiniDumpType options, Backtrace.Unity.Types.MinidumpException exceptionType)
    // Offset: 0x2A6D8F8
    static bool Write(::StringW filePath, ::Backtrace::Unity::Types::MiniDumpType options, ::Backtrace::Unity::Types::MinidumpException exceptionType);
    // static private System.Void .cctor()
    // Offset: 0x2A785CC
    static void _cctor();
  }; // Backtrace.Unity.Common.MinidumpHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Backtrace::Unity::Common::MinidumpHelper::IsMemoryDumpAvailable
// Il2CppName: IsMemoryDumpAvailable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Backtrace::Unity::Common::MinidumpHelper::IsMemoryDumpAvailable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Common::MinidumpHelper*), "IsMemoryDumpAvailable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Common::MinidumpHelper::MiniDumpWriteDump
// Il2CppName: MiniDumpWriteDump
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, uint, ::System::Runtime::InteropServices::SafeHandle*, uint, ByRef<::Backtrace::Unity::Common::MiniDumpExceptionInformation>, ::System::IntPtr, ::System::IntPtr)>(&Backtrace::Unity::Common::MinidumpHelper::MiniDumpWriteDump)> {
  static const MethodInfo* get() {
    static auto* hProcess = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* processId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* hFile = &::il2cpp_utils::GetClassFromName("System.Runtime.InteropServices", "SafeHandle")->byval_arg;
    static auto* dumpType = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* expParam = &::il2cpp_utils::GetClassFromName("Backtrace.Unity.Common", "MiniDumpExceptionInformation")->this_arg;
    static auto* userStreamParam = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* callbackParam = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Common::MinidumpHelper*), "MiniDumpWriteDump", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hProcess, processId, hFile, dumpType, expParam, userStreamParam, callbackParam});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Common::MinidumpHelper::MiniDumpWriteDump
// Il2CppName: MiniDumpWriteDump
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, uint, ::System::Runtime::InteropServices::SafeHandle*, uint, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr)>(&Backtrace::Unity::Common::MinidumpHelper::MiniDumpWriteDump)> {
  static const MethodInfo* get() {
    static auto* hProcess = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* processId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* hFile = &::il2cpp_utils::GetClassFromName("System.Runtime.InteropServices", "SafeHandle")->byval_arg;
    static auto* dumpType = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* expParam = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* userStreamParam = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* callbackParam = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Common::MinidumpHelper*), "MiniDumpWriteDump", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hProcess, processId, hFile, dumpType, expParam, userStreamParam, callbackParam});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Common::MinidumpHelper::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::Backtrace::Unity::Types::MiniDumpType, ::Backtrace::Unity::Types::MinidumpException)>(&Backtrace::Unity::Common::MinidumpHelper::Write)> {
  static const MethodInfo* get() {
    static auto* filePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* options = &::il2cpp_utils::GetClassFromName("Backtrace.Unity.Types", "MiniDumpType")->byval_arg;
    static auto* exceptionType = &::il2cpp_utils::GetClassFromName("Backtrace.Unity.Types", "MinidumpException")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Common::MinidumpHelper*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{filePath, options, exceptionType});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Common::MinidumpHelper::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Backtrace::Unity::Common::MinidumpHelper::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Common::MinidumpHelper*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
