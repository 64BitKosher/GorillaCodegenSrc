// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DateTime
  struct DateTime;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: StaticHash
  class StaticHash;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::StaticHash);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StaticHash*, "", "StaticHash");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: StaticHash
  // [TokenAttribute] Offset: FFFFFFFF
  class StaticHash : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::StaticHash::SingleInt32
    struct SingleInt32;
    // Nested type: ::GlobalNamespace::StaticHash::DoubleInt64
    struct DoubleInt64;
    // static public System.Int32 Calculate(System.Int32 i)
    // Offset: 0x277F13C
    static int Calculate(int i);
    // static public System.Int32 Calculate(System.UInt32 u)
    // Offset: 0x277F1A0
    static int Calculate(uint u);
    // static public System.Int32 Calculate(System.Single f)
    // Offset: 0x277F204
    static int Calculate(float f);
    // static public System.Int32 Combine(System.Single f1, System.Single f2)
    // Offset: 0x277F26C
    static int Combine(float f1, float f2);
    // static public System.Int32 Combine(System.Single f1, System.Single f2, System.Single f3)
    // Offset: 0x277F36C
    static int Combine(float f1, float f2, float f3);
    // static public System.Int32 Combine(System.Single f1, System.Single f2, System.Single f3, System.Single f4)
    // Offset: 0x277F4A4
    static int Combine(float f1, float f2, float f3, float f4);
    // static public System.Int32 Calculate(System.Int64 l)
    // Offset: 0x277F658
    static int Calculate(int64_t l);
    // static public System.Int32 Combine(System.Int64 l1, System.Int64 l2)
    // Offset: 0x277F680
    static int Combine(int64_t l1, int64_t l2);
    // static public System.Int32 Combine(System.Int64 l1, System.Int64 l2, System.Int64 l3)
    // Offset: 0x277F72C
    static int Combine(int64_t l1, int64_t l2, int64_t l3);
    // static public System.Int32 Combine(System.Int64 l1, System.Int64 l2, System.Int64 l3, System.Int64 l4)
    // Offset: 0x277F7FC
    static int Combine(int64_t l1, int64_t l2, int64_t l3, int64_t l4);
    // static public System.Int32 Calculate(System.Double d)
    // Offset: 0x277F934
    static int Calculate(double d);
    // static public System.Int32 Combine(System.Double d1, System.Double d2)
    // Offset: 0x277F960
    static int Combine(double d1, double d2);
    // static public System.Int32 Combine(System.Double d1, System.Double d2, System.Double d3)
    // Offset: 0x277FA14
    static int Combine(double d1, double d2, double d3);
    // static public System.Int32 Combine(System.Double d1, System.Double d2, System.Double d3, System.Double d4)
    // Offset: 0x277FAF0
    static int Combine(double d1, double d2, double d3, double d4);
    // static public System.Int32 Calculate(System.Boolean b)
    // Offset: 0x277FC38
    static int Calculate(bool b);
    // static public System.Int32 Combine(System.Boolean b1, System.Boolean b2)
    // Offset: 0x277FC54
    static int Combine(bool b1, bool b2);
    // static public System.Int32 Combine(System.Boolean b1, System.Boolean b2, System.Boolean b3)
    // Offset: 0x277FCD4
    static int Combine(bool b1, bool b2, bool b3);
    // static public System.Int32 Combine(System.Boolean b1, System.Boolean b2, System.Boolean b3, System.Boolean b4)
    // Offset: 0x277FD54
    static int Combine(bool b1, bool b2, bool b3, bool b4);
    // static public System.Int32 Calculate(System.DateTime dt)
    // Offset: 0x277FE44
    static int Calculate(::System::DateTime dt);
    // static public System.Int32 Calculate(System.String s)
    // Offset: 0x277FE84
    static int Calculate(::StringW s);
    // static public System.Int32 Combine(System.String s1, System.String s2)
    // Offset: 0x277FF5C
    static int Combine(::StringW s1, ::StringW s2);
    // static public System.Int32 Combine(System.String s1, System.String s2, System.String s3)
    // Offset: 0x278016C
    static int Combine(::StringW s1, ::StringW s2, ::StringW s3);
    // static public System.Int32 Combine(System.String s1, System.String s2, System.String s3, System.String s4)
    // Offset: 0x278043C
    static int Combine(::StringW s1, ::StringW s2, ::StringW s3, ::StringW s4);
    // static public System.Int32 Calculate(System.Byte[] bytes)
    // Offset: 0x278081C
    static int Calculate(::ArrayW<uint8_t> bytes);
    // static public System.Int32 Combine(System.Int32 i1, System.Int32 i2)
    // Offset: 0x27808EC
    static int Combine(int i1, int i2);
    // static public System.Int32 Combine(System.Int32 i1, System.Int32 i2, System.Int32 i3)
    // Offset: 0x2780954
    static int Combine(int i1, int i2, int i3);
    // static public System.Int32 Combine(System.Int32 i1, System.Int32 i2, System.Int32 i3, System.Int32 i4)
    // Offset: 0x27809C0
    static int Combine(int i1, int i2, int i3, int i4);
    // static public System.Int32 Combine(System.Int32[] values)
    // Offset: 0x2780A84
    static int Combine(::ArrayW<int> values);
    // static public System.Int32 Combine(System.UInt32[] values)
    // Offset: 0x2780C6C
    static int Combine(::ArrayW<uint> values);
    // static public System.Int32 Combine(System.UInt32 u1, System.UInt32 u2)
    // Offset: 0x2780E54
    static int Combine(uint u1, uint u2);
    // static public System.Int32 Combine(System.UInt32 u1, System.UInt32 u2, System.UInt32 u3)
    // Offset: 0x2780EBC
    static int Combine(uint u1, uint u2, uint u3);
    // static public System.Int32 Combine(System.UInt32 u1, System.UInt32 u2, System.UInt32 u3, System.UInt32 u4)
    // Offset: 0x2780F28
    static int Combine(uint u1, uint u2, uint u3, uint u4);
    // static public System.Int32 ComputeOrderAgnostic(System.Int32[] values)
    // Offset: 0x2780FEC
    static int ComputeOrderAgnostic(::ArrayW<int> values);
    // static private System.Void Mix(ref System.UInt32 a, ref System.UInt32 b, ref System.UInt32 c)
    // Offset: 0x27810D0
    static void Mix(ByRef<uint> a, ByRef<uint> b, ByRef<uint> c);
    // static private System.Void Finalize(ref System.UInt32 a, ref System.UInt32 b, ref System.UInt32 c)
    // Offset: 0x27811DC
    static void Finalize(ByRef<uint> a, ByRef<uint> b, ByRef<uint> c);
    // static private System.UInt32 Rotate(System.UInt32 x, System.Int32 k)
    // Offset: 0x27812A8
    static uint Rotate(uint x, int k);
  }; // StaticHash
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::StaticHash::Calculate
// Il2CppName: Calculate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&GlobalNamespace::StaticHash::Calculate)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticHash*), "Calculate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticHash::Calculate
// Il2CppName: Calculate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(uint)>(&GlobalNamespace::StaticHash::Calculate)> {
  static const MethodInfo* get() {
    static auto* u = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticHash*), "Calculate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{u});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticHash::Calculate
