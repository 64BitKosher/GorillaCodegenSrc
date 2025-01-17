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
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: DebuggerDisplayAttribute
  class DebuggerDisplayAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Diagnostics::DebuggerDisplayAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::DebuggerDisplayAttribute*, "System.Diagnostics", "DebuggerDisplayAttribute");
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.DebuggerDisplayAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: FFFFFFFF
  class DebuggerDisplayAttribute : public ::System::Attribute {
    public:
    public:
    // private System.String name
    // Size: 0x8
    // Offset: 0x10
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String value
    // Size: 0x8
    // Offset: 0x18
    ::StringW value;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String type
    // Size: 0x8
    // Offset: 0x20
    ::StringW type;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
    // Get instance field reference: private System.String value
    [[deprecated("Use field access instead!")]] ::StringW& dyn_value();
    // Get instance field reference: private System.String type
    [[deprecated("Use field access instead!")]] ::StringW& dyn_type();
    // public System.Void .ctor(System.String value)
    // Offset: 0x46198A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DebuggerDisplayAttribute* New_ctor(::StringW value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::DebuggerDisplayAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DebuggerDisplayAttribute*, creationType>(value)));
    }
    // public System.Void set_Name(System.String value)
    // Offset: 0x4619934
    void set_Name(::StringW value);
    // public System.Void set_Type(System.String value)
    // Offset: 0x461993C
    void set_Type(::StringW value);
  }; // System.Diagnostics.DebuggerDisplayAttribute
  #pragma pack(pop)
  static check_size<sizeof(DebuggerDisplayAttribute), 32 + sizeof(::StringW)> __System_Diagnostics_DebuggerDisplayAttributeSizeCheck;
  static_assert(sizeof(DebuggerDisplayAttribute) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::DebuggerDisplayAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Diagnostics::DebuggerDisplayAttribute::set_Name
// Il2CppName: set_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::DebuggerDisplayAttribute::*)(::StringW)>(&System::Diagnostics::DebuggerDisplayAttribute::set_Name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::DebuggerDisplayAttribute*), "set_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::DebuggerDisplayAttribute::set_Type
// Il2CppName: set_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::DebuggerDisplayAttribute::*)(::StringW)>(&System::Diagnostics::DebuggerDisplayAttribute::set_Type)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::DebuggerDisplayAttribute*), "set_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
