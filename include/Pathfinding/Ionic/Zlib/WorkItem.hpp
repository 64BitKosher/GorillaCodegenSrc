// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.Ionic.Zlib.CompressionLevel
#include "Pathfinding/Ionic/Zlib/CompressionLevel.hpp"
// Including type: Pathfinding.Ionic.Zlib.CompressionStrategy
#include "Pathfinding/Ionic/Zlib/CompressionStrategy.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding::Ionic::Zlib
namespace Pathfinding::Ionic::Zlib {
  // Forward declaring type: ZlibCodec
  class ZlibCodec;
}
// Completed forward declares
// Type namespace: Pathfinding.Ionic.Zlib
namespace Pathfinding::Ionic::Zlib {
  // Forward declaring type: WorkItem
  class WorkItem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::Ionic::Zlib::WorkItem);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Ionic::Zlib::WorkItem*, "Pathfinding.Ionic.Zlib", "WorkItem");
// Type namespace: Pathfinding.Ionic.Zlib
namespace Pathfinding::Ionic::Zlib {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Ionic.Zlib.WorkItem
  // [TokenAttribute] Offset: FFFFFFFF
  class WorkItem : public ::Il2CppObject {
    public:
    public:
    // public System.Byte[] buffer
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint8_t> buffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.Byte[] compressed
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> compressed;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.Int32 crc
    // Size: 0x4
    // Offset: 0x20
    int crc;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 index
    // Size: 0x4
    // Offset: 0x24
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 ordinal
    // Size: 0x4
    // Offset: 0x28
    int ordinal;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 inputBytesAvailable
    // Size: 0x4
    // Offset: 0x2C
    int inputBytesAvailable;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 compressedBytesAvailable
    // Size: 0x4
    // Offset: 0x30
    int compressedBytesAvailable;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: compressedBytesAvailable and: compressor
    char __padding6[0x4] = {};
    // public Pathfinding.Ionic.Zlib.ZlibCodec compressor
    // Size: 0x8
    // Offset: 0x38
    ::Pathfinding::Ionic::Zlib::ZlibCodec* compressor;
    // Field size check
    static_assert(sizeof(::Pathfinding::Ionic::Zlib::ZlibCodec*) == 0x8);
    public:
    // Get instance field reference: public System.Byte[] buffer
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_buffer();
    // Get instance field reference: public System.Byte[] compressed
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_compressed();
    // Get instance field reference: public System.Int32 crc
    [[deprecated("Use field access instead!")]] int& dyn_crc();
    // Get instance field reference: public System.Int32 index
    [[deprecated("Use field access instead!")]] int& dyn_index();
    // Get instance field reference: public System.Int32 ordinal
    [[deprecated("Use field access instead!")]] int& dyn_ordinal();
    // Get instance field reference: public System.Int32 inputBytesAvailable
    [[deprecated("Use field access instead!")]] int& dyn_inputBytesAvailable();
    // Get instance field reference: public System.Int32 compressedBytesAvailable
    [[deprecated("Use field access instead!")]] int& dyn_compressedBytesAvailable();
    // Get instance field reference: public Pathfinding.Ionic.Zlib.ZlibCodec compressor
    [[deprecated("Use field access instead!")]] ::Pathfinding::Ionic::Zlib::ZlibCodec*& dyn_compressor();
    // public System.Void .ctor(System.Int32 size, Pathfinding.Ionic.Zlib.CompressionLevel compressLevel, Pathfinding.Ionic.Zlib.CompressionStrategy strategy, System.Int32 ix)
    // Offset: 0x49BC278
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WorkItem* New_ctor(int size, ::Pathfinding::Ionic::Zlib::CompressionLevel compressLevel, ::Pathfinding::Ionic::Zlib::CompressionStrategy strategy, int ix) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Ionic::Zlib::WorkItem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WorkItem*, creationType>(size, compressLevel, strategy, ix)));
    }
  }; // Pathfinding.Ionic.Zlib.WorkItem
  #pragma pack(pop)
  static check_size<sizeof(WorkItem), 56 + sizeof(::Pathfinding::Ionic::Zlib::ZlibCodec*)> __Pathfinding_Ionic_Zlib_WorkItemSizeCheck;
  static_assert(sizeof(WorkItem) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::Ionic::Zlib::WorkItem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
