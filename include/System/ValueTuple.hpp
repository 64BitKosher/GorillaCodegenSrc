// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.Collections.IStructuralEquatable
#include "System/Collections/IStructuralEquatable.hpp"
// Including type: System.Collections.IStructuralComparable
#include "System/Collections/IStructuralComparable.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
// Including type: System.IValueTupleInternal
#include "System/IValueTupleInternal.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEqualityComparer
  class IEqualityComparer;
  // Forward declaring type: IComparer
  class IComparer;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: ValueTuple
  struct ValueTuple;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::ValueTuple, "System", "ValueTuple");
// Type namespace: System
namespace System {
  // Size: 0x0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.ValueTuple
  // [TokenAttribute] Offset: FFFFFFFF
  struct ValueTuple/*, public ::System::ValueType, public ::System::IEquatable_1<::System::ValueTuple>, public ::System::Collections::IStructuralEquatable, public ::System::Collections::IStructuralComparable, public ::System::IComparable, public ::System::IComparable_1<::System::ValueTuple>, public ::System::IValueTupleInternal*/ {
    public:
    // Creating value type constructor for type: ValueTuple
    constexpr ValueTuple() noexcept {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::System::ValueTuple>
    operator ::System::IEquatable_1<::System::ValueTuple>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::System::ValueTuple>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::IStructuralEquatable
    operator ::System::Collections::IStructuralEquatable() noexcept {
      return *reinterpret_cast<::System::Collections::IStructuralEquatable*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::IStructuralComparable
    operator ::System::Collections::IStructuralComparable() noexcept {
      return *reinterpret_cast<::System::Collections::IStructuralComparable*>(this);
    }
    // Creating interface conversion operator: operator ::System::IComparable
    operator ::System::IComparable() noexcept {
      return *reinterpret_cast<::System::IComparable*>(this);
    }
    // Creating interface conversion operator: operator ::System::IComparable_1<::System::ValueTuple>
    operator ::System::IComparable_1<::System::ValueTuple>() noexcept {
      return *reinterpret_cast<::System::IComparable_1<::System::ValueTuple>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IValueTupleInternal
    operator ::System::IValueTupleInternal() noexcept {
      return *reinterpret_cast<::System::IValueTupleInternal*>(this);
    }
    // public System.Boolean Equals(System.ValueTuple other)
    // Offset: 0x467AE24
    bool Equals(::System::ValueTuple other);
    // private System.Boolean System.Collections.IStructuralEquatable.Equals(System.Object other, System.Collections.IEqualityComparer comparer)
    // Offset: 0x467AE2C
    bool System_Collections_IStructuralEquatable_Equals(::Il2CppObject* other, ::System::Collections::IEqualityComparer* comparer);
    // private System.Int32 System.IComparable.CompareTo(System.Object other)
    // Offset: 0x467AE88
    int System_IComparable_CompareTo(::Il2CppObject* other);
    // public System.Int32 CompareTo(System.ValueTuple other)
    // Offset: 0x467AF9C
    int CompareTo(::System::ValueTuple other);
    // private System.Int32 System.Collections.IStructuralComparable.CompareTo(System.Object other, System.Collections.IComparer comparer)
    // Offset: 0x467AFA4
    int System_Collections_IStructuralComparable_CompareTo(::Il2CppObject* other, ::System::Collections::IComparer* comparer);
    // private System.Int32 System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer comparer)
    // Offset: 0x467B0C0
    int System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer* comparer);
    // private System.Int32 System.IValueTupleInternal.GetHashCode(System.Collections.IEqualityComparer comparer)
    // Offset: 0x467B0C8
    int System_IValueTupleInternal_GetHashCode(::System::Collections::IEqualityComparer* comparer);
    // private System.String System.IValueTupleInternal.ToStringEnd()
    // Offset: 0x467B110
    ::StringW System_IValueTupleInternal_ToStringEnd();
    // private System.Int32 System.Runtime.CompilerServices.ITuple.get_Length()
    // Offset: 0x467B150
    int System_Runtime_CompilerServices_ITuple_get_Length();
    // static System.Int32 CombineHashCodes(System.Int32 h1, System.Int32 h2)
    // Offset: 0x467B158
    static int CombineHashCodes(int h1, int h2);
    // static System.Int32 CombineHashCodes(System.Int32 h1, System.Int32 h2, System.Int32 h3)
    // Offset: 0x467B1D4
    static int CombineHashCodes(int h1, int h2, int h3);
    // static System.Int32 CombineHashCodes(System.Int32 h1, System.Int32 h2, System.Int32 h3, System.Int32 h4)
    // Offset: 0x467B254
    static int CombineHashCodes(int h1, int h2, int h3, int h4);
    // static System.Int32 CombineHashCodes(System.Int32 h1, System.Int32 h2, System.Int32 h3, System.Int32 h4, System.Int32 h5)
    // Offset: 0x467B2E4
    static int CombineHashCodes(int h1, int h2, int h3, int h4, int h5);
    // static System.Int32 CombineHashCodes(System.Int32 h1, System.Int32 h2, System.Int32 h3, System.Int32 h4, System.Int32 h5, System.Int32 h6)
    // Offset: 0x467B37C
    static int CombineHashCodes(int h1, int h2, int h3, int h4, int h5, int h6);
    // static System.Int32 CombineHashCodes(System.Int32 h1, System.Int32 h2, System.Int32 h3, System.Int32 h4, System.Int32 h5, System.Int32 h6, System.Int32 h7)
    // Offset: 0x467B424
    static int CombineHashCodes(int h1, int h2, int h3, int h4, int h5, int h6, int h7);
    // static System.Int32 CombineHashCodes(System.Int32 h1, System.Int32 h2, System.Int32 h3, System.Int32 h4, System.Int32 h5, System.Int32 h6, System.Int32 h7, System.Int32 h8)
    // Offset: 0x467B4D4
    static int CombineHashCodes(int h1, int h2, int h3, int h4, int h5, int h6, int h7, int h8);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x467ADC8
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x467B0B8
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x467B0D0
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // System.ValueTuple
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ValueTuple::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ValueTuple::*)(::System::ValueTuple)>(&System::ValueTuple::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "ValueTuple")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ValueTuple), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: System::ValueTuple::System_Collections_IStructuralEquatable_Equals
// Il2CppName: System.Collections.IStructuralEquatable.Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ValueTuple::*)(::Il2CppObject*, ::System::Collections::IEqualityComparer*)>(&System::ValueTuple::System_Collections_IStructuralEquatable_Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* comparer = &::il2cpp_utils::GetClassFromName("System.Collections", "IEqualityComparer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ValueTuple), "System.Collections.IStructuralEquatable.Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other, comparer});
  }
};
// Writing MetadataGetter for method: System::ValueTuple::System_IComparable_CompareTo
// Il2CppName: System.IComparable.CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ValueTuple::*)(::Il2CppObject*)>(&System::ValueTuple::System_IComparable_CompareTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ValueTuple), "System.IComparable.CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: System::ValueTuple::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ValueTuple::*)(::System::ValueTuple)>(&System::ValueTuple::CompareTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "ValueTuple")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ValueTuple), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: System::ValueTuple::System_Collections_IStructuralComparable_CompareTo
// Il2CppName: System.Collections.IStructuralComparable.CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ValueTuple::*)(::Il2CppObject*, ::System::Collections::IComparer*)>(&System::ValueTuple::System_Collections_IStructuralComparable_CompareTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* comparer = &::il2cpp_utils::GetClassFromName("System.Collections", "IComparer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ValueTuple), "System.Collections.IStructuralComparable.CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other, comparer});
  }
};
// Writing MetadataGetter for method: System::ValueTuple::System_Collections_IStructuralEquatable_GetHashCode
// Il2CppName: System.Collections.IStructuralEquatable.GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ValueTuple::*)(::System::Collections::IEqualityComparer*)>(&System::ValueTuple::System_Collections_IStructuralEquatable_GetHashCode)> {
  static const MethodInfo* get() {
    static auto* comparer = &::il2cpp_utils::GetClassFromName("System.Collections", "IEqualityComparer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ValueTuple), "System.Collections.IStructuralEquatable.GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{comparer});
  }
};
// Writing MetadataGetter for method: System::ValueTuple::System_IValueTupleInternal_GetHashCode
// Il2CppName: System.IValueTupleInternal.GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ValueTuple::*)(::System::Collections::IEqualityComparer*)>(&System::ValueTuple::System_IValueTupleInternal_GetHashCode)> {
  static const MethodInfo* get() {
    static auto* comparer = &::il2cpp_utils::GetClassFromName("System.Collections", "IEqualityComparer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ValueTuple), "System.IValueTupleInternal.GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{comparer});
  }
};
// Writing MetadataGetter for method: System::ValueTuple::System_IValueTupleInternal_ToStringEnd
// Il2CppName: System.IValueTupleInternal.ToStringEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ValueTuple::*)()>(&System::ValueTuple::System_IValueTupleInternal_ToStringEnd)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ValueTuple), "System.IValueTupleInternal.ToStringEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ValueTuple::System_Runtime_CompilerServices_ITuple_get_Length
// Il2CppName: System.Runtime.CompilerServices.ITuple.get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ValueTuple::*)()>(&System::ValueTuple::System_Runtime_CompilerServices_ITuple_get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ValueTuple), "System.Runtime.CompilerServices.ITuple.get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ValueTuple::CombineHashCodes
// Il2CppName: CombineHashCodes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int)>(&System::ValueTuple::CombineHashCodes)> {
  static const MethodInfo* get() {
    static auto* h1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h2 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ValueTuple), "CombineHashCodes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{h1, h2});
  }
};
// Writing MetadataGetter for method: System::ValueTuple::CombineHashCodes
// Il2CppName: CombineHashCodes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int, int)>(&System::ValueTuple::CombineHashCodes)> {
  static const MethodInfo* get() {
    static auto* h1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h2 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h3 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ValueTuple), "CombineHashCodes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{h1, h2, h3});
  }
};
// Writing MetadataGetter for method: System::ValueTuple::CombineHashCodes
// Il2CppName: CombineHashCodes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int, int, int)>(&System::ValueTuple::CombineHashCodes)> {
  static const MethodInfo* get() {
    static auto* h1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h2 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h3 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h4 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ValueTuple), "CombineHashCodes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{h1, h2, h3, h4});
  }
};
// Writing MetadataGetter for method: System::ValueTuple::CombineHashCodes
// Il2CppName: CombineHashCodes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int, int, int, int)>(&System::ValueTuple::CombineHashCodes)> {
  static const MethodInfo* get() {
    static auto* h1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h2 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h3 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h4 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h5 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ValueTuple), "CombineHashCodes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{h1, h2, h3, h4, h5});
  }
};
// Writing MetadataGetter for method: System::ValueTuple::CombineHashCodes
// Il2CppName: CombineHashCodes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int, int, int, int, int)>(&System::ValueTuple::CombineHashCodes)> {
  static const MethodInfo* get() {
    static auto* h1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h2 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h3 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h4 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h5 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h6 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ValueTuple), "CombineHashCodes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{h1, h2, h3, h4, h5, h6});
  }
};
// Writing MetadataGetter for method: System::ValueTuple::CombineHashCodes
// Il2CppName: CombineHashCodes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int, int, int, int, int, int)>(&System::ValueTuple::CombineHashCodes)> {
  static const MethodInfo* get() {
    static auto* h1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h2 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h3 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h4 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h5 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h6 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h7 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ValueTuple), "CombineHashCodes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{h1, h2, h3, h4, h5, h6, h7});
  }
};
// Writing MetadataGetter for method: System::ValueTuple::CombineHashCodes
// Il2CppName: CombineHashCodes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int, int, int, int, int, int, int)>(&System::ValueTuple::CombineHashCodes)> {
  static const MethodInfo* get() {
    static auto* h1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h2 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h3 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h4 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h5 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h6 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h7 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h8 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ValueTuple), "CombineHashCodes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{h1, h2, h3, h4, h5, h6, h7, h8});
  }
};
// Writing MetadataGetter for method: System::ValueTuple::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ValueTuple::*)(::Il2CppObject*)>(&System::ValueTuple::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ValueTuple), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::ValueTuple::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ValueTuple::*)()>(&System::ValueTuple::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ValueTuple), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ValueTuple::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ValueTuple::*)()>(&System::ValueTuple::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ValueTuple), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
