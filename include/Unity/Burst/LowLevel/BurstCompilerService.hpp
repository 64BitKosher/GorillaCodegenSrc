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
// Forward declaring namespace: Unity::Burst::LowLevel
namespace Unity::Burst::LowLevel {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Hash128
  struct Hash128;
}
// Completed forward declares
// Type namespace: Unity.Burst.LowLevel
namespace Unity::Burst::LowLevel {
  // Forward declaring type: BurstCompilerService
  class BurstCompilerService;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::Burst::LowLevel::BurstCompilerService);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::LowLevel::BurstCompilerService*, "Unity.Burst.LowLevel", "BurstCompilerService");
// Type namespace: Unity.Burst.LowLevel
namespace Unity::Burst::LowLevel {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Unity.Burst.LowLevel.BurstCompilerService
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [StaticAccessorAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  class BurstCompilerService : public ::Il2CppObject {
    public:
    // Nested type: ::Unity::Burst::LowLevel::BurstCompilerService::BurstLogType
    struct BurstLogType;
    // static public System.Int32 CompileAsyncDelegateMethod(System.Object delegateMethod, System.String compilerOptions)
    // Offset: 0x5479DD0
    static int CompileAsyncDelegateMethod(::Il2CppObject* delegateMethod, ::StringW compilerOptions);
    // static public System.Void* GetAsyncCompiledAsyncDelegateMethod(System.Int32 userID)
    // Offset: 0x5479E14
    static void* GetAsyncCompiledAsyncDelegateMethod(int userID);
    // static public System.Void* GetOrCreateSharedMemory(ref UnityEngine.Hash128 key, System.UInt32 size_of, System.UInt32 alignment)
    // Offset: 0x547964C
    static void* GetOrCreateSharedMemory(ByRef<::UnityEngine::Hash128> key, uint size_of, uint alignment);
    // static public System.Void Log(System.Void* userData, Unity.Burst.LowLevel.BurstCompilerService/BurstLogType logType, System.Byte* message, System.Byte* filename, System.Int32 lineNumber)
    // Offset: 0x5479E50
    static void Log(void* userData, ::Unity::Burst::LowLevel::BurstCompilerService::BurstLogType logType, uint8_t* message, uint8_t* filename, int lineNumber);
    // static public System.Void RuntimeLog(System.Void* userData, Unity.Burst.LowLevel.BurstCompilerService/BurstLogType logType, System.Byte* message, System.Byte* filename, System.Int32 lineNumber)
    // Offset: 0x5479EBC
    static void RuntimeLog(void* userData, ::Unity::Burst::LowLevel::BurstCompilerService::BurstLogType logType, uint8_t* message, uint8_t* filename, int lineNumber);
  }; // Unity.Burst.LowLevel.BurstCompilerService
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::Burst::LowLevel::BurstCompilerService::CompileAsyncDelegateMethod
// Il2CppName: CompileAsyncDelegateMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Il2CppObject*, ::StringW)>(&Unity::Burst::LowLevel::BurstCompilerService::CompileAsyncDelegateMethod)> {
  static const MethodInfo* get() {
    static auto* delegateMethod = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* compilerOptions = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Burst::LowLevel::BurstCompilerService*), "CompileAsyncDelegateMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{delegateMethod, compilerOptions});
  }
};
// Writing MetadataGetter for method: Unity::Burst::LowLevel::BurstCompilerService::GetAsyncCompiledAsyncDelegateMethod
// Il2CppName: GetAsyncCompiledAsyncDelegateMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(int)>(&Unity::Burst::LowLevel::BurstCompilerService::GetAsyncCompiledAsyncDelegateMethod)> {
  static const MethodInfo* get() {
    static auto* userID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Burst::LowLevel::BurstCompilerService*), "GetAsyncCompiledAsyncDelegateMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userID});
  }
};
// Writing MetadataGetter for method: Unity::Burst::LowLevel::BurstCompilerService::GetOrCreateSharedMemory
// Il2CppName: GetOrCreateSharedMemory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(ByRef<::UnityEngine::Hash128>, uint, uint)>(&Unity::Burst::LowLevel::BurstCompilerService::GetOrCreateSharedMemory)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("UnityEngine", "Hash128")->this_arg;
    static auto* size_of = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* alignment = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Burst::LowLevel::BurstCompilerService*), "GetOrCreateSharedMemory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, size_of, alignment});
  }
};
// Writing MetadataGetter for method: Unity::Burst::LowLevel::BurstCompilerService::Log
// Il2CppName: Log
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(void*, ::Unity::Burst::LowLevel::BurstCompilerService::BurstLogType, uint8_t*, uint8_t*, int)>(&Unity::Burst::LowLevel::BurstCompilerService::Log)> {
  static const MethodInfo* get() {
    static auto* userData = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Void"))->byval_arg;
    static auto* logType = &::il2cpp_utils::GetClassFromName("Unity.Burst.LowLevel", "BurstCompilerService/BurstLogType")->byval_arg;
    static auto* message = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* filename = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* lineNumber = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Burst::LowLevel::BurstCompilerService*), "Log", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userData, logType, message, filename, lineNumber});
  }
};
// Writing MetadataGetter for method: Unity::Burst::LowLevel::BurstCompilerService::RuntimeLog
// Il2CppName: RuntimeLog
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(void*, ::Unity::Burst::LowLevel::BurstCompilerService::BurstLogType, uint8_t*, uint8_t*, int)>(&Unity::Burst::LowLevel::BurstCompilerService::RuntimeLog)> {
  static const MethodInfo* get() {
    static auto* userData = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Void"))->byval_arg;
    static auto* logType = &::il2cpp_utils::GetClassFromName("Unity.Burst.LowLevel", "BurstCompilerService/BurstLogType")->byval_arg;
    static auto* message = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* filename = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* lineNumber = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Burst::LowLevel::BurstCompilerService*), "RuntimeLog", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userData, logType, message, filename, lineNumber});
  }
};