// Il2CppName: Calculate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(float)>(&GlobalNamespace::StaticHash::Calculate)> {
  static const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticHash*), "Calculate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticHash::Combine
// Il2CppName: Combine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(float, float)>(&GlobalNamespace::StaticHash::Combine)> {
  static const MethodInfo* get() {
    static auto* f1 = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* f2 = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticHash*), "Combine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f1, f2});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticHash::Combine
// Il2CppName: Combine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(float, float, float)>(&GlobalNamespace::StaticHash::Combine)> {
  static const MethodInfo* get() {
    static auto* f1 = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* f2 = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* f3 = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticHash*), "Combine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f1, f2, f3});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticHash::Combine
// Il2CppName: Combine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(float, float, float, float)>(&GlobalNamespace::StaticHash::Combine)> {
  static const MethodInfo* get() {
    static auto* f1 = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* f2 = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* f3 = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* f4 = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticHash*), "Combine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f1, f2, f3, f4});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticHash::Calculate
// Il2CppName: Calculate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int64_t)>(&GlobalNamespace::StaticHash::Calculate)> {
  static const MethodInfo* get() {
    static auto* l = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticHash*), "Calculate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{l});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticHash::Combine
// Il2CppName: Combine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int64_t, int64_t)>(&GlobalNamespace::StaticHash::Combine)> {
  static const MethodInfo* get() {
    static auto* l1 = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* l2 = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticHash*), "Combine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{l1, l2});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticHash::Combine
