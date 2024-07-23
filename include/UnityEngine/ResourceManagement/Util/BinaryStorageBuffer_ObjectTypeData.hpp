// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ResourceManagement.Util.BinaryStorageBuffer
#include "UnityEngine/ResourceManagement/Util/BinaryStorageBuffer.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::ObjectTypeData, "UnityEngine.ResourceManagement.Util", "BinaryStorageBuffer/ObjectTypeData");
// Type namespace: UnityEngine.ResourceManagement.Util
namespace UnityEngine::ResourceManagement::Util {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/ObjectTypeData
  // [TokenAttribute] Offset: FFFFFFFF
  struct BinaryStorageBuffer::ObjectTypeData/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.UInt32 typeId
    // Size: 0x4
    // Offset: 0x0
    uint typeId;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 objectId
    // Size: 0x4
    // Offset: 0x4
    uint objectId;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: ObjectTypeData
    constexpr ObjectTypeData(uint typeId_ = {}, uint objectId_ = {}) noexcept : typeId{typeId_}, objectId{objectId_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt32 typeId
    [[deprecated("Use field access instead!")]] uint& dyn_typeId();
    // Get instance field reference: public System.UInt32 objectId
    [[deprecated("Use field access instead!")]] uint& dyn_objectId();
  }; // UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/ObjectTypeData
  #pragma pack(pop)
  static check_size<sizeof(BinaryStorageBuffer::ObjectTypeData), 4 + sizeof(uint)> __UnityEngine_ResourceManagement_Util_BinaryStorageBuffer_ObjectTypeDataSizeCheck;
  static_assert(sizeof(BinaryStorageBuffer::ObjectTypeData) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
