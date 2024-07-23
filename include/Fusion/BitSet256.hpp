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
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion
namespace Fusion {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: BitSet256
  struct BitSet256;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::BitSet256, "Fusion", "BitSet256");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: Fusion.BitSet256
  // [TokenAttribute] Offset: FFFFFFFF
  // [NetworkStructWeavedAttribute] Offset: FFFFFFFF
  struct BitSet256/*, public ::System::ValueType, public ::Fusion::INetworkStruct, public ::System::IEquatable_1<::Fusion::BitSet256>, public ::System::Collections::Generic::IEnumerable_1<int>*/ {
    public:
    // Nested type: ::Fusion::BitSet256::Enumerator
    struct Enumerator;
    // Nested type: ::Fusion::BitSet256::$Bits$e__FixedBuffer
    struct $Bits$e__FixedBuffer;
    // Size: 0x8
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Fusion.BitSet256/<Bits>e__FixedBuffer
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    // [UnsafeValueTypeAttribute] Offset: FFFFFFFF
    struct $Bits$e__FixedBuffer/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.UInt64 FixedElementField
      // Size: 0x8
      // Offset: 0x0
      uint64_t FixedElementField;
      // Field size check
      static_assert(sizeof(uint64_t) == 0x8);
      public:
      // Creating value type constructor for type: $Bits$e__FixedBuffer
      constexpr $Bits$e__FixedBuffer(uint64_t FixedElementField_ = {}) noexcept : FixedElementField{FixedElementField_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating conversion operator: operator uint64_t
      constexpr operator uint64_t() const noexcept {
        return FixedElementField;
      }
      // Get instance field reference: public System.UInt64 FixedElementField
      [[deprecated("Use field access instead!")]] uint64_t& dyn_FixedElementField();
    }; // Fusion.BitSet256/<Bits>e__FixedBuffer
    #pragma pack(pop)
    static check_size<sizeof(BitSet256::$Bits$e__FixedBuffer), 0 + sizeof(uint64_t)> __Fusion_BitSet256_$Bits$e__FixedBufferSizeCheck;
    static_assert(sizeof(BitSet256::$Bits$e__FixedBuffer) == 0x8);
    public:
    // public Fusion.BitSet256/<Bits>e__FixedBuffer Bits
    // Size: 0x8
    // Offset: 0x0
    ::Fusion::BitSet256::$Bits$e__FixedBuffer Bits;
    // Field size check
    static_assert(sizeof(::Fusion::BitSet256::$Bits$e__FixedBuffer) == 0x8);
    public:
    // Creating value type constructor for type: BitSet256
    constexpr BitSet256(::Fusion::BitSet256::$Bits$e__FixedBuffer Bits_ = {}) noexcept : Bits{Bits_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::Fusion::INetworkStruct
    operator ::Fusion::INetworkStruct() noexcept {
      return *reinterpret_cast<::Fusion::INetworkStruct*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::Fusion::BitSet256>
    operator ::System::IEquatable_1<::Fusion::BitSet256>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::Fusion::BitSet256>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<int>
    operator ::System::Collections::Generic::IEnumerable_1<int>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<int>*>(this);
    }
    // Creating conversion operator: operator ::Fusion::BitSet256::$Bits$e__FixedBuffer
    constexpr operator ::Fusion::BitSet256::$Bits$e__FixedBuffer() const noexcept {
      return Bits;
    }
    // static field const value: static public System.Int32 SIZE
    static constexpr const int SIZE = 32;
    // Get static field: static public System.Int32 SIZE
    static int _get_SIZE();
    // Set static field: static public System.Int32 SIZE
    static void _set_SIZE(int value);
    // Get instance field reference: public Fusion.BitSet256/<Bits>e__FixedBuffer Bits
    [[deprecated("Use field access instead!")]] ::Fusion::BitSet256::$Bits$e__FixedBuffer& dyn_Bits();
    // public System.Int32 get_Length()
    // Offset: 0x2B47AE0
    int get_Length();
    // static public Fusion.BitSet256 FromArray(System.UInt64[] values)
    // Offset: 0x2B47AE8
    static ::Fusion::BitSet256 FromArray(::ArrayW<uint64_t> values);
    // public System.Void Set(System.Int32 bit)
    // Offset: 0x2B47C10
    void Set(int bit);
    // public System.Void Clear(System.Int32 bit)
    // Offset: 0x2B47C38
    void Clear(int bit);
    // public System.Void ClearAll()
    // Offset: 0x2B47C60
    void ClearAll();
    // public System.Boolean IsSet(System.Int32 bit)
    // Offset: 0x2B47CAC
    bool IsSet(int bit);
    // public System.Int32 GetSetCount()
    // Offset: 0x2B47CCC
    int GetSetCount();
    // public System.Boolean Any()
    // Offset: 0x2B47DE8
    bool Any();
    // public System.Boolean Equals(Fusion.BitSet256 other)
    // Offset: 0x2B47F24
    bool Equals(::Fusion::BitSet256 other);
    // public Fusion.BitSet256/Enumerator GetEnumerator()
    // Offset: 0x2B47F8C
    ::Fusion::BitSet256::Enumerator GetEnumerator();
    // private System.Collections.Generic.IEnumerator`1<System.Int32> System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator()
    // Offset: 0x2B47FA4
    ::System::Collections::Generic::IEnumerator_1<int>* System_Collections_Generic_IEnumerable$System_Int32$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x2B48000
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public override System.Int32 GetHashCode()
    // Offset: 0x2B47E24
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x2B47E74
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
  }; // Fusion.BitSet256
  #pragma pack(pop)
  static check_size<sizeof(BitSet256), 0 + sizeof(::Fusion::BitSet256::$Bits$e__FixedBuffer)> __Fusion_BitSet256SizeCheck;
  static_assert(sizeof(BitSet256) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::BitSet256::$Bits$e__FixedBuffer, "Fusion", "BitSet256/<Bits>e__FixedBuffer");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::BitSet256::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Fusion::BitSet256::*)()>(&Fusion::BitSet256::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::BitSet256), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::BitSet256::FromArray
