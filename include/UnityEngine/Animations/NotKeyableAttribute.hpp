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
// Type namespace: UnityEngine.Animations
namespace UnityEngine::Animations {
  // Forward declaring type: NotKeyableAttribute
  class NotKeyableAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Animations::NotKeyableAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::NotKeyableAttribute*, "UnityEngine.Animations", "NotKeyableAttribute");
// Type namespace: UnityEngine.Animations
namespace UnityEngine::Animations {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Animations.NotKeyableAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  class NotKeyableAttribute : public ::System::Attribute {
    public:
    // public System.Void .ctor()
    // Offset: 0x546AD48
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NotKeyableAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Animations::NotKeyableAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NotKeyableAttribute*, creationType>()));
    }
  }; // UnityEngine.Animations.NotKeyableAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Animations::NotKeyableAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