// Il2CppName: Combine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int64_t, int64_t, int64_t)>(&GlobalNamespace::StaticHash::Combine)> {
  static const MethodInfo* get() {
    static auto* l1 = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* l2 = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* l3 = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticHash*), "Combine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{l1, l2, l3});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticHash::Combine
// Il2CppName: Combine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int64_t, int64_t, int64_t, int64_t)>(&GlobalNamespace::StaticHash::Combine)> {
  static const MethodInfo* get() {
    static auto* l1 = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* l2 = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* l3 = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* l4 = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticHash*), "Combine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{l1, l2, l3, l4});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticHash::Calculate
// Il2CppName: Calculate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(double)>(&GlobalNamespace::StaticHash::Calculate)> {
  static const MethodInfo* get() {
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticHash*), "Calculate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{d});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticHash::Combine
// Il2CppName: Combine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(double, double)>(&GlobalNamespace::StaticHash::Combine)> {
  static const MethodInfo* get() {
    static auto* d1 = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* d2 = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticHash*), "Combine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{d1, d2});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticHash::Combine
// Il2CppName: Combine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(double, double, double)>(&GlobalNamespace::StaticHash::Combine)> {
  static const MethodInfo* get() {
    static auto* d1 = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* d2 = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* d3 = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticHash*), "Combine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{d1, d2, d3});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticHash::Combine
// Il2CppName: Combine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(double, double, double, double)>(&GlobalNamespace::StaticHash::Combine)> {
  static const MethodInfo* get() {
    static auto* d1 = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* d2 = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* d3 = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* d4 = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticHash*), "Combine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{d1, d2, d3, d4});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticHash::Calculate
// Il2CppName: Calculate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(bool)>(&GlobalNamespace::StaticHash::Calculate)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticHash*), "Calculate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticHash::Combine
// Il2CppName: Combine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(bool, bool)>(&GlobalNamespace::StaticHash::Combine)> {
  static const MethodInfo* get() {
    static auto* b1 = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* b2 = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticHash*), "Combine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b1, b2});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticHash::Combine
// Il2CppName: Combine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(bool, bool, bool)>(&GlobalNamespace::StaticHash::Combine)> {
  static const MethodInfo* get() {
    static auto* b1 = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* b2 = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* b3 = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticHash*), "Combine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b1, b2, b3});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticHash::Combine
// Il2CppName: Combine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(bool, bool, bool, bool)>(&GlobalNamespace::StaticHash::Combine)> {
  static const MethodInfo* get() {
    static auto* b1 = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* b2 = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* b3 = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* b4 = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticHash*), "Combine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b1, b2, b3, b4});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticHash::Calculate
// Il2CppName: Calculate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::DateTime)>(&GlobalNamespace::StaticHash::Calculate)> {
  static const MethodInfo* get() {
    static auto* dt = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticHash*), "Calculate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dt});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticHash::Calculate
