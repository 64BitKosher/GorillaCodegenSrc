// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.PropertyAttribute
#include "UnityEngine/PropertyAttribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: EnumFlagAttribute
  class EnumFlagAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::EnumFlagAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::EnumFlagAttribute*, "Pathfinding", "EnumFlagAttribute");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.EnumFlagAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  class EnumFlagAttribute : public ::UnityEngine::PropertyAttribute {
    public:
    // public System.Void .ctor()
    // Offset: 0x29FCE88
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnumFlagAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::EnumFlagAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnumFlagAttribute*, creationType>()));
    }
  }; // Pathfinding.EnumFlagAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::EnumFlagAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
