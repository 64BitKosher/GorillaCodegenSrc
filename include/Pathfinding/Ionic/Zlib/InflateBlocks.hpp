// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding::Ionic::Zlib
namespace Pathfinding::Ionic::Zlib {
  // Forward declaring type: InflateCodes
  class InflateCodes;
  // Forward declaring type: ZlibCodec
  class ZlibCodec;
  // Forward declaring type: InfTree
  class InfTree;
}
// Completed forward declares
// Type namespace: Pathfinding.Ionic.Zlib
namespace Pathfinding::Ionic::Zlib {
  // Forward declaring type: InflateBlocks
  class InflateBlocks;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::Ionic::Zlib::InflateBlocks);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Ionic::Zlib::InflateBlocks*, "Pathfinding.Ionic.Zlib", "InflateBlocks");
// Type namespace: Pathfinding.Ionic.Zlib
namespace Pathfinding::Ionic::Zlib {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Ionic.Zlib.InflateBlocks
  // [TokenAttribute] Offset: FFFFFFFF
  class InflateBlocks : public ::Il2CppObject {
    public:
    // Nested type: ::Pathfinding::Ionic::Zlib::InflateBlocks::InflateBlockMode
    struct InflateBlockMode;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: Pathfinding.Ionic.Zlib.InflateBlocks/InflateBlockMode
    // [TokenAttribute] Offset: FFFFFFFF
    struct InflateBlockMode/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: InflateBlockMode
      constexpr InflateBlockMode(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Pathfinding.Ionic.Zlib.InflateBlocks/InflateBlockMode TYPE
      static constexpr const int TYPE = 0;
      // Get static field: static public Pathfinding.Ionic.Zlib.InflateBlocks/InflateBlockMode TYPE
      static ::Pathfinding::Ionic::Zlib::InflateBlocks::InflateBlockMode _get_TYPE();
      // Set static field: static public Pathfinding.Ionic.Zlib.InflateBlocks/InflateBlockMode TYPE
      static void _set_TYPE(::Pathfinding::Ionic::Zlib::InflateBlocks::InflateBlockMode value);
      // static field const value: static public Pathfinding.Ionic.Zlib.InflateBlocks/InflateBlockMode LENS
      static constexpr const int LENS = 1;
      // Get static field: static public Pathfinding.Ionic.Zlib.InflateBlocks/InflateBlockMode LENS
      static ::Pathfinding::Ionic::Zlib::InflateBlocks::InflateBlockMode _get_LENS();
      // Set static field: static public Pathfinding.Ionic.Zlib.InflateBlocks/InflateBlockMode LENS
      static void _set_LENS(::Pathfinding::Ionic::Zlib::InflateBlocks::InflateBlockMode value);
      // static field const value: static public Pathfinding.Ionic.Zlib.InflateBlocks/InflateBlockMode STORED
      static constexpr const int STORED = 2;
      // Get static field: static public Pathfinding.Ionic.Zlib.InflateBlocks/InflateBlockMode STORED
      static ::Pathfinding::Ionic::Zlib::InflateBlocks::InflateBlockMode _get_STORED();
      // Set static field: static public Pathfinding.Ionic.Zlib.InflateBlocks/InflateBlockMode STORED
      static void _set_STORED(::Pathfinding::Ionic::Zlib::InflateBlocks::InflateBlockMode value);
      // static field const value: static public Pathfinding.Ionic.Zlib.InflateBlocks/InflateBlockMode TABLE
      static constexpr const int TABLE = 3;
      // Get static field: static public Pathfinding.Ionic.Zlib.InflateBlocks/InflateBlockMode TABLE
      static ::Pathfinding::Ionic::Zlib::InflateBlocks::InflateBlockMode _get_TABLE();
      // Set static field: static public Pathfinding.Ionic.Zlib.InflateBlocks/InflateBlockMode TABLE
      static void _set_TABLE(::Pathfinding::Ionic::Zlib::InflateBlocks::InflateBlockMode value);
      // static field const value: static public Pathfinding.Ionic.Zlib.InflateBlocks/InflateBlockMode BTREE
      static constexpr const int BTREE = 4;
      // Get static field: static public Pathfinding.Ionic.Zlib.InflateBlocks/InflateBlockMode BTREE
      static ::Pathfinding::Ionic::Zlib::InflateBlocks::InflateBlockMode _get_BTREE();
      // Set static field: static public Pathfinding.Ionic.Zlib.InflateBlocks/InflateBlockMode BTREE
      static void _set_BTREE(::Pathfinding::Ionic::Zlib::InflateBlocks::InflateBlockMode value);
      // static field const value: static public Pathfinding.Ionic.Zlib.InflateBlocks/InflateBlockMode DTREE
      static constexpr const int DTREE = 5;
      // Get static field: static public Pathfinding.Ionic.Zlib.InflateBlocks/InflateBlockMode DTREE
      static ::Pathfinding::Ionic::Zlib::InflateBlocks::InflateBlockMode _get_DTREE();
      // Set static field: static public Pathfinding.Ionic.Zlib.InflateBlocks/InflateBlockMode DTREE
      static void _set_DTREE(::Pathfinding::Ionic::Zlib::InflateBlocks::InflateBlockMode value);
      // static field const value: static public Pathfinding.Ionic.Zlib.InflateBlocks/InflateBlockMode CODES
      static constexpr const int CODES = 6;
      // Get static field: static public Pathfinding.Ionic.Zlib.InflateBlocks/InflateBlockMode CODES
      static ::Pathfinding::Ionic::Zlib::InflateBlocks::InflateBlockMode _get_CODES();
      // Set static field: static public Pathfinding.Ionic.Zlib.InflateBlocks/InflateBlockMode CODES
      static void _set_CODES(::Pathfinding::Ionic::Zlib::InflateBlocks::InflateBlockMode value);
      // static field const value: static public Pathfinding.Ionic.Zlib.InflateBlocks/InflateBlockMode DRY
      static constexpr const int DRY = 7;
      // Get static field: static public Pathfinding.Ionic.Zlib.InflateBlocks/InflateBlockMode DRY
      static ::Pathfinding::Ionic::Zlib::InflateBlocks::InflateBlockMode _get_DRY();
      // Set static field: static public Pathfinding.Ionic.Zlib.InflateBlocks/InflateBlockMode DRY
      static void _set_DRY(::Pathfinding::Ionic::Zlib::InflateBlocks::InflateBlockMode value);
      // static field const value: static public Pathfinding.Ionic.Zlib.InflateBlocks/InflateBlockMode DONE
      static constexpr const int DONE = 8;
      // Get static field: static public Pathfinding.Ionic.Zlib.InflateBlocks/InflateBlockMode DONE
      static ::Pathfinding::Ionic::Zlib::InflateBlocks::InflateBlockMode _get_DONE();
      // Set static field: static public Pathfinding.Ionic.Zlib.InflateBlocks/InflateBlockMode DONE
      static void _set_DONE(::Pathfinding::Ionic::Zlib::InflateBlocks::InflateBlockMode value);
      // static field const value: static public Pathfinding.Ionic.Zlib.InflateBlocks/InflateBlockMode BAD
      static constexpr const int BAD = 9;
      // Get static field: static public Pathfinding.Ionic.Zlib.InflateBlocks/InflateBlockMode BAD
      static ::Pathfinding::Ionic::Zlib::InflateBlocks::InflateBlockMode _get_BAD();
      // Set static field: static public Pathfinding.Ionic.Zlib.InflateBlocks/InflateBlockMode BAD
      static void _set_BAD(::Pathfinding::Ionic::Zlib::InflateBlocks::InflateBlockMode value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // Pathfinding.Ionic.Zlib.InflateBlocks/InflateBlockMode
    #pragma pack(pop)
    static check_size<sizeof(InflateBlocks::InflateBlockMode), 0 + sizeof(int)> __Pathfinding_Ionic_Zlib_InflateBlocks_InflateBlockModeSizeCheck;
    static_assert(sizeof(InflateBlocks::InflateBlockMode) == 0x4);
    public:
    // private Pathfinding.Ionic.Zlib.InflateBlocks/InflateBlockMode mode
    // Size: 0x4
    // Offset: 0x10
    ::Pathfinding::Ionic::Zlib::InflateBlocks::InflateBlockMode mode;
    // Field size check
    static_assert(sizeof(::Pathfinding::Ionic::Zlib::InflateBlocks::InflateBlockMode) == 0x4);
    // System.Int32 left
    // Size: 0x4
    // Offset: 0x14
    int left;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 table
    // Size: 0x4
    // Offset: 0x18
    int table;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 index
    // Size: 0x4
    // Offset: 0x1C
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32[] blens
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<int> blens;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // System.Int32[] bb
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<int> bb;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // System.Int32[] tb
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<int> tb;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // Pathfinding.Ionic.Zlib.InflateCodes codes
    // Size: 0x8
    // Offset: 0x38
    ::Pathfinding::Ionic::Zlib::InflateCodes* codes;
    // Field size check
    static_assert(sizeof(::Pathfinding::Ionic::Zlib::InflateCodes*) == 0x8);
    // System.Int32 last
    // Size: 0x4
    // Offset: 0x40
    int last;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: last and: codec
    char __padding8[0x4] = {};
    // Pathfinding.Ionic.Zlib.ZlibCodec _codec
    // Size: 0x8
    // Offset: 0x48
    ::Pathfinding::Ionic::Zlib::ZlibCodec* codec;
    // Field size check
    static_assert(sizeof(::Pathfinding::Ionic::Zlib::ZlibCodec*) == 0x8);
    // System.Int32 bitk
    // Size: 0x4
    // Offset: 0x50
    int bitk;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 bitb
    // Size: 0x4
    // Offset: 0x54
    int bitb;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32[] hufts
    // Size: 0x8
    // Offset: 0x58
    ::ArrayW<int> hufts;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // System.Byte[] window
    // Size: 0x8
    // Offset: 0x60
    ::ArrayW<uint8_t> window;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // System.Int32 end
    // Size: 0x4
    // Offset: 0x68
    int end;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 readAt
    // Size: 0x4
    // Offset: 0x6C
    int readAt;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 writeAt
    // Size: 0x4
    // Offset: 0x70
    int writeAt;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: writeAt and: checkfn
    char __padding16[0x4] = {};
    // System.Object checkfn
    // Size: 0x8
    // Offset: 0x78
    ::Il2CppObject* checkfn;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // System.UInt32 check
    // Size: 0x4
    // Offset: 0x80
    uint check;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: check and: inftree
    char __padding18[0x4] = {};
    // Pathfinding.Ionic.Zlib.InfTree inftree
    // Size: 0x8
    // Offset: 0x88
    ::Pathfinding::Ionic::Zlib::InfTree* inftree;
    // Field size check
    static_assert(sizeof(::Pathfinding::Ionic::Zlib::InfTree*) == 0x8);
    public:
    // Get static field: static readonly System.Int32[] border
    static ::ArrayW<int> _get_border();
    // Set static field: static readonly System.Int32[] border
    static void _set_border(::ArrayW<int> value);
    // Get instance field reference: private Pathfinding.Ionic.Zlib.InflateBlocks/InflateBlockMode mode
    [[deprecated("Use field access instead!")]] ::Pathfinding::Ionic::Zlib::InflateBlocks::InflateBlockMode& dyn_mode();
    // Get instance field reference: System.Int32 left
    [[deprecated("Use field access instead!")]] int& dyn_left();
    // Get instance field reference: System.Int32 table
    [[deprecated("Use field access instead!")]] int& dyn_table();
    // Get instance field reference: System.Int32 index
    [[deprecated("Use field access instead!")]] int& dyn_index();
    // Get instance field reference: System.Int32[] blens
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_blens();
    // Get instance field reference: System.Int32[] bb
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_bb();
    // Get instance field reference: System.Int32[] tb
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_tb();
    // Get instance field reference: Pathfinding.Ionic.Zlib.InflateCodes codes
    [[deprecated("Use field access instead!")]] ::Pathfinding::Ionic::Zlib::InflateCodes*& dyn_codes();
    // Get instance field reference: System.Int32 last
    [[deprecated("Use field access instead!")]] int& dyn_last();
    // Get instance field reference: Pathfinding.Ionic.Zlib.ZlibCodec _codec
    [[deprecated("Use field access instead!")]] ::Pathfinding::Ionic::Zlib::ZlibCodec*& dyn__codec();
    // Get instance field reference: System.Int32 bitk
    [[deprecated("Use field access instead!")]] int& dyn_bitk();
    // Get instance field reference: System.Int32 bitb
    [[deprecated("Use field access instead!")]] int& dyn_bitb();
    // Get instance field reference: System.Int32[] hufts
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_hufts();
    // Get instance field reference: System.Byte[] window
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_window();
    // Get instance field reference: System.Int32 end
    [[deprecated("Use field access instead!")]] int& dyn_end();
    // Get instance field reference: System.Int32 readAt
    [[deprecated("Use field access instead!")]] int& dyn_readAt();
    // Get instance field reference: System.Int32 writeAt
    [[deprecated("Use field access instead!")]] int& dyn_writeAt();
    // Get instance field reference: System.Object checkfn
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_checkfn();
    // Get instance field reference: System.UInt32 check
    [[deprecated("Use field access instead!")]] uint& dyn_check();
    // Get instance field reference: Pathfinding.Ionic.Zlib.InfTree inftree
    [[deprecated("Use field access instead!")]] ::Pathfinding::Ionic::Zlib::InfTree*& dyn_inftree();
    // System.Void .ctor(Pathfinding.Ionic.Zlib.ZlibCodec codec, System.Object checkfn, System.Int32 w)
    // Offset: 0x49B8ED4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InflateBlocks* New_ctor(::Pathfinding::Ionic::Zlib::ZlibCodec* codec, ::Il2CppObject* checkfn, int w) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Ionic::Zlib::InflateBlocks::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InflateBlocks*, creationType>(codec, checkfn, w)));
    }
    // static private System.Void .cctor()
    // Offset: 0x49B9108
    static void _cctor();
    // System.UInt32 Reset()
    // Offset: 0x49B906C
    uint Reset();
    // System.Int32 Process(System.Int32 r)
    // Offset: 0x49B91A8
    int Process(int r);
    // System.Void Free()
    // Offset: 0x49BAEF0
    void Free();
    // System.Int32 Flush(System.Int32 r)
    // Offset: 0x49BA28C
    int Flush(int r);
  }; // Pathfinding.Ionic.Zlib.InflateBlocks
  #pragma pack(pop)
  static check_size<sizeof(InflateBlocks), 136 + sizeof(::Pathfinding::Ionic::Zlib::InfTree*)> __Pathfinding_Ionic_Zlib_InflateBlocksSizeCheck;
  static_assert(sizeof(InflateBlocks) == 0x90);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Ionic::Zlib::InflateBlocks::InflateBlockMode, "Pathfinding.Ionic.Zlib", "InflateBlocks/InflateBlockMode");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::Ionic::Zlib::InflateBlocks::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::Ionic::Zlib::InflateBlocks::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Pathfinding::Ionic::Zlib::InflateBlocks::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zlib::InflateBlocks*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zlib::InflateBlocks::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Pathfinding::Ionic::Zlib::InflateBlocks::*)()>(&Pathfinding::Ionic::Zlib::InflateBlocks::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zlib::InflateBlocks*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zlib::InflateBlocks::Process
// Il2CppName: Process
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Pathfinding::Ionic::Zlib::InflateBlocks::*)(int)>(&Pathfinding::Ionic::Zlib::InflateBlocks::Process)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zlib::InflateBlocks*), "Process", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zlib::InflateBlocks::Free
// Il2CppName: Free
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Ionic::Zlib::InflateBlocks::*)()>(&Pathfinding::Ionic::Zlib::InflateBlocks::Free)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zlib::InflateBlocks*), "Free", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zlib::InflateBlocks::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Pathfinding::Ionic::Zlib::InflateBlocks::*)(int)>(&Pathfinding::Ionic::Zlib::InflateBlocks::Flush)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zlib::InflateBlocks*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r});
  }
};
