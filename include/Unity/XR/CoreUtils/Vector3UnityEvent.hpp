// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Events.UnityEvent`1
#include "UnityEngine/Events/UnityEvent_1.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Unity.XR.CoreUtils
namespace Unity::XR::CoreUtils {
  // Forward declaring type: Vector3UnityEvent
  class Vector3UnityEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::XR::CoreUtils::Vector3UnityEvent);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::Vector3UnityEvent*, "Unity.XR.CoreUtils", "Vector3UnityEvent");
// Type namespace: Unity.XR.CoreUtils
namespace Unity::XR::CoreUtils {
  // WARNING Size may be invalid!
  // Autogenerated type: Unity.XR.CoreUtils.Vector3UnityEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class Vector3UnityEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3> {
    public:
    // public System.Void .ctor()
    // Offset: 0x53D0460
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Vector3UnityEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::XR::CoreUtils::Vector3UnityEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Vector3UnityEvent*, creationType>()));
    }
  }; // Unity.XR.CoreUtils.Vector3UnityEvent
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::XR::CoreUtils::Vector3UnityEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!