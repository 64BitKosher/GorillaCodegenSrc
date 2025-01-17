// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding::Ionic::Zlib
namespace Pathfinding::Ionic::Zlib {
  // Forward declaring type: InflateBlocks
  class InflateBlocks;
  // Forward declaring type: ZlibCodec
  class ZlibCodec;
}
// Completed forward declares
// Type namespace: Pathfinding.Ionic.Zlib
namespace Pathfinding::Ionic::Zlib {
  // Forward declaring type: InflateCodes
  class InflateCodes;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::Ionic::Zlib::InflateCodes);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Ionic::Zlib::InflateCodes*, "Pathfinding.Ionic.Zlib", "InflateCodes");
// Type namespace: Pathfinding.Ionic.Zlib
namespace Pathfinding::Ionic::Zlib {
  // Size: 0x54
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Ionic.Zlib.InflateCodes
  // [TokenAttribute] Offset: FFFFFFFF
  class InflateCodes : public ::Il2CppObject {
    public:
    public:
    // System.Int32 mode
    // Size: 0x4
    // Offset: 0x10
    int mode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 len
    // Size: 0x4
    // Offset: 0x14
    int len;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32[] tree
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<int> tree;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // System.Int32 tree_index
    // Size: 0x4
    // Offset: 0x20
    int tree_index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 need
    // Size: 0x4
    // Offset: 0x24
    int need;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 lit
    // Size: 0x4
    // Offset: 0x28
    int lit;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 bitsToGet
    // Size: 0x4
    // Offset: 0x2C
    int bitsToGet;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 dist
    // Size: 0x4
    // Offset: 0x30
    int dist;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Byte lbits
    // Size: 0x1
    // Offset: 0x34
    uint8_t lbits;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // System.Byte dbits
    // Size: 0x1
    // Offset: 0x35
    uint8_t dbits;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Padding between fields: dbits and: ltree
    char __padding9[0x2] = {};
    // System.Int32[] ltree
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<int> ltree;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // System.Int32 ltree_index
    // Size: 0x4
    // Offset: 0x40
    int ltree_index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: ltree_index and: dtree
    char __padding11[0x4] = {};
    // System.Int32[] dtree
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<int> dtree;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // System.Int32 dtree_index
    // Size: 0x4
    // Offset: 0x50
    int dtree_index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: System.Int32 mode
    [[deprecated("Use field access instead!")]] int& dyn_mode();
    // Get instance field reference: System.Int32 len
    [[deprecated("Use field access instead!")]] int& dyn_len();
    // Get instance field reference: System.Int32[] tree
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_tree();
    // Get instance field reference: System.Int32 tree_index
    [[deprecated("Use field access instead!")]] int& dyn_tree_index();
    // Get instance field reference: System.Int32 need
    [[deprecated("Use field access instead!")]] int& dyn_need();
    // Get instance field reference: System.Int32 lit
    [[deprecated("Use field access instead!")]] int& dyn_lit();
    // Get instance field reference: System.Int32 bitsToGet
    [[deprecated("Use field access instead!")]] int& dyn_bitsToGet();
    // Get instance field reference: System.Int32 dist
    [[deprecated("Use field access instead!")]] int& dyn_dist();
    // Get instance field reference: System.Byte lbits
    [[deprecated("Use field access instead!")]] uint8_t& dyn_lbits();
    // Get instance field reference: System.Byte dbits
    [[deprecated("Use field access instead!")]] uint8_t& dyn_dbits();
    // Get instance field reference: System.Int32[] ltree
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_ltree();
    // Get instance field reference: System.Int32 ltree_index
    [[deprecated("Use field access instead!")]] int& dyn_ltree_index();
    // Get instance field reference: System.Int32[] dtree
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_dtree();
    // Get instance field reference: System.Int32 dtree_index
    [[deprecated("Use field access instead!")]] int& dyn_dtree_index();
    // System.Void .ctor()
    // Offset: 0x49B9064
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InflateCodes* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Ionic::Zlib::InflateCodes::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InflateCodes*, creationType>()));
    }
    // System.Void Init(System.Int32 bl, System.Int32 bd, System.Int32[] tl, System.Int32 tl_index, System.Int32[] td, System.Int32 td_index)
    // Offset: 0x49BA424
    void Init(int bl, int bd, ::ArrayW<int> tl, int tl_index, ::ArrayW<int> td, int td_index);
    // System.Int32 Process(Pathfinding.Ionic.Zlib.InflateBlocks blocks, System.Int32 r)
    // Offset: 0x49BA48C
    int Process(::Pathfinding::Ionic::Zlib::InflateBlocks* blocks, int r);
    // System.Int32 InflateFast(System.Int32 bl, System.Int32 bd, System.Int32[] tl, System.Int32 tl_index, System.Int32[] td, System.Int32 td_index, Pathfinding.Ionic.Zlib.InflateBlocks s, Pathfinding.Ionic.Zlib.ZlibCodec z)
    // Offset: 0x49BAFC0
    int InflateFast(int bl, int bd, ::ArrayW<int> tl, int tl_index, ::ArrayW<int> td, int td_index, ::Pathfinding::Ionic::Zlib::InflateBlocks* s, ::Pathfinding::Ionic::Zlib::ZlibCodec* z);
  }; // Pathfinding.Ionic.Zlib.InflateCodes
  #pragma pack(pop)
  static check_size<sizeof(InflateCodes), 80 + sizeof(int)> __Pathfinding_Ionic_Zlib_InflateCodesSizeCheck;
  static_assert(sizeof(InflateCodes) == 0x54);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::Ionic::Zlib::InflateCodes::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::Ionic::Zlib::InflateCodes::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Ionic::Zlib::InflateCodes::*)(int, int, ::ArrayW<int>, int, ::ArrayW<int>, int)>(&Pathfinding::Ionic::Zlib::InflateCodes::Init)> {
  static const MethodInfo* get() {
    static auto* bl = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bd = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* tl = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* tl_index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* td = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* td_index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zlib::InflateCodes*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bl, bd, tl, tl_index, td, td_index});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zlib::InflateCodes::Process
// Il2CppName: Process
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Pathfinding::Ionic::Zlib::InflateCodes::*)(::Pathfinding::Ionic::Zlib::InflateBlocks*, int)>(&Pathfinding::Ionic::Zlib::InflateCodes::Process)> {
  static const MethodInfo* get() {
    static auto* blocks = &::il2cpp_utils::GetClassFromName("Pathfinding.Ionic.Zlib", "InflateBlocks")->byval_arg;
    static auto* r = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zlib::InflateCodes*), "Process", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{blocks, r});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zlib::InflateCodes::InflateFast
// Il2CppName: InflateFast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Pathfinding::Ionic::Zlib::InflateCodes::*)(int, int, ::ArrayW<int>, int, ::ArrayW<int>, int, ::Pathfinding::Ionic::Zlib::InflateBlocks*, ::Pathfinding::Ionic::Zlib::ZlibCodec*)>(&Pathfinding::Ionic::Zlib::InflateCodes::InflateFast)> {
  static const MethodInfo* get() {
    static auto* bl = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bd = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* tl = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* tl_index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* td = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* td_index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* s = &::il2cpp_utils::GetClassFromName("Pathfinding.Ionic.Zlib", "InflateBlocks")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("Pathfinding.Ionic.Zlib", "ZlibCodec")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zlib::InflateCodes*), "InflateFast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bl, bd, tl, tl_index, td, td_index, s, z});
  }
};
