// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Collections.Specialized
namespace System::Collections::Specialized {
  // Forward declaring type: BitVector32
  struct BitVector32;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::BitVector32, "System.Collections.Specialized", "BitVector32");
// Type namespace: System.Collections.Specialized
namespace System::Collections::Specialized {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Collections.Specialized.BitVector32
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: FFFFFFFF
  struct BitVector32/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.UInt32 _data
    // Size: 0x4
    // Offset: 0x0
    uint data;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: BitVector32
    constexpr BitVector32(uint data_ = {}) noexcept : data{data_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return data;
    }
    // Get instance field reference: private System.UInt32 _data
    [[deprecated("Use field access instead!")]] uint& dyn__data();
    // public System.Boolean get_Item(System.Int32 bit)
    // Offset: 0x4F49D44
    bool get_Item(int bit);
    // public System.Void set_Item(System.Int32 bit, System.Boolean value)
    // Offset: 0x4F49D54
    void set_Item(int bit, bool value);
    // static public System.Int32 CreateMask()
    // Offset: 0x4F49D70
    static int CreateMask();
    // static public System.Int32 CreateMask(System.Int32 previous)
    // Offset: 0x4F49D78
    static int CreateMask(int previous);
    // static public System.String ToString(System.Collections.Specialized.BitVector32 value)
    // Offset: 0x4F49EC0
    static ::StringW ToString(::System::Collections::Specialized::BitVector32 value);
    // public override System.Boolean Equals(System.Object o)
    // Offset: 0x4F49DE4
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object o)
    bool Equals(::Il2CppObject* o);
    // public override System.Int32 GetHashCode()
    // Offset: 0x4F49E5C
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x4F49F90
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // System.Collections.Specialized.BitVector32
  #pragma pack(pop)
  static check_size<sizeof(BitVector32), 0 + sizeof(uint)> __System_Collections_Specialized_BitVector32SizeCheck;
  static_assert(sizeof(BitVector32) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::Specialized::BitVector32::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Specialized::BitVector32::*)(int)>(&System::Collections::Specialized::BitVector32::get_Item)> {
  static const MethodInfo* get() {
    static auto* bit = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::BitVector32), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bit});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::BitVector32::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Specialized::BitVector32::*)(int, bool)>(&System::Collections::Specialized::BitVector32::set_Item)> {
  static const MethodInfo* get() {
    static auto* bit = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::BitVector32), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bit, value});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::BitVector32::CreateMask
// Il2CppName: CreateMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&System::Collections::Specialized::BitVector32::CreateMask)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::BitVector32), "CreateMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::BitVector32::CreateMask
// Il2CppName: CreateMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&System::Collections::Specialized::BitVector32::CreateMask)> {
  static const MethodInfo* get() {
    static auto* previous = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::BitVector32), "CreateMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{previous});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::BitVector32::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Collections::Specialized::BitVector32)>(&System::Collections::Specialized::BitVector32::ToString)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Collections.Specialized", "BitVector32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::BitVector32), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::BitVector32::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::Specialized::BitVector32::*)(::Il2CppObject*)>(&System::Collections::Specialized::BitVector32::Equals)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::BitVector32), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::BitVector32::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::Specialized::BitVector32::*)()>(&System::Collections::Specialized::BitVector32::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::BitVector32), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Specialized::BitVector32::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Collections::Specialized::BitVector32::*)()>(&System::Collections::Specialized::BitVector32::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Specialized::BitVector32), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
