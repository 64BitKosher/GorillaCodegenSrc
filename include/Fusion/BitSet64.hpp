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
  // Forward declaring type: BitSet64
  struct BitSet64;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::BitSet64, "Fusion", "BitSet64");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: Fusion.BitSet64
  // [TokenAttribute] Offset: FFFFFFFF
  // [NetworkStructWeavedAttribute] Offset: FFFFFFFF
  struct BitSet64/*, public ::System::ValueType, public ::Fusion::INetworkStruct, public ::System::IEquatable_1<::Fusion::BitSet64>, public ::System::Collections::Generic::IEnumerable_1<int>*/ {
    public:
    // Nested type: ::Fusion::BitSet64::Enumerator
    struct Enumerator;
    // Nested type: ::Fusion::BitSet64::$Bits$e__FixedBuffer
    struct $Bits$e__FixedBuffer;
    // Size: 0x8
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Fusion.BitSet64/<Bits>e__FixedBuffer
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
    }; // Fusion.BitSet64/<Bits>e__FixedBuffer
    #pragma pack(pop)
    static check_size<sizeof(BitSet64::$Bits$e__FixedBuffer), 0 + sizeof(uint64_t)> __Fusion_BitSet64_$Bits$e__FixedBufferSizeCheck;
    static_assert(sizeof(BitSet64::$Bits$e__FixedBuffer) == 0x8);
    public:
    // public Fusion.BitSet64/<Bits>e__FixedBuffer Bits
    // Size: 0x8
    // Offset: 0x0
    ::Fusion::BitSet64::$Bits$e__FixedBuffer Bits;
    // Field size check
    static_assert(sizeof(::Fusion::BitSet64::$Bits$e__FixedBuffer) == 0x8);
    public:
    // Creating value type constructor for type: BitSet64
    constexpr BitSet64(::Fusion::BitSet64::$Bits$e__FixedBuffer Bits_ = {}) noexcept : Bits{Bits_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::Fusion::INetworkStruct
    operator ::Fusion::INetworkStruct() noexcept {
      return *reinterpret_cast<::Fusion::INetworkStruct*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::Fusion::BitSet64>
    operator ::System::IEquatable_1<::Fusion::BitSet64>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::Fusion::BitSet64>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<int>
    operator ::System::Collections::Generic::IEnumerable_1<int>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<int>*>(this);
    }
    // Creating conversion operator: operator ::Fusion::BitSet64::$Bits$e__FixedBuffer
    constexpr operator ::Fusion::BitSet64::$Bits$e__FixedBuffer() const noexcept {
      return Bits;
    }
    // static field const value: static public System.Int32 SIZE
    static constexpr const int SIZE = 8;
    // Get static field: static public System.Int32 SIZE
    static int _get_SIZE();
    // Set static field: static public System.Int32 SIZE
    static void _set_SIZE(int value);
    // Get instance field reference: public Fusion.BitSet64/<Bits>e__FixedBuffer Bits
    [[deprecated("Use field access instead!")]] ::Fusion::BitSet64::$Bits$e__FixedBuffer& dyn_Bits();
    // public System.Int32 get_Length()
    // Offset: 0x2B46A14
    int get_Length();
    // static public Fusion.BitSet64 FromArray(System.UInt64[] values)
    // Offset: 0x2B46A1C
    static ::Fusion::BitSet64 FromArray(::ArrayW<uint64_t> values);
    // public System.Void Set(System.Int32 bit)
    // Offset: 0x2B46AD4
    void Set(int bit);
    // public System.Void Clear(System.Int32 bit)
    // Offset: 0x2B46AFC
    void Clear(int bit);
    // public System.Void ClearAll()
    // Offset: 0x2B46B24
    void ClearAll();
    // public System.Boolean IsSet(System.Int32 bit)
    // Offset: 0x2B46B70
    bool IsSet(int bit);
    // public System.Int32 GetSetCount()
    // Offset: 0x2B46B90
    int GetSetCount();
    // public System.Boolean Any()
    // Offset: 0x2B46C14
    bool Any();
    // public System.Boolean Equals(Fusion.BitSet64 other)
    // Offset: 0x2B46CEC
    bool Equals(::Fusion::BitSet64 other);
    // public Fusion.BitSet64/Enumerator GetEnumerator()
    // Offset: 0x2B46D54
    ::Fusion::BitSet64::Enumerator GetEnumerator();
    // private System.Collections.Generic.IEnumerator`1<System.Int32> System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator()
    // Offset: 0x2B46D6C
    ::System::Collections::Generic::IEnumerator_1<int>* System_Collections_Generic_IEnumerable$System_Int32$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x2B46DC8
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public override System.Int32 GetHashCode()
    // Offset: 0x2B46C24
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x2B46C74
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
  }; // Fusion.BitSet64
  #pragma pack(pop)
  static check_size<sizeof(BitSet64), 0 + sizeof(::Fusion::BitSet64::$Bits$e__FixedBuffer)> __Fusion_BitSet64SizeCheck;
  static_assert(sizeof(BitSet64) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::BitSet64::$Bits$e__FixedBuffer, "Fusion", "BitSet64/<Bits>e__FixedBuffer");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::BitSet64::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Fusion::BitSet64::*)()>(&Fusion::BitSet64::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::BitSet64), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::BitSet64::FromArray
