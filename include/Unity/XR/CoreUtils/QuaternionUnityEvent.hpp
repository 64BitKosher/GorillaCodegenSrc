// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Events.UnityEvent`1
#include "UnityEngine/Events/UnityEvent_1.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Unity.XR.CoreUtils
namespace Unity::XR::CoreUtils {
  // Forward declaring type: QuaternionUnityEvent
  class QuaternionUnityEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::XR::CoreUtils::QuaternionUnityEvent);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::QuaternionUnityEvent*, "Unity.XR.CoreUtils", "QuaternionUnityEvent");
// Type namespace: Unity.XR.CoreUtils
namespace Unity::XR::CoreUtils {
  // WARNING Size may be invalid!
  // Autogenerated type: Unity.XR.CoreUtils.QuaternionUnityEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class QuaternionUnityEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Quaternion> {
    public:
    // public System.Void .ctor()
    // Offset: 0x53D04F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static QuaternionUnityEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::XR::CoreUtils::QuaternionUnityEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<QuaternionUnityEvent*, creationType>()));
    }
  }; // Unity.XR.CoreUtils.QuaternionUnityEvent
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::XR::CoreUtils::QuaternionUnityEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!