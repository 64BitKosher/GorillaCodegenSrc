// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.Light2DCullResult
#include "UnityEngine/Rendering/Universal/Light2DCullResult.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
}
// Forward declaring namespace: UnityEngine::Rendering::Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: Light2D
  class Light2D;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Light2DCullResult::$$c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Light2DCullResult::$$c*, "UnityEngine.Rendering.Universal", "Light2DCullResult/<>c");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.Light2DCullResult/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class Light2DCullResult::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.Rendering.Universal.Light2DCullResult/<>c <>9
    static ::UnityEngine::Rendering::Universal::Light2DCullResult::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.Rendering.Universal.Light2DCullResult/<>c <>9
    static void _set_$$9(::UnityEngine::Rendering::Universal::Light2DCullResult::$$c* value);
    // Get static field: static public System.Comparison`1<UnityEngine.Rendering.Universal.Light2D> <>9__8_0
    static ::System::Comparison_1<::UnityEngine::Rendering::Universal::Light2D*>* _get_$$9__8_0();
    // Set static field: static public System.Comparison`1<UnityEngine.Rendering.Universal.Light2D> <>9__8_0
    static void _set_$$9__8_0(::System::Comparison_1<::UnityEngine::Rendering::Universal::Light2D*>* value);
    // static private System.Void .cctor()
    // Offset: 0x52801D4
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x528023C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Light2DCullResult::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::Light2DCullResult::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Light2DCullResult::$$c*, creationType>()));
    }
    // System.Int32 <SetupCulling>b__8_0(UnityEngine.Rendering.Universal.Light2D l1, UnityEngine.Rendering.Universal.Light2D l2)
    // Offset: 0x5280244
    int $SetupCulling$b__8_0(::UnityEngine::Rendering::Universal::Light2D* l1, ::UnityEngine::Rendering::Universal::Light2D* l2);
  }; // UnityEngine.Rendering.Universal.Light2DCullResult/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Light2DCullResult::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Rendering::Universal::Light2DCullResult::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Light2DCullResult::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Light2DCullResult::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Light2DCullResult::$$c::$SetupCulling$b__8_0
// Il2CppName: <SetupCulling>b__8_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::Universal::Light2DCullResult::$$c::*)(::UnityEngine::Rendering::Universal::Light2D*, ::UnityEngine::Rendering::Universal::Light2D*)>(&UnityEngine::Rendering::Universal::Light2DCullResult::$$c::$SetupCulling$b__8_0)> {
  static const MethodInfo* get() {
    static auto* l1 = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "Light2D")->byval_arg;
    static auto* l2 = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "Light2D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Light2DCullResult::$$c*), "<SetupCulling>b__8_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{l1, l2});
  }
};
