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
// Type namespace: Cinemachine
namespace Cinemachine {
  // Forward declaring type: LensSettingsPropertyAttribute
  class LensSettingsPropertyAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Cinemachine::LensSettingsPropertyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::LensSettingsPropertyAttribute*, "Cinemachine", "LensSettingsPropertyAttribute");
// Type namespace: Cinemachine
namespace Cinemachine {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: Cinemachine.LensSettingsPropertyAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  class LensSettingsPropertyAttribute : public ::UnityEngine::PropertyAttribute {
    public:
    // public System.Void .ctor()
    // Offset: 0x2AAF260
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LensSettingsPropertyAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cinemachine::LensSettingsPropertyAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LensSettingsPropertyAttribute*, creationType>()));
    }
  }; // Cinemachine.LensSettingsPropertyAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Cinemachine::LensSettingsPropertyAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!