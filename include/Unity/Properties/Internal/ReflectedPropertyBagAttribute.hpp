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
// Type namespace: Unity.Properties.Internal
namespace Unity::Properties::Internal {
  // Forward declaring type: ReflectedPropertyBagAttribute
  class ReflectedPropertyBagAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::Properties::Internal::ReflectedPropertyBagAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::ReflectedPropertyBagAttribute*, "Unity.Properties.Internal", "ReflectedPropertyBagAttribute");
// Type namespace: Unity.Properties.Internal
namespace Unity::Properties::Internal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Unity.Properties.Internal.ReflectedPropertyBagAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  class ReflectedPropertyBagAttribute : public ::System::Attribute {
    public:
    // public System.Void .ctor()
    // Offset: 0x5539D60
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectedPropertyBagAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::Internal::ReflectedPropertyBagAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectedPropertyBagAttribute*, creationType>()));
    }
  }; // Unity.Properties.Internal.ReflectedPropertyBagAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::Properties::Internal::ReflectedPropertyBagAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
