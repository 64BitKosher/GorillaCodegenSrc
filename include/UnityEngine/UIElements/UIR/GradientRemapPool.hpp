// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.UIR.LinkedPool`1
#include "UnityEngine/UIElements/UIR/LinkedPool_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements::UIR
namespace UnityEngine::UIElements::UIR {
  // Forward declaring type: GradientRemap
  class GradientRemap;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements.UIR
namespace UnityEngine::UIElements::UIR {
  // Forward declaring type: GradientRemapPool
  class GradientRemapPool;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::UIR::GradientRemapPool);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::GradientRemapPool*, "UnityEngine.UIElements.UIR", "GradientRemapPool");
// Type namespace: UnityEngine.UIElements.UIR
namespace UnityEngine::UIElements::UIR {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.UIR.GradientRemapPool
  // [TokenAttribute] Offset: FFFFFFFF
  class GradientRemapPool : public ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::GradientRemap*> {
    public:
    // Nested type: ::UnityEngine::UIElements::UIR::GradientRemapPool::$$c
    class $$c;
    // public System.Void .ctor()
    // Offset: 0x55D8604
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GradientRemapPool* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::UIR::GradientRemapPool::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GradientRemapPool*, creationType>()));
    }
  }; // UnityEngine.UIElements.UIR.GradientRemapPool
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::GradientRemapPool::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
