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
// Type namespace: Pathfinding.Serialization
namespace Pathfinding::Serialization {
  // Forward declaring type: JsonMemberAttribute
  class JsonMemberAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::Serialization::JsonMemberAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Serialization::JsonMemberAttribute*, "Pathfinding.Serialization", "JsonMemberAttribute");
// Type namespace: Pathfinding.Serialization
namespace Pathfinding::Serialization {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Serialization.JsonMemberAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  class JsonMemberAttribute : public ::System::Attribute {
    public:
    // public System.Void .ctor()
    // Offset: 0x2A23BEC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JsonMemberAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Serialization::JsonMemberAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JsonMemberAttribute*, creationType>()));
    }
  }; // Pathfinding.Serialization.JsonMemberAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::Serialization::JsonMemberAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
