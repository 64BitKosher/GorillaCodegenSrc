// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.JsonConverter
#include "Newtonsoft/Json/JsonConverter.hpp"
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
// Completed forward declares
// Type namespace: Newtonsoft.Json.Converters
namespace Newtonsoft::Json::Converters {
  // Forward declaring type: DateTimeConverterBase
  class DateTimeConverterBase;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Converters::DateTimeConverterBase);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::DateTimeConverterBase*, "Newtonsoft.Json.Converters", "DateTimeConverterBase");
// Type namespace: Newtonsoft.Json.Converters
namespace Newtonsoft::Json::Converters {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Converters.DateTimeConverterBase
  // [TokenAttribute] Offset: FFFFFFFF
  class DateTimeConverterBase : public ::Newtonsoft::Json::JsonConverter {
    public:
    // public override System.Boolean CanConvert(System.Type objectType)
    // Offset: 0x4755078
    // Implemented from: Newtonsoft.Json.JsonConverter
    // Base method: System.Boolean JsonConverter::CanConvert(System.Type objectType)
    bool CanConvert(::System::Type* objectType);
    // protected System.Void .ctor()
    // Offset: 0x47551EC
    // Implemented from: Newtonsoft.Json.JsonConverter
    // Base method: System.Void JsonConverter::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DateTimeConverterBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Converters::DateTimeConverterBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DateTimeConverterBase*, creationType>()));
    }
  }; // Newtonsoft.Json.Converters.DateTimeConverterBase
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::DateTimeConverterBase::CanConvert
// Il2CppName: CanConvert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Converters::DateTimeConverterBase::*)(::System::Type*)>(&Newtonsoft::Json::Converters::DateTimeConverterBase::CanConvert)> {
  static const MethodInfo* get() {
    static auto* objectType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Converters::DateTimeConverterBase*), "CanConvert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objectType});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Converters::DateTimeConverterBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
