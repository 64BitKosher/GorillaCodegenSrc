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
// Type namespace: Sirenix.OdinInspector
namespace Sirenix::OdinInspector {
  // Forward declaring type: IncludeMyAttributesAttribute
  class IncludeMyAttributesAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Sirenix::OdinInspector::IncludeMyAttributesAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Sirenix::OdinInspector::IncludeMyAttributesAttribute*, "Sirenix.OdinInspector", "IncludeMyAttributesAttribute");
// Type namespace: Sirenix.OdinInspector
namespace Sirenix::OdinInspector {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Sirenix.OdinInspector.IncludeMyAttributesAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  class IncludeMyAttributesAttribute : public ::System::Attribute {
    public:
    // public System.Void .ctor()
    // Offset: 0x4B6F198
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IncludeMyAttributesAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Sirenix::OdinInspector::IncludeMyAttributesAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IncludeMyAttributesAttribute*, creationType>()));
    }
  }; // Sirenix.OdinInspector.IncludeMyAttributesAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Sirenix::OdinInspector::IncludeMyAttributesAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
