// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.XsdBuilder
#include "System/Xml/Schema/XsdBuilder.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::XsdBuilder::XsdBuildFunction);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XsdBuilder::XsdBuildFunction*, "System.Xml.Schema", "XsdBuilder/XsdBuildFunction");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XsdBuilder/XsdBuildFunction
  // [TokenAttribute] Offset: FFFFFFFF
  class XsdBuilder::XsdBuildFunction : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x4DD3E80
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XsdBuilder::XsdBuildFunction* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XsdBuilder::XsdBuildFunction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XsdBuilder::XsdBuildFunction*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Xml.Schema.XsdBuilder builder, System.String value)
    // Offset: 0x4DD3F34
    void Invoke(::System::Xml::Schema::XsdBuilder* builder, ::StringW value);
  }; // System.Xml.Schema.XsdBuilder/XsdBuildFunction
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XsdBuilder::XsdBuildFunction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XsdBuilder::XsdBuildFunction::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XsdBuilder::XsdBuildFunction::*)(::System::Xml::Schema::XsdBuilder*, ::StringW)>(&System::Xml::Schema::XsdBuilder::XsdBuildFunction::Invoke)> {
  static const MethodInfo* get() {
    static auto* builder = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XsdBuilder")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XsdBuilder::XsdBuildFunction*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{builder, value});
  }
};
