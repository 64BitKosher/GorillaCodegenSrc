// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.TypeConverter
#include "System/ComponentModel/TypeConverter.hpp"
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
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IComparer
  class IComparer;
}
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: ITypeDescriptorContext
  class ITypeDescriptorContext;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: EnumConverter
  class EnumConverter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::EnumConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::EnumConverter*, "System.ComponentModel", "EnumConverter");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.EnumConverter
  // [TokenAttribute] Offset: FFFFFFFF
  class EnumConverter : public ::System::ComponentModel::TypeConverter {
    public:
    public:
    // private System.ComponentModel.TypeConverter/StandardValuesCollection values
    // Size: 0x8
    // Offset: 0x10
    ::System::ComponentModel::TypeConverter::StandardValuesCollection* values;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::TypeConverter::StandardValuesCollection*) == 0x8);
    // private System.Type type
    // Size: 0x8
    // Offset: 0x18
    ::System::Type* type;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Get instance field reference: private System.ComponentModel.TypeConverter/StandardValuesCollection values
    [[deprecated("Use field access instead!")]] ::System::ComponentModel::TypeConverter::StandardValuesCollection*& dyn_values();
    // Get instance field reference: private System.Type type
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_type();
    // public System.Void .ctor(System.Type type)
    // Offset: 0x4F1F26C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnumConverter* New_ctor(::System::Type* type) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::EnumConverter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnumConverter*, creationType>(type)));
    }
    // protected System.Type get_EnumType()
    // Offset: 0x4F1F29C
    ::System::Type* get_EnumType();
    // protected System.ComponentModel.TypeConverter/StandardValuesCollection get_Values()
    // Offset: 0x4F1F2A4
    ::System::ComponentModel::TypeConverter::StandardValuesCollection* get_Values();
    // protected System.Void set_Values(System.ComponentModel.TypeConverter/StandardValuesCollection value)
    // Offset: 0x4F1F2AC
    void set_Values(::System::ComponentModel::TypeConverter::StandardValuesCollection* value);
    // protected System.Collections.IComparer get_Comparer()
    // Offset: 0x4F1F4D4
    ::System::Collections::IComparer* get_Comparer();
    // public override System.Boolean CanConvertFrom(System.ComponentModel.ITypeDescriptorContext context, System.Type sourceType)
    // Offset: 0x4F1F2B4
    // Implemented from: System.ComponentModel.TypeConverter
    // Base method: System.Boolean TypeConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext context, System.Type sourceType)
    bool CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType);
    // public override System.Boolean CanConvertTo(System.ComponentModel.ITypeDescriptorContext context, System.Type destinationType)
    // Offset: 0x4F1F3C4
    // Implemented from: System.ComponentModel.TypeConverter
    // Base method: System.Boolean TypeConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext context, System.Type destinationType)
    bool CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType);
    // public override System.Object ConvertFrom(System.ComponentModel.ITypeDescriptorContext context, System.Globalization.CultureInfo culture, System.Object value)
    // Offset: 0x4F1F52C
    // Implemented from: System.ComponentModel.TypeConverter
    // Base method: System.Object TypeConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext context, System.Globalization.CultureInfo culture, System.Object value)
    ::Il2CppObject* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::Il2CppObject* value);
    // public override System.Object ConvertTo(System.ComponentModel.ITypeDescriptorContext context, System.Globalization.CultureInfo culture, System.Object value, System.Type destinationType)
    // Offset: 0x4F1FA50
    // Implemented from: System.ComponentModel.TypeConverter
    // Base method: System.Object TypeConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext context, System.Globalization.CultureInfo culture, System.Object value, System.Type destinationType)
    ::Il2CppObject* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::Il2CppObject* value, ::System::Type* destinationType);
    // public override System.ComponentModel.TypeConverter/StandardValuesCollection GetStandardValues(System.ComponentModel.ITypeDescriptorContext context)
    // Offset: 0x4F2085C
    // Implemented from: System.ComponentModel.TypeConverter
    // Base method: System.ComponentModel.TypeConverter/StandardValuesCollection TypeConverter::GetStandardValues(System.ComponentModel.ITypeDescriptorContext context)
    ::System::ComponentModel::TypeConverter::StandardValuesCollection* GetStandardValues(::System::ComponentModel::ITypeDescriptorContext* context);
    // public override System.Boolean GetStandardValuesExclusive(System.ComponentModel.ITypeDescriptorContext context)
    // Offset: 0x4F20C50
    // Implemented from: System.ComponentModel.TypeConverter
    // Base method: System.Boolean TypeConverter::GetStandardValuesExclusive(System.ComponentModel.ITypeDescriptorContext context)
    bool GetStandardValuesExclusive(::System::ComponentModel::ITypeDescriptorContext* context);
    // public override System.Boolean GetStandardValuesSupported(System.ComponentModel.ITypeDescriptorContext context)
    // Offset: 0x4F20CF8
    // Implemented from: System.ComponentModel.TypeConverter
    // Base method: System.Boolean TypeConverter::GetStandardValuesSupported(System.ComponentModel.ITypeDescriptorContext context)
    bool GetStandardValuesSupported(::System::ComponentModel::ITypeDescriptorContext* context);
    // public override System.Boolean IsValid(System.ComponentModel.ITypeDescriptorContext context, System.Object value)
    // Offset: 0x4F20D00
    // Implemented from: System.ComponentModel.TypeConverter
    // Base method: System.Boolean TypeConverter::IsValid(System.ComponentModel.ITypeDescriptorContext context, System.Object value)
    bool IsValid(::System::ComponentModel::ITypeDescriptorContext* context, ::Il2CppObject* value);
  }; // System.ComponentModel.EnumConverter
  #pragma pack(pop)
  static check_size<sizeof(EnumConverter), 24 + sizeof(::System::Type*)> __System_ComponentModel_EnumConverterSizeCheck;
  static_assert(sizeof(EnumConverter) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::EnumConverter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::EnumConverter::get_EnumType
// Il2CppName: get_EnumType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::ComponentModel::EnumConverter::*)()>(&System::ComponentModel::EnumConverter::get_EnumType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EnumConverter*), "get_EnumType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::EnumConverter::get_Values
// Il2CppName: get_Values
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::TypeConverter::StandardValuesCollection* (System::ComponentModel::EnumConverter::*)()>(&System::ComponentModel::EnumConverter::get_Values)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EnumConverter*), "get_Values", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::EnumConverter::set_Values
// Il2CppName: set_Values
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::EnumConverter::*)(::System::ComponentModel::TypeConverter::StandardValuesCollection*)>(&System::ComponentModel::EnumConverter::set_Values)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "TypeConverter/StandardValuesCollection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EnumConverter*), "set_Values", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::EnumConverter::get_Comparer
// Il2CppName: get_Comparer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IComparer* (System::ComponentModel::EnumConverter::*)()>(&System::ComponentModel::EnumConverter::get_Comparer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EnumConverter*), "get_Comparer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::EnumConverter::CanConvertFrom
// Il2CppName: CanConvertFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::EnumConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*)>(&System::ComponentModel::EnumConverter::CanConvertFrom)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ITypeDescriptorContext")->byval_arg;
    static auto* sourceType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EnumConverter*), "CanConvertFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, sourceType});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::EnumConverter::CanConvertTo
