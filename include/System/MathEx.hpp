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
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Decimal
  struct Decimal;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: MathEx
  class MathEx;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::MathEx);
DEFINE_IL2CPP_ARG_TYPE(::System::MathEx*, "System", "MathEx");
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.MathEx
  // [TokenAttribute] Offset: FFFFFFFF
  class MathEx : public ::Il2CppObject {
    public:
    // static public System.UInt32 DivRem(System.UInt32 a, System.UInt32 b, out System.UInt32 result)
    // Offset: 0x574BAC8
    static uint DivRem(uint a, uint b, ByRef<uint> result);
    // static public System.UInt64 DivRem(System.UInt64 a, System.UInt64 b, out System.UInt64 result)
    // Offset: 0x574BADC
    static uint64_t DivRem(uint64_t a, uint64_t b, ByRef<uint64_t> result);
    // static public System.Int32 DivRem(System.Int32 a, System.Int32 b, out System.Int32 result)
    // Offset: 0x574BAF0
    static int DivRem(int a, int b, ByRef<int> result);
    // static public System.Int64 DivRem(System.Int64 a, System.Int64 b, out System.Int64 result)
    // Offset: 0x574BB04
    static int64_t DivRem(int64_t a, int64_t b, ByRef<int64_t> result);
    // static public System.Byte Clamp(System.Byte value, System.Byte min, System.Byte max)
    // Offset: 0x574BB18
    static uint8_t Clamp(uint8_t value, uint8_t min, uint8_t max);
    // static public System.Decimal Clamp(System.Decimal value, System.Decimal min, System.Decimal max)
    // Offset: 0x574BBA0
    static ::System::Decimal Clamp(::System::Decimal value, ::System::Decimal min, ::System::Decimal max);
    // static public System.Double Clamp(System.Double value, System.Double min, System.Double max)
    // Offset: 0x574BCD0
    static double Clamp(double value, double min, double max);
    // static public System.Int16 Clamp(System.Int16 value, System.Int16 min, System.Int16 max)
    // Offset: 0x574BD54
    static int16_t Clamp(int16_t value, int16_t min, int16_t max);
    // static public System.Int32 Clamp(System.Int32 value, System.Int32 min, System.Int32 max)
    // Offset: 0x574BDDC
    static int Clamp(int value, int min, int max);
    // static public System.Int64 Clamp(System.Int64 value, System.Int64 min, System.Int64 max)
    // Offset: 0x574BE5C
    static int64_t Clamp(int64_t value, int64_t min, int64_t max);
    // static public System.SByte Clamp(System.SByte value, System.SByte min, System.SByte max)
    // Offset: 0x574BEDC
    static int8_t Clamp(int8_t value, int8_t min, int8_t max);
    // static public System.Single Clamp(System.Single value, System.Single min, System.Single max)
    // Offset: 0x574BF64
    static float Clamp(float value, float min, float max);
    // static public System.UInt16 Clamp(System.UInt16 value, System.UInt16 min, System.UInt16 max)
    // Offset: 0x574BFE8
    static uint16_t Clamp(uint16_t value, uint16_t min, uint16_t max);
    // static public System.UInt32 Clamp(System.UInt32 value, System.UInt32 min, System.UInt32 max)
    // Offset: 0x574C070
    static uint Clamp(uint value, uint min, uint max);
    // static public System.UInt64 Clamp(System.UInt64 value, System.UInt64 min, System.UInt64 max)
    // Offset: 0x574C0F0
    static uint64_t Clamp(uint64_t value, uint64_t min, uint64_t max);
    // static private System.Void ThrowMinMaxException(T min, T max)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static void ThrowMinMaxException(T min, T max) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::MathEx::ThrowMinMaxException");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System", "MathEx", "ThrowMinMaxException", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(min), ::il2cpp_utils::ExtractType(max)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, min, max);
    }
  }; // System.MathEx
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::MathEx::DivRem
// Il2CppName: DivRem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint, uint, ByRef<uint>)>(&System::MathEx::DivRem)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::MathEx*), "DivRem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, result});
  }
};
// Writing MetadataGetter for method: System::MathEx::DivRem
// Il2CppName: DivRem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint64_t, uint64_t, ByRef<uint64_t>)>(&System::MathEx::DivRem)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::MathEx*), "DivRem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, result});
  }
};
// Writing MetadataGetter for method: System::MathEx::DivRem
// Il2CppName: DivRem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int, ByRef<int>)>(&System::MathEx::DivRem)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::MathEx*), "DivRem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, result});
  }
};
// Writing MetadataGetter for method: System::MathEx::DivRem
// Il2CppName: DivRem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(int64_t, int64_t, ByRef<int64_t>)>(&System::MathEx::DivRem)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "Int64")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::MathEx*), "DivRem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, result});
  }
};
// Writing MetadataGetter for method: System::MathEx::Clamp
// Il2CppName: Clamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(uint8_t, uint8_t, uint8_t)>(&System::MathEx::Clamp)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* min = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* max = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::MathEx*), "Clamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, min, max});
  }
};
// Writing MetadataGetter for method: System::MathEx::Clamp
// Il2CppName: Clamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(::System::Decimal, ::System::Decimal, ::System::Decimal)>(&System::MathEx::Clamp)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Decimal")->byval_arg;
    static auto* min = &::il2cpp_utils::GetClassFromName("System", "Decimal")->byval_arg;
    static auto* max = &::il2cpp_utils::GetClassFromName("System", "Decimal")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::MathEx*), "Clamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, min, max});
  }
};
// Writing MetadataGetter for method: System::MathEx::Clamp
// Il2CppName: Clamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(double, double, double)>(&System::MathEx::Clamp)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* min = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* max = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::MathEx*), "Clamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, min, max});
  }
};
// Writing MetadataGetter for method: System::MathEx::Clamp
// Il2CppName: Clamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (*)(int16_t, int16_t, int16_t)>(&System::MathEx::Clamp)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int16")->byval_arg;
    static auto* min = &::il2cpp_utils::GetClassFromName("System", "Int16")->byval_arg;
    static auto* max = &::il2cpp_utils::GetClassFromName("System", "Int16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::MathEx*), "Clamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, min, max});
  }
};
// Writing MetadataGetter for method: System::MathEx::Clamp
// Il2CppName: Clamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int, int)>(&System::MathEx::Clamp)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* min = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* max = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::MathEx*), "Clamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, min, max});
  }
};
// Writing MetadataGetter for method: System::MathEx::Clamp
// Il2CppName: Clamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(int64_t, int64_t, int64_t)>(&System::MathEx::Clamp)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* min = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* max = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::MathEx*), "Clamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, min, max});
  }
};
// Writing MetadataGetter for method: System::MathEx::Clamp
// Il2CppName: Clamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (*)(int8_t, int8_t, int8_t)>(&System::MathEx::Clamp)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "SByte")->byval_arg;
    static auto* min = &::il2cpp_utils::GetClassFromName("System", "SByte")->byval_arg;
    static auto* max = &::il2cpp_utils::GetClassFromName("System", "SByte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::MathEx*), "Clamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, min, max});
  }
};
// Writing MetadataGetter for method: System::MathEx::Clamp
// Il2CppName: Clamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float)>(&System::MathEx::Clamp)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* min = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* max = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::MathEx*), "Clamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, min, max});
  }
};
// Writing MetadataGetter for method: System::MathEx::Clamp
// Il2CppName: Clamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (*)(uint16_t, uint16_t, uint16_t)>(&System::MathEx::Clamp)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    static auto* min = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    static auto* max = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::MathEx*), "Clamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, min, max});
  }
};
// Writing MetadataGetter for method: System::MathEx::Clamp
// Il2CppName: Clamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint, uint, uint)>(&System::MathEx::Clamp)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* min = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* max = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::MathEx*), "Clamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, min, max});
  }
};
// Writing MetadataGetter for method: System::MathEx::Clamp
// Il2CppName: Clamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint64_t, uint64_t, uint64_t)>(&System::MathEx::Clamp)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* min = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* max = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::MathEx*), "Clamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, min, max});
  }
};
// Writing MetadataGetter for method: System::MathEx::ThrowMinMaxException
// Il2CppName: ThrowMinMaxException
// Cannot write MetadataGetter for generic methods!