// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: DataObjectAttribute
  class DataObjectAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::DataObjectAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::DataObjectAttribute*, "System.ComponentModel", "DataObjectAttribute");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.DataObjectAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  class DataObjectAttribute : public ::System::Attribute {
    public:
    public:
    // private readonly System.Boolean <IsDataObject>k__BackingField
    // Size: 0x1
    // Offset: 0x10
    bool IsDataObject;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return IsDataObject;
    }
    // Get static field: static public readonly System.ComponentModel.DataObjectAttribute DataObject
    static ::System::ComponentModel::DataObjectAttribute* _get_DataObject();
    // Set static field: static public readonly System.ComponentModel.DataObjectAttribute DataObject
    static void _set_DataObject(::System::ComponentModel::DataObjectAttribute* value);
    // Get static field: static public readonly System.ComponentModel.DataObjectAttribute NonDataObject
    static ::System::ComponentModel::DataObjectAttribute* _get_NonDataObject();
    // Set static field: static public readonly System.ComponentModel.DataObjectAttribute NonDataObject
    static void _set_NonDataObject(::System::ComponentModel::DataObjectAttribute* value);
    // Get static field: static public readonly System.ComponentModel.DataObjectAttribute Default
    static ::System::ComponentModel::DataObjectAttribute* _get_Default();
    // Set static field: static public readonly System.ComponentModel.DataObjectAttribute Default
    static void _set_Default(::System::ComponentModel::DataObjectAttribute* value);
    // Get instance field reference: private readonly System.Boolean <IsDataObject>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IsDataObject$k__BackingField();
    // public System.Void .ctor()
    // Offset: 0x4EFE95C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DataObjectAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::DataObjectAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DataObjectAttribute*, creationType>()));
    }
    // public System.Void .ctor(System.Boolean isDataObject)
    // Offset: 0x4EFE97C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DataObjectAttribute* New_ctor(bool isDataObject) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::DataObjectAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DataObjectAttribute*, creationType>(isDataObject)));
    }
    // public System.Boolean get_IsDataObject()
    // Offset: 0x4EFE9A4
    bool get_IsDataObject();
    // static private System.Void .cctor()
    // Offset: 0x4EFEACC
    static void _cctor();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x4EFE9AC
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x4EFEA44
    // Implemented from: System.Attribute
    // Base method: System.Int32 Attribute::GetHashCode()
    int GetHashCode();
    // public override System.Boolean IsDefaultAttribute()
    // Offset: 0x4EFEA64
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::IsDefaultAttribute()
    bool IsDefaultAttribute();
  }; // System.ComponentModel.DataObjectAttribute
  #pragma pack(pop)
  static check_size<sizeof(DataObjectAttribute), 16 + sizeof(bool)> __System_ComponentModel_DataObjectAttributeSizeCheck;
  static_assert(sizeof(DataObjectAttribute) == 0x11);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::DataObjectAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::DataObjectAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::DataObjectAttribute::get_IsDataObject
// Il2CppName: get_IsDataObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::DataObjectAttribute::*)()>(&System::ComponentModel::DataObjectAttribute::get_IsDataObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DataObjectAttribute*), "get_IsDataObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DataObjectAttribute::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::ComponentModel::DataObjectAttribute::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DataObjectAttribute*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DataObjectAttribute::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::DataObjectAttribute::*)(::Il2CppObject*)>(&System::ComponentModel::DataObjectAttribute::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DataObjectAttribute*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DataObjectAttribute::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ComponentModel::DataObjectAttribute::*)()>(&System::ComponentModel::DataObjectAttribute::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DataObjectAttribute*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DataObjectAttribute::IsDefaultAttribute
// Il2CppName: IsDefaultAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::DataObjectAttribute::*)()>(&System::ComponentModel::DataObjectAttribute::IsDefaultAttribute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DataObjectAttribute*), "IsDefaultAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
