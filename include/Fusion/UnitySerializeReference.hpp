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
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: UnitySerializeReference
  class UnitySerializeReference;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::UnitySerializeReference);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::UnitySerializeReference*, "Fusion", "UnitySerializeReference");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.UnitySerializeReference
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  // [ConditionalAttribute] Offset: FFFFFFFF
  // [ConditionalAttribute] Offset: FFFFFFFF
  // [UnityPropertyAttributeProxyAttribute] Offset: FFFFFFFF
  // [ConditionalAttribute] Offset: FFFFFFFF
  class UnitySerializeReference : public ::System::Attribute {
    public:
    // public System.Void .ctor()
    // Offset: 0x2AFF5E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnitySerializeReference* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::UnitySerializeReference::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnitySerializeReference*, creationType>()));
    }
  }; // Fusion.UnitySerializeReference
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::UnitySerializeReference::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
