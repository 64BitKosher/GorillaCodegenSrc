// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.VolumeParameter`1
#include "UnityEngine/Rendering/VolumeParameter_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: FloatParameter
  class FloatParameter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::FloatParameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::FloatParameter*, "UnityEngine.Rendering", "FloatParameter");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Rendering.FloatParameter
  // [TokenAttribute] Offset: FFFFFFFF
  // [DebuggerDisplayAttribute] Offset: FFFFFFFF
  class FloatParameter : public ::UnityEngine::Rendering::VolumeParameter_1<float> {
    public:
    // public System.Void .ctor(System.Single value, System.Boolean overrideState)
    // Offset: 0x52638E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FloatParameter* New_ctor(float value, bool overrideState) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::FloatParameter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FloatParameter*, creationType>(value, overrideState)));
    }
    // public System.Void Interp(System.Single from, System.Single to, System.Single t)
    // Offset: 0x5263948
    void Interp(float from, float to, float t);
  }; // UnityEngine.Rendering.FloatParameter
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::FloatParameter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::FloatParameter::Interp
// Il2CppName: Interp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::FloatParameter::*)(float, float, float)>(&UnityEngine::Rendering::FloatParameter::Interp)> {
  static const MethodInfo* get() {
    static auto* from = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* to = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::FloatParameter*), "Interp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{from, to, t});
  }
};