// Il2CppName: FromArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::BitSet64 (*)(::ArrayW<uint64_t>)>(&Fusion::BitSet64::FromArray)> {
  static const MethodInfo* get() {
    static auto* values = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::BitSet64), "FromArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{values});
  }
};
// Writing MetadataGetter for method: Fusion::BitSet64::Set
// Il2CppName: Set
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::BitSet64::*)(int)>(&Fusion::BitSet64::Set)> {
  static const MethodInfo* get() {
    static auto* bit = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::BitSet64), "Set", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bit});
  }
};
// Writing MetadataGetter for method: Fusion::BitSet64::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::BitSet64::*)(int)>(&Fusion::BitSet64::Clear)> {
  static const MethodInfo* get() {
    static auto* bit = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::BitSet64), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bit});
  }
};
// Writing MetadataGetter for method: Fusion::BitSet64::ClearAll
// Il2CppName: ClearAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::BitSet64::*)()>(&Fusion::BitSet64::ClearAll)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::BitSet64), "ClearAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::BitSet64::IsSet
// Il2CppName: IsSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::BitSet64::*)(int)>(&Fusion::BitSet64::IsSet)> {
  static const MethodInfo* get() {
    static auto* bit = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::BitSet64), "IsSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bit});
  }
};
// Writing MetadataGetter for method: Fusion::BitSet64::GetSetCount
// Il2CppName: GetSetCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Fusion::BitSet64::*)()>(&Fusion::BitSet64::GetSetCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::BitSet64), "GetSetCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::BitSet64::Any
// Il2CppName: Any
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::BitSet64::*)()>(&Fusion::BitSet64::Any)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::BitSet64), "Any", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::BitSet64::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::BitSet64::*)(::Fusion::BitSet64)>(&Fusion::BitSet64::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Fusion", "BitSet64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::BitSet64), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Fusion::BitSet64::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::BitSet64::Enumerator (Fusion::BitSet64::*)()>(&Fusion::BitSet64::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::BitSet64), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::BitSet64::System_Collections_Generic_IEnumerable$System_Int32$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<int>* (Fusion::BitSet64::*)()>(&Fusion::BitSet64::System_Collections_Generic_IEnumerable$System_Int32$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::BitSet64), "System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::BitSet64::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (Fusion::BitSet64::*)()>(&Fusion::BitSet64::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::BitSet64), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::BitSet64::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Fusion::BitSet64::*)()>(&Fusion::BitSet64::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::BitSet64), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::BitSet64::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::BitSet64::*)(::Il2CppObject*)>(&Fusion::BitSet64::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::BitSet64), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
