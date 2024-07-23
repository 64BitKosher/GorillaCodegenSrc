// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Ionic::Zlib
namespace Ionic::Zlib {
  // Forward declaring type: StaticTree
  class StaticTree;
  // Forward declaring type: DeflateManager
  class DeflateManager;
}
// Completed forward declares
// Type namespace: Ionic.Zlib
namespace Ionic::Zlib {
  // Forward declaring type: ZTree
  class ZTree;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Ionic::Zlib::ZTree);
DEFINE_IL2CPP_ARG_TYPE(::Ionic::Zlib::ZTree*, "Ionic.Zlib", "ZTree");
// Type namespace: Ionic.Zlib
namespace Ionic::Zlib {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Ionic.Zlib.ZTree
  // [TokenAttribute] Offset: FFFFFFFF
  class ZTree : public ::Il2CppObject {
    public:
    public:
    // System.Int16[] dyn_tree
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<int16_t> dyn_tree;
    // Field size check
    static_assert(sizeof(::ArrayW<int16_t>) == 0x8);
    // System.Int32 max_code
    // Size: 0x4
    // Offset: 0x18
    int max_code;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: max_code and: staticTree
    char __padding1[0x4] = {};
    // Ionic.Zlib.StaticTree staticTree
    // Size: 0x8
    // Offset: 0x20
    ::Ionic::Zlib::StaticTree* staticTree;
    // Field size check
    static_assert(sizeof(::Ionic::Zlib::StaticTree*) == 0x8);
    public:
    // Get static field: static private readonly System.Int32 HEAP_SIZE
    static int _get_HEAP_SIZE();
    // Set static field: static private readonly System.Int32 HEAP_SIZE
    static void _set_HEAP_SIZE(int value);
    // Get static field: static readonly System.Int32[] ExtraLengthBits
    static ::ArrayW<int> _get_ExtraLengthBits();
    // Set static field: static readonly System.Int32[] ExtraLengthBits
    static void _set_ExtraLengthBits(::ArrayW<int> value);
    // Get static field: static readonly System.Int32[] ExtraDistanceBits
    static ::ArrayW<int> _get_ExtraDistanceBits();
    // Set static field: static readonly System.Int32[] ExtraDistanceBits
    static void _set_ExtraDistanceBits(::ArrayW<int> value);
    // Get static field: static readonly System.Int32[] extra_blbits
    static ::ArrayW<int> _get_extra_blbits();
    // Set static field: static readonly System.Int32[] extra_blbits
    static void _set_extra_blbits(::ArrayW<int> value);
    // Get static field: static readonly System.SByte[] bl_order
    static ::ArrayW<int8_t> _get_bl_order();
    // Set static field: static readonly System.SByte[] bl_order
    static void _set_bl_order(::ArrayW<int8_t> value);
    // static field const value: static System.Int32 Buf_size
    static constexpr const int Buf_size = 16;
    // Get static field: static System.Int32 Buf_size
    static int _get_Buf_size();
    // Set static field: static System.Int32 Buf_size
    static void _set_Buf_size(int value);
    // Get static field: static private readonly System.SByte[] _dist_code
    static ::ArrayW<int8_t> _get__dist_code();
    // Set static field: static private readonly System.SByte[] _dist_code
    static void _set__dist_code(::ArrayW<int8_t> value);
    // Get static field: static readonly System.SByte[] LengthCode
    static ::ArrayW<int8_t> _get_LengthCode();
    // Set static field: static readonly System.SByte[] LengthCode
    static void _set_LengthCode(::ArrayW<int8_t> value);
    // Get static field: static readonly System.Int32[] LengthBase
    static ::ArrayW<int> _get_LengthBase();
    // Set static field: static readonly System.Int32[] LengthBase
    static void _set_LengthBase(::ArrayW<int> value);
    // Get static field: static readonly System.Int32[] DistanceBase
    static ::ArrayW<int> _get_DistanceBase();
    // Set static field: static readonly System.Int32[] DistanceBase
    static void _set_DistanceBase(::ArrayW<int> value);
    // Get instance field reference: System.Int16[] dyn_tree
    [[deprecated("Use field access instead!")]] ::ArrayW<int16_t>& dyn_dyn_tree();
    // Get instance field reference: System.Int32 max_code
    [[deprecated("Use field access instead!")]] int& dyn_max_code();
    // Get instance field reference: Ionic.Zlib.StaticTree staticTree
    [[deprecated("Use field access instead!")]] ::Ionic::Zlib::StaticTree*& dyn_staticTree();
    // static System.Int32 DistanceCode(System.Int32 dist)
    // Offset: 0x4ABC218
    static int DistanceCode(int dist);
    // System.Void gen_bitlen(Ionic.Zlib.DeflateManager s)
    // Offset: 0x4ABC2C0
    void gen_bitlen(::Ionic::Zlib::DeflateManager* s);
    // System.Void build_tree(Ionic.Zlib.DeflateManager s)
    // Offset: 0x4ABC648
    void build_tree(::Ionic::Zlib::DeflateManager* s);
    // static System.Void gen_codes(System.Int16[] tree, System.Int32 max_code, System.Int16[] bl_count)
    // Offset: 0x4ABCAD8
    static void gen_codes(::ArrayW<int16_t> tree, int max_code, ::ArrayW<int16_t> bl_count);
    // static System.Int32 bi_reverse(System.Int32 code, System.Int32 len)
    // Offset: 0x4ABCCB0
    static int bi_reverse(int code, int len);
    // public System.Void .ctor()
    // Offset: 0x4ABCCD8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ZTree* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Ionic::Zlib::ZTree::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ZTree*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x4ABCCE0
    static void _cctor();
  }; // Ionic.Zlib.ZTree
  #pragma pack(pop)
  static check_size<sizeof(ZTree), 32 + sizeof(::Ionic::Zlib::StaticTree*)> __Ionic_Zlib_ZTreeSizeCheck;
  static_assert(sizeof(ZTree) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Ionic::Zlib::ZTree::DistanceCode
// Il2CppName: DistanceCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&Ionic::Zlib::ZTree::DistanceCode)> {
  static const MethodInfo* get() {
    static auto* dist = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Ionic::Zlib::ZTree*), "DistanceCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dist});
  }
};
// Writing MetadataGetter for method: Ionic::Zlib::ZTree::gen_bitlen
// Il2CppName: gen_bitlen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Ionic::Zlib::ZTree::*)(::Ionic::Zlib::DeflateManager*)>(&Ionic::Zlib::ZTree::gen_bitlen)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("Ionic.Zlib", "DeflateManager")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Ionic::Zlib::ZTree*), "gen_bitlen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: Ionic::Zlib::ZTree::build_tree
// Il2CppName: build_tree
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Ionic::Zlib::ZTree::*)(::Ionic::Zlib::DeflateManager*)>(&Ionic::Zlib::ZTree::build_tree)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("Ionic.Zlib", "DeflateManager")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Ionic::Zlib::ZTree*), "build_tree", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: Ionic::Zlib::ZTree::gen_codes
// Il2CppName: gen_codes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<int16_t>, int, ::ArrayW<int16_t>)>(&Ionic::Zlib::ZTree::gen_codes)> {
  static const MethodInfo* get() {
    static auto* tree = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int16"), 1)->byval_arg;
    static auto* max_code = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bl_count = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int16"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Ionic::Zlib::ZTree*), "gen_codes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tree, max_code, bl_count});
  }
};
// Writing MetadataGetter for method: Ionic::Zlib::ZTree::bi_reverse
// Il2CppName: bi_reverse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int)>(&Ionic::Zlib::ZTree::bi_reverse)> {
  static const MethodInfo* get() {
    static auto* code = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Ionic::Zlib::ZTree*), "bi_reverse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{code, len});
  }
};
// Writing MetadataGetter for method: Ionic::Zlib::ZTree::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Ionic::Zlib::ZTree::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Ionic::Zlib::ZTree::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Ionic::Zlib::ZTree*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};