// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: PlayFab.Json.NullValueHandling
#include "PlayFab/Json/NullValueHandling.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: PlayFab.Json
namespace PlayFab::Json {
  // Forward declaring type: JsonProperty
  class JsonProperty;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::Json::JsonProperty);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::Json::JsonProperty*, "PlayFab.Json", "JsonProperty");
// Type namespace: PlayFab.Json
namespace PlayFab::Json {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.Json.JsonProperty
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  class JsonProperty : public ::System::Attribute {
    public:
    public:
    // public System.String PropertyName
    // Size: 0x8
    // Offset: 0x10
    ::StringW PropertyName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public PlayFab.Json.NullValueHandling NullValueHandling
    // Size: 0x4
    // Offset: 0x18
    ::PlayFab::Json::NullValueHandling NullValueHandling;
    // Field size check
    static_assert(sizeof(::PlayFab::Json::NullValueHandling) == 0x4);
    public:
    // Get instance field reference: public System.String PropertyName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_PropertyName();
    // Get instance field reference: public PlayFab.Json.NullValueHandling NullValueHandling
    [[deprecated("Use field access instead!")]] ::PlayFab::Json::NullValueHandling& dyn_NullValueHandling();
    // public System.Void .ctor()
    // Offset: 0x4AFCF08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JsonProperty* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::Json::JsonProperty::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JsonProperty*, creationType>()));
    }
  }; // PlayFab.Json.JsonProperty
  #pragma pack(pop)
  static check_size<sizeof(JsonProperty), 24 + sizeof(::PlayFab::Json::NullValueHandling)> __PlayFab_Json_JsonPropertySizeCheck;
  static_assert(sizeof(JsonProperty) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::Json::JsonProperty::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
