// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System.Numerics
namespace System::Numerics {
  // Forward declaring type: NumericsHelpers
  class NumericsHelpers;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Numerics::NumericsHelpers);
DEFINE_IL2CPP_ARG_TYPE(::System::Numerics::NumericsHelpers*, "System.Numerics", "NumericsHelpers");
// Type namespace: System.Numerics
namespace System::Numerics {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Numerics.NumericsHelpers
  // [TokenAttribute] Offset: FFFFFFFF
  class NumericsHelpers : public ::Il2CppObject {
    public:
    // static public System.Void GetDoubleParts(System.Double dbl, out System.Int32 sign, out System.Int32 exp, out System.UInt64 man, out System.Boolean fFinite)
    // Offset: 0x4CF95BC
    static void GetDoubleParts(double dbl, ByRef<int> sign, ByRef<int> exp, ByRef<uint64_t> man, ByRef<bool> fFinite);
    // static public System.Double GetDoubleFromParts(System.Int32 sign, System.Int32 exp, System.UInt64 man)
    // Offset: 0x4CFC7C8
    static double GetDoubleFromParts(int sign, int exp, uint64_t man);
    // static public System.Void DangerousMakeTwosComplement(System.UInt32[] d)
    // Offset: 0x4CF9EAC
    static void DangerousMakeTwosComplement(::ArrayW<uint> d);
    // static public System.UInt64 MakeUlong(System.UInt32 uHi, System.UInt32 uLo)
    // Offset: 0x4CFAE3C
    static uint64_t MakeUlong(uint uHi, uint uLo);
    // static public System.UInt32 Abs(System.Int32 a)
    // Offset: 0x4CFA710
    static uint Abs(int a);
    // static public System.UInt32 CombineHash(System.UInt32 u1, System.UInt32 u2)
    // Offset: 0x4D01C4C
    static uint CombineHash(uint u1, uint u2);
    // static public System.Int32 CombineHash(System.Int32 n1, System.Int32 n2)
    // Offset: 0x4CFAC94
    static int CombineHash(int n1, int n2);
    // static public System.Int32 CbitHighZero(System.UInt32 u)
    // Offset: 0x4CFC750
    static int CbitHighZero(uint u);
    // static public System.Int32 CbitHighZero(System.UInt64 uu)
    // Offset: 0x4D01C28
    static int CbitHighZero(uint64_t uu);
  }; // System.Numerics.NumericsHelpers
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Numerics::NumericsHelpers::GetDoubleParts
// Il2CppName: GetDoubleParts
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(double, ByRef<int>, ByRef<int>, ByRef<uint64_t>, ByRef<bool>)>(&System::Numerics::NumericsHelpers::GetDoubleParts)> {
  static const MethodInfo* get() {
    static auto* dbl = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* sign = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* exp = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* man = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    static auto* fFinite = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Numerics::NumericsHelpers*), "GetDoubleParts", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dbl, sign, exp, man, fFinite});
  }
};
// Writing MetadataGetter for method: System::Numerics::NumericsHelpers::GetDoubleFromParts
// Il2CppName: GetDoubleFromParts
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(int, int, uint64_t)>(&System::Numerics::NumericsHelpers::GetDoubleFromParts)> {
  static const MethodInfo* get() {
    static auto* sign = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* exp = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* man = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Numerics::NumericsHelpers*), "GetDoubleFromParts", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sign, exp, man});
  }
};
// Writing MetadataGetter for method: System::Numerics::NumericsHelpers::DangerousMakeTwosComplement
// Il2CppName: DangerousMakeTwosComplement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint>)>(&System::Numerics::NumericsHelpers::DangerousMakeTwosComplement)> {
  static const MethodInfo* get() {
    static auto* d = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Numerics::NumericsHelpers*), "DangerousMakeTwosComplement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{d});
  }
};
// Writing MetadataGetter for method: System::Numerics::NumericsHelpers::MakeUlong
// Il2CppName: MakeUlong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint, uint)>(&System::Numerics::NumericsHelpers::MakeUlong)> {
  static const MethodInfo* get() {
    static auto* uHi = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* uLo = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Numerics::NumericsHelpers*), "MakeUlong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uHi, uLo});
  }
};
// Writing MetadataGetter for method: System::Numerics::NumericsHelpers::Abs
// Il2CppName: Abs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(int)>(&System::Numerics::NumericsHelpers::Abs)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Numerics::NumericsHelpers*), "Abs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a});
  }
};
// Writing MetadataGetter for method: System::Numerics::NumericsHelpers::CombineHash
// Il2CppName: CombineHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint, uint)>(&System::Numerics::NumericsHelpers::CombineHash)> {
  static const MethodInfo* get() {
    static auto* u1 = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* u2 = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Numerics::NumericsHelpers*), "CombineHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{u1, u2});
  }
};
// Writing MetadataGetter for method: System::Numerics::NumericsHelpers::CombineHash
// Il2CppName: CombineHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int)>(&System::Numerics::NumericsHelpers::CombineHash)> {
  static const MethodInfo* get() {
    static auto* n1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* n2 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Numerics::NumericsHelpers*), "CombineHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n1, n2});
  }
};
// Writing MetadataGetter for method: System::Numerics::NumericsHelpers::CbitHighZero
// Il2CppName: CbitHighZero
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(uint)>(&System::Numerics::NumericsHelpers::CbitHighZero)> {
  static const MethodInfo* get() {
    static auto* u = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Numerics::NumericsHelpers*), "CbitHighZero", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{u});
  }
};
// Writing MetadataGetter for method: System::Numerics::NumericsHelpers::CbitHighZero
// Il2CppName: CbitHighZero
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(uint64_t)>(&System::Numerics::NumericsHelpers::CbitHighZero)> {
  static const MethodInfo* get() {
    static auto* uu = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Numerics::NumericsHelpers*), "CbitHighZero", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uu});
  }
};
