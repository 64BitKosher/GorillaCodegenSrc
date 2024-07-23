// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
  // Forward declaring type: OperatingSystem
  class OperatingSystem;
  // Forward declaring type: PlatformID
  struct PlatformID;
  // Forward declaring type: Version
  class Version;
  // Forward declaring type: IntPtr
  struct IntPtr;
  // Forward declaring type: Exception
  class Exception;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: Environment
  class Environment;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Environment);
DEFINE_IL2CPP_ARG_TYPE(::System::Environment*, "System", "Environment");
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Environment
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: FFFFFFFF
  class Environment : public ::Il2CppObject {
    public:
    // Nested type: ::System::Environment::SpecialFolder
    struct SpecialFolder;
    // Nested type: ::System::Environment::SpecialFolderOption
    struct SpecialFolderOption;
    // static field const value: static private System.String mono_corlib_version
    static constexpr const char* mono_corlib_version = "1A5E0066-58DC-428A-B21C-0AD6CDAE2789";
    // Get static field: static private System.String mono_corlib_version
    static ::StringW _get_mono_corlib_version();
    // Set static field: static private System.String mono_corlib_version
    static void _set_mono_corlib_version(::StringW value);
    // Get static field: static private System.String nl
    static ::StringW _get_nl();
    // Set static field: static private System.String nl
    static void _set_nl(::StringW value);
    // Get static field: static private System.OperatingSystem os
    static ::System::OperatingSystem* _get_os();
    // Set static field: static private System.OperatingSystem os
    static void _set_os(::System::OperatingSystem* value);
    // static System.String GetResourceString(System.String key)
    // Offset: 0x469FF14
    static ::StringW GetResourceString(::StringW key);
    // static System.String GetResourceString(System.String key, params System.Object[] values)
    // Offset: 0x46A1E50
    static ::StringW GetResourceString(::StringW key, ::ArrayW<::Il2CppObject*> values);
    // static System.String GetResourceStringEncodingName(System.Int32 codePage)
    // Offset: 0x46A3930
    static ::StringW GetResourceStringEncodingName(int codePage);
    // static public System.String get_CurrentDirectory()
    // Offset: 0x46A3AAC
    static ::StringW get_CurrentDirectory();
    // static public System.Int32 get_CurrentManagedThreadId()
    // Offset: 0x46A3AB4
    static int get_CurrentManagedThreadId();
    // static public System.Boolean get_HasShutdownStarted()
    // Offset: 0x46A3AD4
    static bool get_HasShutdownStarted();
    // static public System.String get_MachineName()
    // Offset: 0x46A3AD8
    static ::StringW get_MachineName();
    // static private System.String GetNewLine()
    // Offset: 0x46A3ADC
    static ::StringW GetNewLine();
    // static public System.String get_NewLine()
    // Offset: 0x46A3AE0
    static ::StringW get_NewLine();
    // static System.PlatformID get_Platform()
    // Offset: 0x46A3B58
    static ::System::PlatformID get_Platform();
    // static System.String GetOSVersionString()
    // Offset: 0x46A3B5C
    static ::StringW GetOSVersionString();
    // static public System.OperatingSystem get_OSVersion()
    // Offset: 0x46A3B60
    static ::System::OperatingSystem* get_OSVersion();
    // static System.Version CreateVersionFromString(System.String info)
    // Offset: 0x46A3C24
    static ::System::Version* CreateVersionFromString(::StringW info);
    // static public System.String get_StackTrace()
    // Offset: 0x46A3E40
    static ::StringW get_StackTrace();
    // static public System.Int32 get_TickCount()
    // Offset: 0x46A3EAC
    static int get_TickCount();
    // static public System.String get_UserDomainName()
    // Offset: 0x46A3EB0
    static ::StringW get_UserDomainName();
    // static public System.String get_UserName()
    // Offset: 0x46A3EB4
    static ::StringW get_UserName();
    // static public System.Version get_Version()
    // Offset: 0x46A3EB8
    static ::System::Version* get_Version();
    // static public System.Void Exit(System.Int32 exitCode)
    // Offset: 0x46A3F24
    static void Exit(int exitCode);
    // static public System.String[] GetCommandLineArgs()
    // Offset: 0x46A3F28
    static ::ArrayW<::StringW> GetCommandLineArgs();
    // static System.String internalGetEnvironmentVariable_native(System.IntPtr variable)
    // Offset: 0x46A3F2C
    static ::StringW internalGetEnvironmentVariable_native(::System::IntPtr variable);
    // static System.String internalGetEnvironmentVariable(System.String variable)
    // Offset: 0x46A3F30
    static ::StringW internalGetEnvironmentVariable(::StringW variable);
    // static public System.String GetEnvironmentVariable(System.String variable)
    // Offset: 0x46A3FF4
    static ::StringW GetEnvironmentVariable(::StringW variable);
    // static public System.Collections.IDictionary GetEnvironmentVariables()
    // Offset: 0x46A3FF8
    static ::System::Collections::IDictionary* GetEnvironmentVariables();
    // static public System.String GetFolderPath(System.Environment/SpecialFolder folder)
    // Offset: 0x46A40C8
    static ::StringW GetFolderPath(::System::Environment::SpecialFolder folder);
    // static private System.String GetWindowsFolderPath(System.Int32 folder)
    // Offset: 0x46A4104
    static ::StringW GetWindowsFolderPath(int folder);
    // static public System.String GetFolderPath(System.Environment/SpecialFolder folder, System.Environment/SpecialFolderOption option)
    // Offset: 0x46A40D0
    static ::StringW GetFolderPath(::System::Environment::SpecialFolder folder, ::System::Environment::SpecialFolderOption option);
    // static private System.String ReadXdgUserDir(System.String config_dir, System.String home_dir, System.String key, System.String fallback)
    // Offset: 0x46A45E0
    static ::StringW ReadXdgUserDir(::StringW config_dir, ::StringW home_dir, ::StringW key, ::StringW fallback);
    // static System.String UnixGetFolderPath(System.Environment/SpecialFolder folder, System.Environment/SpecialFolderOption option)
    // Offset: 0x46A4120
    static ::StringW UnixGetFolderPath(::System::Environment::SpecialFolder folder, ::System::Environment::SpecialFolderOption option);
    // static public System.Void FailFast(System.String message)
    // Offset: 0x46A4A58
    static void FailFast(::StringW message);
    // static public System.Void FailFast(System.String message, System.Exception exception)
    // Offset: 0x46A4A68
    static void FailFast(::StringW message, ::System::Exception* exception);
    // static System.Void FailFast(System.String message, System.Exception exception, System.String errorSource)
    // Offset: 0x46A4A64
    static void FailFast(::StringW message, ::System::Exception* exception, ::StringW errorSource);
    // static private System.Boolean GetIs64BitOperatingSystem()
    // Offset: 0x46A4A70
    static bool GetIs64BitOperatingSystem();
    // static public System.Boolean get_Is64BitOperatingSystem()
    // Offset: 0x46A4A74
    static bool get_Is64BitOperatingSystem();
    // static public System.Boolean get_Is64BitProcess()
    // Offset: 0x46A4A78
    static bool get_Is64BitProcess();
    // static public System.Int32 get_ProcessorCount()
    // Offset: 0x46A4A88
    static int get_ProcessorCount();
    // static System.Boolean get_IsRunningOnWindows()
    // Offset: 0x46A4108
    static bool get_IsRunningOnWindows();
    // static private System.String[] GetEnvironmentVariableNames()
    // Offset: 0x46A40C4
    static ::ArrayW<::StringW> GetEnvironmentVariableNames();
    // static System.String GetMachineConfigPath()
    // Offset: 0x46A4A8C
    static ::StringW GetMachineConfigPath();
    // static System.String internalGetHome()
    // Offset: 0x46A4A54
    static ::StringW internalGetHome();
    // static System.Int32 GetPageSize()
    // Offset: 0x46A4A90
    static int GetPageSize();
    // static System.Boolean get_IsUnix()
    // Offset: 0x46A4A94
    static bool get_IsUnix();
    // static System.String GetStackTrace(System.Exception e, System.Boolean needFileInfo)
    // Offset: 0x46A4ACC
    static ::StringW GetStackTrace(::System::Exception* e, bool needFileInfo);
  }; // System.Environment
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Environment::GetResourceString
// Il2CppName: GetResourceString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::Environment::GetResourceString)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Environment*), "GetResourceString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Environment::GetResourceString
// Il2CppName: GetResourceString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::ArrayW<::Il2CppObject*>)>(&System::Environment::GetResourceString)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Environment*), "GetResourceString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, values});
  }
};
// Writing MetadataGetter for method: System::Environment::GetResourceStringEncodingName
// Il2CppName: GetResourceStringEncodingName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int)>(&System::Environment::GetResourceStringEncodingName)> {
  static const MethodInfo* get() {
    static auto* codePage = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Environment*), "GetResourceStringEncodingName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{codePage});
  }
};
// Writing MetadataGetter for method: System::Environment::get_CurrentDirectory
// Il2CppName: get_CurrentDirectory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&System::Environment::get_CurrentDirectory)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Environment*), "get_CurrentDirectory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Environment::get_CurrentManagedThreadId
// Il2CppName: get_CurrentManagedThreadId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&System::Environment::get_CurrentManagedThreadId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Environment*), "get_CurrentManagedThreadId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Environment::get_HasShutdownStarted
// Il2CppName: get_HasShutdownStarted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Environment::get_HasShutdownStarted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Environment*), "get_HasShutdownStarted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Environment::get_MachineName
// Il2CppName: get_MachineName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&System::Environment::get_MachineName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Environment*), "get_MachineName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Environment::GetNewLine
// Il2CppName: GetNewLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&System::Environment::GetNewLine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Environment*), "GetNewLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Environment::get_NewLine
// Il2CppName: get_NewLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&System::Environment::get_NewLine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Environment*), "get_NewLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Environment::get_Platform
// Il2CppName: get_Platform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::PlatformID (*)()>(&System::Environment::get_Platform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Environment*), "get_Platform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Environment::GetOSVersionString
// Il2CppName: GetOSVersionString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&System::Environment::GetOSVersionString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Environment*), "GetOSVersionString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Environment::get_OSVersion
// Il2CppName: get_OSVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::OperatingSystem* (*)()>(&System::Environment::get_OSVersion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Environment*), "get_OSVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Environment::CreateVersionFromString
// Il2CppName: CreateVersionFromString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Version* (*)(::StringW)>(&System::Environment::CreateVersionFromString)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Environment*), "CreateVersionFromString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info});
  }
};
// Writing MetadataGetter for method: System::Environment::get_StackTrace
// Il2CppName: get_StackTrace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&System::Environment::get_StackTrace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Environment*), "get_StackTrace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Environment::get_TickCount
// Il2CppName: get_TickCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&System::Environment::get_TickCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Environment*), "get_TickCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Environment::get_UserDomainName
// Il2CppName: get_UserDomainName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&System::Environment::get_UserDomainName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Environment*), "get_UserDomainName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Environment::get_UserName
// Il2CppName: get_UserName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&System::Environment::get_UserName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Environment*), "get_UserName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Environment::get_Version
// Il2CppName: get_Version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Version* (*)()>(&System::Environment::get_Version)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Environment*), "get_Version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Environment::Exit
// Il2CppName: Exit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int)>(&System::Environment::Exit)> {
  static const MethodInfo* get() {
    static auto* exitCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Environment*), "Exit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exitCode});
  }
};
// Writing MetadataGetter for method: System::Environment::GetCommandLineArgs
// Il2CppName: GetCommandLineArgs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (*)()>(&System::Environment::GetCommandLineArgs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Environment*), "GetCommandLineArgs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Environment::internalGetEnvironmentVariable_native
// Il2CppName: internalGetEnvironmentVariable_native
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::IntPtr)>(&System::Environment::internalGetEnvironmentVariable_native)> {
  static const MethodInfo* get() {
    static auto* variable = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Environment*), "internalGetEnvironmentVariable_native", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{variable});
  }
};
// Writing MetadataGetter for method: System::Environment::internalGetEnvironmentVariable
// Il2CppName: internalGetEnvironmentVariable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::Environment::internalGetEnvironmentVariable)> {
  static const MethodInfo* get() {
    static auto* variable = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Environment*), "internalGetEnvironmentVariable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{variable});
  }
};
// Writing MetadataGetter for method: System::Environment::GetEnvironmentVariable
// Il2CppName: GetEnvironmentVariable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::Environment::GetEnvironmentVariable)> {
  static const MethodInfo* get() {
    static auto* variable = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Environment*), "GetEnvironmentVariable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{variable});
  }
};
// Writing MetadataGetter for method: System::Environment::GetEnvironmentVariables
// Il2CppName: GetEnvironmentVariables
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionary* (*)()>(&System::Environment::GetEnvironmentVariables)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Environment*), "GetEnvironmentVariables", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Environment::GetFolderPath
// Il2CppName: GetFolderPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Environment::SpecialFolder)>(&System::Environment::GetFolderPath)> {
  static const MethodInfo* get() {
    static auto* folder = &::il2cpp_utils::GetClassFromName("System", "Environment/SpecialFolder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Environment*), "GetFolderPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{folder});
  }
};
// Writing MetadataGetter for method: System::Environment::GetWindowsFolderPath
// Il2CppName: GetWindowsFolderPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int)>(&System::Environment::GetWindowsFolderPath)> {
  static const MethodInfo* get() {
    static auto* folder = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Environment*), "GetWindowsFolderPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{folder});
  }
};
// Writing MetadataGetter for method: System::Environment::GetFolderPath
// Il2CppName: GetFolderPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Environment::SpecialFolder, ::System::Environment::SpecialFolderOption)>(&System::Environment::GetFolderPath)> {
  static const MethodInfo* get() {
    static auto* folder = &::il2cpp_utils::GetClassFromName("System", "Environment/SpecialFolder")->byval_arg;
    static auto* option = &::il2cpp_utils::GetClassFromName("System", "Environment/SpecialFolderOption")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Environment*), "GetFolderPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{folder, option});
  }
};
// Writing MetadataGetter for method: System::Environment::ReadXdgUserDir
// Il2CppName: ReadXdgUserDir
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::StringW, ::StringW, ::StringW)>(&System::Environment::ReadXdgUserDir)> {
  static const MethodInfo* get() {
    static auto* config_dir = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* home_dir = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* fallback = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Environment*), "ReadXdgUserDir", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{config_dir, home_dir, key, fallback});
  }
};
// Writing MetadataGetter for method: System::Environment::UnixGetFolderPath
// Il2CppName: UnixGetFolderPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Environment::SpecialFolder, ::System::Environment::SpecialFolderOption)>(&System::Environment::UnixGetFolderPath)> {
  static const MethodInfo* get() {
    static auto* folder = &::il2cpp_utils::GetClassFromName("System", "Environment/SpecialFolder")->byval_arg;
    static auto* option = &::il2cpp_utils::GetClassFromName("System", "Environment/SpecialFolderOption")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Environment*), "UnixGetFolderPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{folder, option});
  }
};
// Writing MetadataGetter for method: System::Environment::FailFast
// Il2CppName: FailFast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&System::Environment::FailFast)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Environment*), "FailFast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: System::Environment::FailFast
// Il2CppName: FailFast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::System::Exception*)>(&System::Environment::FailFast)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* exception = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Environment*), "FailFast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, exception});
  }
};
// Writing MetadataGetter for method: System::Environment::FailFast
// Il2CppName: FailFast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::System::Exception*, ::StringW)>(&System::Environment::FailFast)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* exception = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    static auto* errorSource = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Environment*), "FailFast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, exception, errorSource});
  }
};
// Writing MetadataGetter for method: System::Environment::GetIs64BitOperatingSystem
// Il2CppName: GetIs64BitOperatingSystem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Environment::GetIs64BitOperatingSystem)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Environment*), "GetIs64BitOperatingSystem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Environment::get_Is64BitOperatingSystem
// Il2CppName: get_Is64BitOperatingSystem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Environment::get_Is64BitOperatingSystem)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Environment*), "get_Is64BitOperatingSystem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Environment::get_Is64BitProcess
// Il2CppName: get_Is64BitProcess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Environment::get_Is64BitProcess)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Environment*), "get_Is64BitProcess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Environment::get_ProcessorCount
// Il2CppName: get_ProcessorCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&System::Environment::get_ProcessorCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Environment*), "get_ProcessorCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Environment::get_IsRunningOnWindows
// Il2CppName: get_IsRunningOnWindows
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Environment::get_IsRunningOnWindows)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Environment*), "get_IsRunningOnWindows", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Environment::GetEnvironmentVariableNames
// Il2CppName: GetEnvironmentVariableNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (*)()>(&System::Environment::GetEnvironmentVariableNames)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Environment*), "GetEnvironmentVariableNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Environment::GetMachineConfigPath
// Il2CppName: GetMachineConfigPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&System::Environment::GetMachineConfigPath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Environment*), "GetMachineConfigPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Environment::internalGetHome
// Il2CppName: internalGetHome
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&System::Environment::internalGetHome)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Environment*), "internalGetHome", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Environment::GetPageSize
// Il2CppName: GetPageSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&System::Environment::GetPageSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Environment*), "GetPageSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Environment::get_IsUnix
// Il2CppName: get_IsUnix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Environment::get_IsUnix)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Environment*), "get_IsUnix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Environment::GetStackTrace
// Il2CppName: GetStackTrace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Exception*, bool)>(&System::Environment::GetStackTrace)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    static auto* needFileInfo = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Environment*), "GetStackTrace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e, needFileInfo});
  }
};
