// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Events.UnityEvent`1
#include "UnityEngine/Events/UnityEvent_1.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Unity.XR.CoreUtils
namespace Unity::XR::CoreUtils {
  // Forward declaring type: Vector4UnityEvent
  class Vector4UnityEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::XR::CoreUtils::Vector4UnityEvent);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::Vector4UnityEvent*, "Unity.XR.CoreUtils", "Vector4UnityEvent");
// Type namespace: Unity.XR.CoreUtils
namespace Unity::XR::CoreUtils {
  // WARNING Size may be invalid!
  // Autogenerated type: Unity.XR.CoreUtils.Vector4UnityEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class Vector4UnityEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector4> {
    public:
    // public System.Void .ctor()
    // Offset: 0x53D04A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Vector4UnityEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::XR::CoreUtils::Vector4UnityEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Vector4UnityEvent*, creationType>()));
    }
  }; // Unity.XR.CoreUtils.Vector4UnityEvent
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::XR::CoreUtils::Vector4UnityEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
