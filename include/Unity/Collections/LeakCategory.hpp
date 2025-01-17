// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Unity.Collections
namespace Unity::Collections {
  // Forward declaring type: LeakCategory
  struct LeakCategory;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LeakCategory, "Unity.Collections", "LeakCategory");
// Type namespace: Unity.Collections
namespace Unity::Collections {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Unity.Collections.LeakCategory
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: FFFFFFFF
  struct LeakCategory/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: LeakCategory
    constexpr LeakCategory(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Unity.Collections.LeakCategory Invalid
    static constexpr const int Invalid = 0;
    // Get static field: static public Unity.Collections.LeakCategory Invalid
    static ::Unity::Collections::LeakCategory _get_Invalid();
    // Set static field: static public Unity.Collections.LeakCategory Invalid
    static void _set_Invalid(::Unity::Collections::LeakCategory value);
    // static field const value: static public Unity.Collections.LeakCategory Malloc
    static constexpr const int Malloc = 1;
    // Get static field: static public Unity.Collections.LeakCategory Malloc
    static ::Unity::Collections::LeakCategory _get_Malloc();
    // Set static field: static public Unity.Collections.LeakCategory Malloc
    static void _set_Malloc(::Unity::Collections::LeakCategory value);
    // static field const value: static public Unity.Collections.LeakCategory TempJob
    static constexpr const int TempJob = 2;
    // Get static field: static public Unity.Collections.LeakCategory TempJob
    static ::Unity::Collections::LeakCategory _get_TempJob();
    // Set static field: static public Unity.Collections.LeakCategory TempJob
    static void _set_TempJob(::Unity::Collections::LeakCategory value);
    // static field const value: static public Unity.Collections.LeakCategory Persistent
    static constexpr const int Persistent = 3;
    // Get static field: static public Unity.Collections.LeakCategory Persistent
    static ::Unity::Collections::LeakCategory _get_Persistent();
    // Set static field: static public Unity.Collections.LeakCategory Persistent
    static void _set_Persistent(::Unity::Collections::LeakCategory value);
    // static field const value: static public Unity.Collections.LeakCategory LightProbesQuery
    static constexpr const int LightProbesQuery = 4;
    // Get static field: static public Unity.Collections.LeakCategory LightProbesQuery
    static ::Unity::Collections::LeakCategory _get_LightProbesQuery();
    // Set static field: static public Unity.Collections.LeakCategory LightProbesQuery
    static void _set_LightProbesQuery(::Unity::Collections::LeakCategory value);
    // static field const value: static public Unity.Collections.LeakCategory NativeTest
    static constexpr const int NativeTest = 5;
    // Get static field: static public Unity.Collections.LeakCategory NativeTest
    static ::Unity::Collections::LeakCategory _get_NativeTest();
    // Set static field: static public Unity.Collections.LeakCategory NativeTest
    static void _set_NativeTest(::Unity::Collections::LeakCategory value);
    // static field const value: static public Unity.Collections.LeakCategory MeshDataArray
    static constexpr const int MeshDataArray = 6;
    // Get static field: static public Unity.Collections.LeakCategory MeshDataArray
    static ::Unity::Collections::LeakCategory _get_MeshDataArray();
    // Set static field: static public Unity.Collections.LeakCategory MeshDataArray
    static void _set_MeshDataArray(::Unity::Collections::LeakCategory value);
    // static field const value: static public Unity.Collections.LeakCategory TransformAccessArray
    static constexpr const int TransformAccessArray = 7;
    // Get static field: static public Unity.Collections.LeakCategory TransformAccessArray
    static ::Unity::Collections::LeakCategory _get_TransformAccessArray();
    // Set static field: static public Unity.Collections.LeakCategory TransformAccessArray
    static void _set_TransformAccessArray(::Unity::Collections::LeakCategory value);
    // static field const value: static public Unity.Collections.LeakCategory NavMeshQuery
    static constexpr const int NavMeshQuery = 8;
    // Get static field: static public Unity.Collections.LeakCategory NavMeshQuery
    static ::Unity::Collections::LeakCategory _get_NavMeshQuery();
    // Set static field: static public Unity.Collections.LeakCategory NavMeshQuery
    static void _set_NavMeshQuery(::Unity::Collections::LeakCategory value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Unity.Collections.LeakCategory
  #pragma pack(pop)
  static check_size<sizeof(LeakCategory), 0 + sizeof(int)> __Unity_Collections_LeakCategorySizeCheck;
  static_assert(sizeof(LeakCategory) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
