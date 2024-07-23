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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: DefaultBindingPropertyAttribute
  class DefaultBindingPropertyAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::DefaultBindingPropertyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::DefaultBindingPropertyAttribute*, "System.ComponentModel", "DefaultBindingPropertyAttribute");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.DefaultBindingPropertyAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  class DefaultBindingPropertyAttribute : public ::System::Attribute {
    public:
    public:
    // private readonly System.String <Name>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return Name;
    }
    // Get static field: static public readonly System.ComponentModel.DefaultBindingPropertyAttribute Default
    static ::System::ComponentModel::DefaultBindingPropertyAttribute* _get_Default();
    // Set static field: static public readonly System.ComponentModel.DefaultBindingPropertyAttribute Default
    static void _set_Default(::System::ComponentModel::DefaultBindingPropertyAttribute* value);
    // Get instance field reference: private readonly System.String <Name>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Name$k__BackingField();
    // public System.Void .ctor()
    // Offset: 0x4EFFE54
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultBindingPropertyAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::DefaultBindingPropertyAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultBindingPropertyAttribute*, creationType>()));
    }
    // public System.Void .ctor(System.String name)
    // Offset: 0x4EFFE5C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultBindingPropertyAttribute* New_ctor(::StringW name) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::DefaultBindingPropertyAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultBindingPropertyAttribute*, creationType>(name)));
    }
    // public System.String get_Name()
    // Offset: 0x4EFFE8C
    ::StringW get_Name();
    // static private System.Void .cctor()
    // Offset: 0x4EFFF1C
    static void _cctor();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x4EFFE94
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x4EFFF14
    // Implemented from: System.Attribute
    // Base method: System.Int32 Attribute::GetHashCode()
    int GetHashCode();
  }; // System.ComponentModel.DefaultBindingPropertyAttribute
  #pragma pack(pop)
  static check_size<sizeof(DefaultBindingPropertyAttribute), 16 + sizeof(::StringW)> __System_ComponentModel_DefaultBindingPropertyAttributeSizeCheck;
  static_assert(sizeof(DefaultBindingPropertyAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::DefaultBindingPropertyAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::DefaultBindingPropertyAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::DefaultBindingPropertyAttribute::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::DefaultBindingPropertyAttribute::*)()>(&System::ComponentModel::DefaultBindingPropertyAttribute::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DefaultBindingPropertyAttribute*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DefaultBindingPropertyAttribute::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::ComponentModel::DefaultBindingPropertyAttribute::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DefaultBindingPropertyAttribute*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DefaultBindingPropertyAttribute::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::DefaultBindingPropertyAttribute::*)(::Il2CppObject*)>(&System::ComponentModel::DefaultBindingPropertyAttribute::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DefaultBindingPropertyAttribute*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DefaultBindingPropertyAttribute::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ComponentModel::DefaultBindingPropertyAttribute::*)()>(&System::ComponentModel::DefaultBindingPropertyAttribute::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DefaultBindingPropertyAttribute*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
