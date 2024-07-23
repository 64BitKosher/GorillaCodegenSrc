// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnitySourceGeneratedAssemblyMonoScriptTypes_v1
#include "GlobalNamespace/UnitySourceGeneratedAssemblyMonoScriptTypes_v1_______________________________________________________________.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1_______________________________________________________________::MonoScriptData, "", "UnitySourceGeneratedAssemblyMonoScriptTypes_v1/MonoScriptData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x19
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnitySourceGeneratedAssemblyMonoScriptTypes_v1/MonoScriptData
  // [TokenAttribute] Offset: FFFFFFFF
  // [NullableContextAttribute] Offset: FFFFFFFF
  // [NullableAttribute] Offset: FFFFFFFF
  struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_______________________________________________________________::MonoScriptData/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Byte[] FilePathsData
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<uint8_t> FilePathsData;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.Byte[] TypesData
    // Size: 0x8
    // Offset: 0x8
    ::ArrayW<uint8_t> TypesData;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.Int32 TotalTypes
    // Size: 0x4
    // Offset: 0x10
    int TotalTypes;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 TotalFiles
    // Size: 0x4
    // Offset: 0x14
    int TotalFiles;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean IsEditorOnly
    // Size: 0x1
    // Offset: 0x18
    bool IsEditorOnly;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: MonoScriptData
    constexpr MonoScriptData(::ArrayW<uint8_t> FilePathsData_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), ::ArrayW<uint8_t> TypesData_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), int TotalTypes_ = {}, int TotalFiles_ = {}, bool IsEditorOnly_ = {}) noexcept : FilePathsData{FilePathsData_}, TypesData{TypesData_}, TotalTypes{TotalTypes_}, TotalFiles{TotalFiles_}, IsEditorOnly{IsEditorOnly_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Byte[] FilePathsData
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_FilePathsData();
    // Get instance field reference: public System.Byte[] TypesData
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_TypesData();
    // Get instance field reference: public System.Int32 TotalTypes
    [[deprecated("Use field access instead!")]] int& dyn_TotalTypes();
    // Get instance field reference: public System.Int32 TotalFiles
    [[deprecated("Use field access instead!")]] int& dyn_TotalFiles();
    // Get instance field reference: public System.Boolean IsEditorOnly
    [[deprecated("Use field access instead!")]] bool& dyn_IsEditorOnly();
  }; // UnitySourceGeneratedAssemblyMonoScriptTypes_v1/MonoScriptData
  #pragma pack(pop)
  static check_size<sizeof(UnitySourceGeneratedAssemblyMonoScriptTypes_v1_______________________________________________________________::MonoScriptData), 24 + sizeof(bool)> __GlobalNamespace_UnitySourceGeneratedAssemblyMonoScriptTypes_v1________________________________________________________________MonoScriptDataSizeCheck;
  static_assert(sizeof(UnitySourceGeneratedAssemblyMonoScriptTypes_v1_______________________________________________________________::MonoScriptData) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
