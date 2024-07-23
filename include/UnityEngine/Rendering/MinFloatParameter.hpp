// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.FloatParameter
#include "UnityEngine/Rendering/FloatParameter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: MinFloatParameter
  class MinFloatParameter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::MinFloatParameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::MinFloatParameter*, "UnityEngine.Rendering", "MinFloatParameter");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Rendering.MinFloatParameter
  // [TokenAttribute] Offset: FFFFFFFF
  // [DebuggerDisplayAttribute] Offset: FFFFFFFF
  class MinFloatParameter : public ::UnityEngine::Rendering::FloatParameter {
    public:
    public:
    // public System.Single min
    // Size: 0x4
    // Offset: 0x18
    float min;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.Single min
    [[deprecated("Use field access instead!")]] float& dyn_min();
    // public System.Single get_value()
    // Offset: 0x526395C
    float get_value();
    // public System.Void set_value(System.Single value)
    // Offset: 0x5263964
    void set_value(float value);
    // public System.Void .ctor(System.Single value, System.Single min, System.Boolean overrideState)
    // Offset: 0x5263978
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MinFloatParameter* New_ctor(float value, float min, bool overrideState) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::MinFloatParameter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MinFloatParameter*, creationType>(value, min, overrideState)));
    }
  }; // UnityEngine.Rendering.MinFloatParameter
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::MinFloatParameter::get_value
// Il2CppName: get_value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Rendering::MinFloatParameter::*)()>(&UnityEngine::Rendering::MinFloatParameter::get_value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::MinFloatParameter*), "get_value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::MinFloatParameter::set_value
// Il2CppName: set_value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::MinFloatParameter::*)(float)>(&UnityEngine::Rendering::MinFloatParameter::set_value)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::MinFloatParameter*), "set_value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::MinFloatParameter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
