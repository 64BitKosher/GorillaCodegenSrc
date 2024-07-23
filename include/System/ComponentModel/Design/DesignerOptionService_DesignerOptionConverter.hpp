// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.Design.DesignerOptionService
#include "System/ComponentModel/Design/DesignerOptionService.hpp"
// Including type: System.ComponentModel.TypeConverter
#include "System/ComponentModel/TypeConverter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::ComponentModel::Design
namespace System::ComponentModel::Design {
}
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: ITypeDescriptorContext
  class ITypeDescriptorContext;
  // Forward declaring type: PropertyDescriptorCollection
  class PropertyDescriptorCollection;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Attribute
  class Attribute;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::Design::DesignerOptionService::DesignerOptionConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::Design::DesignerOptionService::DesignerOptionConverter*, "System.ComponentModel.Design", "DesignerOptionService/DesignerOptionConverter");
// Type namespace: System.ComponentModel.Design
namespace System::ComponentModel::Design {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.Design.DesignerOptionService/DesignerOptionConverter
  // [TokenAttribute] Offset: FFFFFFFF
  class DesignerOptionService::DesignerOptionConverter : public ::System::ComponentModel::TypeConverter {
    public:
    // Nested type: ::System::ComponentModel::Design::DesignerOptionService::DesignerOptionConverter::OptionPropertyDescriptor
    class OptionPropertyDescriptor;
    // public override System.Boolean GetPropertiesSupported(System.ComponentModel.ITypeDescriptorContext cxt)
    // Offset: 0x4F48F7C
    // Implemented from: System.ComponentModel.TypeConverter
    // Base method: System.Boolean TypeConverter::GetPropertiesSupported(System.ComponentModel.ITypeDescriptorContext cxt)
    bool GetPropertiesSupported(::System::ComponentModel::ITypeDescriptorContext* cxt);
    // public override System.ComponentModel.PropertyDescriptorCollection GetProperties(System.ComponentModel.ITypeDescriptorContext cxt, System.Object value, System.Attribute[] attributes)
    // Offset: 0x4F48F84
    // Implemented from: System.ComponentModel.TypeConverter
    // Base method: System.ComponentModel.PropertyDescriptorCollection TypeConverter::GetProperties(System.ComponentModel.ITypeDescriptorContext cxt, System.Object value, System.Attribute[] attributes)
    ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::ComponentModel::ITypeDescriptorContext* cxt, ::Il2CppObject* value, ::ArrayW<::System::Attribute*> attributes);
    // public override System.Object ConvertTo(System.ComponentModel.ITypeDescriptorContext cxt, System.Globalization.CultureInfo culture, System.Object value, System.Type destinationType)
    // Offset: 0x4F495AC
    // Implemented from: System.ComponentModel.TypeConverter
    // Base method: System.Object TypeConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext cxt, System.Globalization.CultureInfo culture, System.Object value, System.Type destinationType)
    ::Il2CppObject* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* cxt, ::System::Globalization::CultureInfo* culture, ::Il2CppObject* value, ::System::Type* destinationType);
    // public System.Void .ctor()
    // Offset: 0x4F49690
    // Implemented from: System.ComponentModel.TypeConverter
    // Base method: System.Void TypeConverter::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DesignerOptionService::DesignerOptionConverter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::Design::DesignerOptionService::DesignerOptionConverter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DesignerOptionService::DesignerOptionConverter*, creationType>()));
    }
  }; // System.ComponentModel.Design.DesignerOptionService/DesignerOptionConverter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::Design::DesignerOptionService::DesignerOptionConverter::GetPropertiesSupported
// Il2CppName: GetPropertiesSupported
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::Design::DesignerOptionService::DesignerOptionConverter::*)(::System::ComponentModel::ITypeDescriptorContext*)>(&System::ComponentModel::Design::DesignerOptionService::DesignerOptionConverter::GetPropertiesSupported)> {
  static const MethodInfo* get() {
    static auto* cxt = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ITypeDescriptorContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::Design::DesignerOptionService::DesignerOptionConverter*), "GetPropertiesSupported", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cxt});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::Design::DesignerOptionService::DesignerOptionConverter::GetProperties
// Il2CppName: GetProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (System::ComponentModel::Design::DesignerOptionService::DesignerOptionConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::Il2CppObject*, ::ArrayW<::System::Attribute*>)>(&System::ComponentModel::Design::DesignerOptionService::DesignerOptionConverter::GetProperties)> {
  static const MethodInfo* get() {
    static auto* cxt = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ITypeDescriptorContext")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* attributes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Attribute"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::Design::DesignerOptionService::DesignerOptionConverter*), "GetProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cxt, value, attributes});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::Design::DesignerOptionService::DesignerOptionConverter::ConvertTo
// Il2CppName: ConvertTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::Design::DesignerOptionService::DesignerOptionConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::Il2CppObject*, ::System::Type*)>(&System::ComponentModel::Design::DesignerOptionService::DesignerOptionConverter::ConvertTo)> {
  static const MethodInfo* get() {
    static auto* cxt = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ITypeDescriptorContext")->byval_arg;
    static auto* culture = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* destinationType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::Design::DesignerOptionService::DesignerOptionConverter*), "ConvertTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cxt, culture, value, destinationType});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::Design::DesignerOptionService::DesignerOptionConverter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
