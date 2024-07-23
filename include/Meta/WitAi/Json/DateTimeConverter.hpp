// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.WitAi.Json.JsonConverter
#include "Meta/WitAi/Json/JsonConverter.hpp"
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
// Forward declaring namespace: Meta::WitAi::Json
namespace Meta::WitAi::Json {
  // Forward declaring type: WitResponseNode
  class WitResponseNode;
}
// Completed forward declares
// Type namespace: Meta.WitAi.Json
namespace Meta::WitAi::Json {
  // Forward declaring type: DateTimeConverter
  class DateTimeConverter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::Json::DateTimeConverter);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::Json::DateTimeConverter*, "Meta.WitAi.Json", "DateTimeConverter");
// Type namespace: Meta.WitAi.Json
namespace Meta::WitAi::Json {
  // Size: 0x12
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.Json.DateTimeConverter
  // [TokenAttribute] Offset: FFFFFFFF
  class DateTimeConverter : public ::Meta::WitAi::Json::JsonConverter {
    public:
    // public override System.Boolean get_CanRead()
    // Offset: 0x44472E4
    // Implemented from: Meta.WitAi.Json.JsonConverter
    // Base method: System.Boolean JsonConverter::get_CanRead()
    bool get_CanRead();
    // public override System.Boolean get_CanWrite()
    // Offset: 0x44472EC
    // Implemented from: Meta.WitAi.Json.JsonConverter
    // Base method: System.Boolean JsonConverter::get_CanWrite()
    bool get_CanWrite();
    // public override System.Boolean CanConvert(System.Type objectType)
    // Offset: 0x44472F4
    // Implemented from: Meta.WitAi.Json.JsonConverter
    // Base method: System.Boolean JsonConverter::CanConvert(System.Type objectType)
    bool CanConvert(::System::Type* objectType);
    // public override System.Object ReadJson(Meta.WitAi.Json.WitResponseNode serializer, System.Type objectType, System.Object existingValue)
    // Offset: 0x4447378
    // Implemented from: Meta.WitAi.Json.JsonConverter
    // Base method: System.Object JsonConverter::ReadJson(Meta.WitAi.Json.WitResponseNode serializer, System.Type objectType, System.Object existingValue)
    ::Il2CppObject* ReadJson(::Meta::WitAi::Json::WitResponseNode* serializer, ::System::Type* objectType, ::Il2CppObject* existingValue);
    // public override Meta.WitAi.Json.WitResponseNode WriteJson(System.Object existingValue)
    // Offset: 0x4447428
    // Implemented from: Meta.WitAi.Json.JsonConverter
    // Base method: Meta.WitAi.Json.WitResponseNode JsonConverter::WriteJson(System.Object existingValue)
    ::Meta::WitAi::Json::WitResponseNode* WriteJson(::Il2CppObject* existingValue);
    // public System.Void .ctor()
    // Offset: 0x4447534
    // Implemented from: Meta.WitAi.Json.JsonConverter
    // Base method: System.Void JsonConverter::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DateTimeConverter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Json::DateTimeConverter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DateTimeConverter*, creationType>()));
    }
  }; // Meta.WitAi.Json.DateTimeConverter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::Json::DateTimeConverter::get_CanRead
// Il2CppName: get_CanRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Meta::WitAi::Json::DateTimeConverter::*)()>(&Meta::WitAi::Json::DateTimeConverter::get_CanRead)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Json::DateTimeConverter*), "get_CanRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Json::DateTimeConverter::get_CanWrite
// Il2CppName: get_CanWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Meta::WitAi::Json::DateTimeConverter::*)()>(&Meta::WitAi::Json::DateTimeConverter::get_CanWrite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Json::DateTimeConverter*), "get_CanWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Json::DateTimeConverter::CanConvert
// Il2CppName: CanConvert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Meta::WitAi::Json::DateTimeConverter::*)(::System::Type*)>(&Meta::WitAi::Json::DateTimeConverter::CanConvert)> {
  static const MethodInfo* get() {
    static auto* objectType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Json::DateTimeConverter*), "CanConvert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objectType});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Json::DateTimeConverter::ReadJson
// Il2CppName: ReadJson
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Meta::WitAi::Json::DateTimeConverter::*)(::Meta::WitAi::Json::WitResponseNode*, ::System::Type*, ::Il2CppObject*)>(&Meta::WitAi::Json::DateTimeConverter::ReadJson)> {
  static const MethodInfo* get() {
    static auto* serializer = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Json", "WitResponseNode")->byval_arg;
    static auto* objectType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* existingValue = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Json::DateTimeConverter*), "ReadJson", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serializer, objectType, existingValue});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Json::DateTimeConverter::WriteJson
// Il2CppName: WriteJson
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::Json::WitResponseNode* (Meta::WitAi::Json::DateTimeConverter::*)(::Il2CppObject*)>(&Meta::WitAi::Json::DateTimeConverter::WriteJson)> {
  static const MethodInfo* get() {
    static auto* existingValue = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Json::DateTimeConverter*), "WriteJson", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{existingValue});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Json::DateTimeConverter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