// Il2CppName: CanConvertTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::EnumConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*)>(&System::ComponentModel::EnumConverter::CanConvertTo)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ITypeDescriptorContext")->byval_arg;
    static auto* destinationType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EnumConverter*), "CanConvertTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, destinationType});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::EnumConverter::ConvertFrom
// Il2CppName: ConvertFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::EnumConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::Il2CppObject*)>(&System::ComponentModel::EnumConverter::ConvertFrom)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ITypeDescriptorContext")->byval_arg;
    static auto* culture = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EnumConverter*), "ConvertFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, culture, value});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::EnumConverter::ConvertTo
// Il2CppName: ConvertTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::EnumConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::Il2CppObject*, ::System::Type*)>(&System::ComponentModel::EnumConverter::ConvertTo)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ITypeDescriptorContext")->byval_arg;
    static auto* culture = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* destinationType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EnumConverter*), "ConvertTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, culture, value, destinationType});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::EnumConverter::GetStandardValues
// Il2CppName: GetStandardValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::TypeConverter::StandardValuesCollection* (System::ComponentModel::EnumConverter::*)(::System::ComponentModel::ITypeDescriptorContext*)>(&System::ComponentModel::EnumConverter::GetStandardValues)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ITypeDescriptorContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EnumConverter*), "GetStandardValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::EnumConverter::GetStandardValuesExclusive
// Il2CppName: GetStandardValuesExclusive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::EnumConverter::*)(::System::ComponentModel::ITypeDescriptorContext*)>(&System::ComponentModel::EnumConverter::GetStandardValuesExclusive)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ITypeDescriptorContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EnumConverter*), "GetStandardValuesExclusive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::EnumConverter::GetStandardValuesSupported
// Il2CppName: GetStandardValuesSupported
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::EnumConverter::*)(::System::ComponentModel::ITypeDescriptorContext*)>(&System::ComponentModel::EnumConverter::GetStandardValuesSupported)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ITypeDescriptorContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EnumConverter*), "GetStandardValuesSupported", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::EnumConverter::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::EnumConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::Il2CppObject*)>(&System::ComponentModel::EnumConverter::IsValid)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ITypeDescriptorContext")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::EnumConverter*), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, value});
  }
};
