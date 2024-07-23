// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DigitalOpus.MB.Core.MB3_MeshCombinerSingle
#include "DigitalOpus/MB/Core/MB3_MeshCombinerSingle.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::SerializableIntArray);
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::SerializableIntArray*, "DigitalOpus.MB.Core", "MB3_MeshCombinerSingle/SerializableIntArray");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.MB3_MeshCombinerSingle/SerializableIntArray
  // [TokenAttribute] Offset: FFFFFFFF
  class MB3_MeshCombinerSingle::SerializableIntArray : public ::Il2CppObject {
    public:
    public:
    // public System.Int32[] data
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<int> data;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    public:
    // Creating conversion operator: operator ::ArrayW<int>
    constexpr operator ::ArrayW<int>() const noexcept {
      return data;
    }
    // Get instance field reference: public System.Int32[] data
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_data();
    // public System.Void .ctor()
    // Offset: 0x43C8A24
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MB3_MeshCombinerSingle::SerializableIntArray* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::SerializableIntArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MB3_MeshCombinerSingle::SerializableIntArray*, creationType>()));
    }
    // public System.Void .ctor(System.Int32 len)
    // Offset: 0x43C8A2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MB3_MeshCombinerSingle::SerializableIntArray* New_ctor(int len) {
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::SerializableIntArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MB3_MeshCombinerSingle::SerializableIntArray*, creationType>(len)));
    }
  }; // DigitalOpus.MB.Core.MB3_MeshCombinerSingle/SerializableIntArray
  #pragma pack(pop)
  static check_size<sizeof(MB3_MeshCombinerSingle::SerializableIntArray), 16 + sizeof(::ArrayW<int>)> __DigitalOpus_MB_Core_MB3_MeshCombinerSingle_SerializableIntArraySizeCheck;
  static_assert(sizeof(MB3_MeshCombinerSingle::SerializableIntArray) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_MeshCombinerSingle::SerializableIntArray::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_MeshCombinerSingle::SerializableIntArray::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
