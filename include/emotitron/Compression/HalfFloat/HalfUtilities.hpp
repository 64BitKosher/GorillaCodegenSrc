// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: emotitron::Compression::HalfFloat
namespace emotitron::Compression::HalfFloat {
}
// Completed forward declares
// Type namespace: emotitron.Compression.HalfFloat
namespace emotitron::Compression::HalfFloat {
  // Forward declaring type: HalfUtilities
  class HalfUtilities;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::emotitron::Compression::HalfFloat::HalfUtilities);
DEFINE_IL2CPP_ARG_TYPE(::emotitron::Compression::HalfFloat::HalfUtilities*, "emotitron.Compression.HalfFloat", "HalfUtilities");
// Type namespace: emotitron.Compression.HalfFloat
namespace emotitron::Compression::HalfFloat {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: emotitron.Compression.HalfFloat.HalfUtilities
  // [TokenAttribute] Offset: FFFFFFFF
  class HalfUtilities : public ::Il2CppObject {
    public:
    // Nested type: ::emotitron::Compression::HalfFloat::HalfUtilities::FloatToUint
    struct FloatToUint;
    // Get static field: static private readonly System.UInt32[] HalfToFloatMantissaTable
    static ::ArrayW<uint> _get_HalfToFloatMantissaTable();
    // Set static field: static private readonly System.UInt32[] HalfToFloatMantissaTable
    static void _set_HalfToFloatMantissaTable(::ArrayW<uint> value);
    // Get static field: static private readonly System.UInt32[] HalfToFloatExponentTable
    static ::ArrayW<uint> _get_HalfToFloatExponentTable();
    // Set static field: static private readonly System.UInt32[] HalfToFloatExponentTable
    static void _set_HalfToFloatExponentTable(::ArrayW<uint> value);
    // Get static field: static private readonly System.UInt32[] HalfToFloatOffsetTable
    static ::ArrayW<uint> _get_HalfToFloatOffsetTable();
    // Set static field: static private readonly System.UInt32[] HalfToFloatOffsetTable
    static void _set_HalfToFloatOffsetTable(::ArrayW<uint> value);
    // Get static field: static private readonly System.UInt16[] FloatToHalfBaseTable
    static ::ArrayW<uint16_t> _get_FloatToHalfBaseTable();
    // Set static field: static private readonly System.UInt16[] FloatToHalfBaseTable
    static void _set_FloatToHalfBaseTable(::ArrayW<uint16_t> value);
    // Get static field: static private readonly System.Byte[] FloatToHalfShiftTable
    static ::ArrayW<uint8_t> _get_FloatToHalfShiftTable();
    // Set static field: static private readonly System.Byte[] FloatToHalfShiftTable
    static void _set_FloatToHalfShiftTable(::ArrayW<uint8_t> value);
    // static private System.Void .cctor()
    // Offset: 0x28CBC48
    static void _cctor();
    // static public System.Single Unpack(System.UInt16 value)
    // Offset: 0x28CA4B4
    static float Unpack(uint16_t value);
    // static public System.UInt16 Pack(System.Single value)
    // Offset: 0x28CA314
    static uint16_t Pack(float value);
  }; // emotitron.Compression.HalfFloat.HalfUtilities
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: emotitron::Compression::HalfFloat::HalfUtilities::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&emotitron::Compression::HalfFloat::HalfUtilities::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(emotitron::Compression::HalfFloat::HalfUtilities*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: emotitron::Compression::HalfFloat::HalfUtilities::Unpack
// Il2CppName: Unpack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(uint16_t)>(&emotitron::Compression::HalfFloat::HalfUtilities::Unpack)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(emotitron::Compression::HalfFloat::HalfUtilities*), "Unpack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: emotitron::Compression::HalfFloat::HalfUtilities::Pack
// Il2CppName: Pack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (*)(float)>(&emotitron::Compression::HalfFloat::HalfUtilities::Pack)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(emotitron::Compression::HalfFloat::HalfUtilities*), "Pack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