// Il2CppName: FromArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::BitSet256 (*)(::ArrayW<uint64_t>)>(&Fusion::BitSet256::FromArray)> {
  static const MethodInfo* get() {
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::BitSet256), "FromArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{values});
  }
};
// Writing MetadataGetter for method: Fusion::BitSet256::Set
// Il2CppName: Set
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::BitSet256::*)(int)>(&Fusion::BitSet256::Set)> {
  static const MethodInfo* get() {
    static auto* bit = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::BitSet256), "Set", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bit});
  }
};
// Writing MetadataGetter for method: Fusion::BitSet256::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::BitSet256::*)(int)>(&Fusion::BitSet256::Clear)> {
  static const MethodInfo* get() {
    static auto* bit = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::BitSet256), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bit});
  }
};
// Writing MetadataGetter for method: Fusion::BitSet256::ClearAll
// Il2CppName: ClearAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::BitSet256::*)()>(&Fusion::BitSet256::ClearAll)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::BitSet256), "ClearAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::BitSet256::IsSet
// Il2CppName: IsSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::BitSet256::*)(int)>(&Fusion::BitSet256::IsSet)> {
  static const MethodInfo* get() {
    static auto* bit = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::BitSet256), "IsSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bit});
  }
};
// Writing MetadataGetter for method: Fusion::BitSet256::GetSetCount
// Il2CppName: GetSetCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Fusion::BitSet256::*)()>(&Fusion::BitSet256::GetSetCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::BitSet256), "GetSetCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::BitSet256::Any
// Il2CppName: Any
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::BitSet256::*)()>(&Fusion::BitSet256::Any)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::BitSet256), "Any", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::BitSet256::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::BitSet256::*)(::Fusion::BitSet256)>(&Fusion::BitSet256::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Fusion", "BitSet256")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::BitSet256), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Fusion::BitSet256::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::BitSet256::Enumerator (Fusion::BitSet256::*)()>(&Fusion::BitSet256::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::BitSet256), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::BitSet256::System_Collections_Generic_IEnumerable$System_Int32$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<int>* (Fusion::BitSet256::*)()>(&Fusion::BitSet256::System_Collections_Generic_IEnumerable$System_Int32$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::BitSet256), "System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::BitSet256::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (Fusion::BitSet256::*)()>(&Fusion::BitSet256::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::BitSet256), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::BitSet256::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Fusion::BitSet256::*)()>(&Fusion::BitSet256::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::BitSet256), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::BitSet256::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::BitSet256::*)(::Il2CppObject*)>(&Fusion::BitSet256::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::BitSet256), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
