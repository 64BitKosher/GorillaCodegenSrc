// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/BuiltinTypesSerializer
#include "UnityEngine/ResourceManagement/Util/BinaryStorageBuffer_BuiltinTypesSerializer.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::BinaryStorageBuffer::BuiltinTypesSerializer::ObjectToStringRemap, "UnityEngine.ResourceManagement.Util", "BinaryStorageBuffer/BuiltinTypesSerializer/ObjectToStringRemap");
// Type namespace: UnityEngine.ResourceManagement.Util
namespace UnityEngine::ResourceManagement::Util {
  // Size: 0x6
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/BuiltinTypesSerializer/ObjectToStringRemap
  // [TokenAttribute] Offset: FFFFFFFF
  struct BinaryStorageBuffer::BuiltinTypesSerializer::ObjectToStringRemap/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.UInt32 stringId
    // Size: 0x4
    // Offset: 0x0
    uint stringId;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.Char separator
    // Size: 0x2
    // Offset: 0x4
    ::Il2CppChar separator;
    // Field size check
    static_assert(sizeof(::Il2CppChar) == 0x2);
    public:
    // Creating value type constructor for type: ObjectToStringRemap
    constexpr ObjectToStringRemap(uint stringId_ = {}, ::Il2CppChar separator_ = {}) noexcept : stringId{stringId_}, separator{separator_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt32 stringId
    [[deprecated("Use field access instead!")]] uint& dyn_stringId();
    // Get instance field reference: public System.Char separator
    [[deprecated("Use field access instead!")]] ::Il2CppChar& dyn_separator();
  }; // UnityEngine.ResourceManagement.Util.BinaryStorageBuffer/BuiltinTypesSerializer/ObjectToStringRemap
  #pragma pack(pop)
  static check_size<sizeof(BinaryStorageBuffer::BuiltinTypesSerializer::ObjectToStringRemap), 4 + sizeof(::Il2CppChar)> __UnityEngine_ResourceManagement_Util_BinaryStorageBuffer_BuiltinTypesSerializer_ObjectToStringRemapSizeCheck;
  static_assert(sizeof(BinaryStorageBuffer::BuiltinTypesSerializer::ObjectToStringRemap) == 0x6);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"