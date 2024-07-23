// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Fusion.INetworkStruct
#include "Fusion/INetworkStruct.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion
namespace Fusion {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Guid
  struct Guid;
}
// Completed forward declares
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: NetworkObjectGuid
  struct NetworkObjectGuid;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkObjectGuid, "Fusion", "NetworkObjectGuid");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: Fusion.NetworkObjectGuid
  // [TokenAttribute] Offset: FFFFFFFF
  // [NetworkStructWeavedAttribute] Offset: FFFFFFFF
  struct NetworkObjectGuid/*, public ::System::ValueType, public ::Fusion::INetworkStruct, public ::System::IEquatable_1<::Fusion::NetworkObjectGuid>, public ::System::IComparable_1<::Fusion::NetworkObjectGuid>*/ {
    public:
    // Nested type: ::Fusion::NetworkObjectGuid::EqualityComparer
    class EqualityComparer;
    // Nested type: ::Fusion::NetworkObjectGuid::$RawGuidValue$e__FixedBuffer
    struct $RawGuidValue$e__FixedBuffer;
    // Size: 0x8
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Fusion.NetworkObjectGuid/<RawGuidValue>e__FixedBuffer
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    // [UnsafeValueTypeAttribute] Offset: FFFFFFFF
    struct $RawGuidValue$e__FixedBuffer/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.Int64 FixedElementField
      // Size: 0x8
      // Offset: 0x0
      int64_t FixedElementField;
      // Field size check
      static_assert(sizeof(int64_t) == 0x8);
      public:
      // Creating value type constructor for type: $RawGuidValue$e__FixedBuffer
      constexpr $RawGuidValue$e__FixedBuffer(int64_t FixedElementField_ = {}) noexcept : FixedElementField{FixedElementField_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating conversion operator: operator int64_t
      constexpr operator int64_t() const noexcept {
        return FixedElementField;
      }
      // Get instance field reference: public System.Int64 FixedElementField
      [[deprecated("Use field access instead!")]] int64_t& dyn_FixedElementField();
    }; // Fusion.NetworkObjectGuid/<RawGuidValue>e__FixedBuffer
    #pragma pack(pop)
    static check_size<sizeof(NetworkObjectGuid::$RawGuidValue$e__FixedBuffer), 0 + sizeof(int64_t)> __Fusion_NetworkObjectGuid_$RawGuidValue$e__FixedBufferSizeCheck;
    static_assert(sizeof(NetworkObjectGuid::$RawGuidValue$e__FixedBuffer) == 0x8);
    public:
    // Creating union for fields at offset: 0x0
    union {
      // public Fusion.NetworkObjectGuid/<RawGuidValue>e__FixedBuffer RawGuidValue
      // Size: 0x8
      // Offset: 0x0
      ::Fusion::NetworkObjectGuid::$RawGuidValue$e__FixedBuffer RawGuidValue;
      // Field size check
      static_assert(sizeof(::Fusion::NetworkObjectGuid::$RawGuidValue$e__FixedBuffer) == 0x8);
      // private System.Int64 _data0
      // Size: 0x8
      // Offset: 0x0
      int64_t data0;
      // Field size check
      static_assert(sizeof(int64_t) == 0x8);
    };
    // private System.Int64 _data1
    // Size: 0x8
    // Offset: 0x8
    int64_t data1;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    public:
    // Creating value type constructor for type: NetworkObjectGuid
    constexpr NetworkObjectGuid(::Fusion::NetworkObjectGuid::$RawGuidValue$e__FixedBuffer RawGuidValue_ = {}, int64_t data1_ = {}) noexcept : RawGuidValue{RawGuidValue_}, data1{data1_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::Fusion::INetworkStruct
    operator ::Fusion::INetworkStruct() noexcept {
      return *reinterpret_cast<::Fusion::INetworkStruct*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::Fusion::NetworkObjectGuid>
    operator ::System::IEquatable_1<::Fusion::NetworkObjectGuid>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::Fusion::NetworkObjectGuid>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IComparable_1<::Fusion::NetworkObjectGuid>
    operator ::System::IComparable_1<::Fusion::NetworkObjectGuid>() noexcept {
      return *reinterpret_cast<::System::IComparable_1<::Fusion::NetworkObjectGuid>*>(this);
    }
    // static field const value: static public System.Int32 SIZE
    static constexpr const int SIZE = 16;
    // Get static field: static public System.Int32 SIZE
    static int _get_SIZE();
    // Set static field: static public System.Int32 SIZE
    static void _set_SIZE(int value);
    // static field const value: static public System.Int32 ALIGNMENT
    static constexpr const int ALIGNMENT = 4;
    // Get static field: static public System.Int32 ALIGNMENT
    static int _get_ALIGNMENT();
    // Set static field: static public System.Int32 ALIGNMENT
    static void _set_ALIGNMENT(int value);
    // Get instance field reference: public Fusion.NetworkObjectGuid/<RawGuidValue>e__FixedBuffer RawGuidValue
    [[deprecated("Use field access instead!")]] ::Fusion::NetworkObjectGuid::$RawGuidValue$e__FixedBuffer& dyn_RawGuidValue();
    // Get instance field reference: private System.Int64 _data0
    [[deprecated("Use field access instead!")]] int64_t& dyn__data0();
    // Get instance field reference: private System.Int64 _data1
    [[deprecated("Use field access instead!")]] int64_t& dyn__data1();
    // static public Fusion.NetworkObjectGuid get_Empty()
    // Offset: 0x2B4C3CC
    static ::Fusion::NetworkObjectGuid get_Empty();
    // public System.Void .ctor(System.String guid)
    // Offset: 0x2B4C3D8
    NetworkObjectGuid(::StringW guid);
    // public System.Void .ctor(System.Byte[] guid)
    // Offset: 0x2B4C494
    NetworkObjectGuid(::ArrayW<uint8_t> guid);
    // public System.Void .ctor(System.Byte* guid)
    // Offset: 0x2B4C4D8
    NetworkObjectGuid(uint8_t* guid);
    // public System.Boolean get_IsValid()
    // Offset: 0x2B4C4EC
    bool get_IsValid();
    // static public System.Boolean TryParse(System.String str, out Fusion.NetworkObjectGuid guid)
    // Offset: 0x2B4C5DC
    static bool TryParse(::StringW str, ByRef<::Fusion::NetworkObjectGuid> guid);
    // static public Fusion.NetworkObjectGuid Parse(System.String str)
    // Offset: 0x2B4C660
    static ::Fusion::NetworkObjectGuid Parse(::StringW str);
    // public System.Boolean Equals(Fusion.NetworkObjectGuid other)
    // Offset: 0x2B4C6CC
    bool Equals(::Fusion::NetworkObjectGuid other);
    // public System.String ToUnityGuidString()
    // Offset: 0x2B4C858
    ::StringW ToUnityGuidString();
    // public System.String ToString(System.String format)
    // Offset: 0x2B4C8A0
    ::StringW ToString(::StringW format);
    // public System.Int32 CompareTo(Fusion.NetworkObjectGuid other)
    // Offset: 0x2B4C914
    int CompareTo(::Fusion::NetworkObjectGuid other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x2B4C708
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x2B4C790
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x2B4C7F4
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // Fusion.NetworkObjectGuid
  #pragma pack(pop)
  static check_size<sizeof(NetworkObjectGuid), 8 + sizeof(int64_t)> __Fusion_NetworkObjectGuidSizeCheck;
  static_assert(sizeof(NetworkObjectGuid) == 0x10);
  // static public System.Boolean op_Equality(Fusion.NetworkObjectGuid a, Fusion.NetworkObjectGuid b)
  // Offset: 0x2B4C6B4
  bool operator ==(const ::Fusion::NetworkObjectGuid& a, const ::Fusion::NetworkObjectGuid& b);
  // static public System.Boolean op_Inequality(Fusion.NetworkObjectGuid a, Fusion.NetworkObjectGuid b)
  // Offset: 0x2B4C6F0
  bool operator !=(const ::Fusion::NetworkObjectGuid& a, const ::Fusion::NetworkObjectGuid& b);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkObjectGuid::$RawGuidValue$e__FixedBuffer, "Fusion", "NetworkObjectGuid/<RawGuidValue>e__FixedBuffer");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::NetworkObjectGuid::get_Empty
// Il2CppName: get_Empty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::NetworkObjectGuid (*)()>(&Fusion::NetworkObjectGuid::get_Empty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkObjectGuid), "get_Empty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkObjectGuid::NetworkObjectGuid
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::NetworkObjectGuid::NetworkObjectGuid
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::NetworkObjectGuid::NetworkObjectGuid
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::NetworkObjectGuid::get_IsValid
// Il2CppName: get_IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::NetworkObjectGuid::*)()>(&Fusion::NetworkObjectGuid::get_IsValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkObjectGuid), "get_IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkObjectGuid::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::Fusion::NetworkObjectGuid>)>(&Fusion::NetworkObjectGuid::TryParse)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* guid = &::il2cpp_utils::GetClassFromName("Fusion", "NetworkObjectGuid")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkObjectGuid), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str, guid});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkObjectGuid::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::NetworkObjectGuid (*)(::StringW)>(&Fusion::NetworkObjectGuid::Parse)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkObjectGuid), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkObjectGuid::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::NetworkObjectGuid::*)(::Fusion::NetworkObjectGuid)>(&Fusion::NetworkObjectGuid::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Fusion", "NetworkObjectGuid")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkObjectGuid), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkObjectGuid::ToUnityGuidString
// Il2CppName: ToUnityGuidString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Fusion::NetworkObjectGuid::*)()>(&Fusion::NetworkObjectGuid::ToUnityGuidString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkObjectGuid), "ToUnityGuidString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkObjectGuid::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Fusion::NetworkObjectGuid::*)(::StringW)>(&Fusion::NetworkObjectGuid::ToString)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkObjectGuid), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkObjectGuid::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Fusion::NetworkObjectGuid::*)(::Fusion::NetworkObjectGuid)>(&Fusion::NetworkObjectGuid::CompareTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Fusion", "NetworkObjectGuid")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkObjectGuid), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkObjectGuid::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::NetworkObjectGuid::*)(::Il2CppObject*)>(&Fusion::NetworkObjectGuid::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkObjectGuid), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkObjectGuid::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Fusion::NetworkObjectGuid::*)()>(&Fusion::NetworkObjectGuid::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkObjectGuid), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkObjectGuid::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Fusion::NetworkObjectGuid::*)()>(&Fusion::NetworkObjectGuid::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkObjectGuid), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkObjectGuid::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Fusion::NetworkObjectGuid::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
