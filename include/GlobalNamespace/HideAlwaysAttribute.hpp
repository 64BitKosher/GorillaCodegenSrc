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
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: HideAlwaysAttribute
  class HideAlwaysAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::HideAlwaysAttribute);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HideAlwaysAttribute*, "", "HideAlwaysAttribute");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: HideAlwaysAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [IncludeMyAttributesAttribute] Offset: FFFFFFFF
  // [ConditionalAttribute] Offset: FFFFFFFF
  class HideAlwaysAttribute : public ::System::Attribute {
    public:
    // public System.Void .ctor()
    // Offset: 0x274DB58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HideAlwaysAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::HideAlwaysAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HideAlwaysAttribute*, creationType>()));
    }
  }; // HideAlwaysAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HideAlwaysAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!