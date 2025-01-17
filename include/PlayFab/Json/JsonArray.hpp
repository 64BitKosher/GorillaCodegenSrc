// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: PlayFab.Json
namespace PlayFab::Json {
  // Forward declaring type: JsonArray
  class JsonArray;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::Json::JsonArray);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::Json::JsonArray*, "PlayFab.Json", "JsonArray");
// Type namespace: PlayFab.Json
namespace PlayFab::Json {
  // WARNING Size may be invalid!
  // Autogenerated type: PlayFab.Json.JsonArray
  // [TokenAttribute] Offset: FFFFFFFF
  // [GeneratedCodeAttribute] Offset: FFFFFFFF
  // [EditorBrowsableAttribute] Offset: FFFFFFFF
  class JsonArray : public ::System::Collections::Generic::List_1<::Il2CppObject*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x4AFCF10
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JsonArray* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::Json::JsonArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JsonArray*, creationType>()));
    }
    // public System.Void .ctor(System.Int32 capacity)
    // Offset: 0x4AFCF7C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JsonArray* New_ctor(int capacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::Json::JsonArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JsonArray*, creationType>(capacity)));
    }
    // public override System.String ToString()
    // Offset: 0x4AFCFF8
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // PlayFab.Json.JsonArray
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::Json::JsonArray::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: PlayFab::Json::JsonArray::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: PlayFab::Json::JsonArray::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (PlayFab::Json::JsonArray::*)()>(&PlayFab::Json::JsonArray::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Json::JsonArray*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
