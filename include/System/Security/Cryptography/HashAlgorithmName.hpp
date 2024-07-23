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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: HashAlgorithmName
  struct HashAlgorithmName;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::HashAlgorithmName, "System.Security.Cryptography", "HashAlgorithmName");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Security.Cryptography.HashAlgorithmName
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct HashAlgorithmName/*, public ::System::ValueType, public ::System::IEquatable_1<::System::Security::Cryptography::HashAlgorithmName>*/ {
    public:
    public:
    // private readonly System.String _name
    // Size: 0x8
    // Offset: 0x0
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating value type constructor for type: HashAlgorithmName
    constexpr HashAlgorithmName(::StringW name_ = {}) noexcept : name{name_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::System::Security::Cryptography::HashAlgorithmName>
    operator ::System::IEquatable_1<::System::Security::Cryptography::HashAlgorithmName>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::System::Security::Cryptography::HashAlgorithmName>*>(this);
    }
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return name;
    }
    // Get instance field reference: private readonly System.String _name
    [[deprecated("Use field access instead!")]] ::StringW& dyn__name();
    // static public System.Security.Cryptography.HashAlgorithmName get_MD5()
    // Offset: 0x44F20C8
    static ::System::Security::Cryptography::HashAlgorithmName get_MD5();
    // static public System.Security.Cryptography.HashAlgorithmName get_SHA1()
    // Offset: 0x44F2118
    static ::System::Security::Cryptography::HashAlgorithmName get_SHA1();
    // static public System.Security.Cryptography.HashAlgorithmName get_SHA256()
    // Offset: 0x44F2168
    static ::System::Security::Cryptography::HashAlgorithmName get_SHA256();
    // static public System.Security.Cryptography.HashAlgorithmName get_SHA384()
    // Offset: 0x44F21B8
    static ::System::Security::Cryptography::HashAlgorithmName get_SHA384();
    // static public System.Security.Cryptography.HashAlgorithmName get_SHA512()
    // Offset: 0x44F2208
    static ::System::Security::Cryptography::HashAlgorithmName get_SHA512();
    // public System.Void .ctor(System.String name)
    // Offset: 0x44F2258
    // ABORTED: conflicts with another method.  HashAlgorithmName(::StringW name);
    // public System.String get_Name()
    // Offset: 0x44F2260
    ::StringW get_Name();
    // public System.Boolean Equals(System.Security.Cryptography.HashAlgorithmName other)
    // Offset: 0x44F2338
    bool Equals(::System::Security::Cryptography::HashAlgorithmName other);
    // public override System.String ToString()
    // Offset: 0x44F2268
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x44F22BC
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x44F2344
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // System.Security.Cryptography.HashAlgorithmName
  #pragma pack(pop)
  static check_size<sizeof(HashAlgorithmName), 0 + sizeof(::StringW)> __System_Security_Cryptography_HashAlgorithmNameSizeCheck;
  static_assert(sizeof(HashAlgorithmName) == 0x8);
  // static public System.Boolean op_Equality(System.Security.Cryptography.HashAlgorithmName left, System.Security.Cryptography.HashAlgorithmName right)
  // Offset: 0x44F235C
  bool operator ==(const ::System::Security::Cryptography::HashAlgorithmName& left, const ::System::Security::Cryptography::HashAlgorithmName& right);
  // static public System.Boolean op_Inequality(System.Security.Cryptography.HashAlgorithmName left, System.Security.Cryptography.HashAlgorithmName right)
  // Offset: 0x44F2364
  bool operator !=(const ::System::Security::Cryptography::HashAlgorithmName& left, const ::System::Security::Cryptography::HashAlgorithmName& right);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithmName::get_MD5
// Il2CppName: get_MD5
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::HashAlgorithmName (*)()>(&System::Security::Cryptography::HashAlgorithmName::get_MD5)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithmName), "get_MD5", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithmName::get_SHA1
// Il2CppName: get_SHA1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::HashAlgorithmName (*)()>(&System::Security::Cryptography::HashAlgorithmName::get_SHA1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithmName), "get_SHA1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithmName::get_SHA256
// Il2CppName: get_SHA256
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::HashAlgorithmName (*)()>(&System::Security::Cryptography::HashAlgorithmName::get_SHA256)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithmName), "get_SHA256", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithmName::get_SHA384
// Il2CppName: get_SHA384
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::HashAlgorithmName (*)()>(&System::Security::Cryptography::HashAlgorithmName::get_SHA384)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithmName), "get_SHA384", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithmName::get_SHA512
// Il2CppName: get_SHA512
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::HashAlgorithmName (*)()>(&System::Security::Cryptography::HashAlgorithmName::get_SHA512)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithmName), "get_SHA512", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithmName::HashAlgorithmName
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithmName::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::HashAlgorithmName::*)()>(&System::Security::Cryptography::HashAlgorithmName::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithmName), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithmName::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::HashAlgorithmName::*)(::System::Security::Cryptography::HashAlgorithmName)>(&System::Security::Cryptography::HashAlgorithmName::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "HashAlgorithmName")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithmName), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithmName::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::HashAlgorithmName::*)()>(&System::Security::Cryptography::HashAlgorithmName::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithmName), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithmName::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::HashAlgorithmName::*)(::Il2CppObject*)>(&System::Security::Cryptography::HashAlgorithmName::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithmName), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithmName::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::HashAlgorithmName::*)()>(&System::Security::Cryptography::HashAlgorithmName::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HashAlgorithmName), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithmName::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Security::Cryptography::HashAlgorithmName::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
