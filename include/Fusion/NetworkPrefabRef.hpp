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
  // Forward declaring type: NetworkPrefabRef
  struct NetworkPrefabRef;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkPrefabRef, "Fusion", "NetworkPrefabRef");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: Fusion.NetworkPrefabRef
  // [TokenAttribute] Offset: FFFFFFFF
  // [NetworkStructWeavedAttribute] Offset: FFFFFFFF
  struct NetworkPrefabRef/*, public ::System::ValueType, public ::Fusion::INetworkStruct, public ::System::IEquatable_1<::Fusion::NetworkPrefabRef>, public ::System::IComparable_1<::Fusion::NetworkPrefabRef>*/ {
    public:
    // Nested type: ::Fusion::NetworkPrefabRef::EqualityComparer
    class EqualityComparer;
    // Nested type: ::Fusion::NetworkPrefabRef::$RawGuidValue$e__FixedBuffer
    struct $RawGuidValue$e__FixedBuffer;
    // Size: 0x8
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Fusion.NetworkPrefabRef/<RawGuidValue>e__FixedBuffer
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
    }; // Fusion.NetworkPrefabRef/<RawGuidValue>e__FixedBuffer
    #pragma pack(pop)
    static check_size<sizeof(NetworkPrefabRef::$RawGuidValue$e__FixedBuffer), 0 + sizeof(int64_t)> __Fusion_NetworkPrefabRef_$RawGuidValue$e__FixedBufferSizeCheck;
    static_assert(sizeof(NetworkPrefabRef::$RawGuidValue$e__FixedBuffer) == 0x8);
    public:
    // Creating union for fields at offset: 0x0
    union {
      // public Fusion.NetworkPrefabRef/<RawGuidValue>e__FixedBuffer RawGuidValue
      // Size: 0x8
      // Offset: 0x0
      ::Fusion::NetworkPrefabRef::$RawGuidValue$e__FixedBuffer RawGuidValue;
      // Field size check
      static_assert(sizeof(::Fusion::NetworkPrefabRef::$RawGuidValue$e__FixedBuffer) == 0x8);
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
    // Creating value type constructor for type: NetworkPrefabRef
    constexpr NetworkPrefabRef(::Fusion::NetworkPrefabRef::$RawGuidValue$e__FixedBuffer RawGuidValue_ = {}, int64_t data1_ = {}) noexcept : RawGuidValue{RawGuidValue_}, data1{data1_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::Fusion::INetworkStruct
    operator ::Fusion::INetworkStruct() noexcept {
      return *reinterpret_cast<::Fusion::INetworkStruct*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::Fusion::NetworkPrefabRef>
    operator ::System::IEquatable_1<::Fusion::NetworkPrefabRef>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::Fusion::NetworkPrefabRef>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IComparable_1<::Fusion::NetworkPrefabRef>
    operator ::System::IComparable_1<::Fusion::NetworkPrefabRef>() noexcept {
      return *reinterpret_cast<::System::IComparable_1<::Fusion::NetworkPrefabRef>*>(this);
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
    // Get instance field reference: public Fusion.NetworkPrefabRef/<RawGuidValue>e__FixedBuffer RawGuidValue
    [[deprecated("Use field access instead!")]] ::Fusion::NetworkPrefabRef::$RawGuidValue$e__FixedBuffer& dyn_RawGuidValue();
    // Get instance field reference: private System.Int64 _data0
    [[deprecated("Use field access instead!")]] int64_t& dyn__data0();
    // Get instance field reference: private System.Int64 _data1
    [[deprecated("Use field access instead!")]] int64_t& dyn__data1();
    // static public Fusion.NetworkPrefabRef get_Empty()
    // Offset: 0x2B4C9A4
    static ::Fusion::NetworkPrefabRef get_Empty();
    // public System.Void .ctor(System.String guid)
    // Offset: 0x2B4C9B0
    NetworkPrefabRef(::StringW guid);
    // public System.Void .ctor(System.Byte[] guid)
    // Offset: 0x2B4CA6C
    NetworkPrefabRef(::ArrayW<uint8_t> guid);
    // public System.Void .ctor(System.Byte* guid)
    // Offset: 0x2B4CAB0
    NetworkPrefabRef(uint8_t* guid);
    // public System.Boolean get_IsValid()
    // Offset: 0x2B4CAC4
    bool get_IsValid();
    // static public System.Boolean TryParse(System.String str, out Fusion.NetworkPrefabRef guid)
    // Offset: 0x2B4CB30
    static bool TryParse(::StringW str, ByRef<::Fusion::NetworkPrefabRef> guid);
    // static public Fusion.NetworkPrefabRef Parse(System.String str)
    // Offset: 0x2B4CBB4
    static ::Fusion::NetworkPrefabRef Parse(::StringW str);
    // public System.Boolean Equals(Fusion.NetworkPrefabRef other)
    // Offset: 0x2B4CC20
    bool Equals(::Fusion::NetworkPrefabRef other);
    // public System.String ToUnityGuidString()
    // Offset: 0x2B4CDAC
    ::StringW ToUnityGuidString();
    // public System.String ToString(System.String format)
    // Offset: 0x2B4CDF4
    ::StringW ToString(::StringW format);
    // public System.Int32 CompareTo(Fusion.NetworkPrefabRef other)
    // Offset: 0x2B4CE68
    int CompareTo(::Fusion::NetworkPrefabRef other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x2B4CC5C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x2B4CCE4
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x2B4CD48
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // Fusion.NetworkPrefabRef
  #pragma pack(pop)
  static check_size<sizeof(NetworkPrefabRef), 8 + sizeof(int64_t)> __Fusion_NetworkPrefabRefSizeCheck;
  static_assert(sizeof(NetworkPrefabRef) == 0x10);
  // static public System.Boolean op_Equality(Fusion.NetworkPrefabRef a, Fusion.NetworkPrefabRef b)
  // Offset: 0x2B4CC08
  bool operator ==(const ::Fusion::NetworkPrefabRef& a, const ::Fusion::NetworkPrefabRef& b);
  // static public System.Boolean op_Inequality(Fusion.NetworkPrefabRef a, Fusion.NetworkPrefabRef b)
  // Offset: 0x2B4CC44
  bool operator !=(const ::Fusion::NetworkPrefabRef& a, const ::Fusion::NetworkPrefabRef& b);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkPrefabRef::$RawGuidValue$e__FixedBuffer, "Fusion", "NetworkPrefabRef/<RawGuidValue>e__FixedBuffer");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::NetworkPrefabRef::get_Empty
// Il2CppName: get_Empty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::NetworkPrefabRef (*)()>(&Fusion::NetworkPrefabRef::get_Empty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkPrefabRef), "get_Empty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkPrefabRef::NetworkPrefabRef
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::NetworkPrefabRef::NetworkPrefabRef
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::NetworkPrefabRef::NetworkPrefabRef
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::NetworkPrefabRef::get_IsValid
// Il2CppName: get_IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::NetworkPrefabRef::*)()>(&Fusion::NetworkPrefabRef::get_IsValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkPrefabRef), "get_IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkPrefabRef::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::Fusion::NetworkPrefabRef>)>(&Fusion::NetworkPrefabRef::TryParse)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* guid = &::il2cpp_utils::GetClassFromName("Fusion", "NetworkPrefabRef")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkPrefabRef), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str, guid});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkPrefabRef::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::NetworkPrefabRef (*)(::StringW)>(&Fusion::NetworkPrefabRef::Parse)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkPrefabRef), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkPrefabRef::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::NetworkPrefabRef::*)(::Fusion::NetworkPrefabRef)>(&Fusion::NetworkPrefabRef::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Fusion", "NetworkPrefabRef")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkPrefabRef), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkPrefabRef::ToUnityGuidString
// Il2CppName: ToUnityGuidString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Fusion::NetworkPrefabRef::*)()>(&Fusion::NetworkPrefabRef::ToUnityGuidString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkPrefabRef), "ToUnityGuidString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkPrefabRef::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Fusion::NetworkPrefabRef::*)(::StringW)>(&Fusion::NetworkPrefabRef::ToString)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkPrefabRef), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkPrefabRef::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Fusion::NetworkPrefabRef::*)(::Fusion::NetworkPrefabRef)>(&Fusion::NetworkPrefabRef::CompareTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Fusion", "NetworkPrefabRef")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkPrefabRef), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkPrefabRef::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::NetworkPrefabRef::*)(::Il2CppObject*)>(&Fusion::NetworkPrefabRef::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkPrefabRef), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkPrefabRef::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Fusion::NetworkPrefabRef::*)()>(&Fusion::NetworkPrefabRef::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkPrefabRef), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkPrefabRef::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Fusion::NetworkPrefabRef::*)()>(&Fusion::NetworkPrefabRef::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkPrefabRef), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkPrefabRef::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Fusion::NetworkPrefabRef::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
