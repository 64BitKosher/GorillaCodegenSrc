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
  // Forward declaring type: ParenthesizePropertyNameAttribute
  class ParenthesizePropertyNameAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::ParenthesizePropertyNameAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ParenthesizePropertyNameAttribute*, "System.ComponentModel", "ParenthesizePropertyNameAttribute");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.ParenthesizePropertyNameAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  class ParenthesizePropertyNameAttribute : public ::System::Attribute {
    public:
    public:
    // private System.Boolean needParenthesis
    // Size: 0x1
    // Offset: 0x10
    bool needParenthesis;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return needParenthesis;
    }
    // Get static field: static public readonly System.ComponentModel.ParenthesizePropertyNameAttribute Default
    static ::System::ComponentModel::ParenthesizePropertyNameAttribute* _get_Default();
    // Set static field: static public readonly System.ComponentModel.ParenthesizePropertyNameAttribute Default
    static void _set_Default(::System::ComponentModel::ParenthesizePropertyNameAttribute* value);
    // Get instance field reference: private System.Boolean needParenthesis
    [[deprecated("Use field access instead!")]] bool& dyn_needParenthesis();
    // public System.Void .ctor()
    // Offset: 0x4F46CE0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ParenthesizePropertyNameAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::ParenthesizePropertyNameAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ParenthesizePropertyNameAttribute*, creationType>()));
    }
    // public System.Void .ctor(System.Boolean needParenthesis)
    // Offset: 0x4F46CFC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ParenthesizePropertyNameAttribute* New_ctor(bool needParenthesis) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::ParenthesizePropertyNameAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ParenthesizePropertyNameAttribute*, creationType>(needParenthesis)));
    }
    // public System.Boolean get_NeedParenthesis()
    // Offset: 0x4F46D24
    bool get_NeedParenthesis();
    // static private System.Void .cctor()
    // Offset: 0x4F46E0C
    static void _cctor();
    // public override System.Boolean Equals(System.Object o)
    // Offset: 0x4F46D2C
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::Equals(System.Object o)
    bool Equals(::Il2CppObject* o);
    // public override System.Int32 GetHashCode()
    // Offset: 0x4F46D9C
    // Implemented from: System.Attribute
    // Base method: System.Int32 Attribute::GetHashCode()
    int GetHashCode();
    // public override System.Boolean IsDefaultAttribute()
    // Offset: 0x4F46DA4
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::IsDefaultAttribute()
    bool IsDefaultAttribute();
  }; // System.ComponentModel.ParenthesizePropertyNameAttribute
  #pragma pack(pop)
  static check_size<sizeof(ParenthesizePropertyNameAttribute), 16 + sizeof(bool)> __System_ComponentModel_ParenthesizePropertyNameAttributeSizeCheck;
  static_assert(sizeof(ParenthesizePropertyNameAttribute) == 0x11);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::ParenthesizePropertyNameAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::ParenthesizePropertyNameAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::ParenthesizePropertyNameAttribute::get_NeedParenthesis
// Il2CppName: get_NeedParenthesis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::ParenthesizePropertyNameAttribute::*)()>(&System::ComponentModel::ParenthesizePropertyNameAttribute::get_NeedParenthesis)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ParenthesizePropertyNameAttribute*), "get_NeedParenthesis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ParenthesizePropertyNameAttribute::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::ComponentModel::ParenthesizePropertyNameAttribute::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ParenthesizePropertyNameAttribute*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ParenthesizePropertyNameAttribute::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::ParenthesizePropertyNameAttribute::*)(::Il2CppObject*)>(&System::ComponentModel::ParenthesizePropertyNameAttribute::Equals)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ParenthesizePropertyNameAttribute*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ParenthesizePropertyNameAttribute::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ComponentModel::ParenthesizePropertyNameAttribute::*)()>(&System::ComponentModel::ParenthesizePropertyNameAttribute::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ParenthesizePropertyNameAttribute*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ParenthesizePropertyNameAttribute::IsDefaultAttribute
// Il2CppName: IsDefaultAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::ParenthesizePropertyNameAttribute::*)()>(&System::ComponentModel::ParenthesizePropertyNameAttribute::IsDefaultAttribute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ParenthesizePropertyNameAttribute*), "IsDefaultAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