// Il2CppName: Calculate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::StringW)>(&GlobalNamespace::StaticHash::Calculate)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticHash*), "Calculate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticHash::Combine
// Il2CppName: Combine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::StringW, ::StringW)>(&GlobalNamespace::StaticHash::Combine)> {
  static const MethodInfo* get() {
    static auto* s1 = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* s2 = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticHash*), "Combine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s1, s2});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticHash::Combine
// Il2CppName: Combine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::StringW, ::StringW, ::StringW)>(&GlobalNamespace::StaticHash::Combine)> {
  static const MethodInfo* get() {
    static auto* s1 = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* s2 = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* s3 = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticHash*), "Combine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s1, s2, s3});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticHash::Combine
// Il2CppName: Combine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::StringW, ::StringW, ::StringW, ::StringW)>(&GlobalNamespace::StaticHash::Combine)> {
  static const MethodInfo* get() {
    static auto* s1 = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* s2 = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* s3 = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* s4 = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticHash*), "Combine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s1, s2, s3, s4});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticHash::Calculate
// Il2CppName: Calculate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ArrayW<uint8_t>)>(&GlobalNamespace::StaticHash::Calculate)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticHash*), "Calculate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticHash::Combine
// Il2CppName: Combine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int)>(&GlobalNamespace::StaticHash::Combine)> {
  static const MethodInfo* get() {
    static auto* i1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* i2 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticHash*), "Combine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i1, i2});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticHash::Combine
// Il2CppName: Combine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int, int)>(&GlobalNamespace::StaticHash::Combine)> {
  static const MethodInfo* get() {
    static auto* i1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* i2 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* i3 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticHash*), "Combine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i1, i2, i3});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticHash::Combine
// Il2CppName: Combine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int, int, int)>(&GlobalNamespace::StaticHash::Combine)> {
  static const MethodInfo* get() {
    static auto* i1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* i2 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* i3 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* i4 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticHash*), "Combine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i1, i2, i3, i4});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticHash::Combine
// Il2CppName: Combine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ArrayW<int>)>(&GlobalNamespace::StaticHash::Combine)> {
  static const MethodInfo* get() {
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticHash*), "Combine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{values});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticHash::Combine
// Il2CppName: Combine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ArrayW<uint>)>(&GlobalNamespace::StaticHash::Combine)> {
  static const MethodInfo* get() {
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticHash*), "Combine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{values});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticHash::Combine
// Il2CppName: Combine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(uint, uint)>(&GlobalNamespace::StaticHash::Combine)> {
  static const MethodInfo* get() {
    static auto* u1 = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* u2 = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticHash*), "Combine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{u1, u2});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticHash::Combine
// Il2CppName: Combine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(uint, uint, uint)>(&GlobalNamespace::StaticHash::Combine)> {
  static const MethodInfo* get() {
    static auto* u1 = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* u2 = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* u3 = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticHash*), "Combine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{u1, u2, u3});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticHash::Combine
// Il2CppName: Combine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(uint, uint, uint, uint)>(&GlobalNamespace::StaticHash::Combine)> {
  static const MethodInfo* get() {
    static auto* u1 = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* u2 = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* u3 = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* u4 = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticHash*), "Combine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{u1, u2, u3, u4});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticHash::ComputeOrderAgnostic
// Il2CppName: ComputeOrderAgnostic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ArrayW<int>)>(&GlobalNamespace::StaticHash::ComputeOrderAgnostic)> {
  static const MethodInfo* get() {
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticHash*), "ComputeOrderAgnostic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{values});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticHash::Mix
// Il2CppName: Mix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<uint>, ByRef<uint>, ByRef<uint>)>(&GlobalNamespace::StaticHash::Mix)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticHash*), "Mix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, c});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticHash::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<uint>, ByRef<uint>, ByRef<uint>)>(&GlobalNamespace::StaticHash::Finalize)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticHash*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, c});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticHash::Rotate
// Il2CppName: Rotate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint, int)>(&GlobalNamespace::StaticHash::Rotate)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* k = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticHash*), "Rotate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, k});
  }
};
