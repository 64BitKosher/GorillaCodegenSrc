// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Completed includes
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // Forward declaring type: JsonExtensionDataAttribute
  class JsonExtensionDataAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::JsonExtensionDataAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonExtensionDataAttribute*, "Newtonsoft.Json", "JsonExtensionDataAttribute");
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // Size: 0x12
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.JsonExtensionDataAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  class JsonExtensionDataAttribute : public ::System::Attribute {
    public:
    public:
    // private System.Boolean <WriteData>k__BackingField
    // Size: 0x1
    // Offset: 0x10
    bool WriteData;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <ReadData>k__BackingField
    // Size: 0x1
    // Offset: 0x11
    bool ReadData;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Boolean <WriteData>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$WriteData$k__BackingField();
    // Get instance field reference: private System.Boolean <ReadData>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$ReadData$k__BackingField();
    // public System.Boolean get_WriteData()
    // Offset: 0x46EA538
    bool get_WriteData();
    // public System.Boolean get_ReadData()
    // Offset: 0x46EA540
    bool get_ReadData();
  }; // Newtonsoft.Json.JsonExtensionDataAttribute
  #pragma pack(pop)
  static check_size<sizeof(JsonExtensionDataAttribute), 17 + sizeof(bool)> __Newtonsoft_Json_JsonExtensionDataAttributeSizeCheck;
  static_assert(sizeof(JsonExtensionDataAttribute) == 0x12);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::JsonExtensionDataAttribute::get_WriteData
// Il2CppName: get_WriteData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::JsonExtensionDataAttribute::*)()>(&Newtonsoft::Json::JsonExtensionDataAttribute::get_WriteData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::JsonExtensionDataAttribute*), "get_WriteData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::JsonExtensionDataAttribute::get_ReadData
// Il2CppName: get_ReadData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::JsonExtensionDataAttribute::*)()>(&Newtonsoft::Json::JsonExtensionDataAttribute::get_ReadData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::JsonExtensionDataAttribute*), "get_ReadData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
