// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Forward declaring type: ObjectMap
  class ObjectMap;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Serialization::ObjectMap);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::ObjectMap*, "System.Xml.Serialization", "ObjectMap");
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Serialization.ObjectMap
  // [TokenAttribute] Offset: FFFFFFFF
  class ObjectMap : public ::Il2CppObject {
    public:
    // public System.Void .ctor()
    // Offset: 0x4E4DAF0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectMap* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Serialization::ObjectMap::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectMap*, creationType>()));
    }
  }; // System.Xml.Serialization.ObjectMap
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Serialization::ObjectMap::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
