// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Linq
namespace System::Xml::Linq {
  // Forward declaring type: XNamespace
  class XNamespace;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Xml.Linq
namespace System::Xml::Linq {
  // Forward declaring type: XName
  class XName;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Linq::XName);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XName*, "System.Xml.Linq", "XName");
// Type namespace: System.Xml.Linq
namespace System::Xml::Linq {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Linq.XName
  // [TokenAttribute] Offset: FFFFFFFF
  class XName : public ::Il2CppObject/*, public ::System::IEquatable_1<::System::Xml::Linq::XName*>, public ::System::Runtime::Serialization::ISerializable*/ {
    public:
    public:
    // private System.Xml.Linq.XNamespace _ns
    // Size: 0x8
    // Offset: 0x10
    ::System::Xml::Linq::XNamespace* ns;
    // Field size check
    static_assert(sizeof(::System::Xml::Linq::XNamespace*) == 0x8);
    // private System.String _localName
    // Size: 0x8
    // Offset: 0x18
    ::StringW localName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 _hashCode
    // Size: 0x4
    // Offset: 0x20
    int hashCode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::IEquatable_1<::System::Xml::Linq::XName*>
    operator ::System::IEquatable_1<::System::Xml::Linq::XName*>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::System::Xml::Linq::XName*>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::Serialization::ISerializable
    operator ::System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<::System::Runtime::Serialization::ISerializable*>(this);
    }
    // Get instance field reference: private System.Xml.Linq.XNamespace _ns
    [[deprecated("Use field access instead!")]] ::System::Xml::Linq::XNamespace*& dyn__ns();
    // Get instance field reference: private System.String _localName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__localName();
    // Get instance field reference: private System.Int32 _hashCode
    [[deprecated("Use field access instead!")]] int& dyn__hashCode();
    // System.Void .ctor(System.Xml.Linq.XNamespace ns, System.String localName)
    // Offset: 0x4D1E474
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XName* New_ctor(::System::Xml::Linq::XNamespace* ns, ::StringW localName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Linq::XName::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XName*, creationType>(ns, localName)));
    }
    // public System.String get_LocalName()
    // Offset: 0x4D1E544
    ::StringW get_LocalName();
    // public System.Xml.Linq.XNamespace get_Namespace()
    // Offset: 0x4D1E54C
    ::System::Xml::Linq::XNamespace* get_Namespace();
    // public System.String get_NamespaceName()
    // Offset: 0x4D17684
    ::StringW get_NamespaceName();
    // static public System.Xml.Linq.XName Get(System.String expandedName)
    // Offset: 0x4D1E5E4
    static ::System::Xml::Linq::XName* Get(::StringW expandedName);
    // static public System.Xml.Linq.XName Get(System.String localName, System.String namespaceName)
    // Offset: 0x4D1EB74
    static ::System::Xml::Linq::XName* Get(::StringW localName, ::StringW namespaceName);
    // private System.Boolean System.IEquatable<System.Xml.Linq.XName>.Equals(System.Xml.Linq.XName other)
    // Offset: 0x4D1EBB8
    bool System_IEquatable$System_Xml_Linq_XName$_Equals(::System::Xml::Linq::XName* other);
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x4D1EBC4
    void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
    // System.Void .ctor()
    // Offset: 0x4D1EBFC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XName* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Linq::XName::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XName*, creationType>()));
    }
    // public override System.String ToString()
    // Offset: 0x4D1E554
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x4D1EBA4
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x4D1EBB0
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.Xml.Linq.XName
  #pragma pack(pop)
  static check_size<sizeof(XName), 32 + sizeof(int)> __System_Xml_Linq_XNameSizeCheck;
  static_assert(sizeof(XName) == 0x24);
  // static public System.Boolean op_Equality(System.Xml.Linq.XName left, System.Xml.Linq.XName right)
  // Offset: 0x4D16EF8
  bool operator ==(::System::Xml::Linq::XName* left, ::System::Xml::Linq::XName& right);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Linq::XName::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Linq::XName::get_LocalName
// Il2CppName: get_LocalName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Linq::XName::*)()>(&System::Xml::Linq::XName::get_LocalName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XName*), "get_LocalName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XName::get_Namespace
// Il2CppName: get_Namespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Linq::XNamespace* (System::Xml::Linq::XName::*)()>(&System::Xml::Linq::XName::get_Namespace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XName*), "get_Namespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XName::get_NamespaceName
// Il2CppName: get_NamespaceName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Linq::XName::*)()>(&System::Xml::Linq::XName::get_NamespaceName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XName*), "get_NamespaceName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XName::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Linq::XName* (*)(::StringW)>(&System::Xml::Linq::XName::Get)> {
  static const MethodInfo* get() {
    static auto* expandedName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XName*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{expandedName});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XName::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Linq::XName* (*)(::StringW, ::StringW)>(&System::Xml::Linq::XName::Get)> {
  static const MethodInfo* get() {
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* namespaceName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XName*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{localName, namespaceName});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XName::System_IEquatable$System_Xml_Linq_XName$_Equals
// Il2CppName: System.IEquatable<System.Xml.Linq.XName>.Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Linq::XName::*)(::System::Xml::Linq::XName*)>(&System::Xml::Linq::XName::System_IEquatable$System_Xml_Linq_XName$_Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System.Xml.Linq", "XName")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XName*), "System.IEquatable<System.Xml.Linq.XName>.Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XName::System_Runtime_Serialization_ISerializable_GetObjectData
// Il2CppName: System.Runtime.Serialization.ISerializable.GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Linq::XName::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::Xml::Linq::XName::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XName*), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XName::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Linq::XName::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Linq::XName::*)()>(&System::Xml::Linq::XName::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XName*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XName::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Linq::XName::*)(::Il2CppObject*)>(&System::Xml::Linq::XName::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XName*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XName::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Xml::Linq::XName::*)()>(&System::Xml::Linq::XName::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XName*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XName::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
