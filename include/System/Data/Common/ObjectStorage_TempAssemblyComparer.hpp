// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Data.Common.ObjectStorage
#include "System/Data/Common/ObjectStorage.hpp"
// Including type: System.Collections.Generic.IEqualityComparer`1
#include "System/Collections/Generic/IEqualityComparer_1.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Xml::Serialization
namespace System::Xml::Serialization {
  // Forward declaring type: XmlRootAttribute
  class XmlRootAttribute;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Data::Common::ObjectStorage::TempAssemblyComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Common::ObjectStorage::TempAssemblyComparer*, "System.Data.Common", "ObjectStorage/TempAssemblyComparer");
// Type namespace: System.Data.Common
namespace System::Data::Common {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.Common.ObjectStorage/TempAssemblyComparer
  // [TokenAttribute] Offset: FFFFFFFF
  class ObjectStorage::TempAssemblyComparer : public ::Il2CppObject/*, public ::System::Collections::Generic::IEqualityComparer_1<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>>*/ {
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEqualityComparer_1<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>>
    operator ::System::Collections::Generic::IEqualityComparer_1<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEqualityComparer_1<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>>*>(this);
    }
    // Get static field: static readonly System.Collections.Generic.IEqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.Xml.Serialization.XmlRootAttribute>> s_default
    static ::System::Collections::Generic::IEqualityComparer_1<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>>* _get_s_default();
    // Set static field: static readonly System.Collections.Generic.IEqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.Xml.Serialization.XmlRootAttribute>> s_default
    static void _set_s_default(::System::Collections::Generic::IEqualityComparer_1<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>>* value);
    // private System.Void .ctor()
    // Offset: 0x4CD7138
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectStorage::TempAssemblyComparer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::Common::ObjectStorage::TempAssemblyComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectStorage::TempAssemblyComparer*, creationType>()));
    }
    // public System.Boolean Equals(System.Collections.Generic.KeyValuePair`2<System.Type,System.Xml.Serialization.XmlRootAttribute> x, System.Collections.Generic.KeyValuePair`2<System.Type,System.Xml.Serialization.XmlRootAttribute> y)
    // Offset: 0x4CD7140
    bool Equals(::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*> x, ::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*> y);
    // public System.Int32 GetHashCode(System.Collections.Generic.KeyValuePair`2<System.Type,System.Xml.Serialization.XmlRootAttribute> obj)
    // Offset: 0x4CD7284
    int GetHashCode(::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*> obj);
    // static private System.Void .cctor()
    // Offset: 0x4CD730C
    static void _cctor();
  }; // System.Data.Common.ObjectStorage/TempAssemblyComparer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::Common::ObjectStorage::TempAssemblyComparer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::Common::ObjectStorage::TempAssemblyComparer::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::Common::ObjectStorage::TempAssemblyComparer::*)(::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>, ::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>)>(&System::Data::Common::ObjectStorage::TempAssemblyComparer::Equals)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "KeyValuePair`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Type"), ::il2cpp_utils::GetClassFromName("System.Xml.Serialization", "XmlRootAttribute")})->byval_arg;
    static auto* y = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "KeyValuePair`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Type"), ::il2cpp_utils::GetClassFromName("System.Xml.Serialization", "XmlRootAttribute")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::ObjectStorage::TempAssemblyComparer*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: System::Data::Common::ObjectStorage::TempAssemblyComparer::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Data::Common::ObjectStorage::TempAssemblyComparer::*)(::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Xml::Serialization::XmlRootAttribute*>)>(&System::Data::Common::ObjectStorage::TempAssemblyComparer::GetHashCode)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "KeyValuePair`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Type"), ::il2cpp_utils::GetClassFromName("System.Xml.Serialization", "XmlRootAttribute")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::ObjectStorage::TempAssemblyComparer*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Data::Common::ObjectStorage::TempAssemblyComparer::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Data::Common::ObjectStorage::TempAssemblyComparer::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::Common::ObjectStorage::TempAssemblyComparer*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
