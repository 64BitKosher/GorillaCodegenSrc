// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.UI.TrackedDeviceRaycaster
#include "UnityEngine/InputSystem/UI/TrackedDeviceRaycaster.hpp"
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
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::$$c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::$$c*, "UnityEngine.InputSystem.UI", "TrackedDeviceRaycaster/<>c");
// Type namespace: UnityEngine.InputSystem.UI
namespace UnityEngine::InputSystem::UI {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.UI.TrackedDeviceRaycaster/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class TrackedDeviceRaycaster::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.InputSystem.UI.TrackedDeviceRaycaster/<>c <>9
    static ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.InputSystem.UI.TrackedDeviceRaycaster/<>c <>9
    static void _set_$$9(::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::$$c* value);
    // Get static field: static public System.Comparison`1<UnityEngine.InputSystem.UI.TrackedDeviceRaycaster/RaycastHitData> <>9__25_0
    static ::System::Comparison_1<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::RaycastHitData>* _get_$$9__25_0();
    // Set static field: static public System.Comparison`1<UnityEngine.InputSystem.UI.TrackedDeviceRaycaster/RaycastHitData> <>9__25_0
    static void _set_$$9__25_0(::System::Comparison_1<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::RaycastHitData>* value);
    // static private System.Void .cctor()
    // Offset: 0x513866C
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x51386D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TrackedDeviceRaycaster::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TrackedDeviceRaycaster::$$c*, creationType>()));
    }
    // System.Int32 <SortedRaycastGraphics>b__25_0(UnityEngine.InputSystem.UI.TrackedDeviceRaycaster/RaycastHitData g1, UnityEngine.InputSystem.UI.TrackedDeviceRaycaster/RaycastHitData g2)
    // Offset: 0x51386DC
    int $SortedRaycastGraphics$b__25_0(::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::RaycastHitData g1, ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::RaycastHitData g2);
  }; // UnityEngine.InputSystem.UI.TrackedDeviceRaycaster/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::$$c::$SortedRaycastGraphics$b__25_0
// Il2CppName: <SortedRaycastGraphics>b__25_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::$$c::*)(::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::RaycastHitData, ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::RaycastHitData)>(&UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::$$c::$SortedRaycastGraphics$b__25_0)> {
  static const MethodInfo* get() {
    static auto* g1 = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.UI", "TrackedDeviceRaycaster/RaycastHitData")->byval_arg;
    static auto* g2 = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.UI", "TrackedDeviceRaycaster/RaycastHitData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::$$c*), "<SortedRaycastGraphics>b__25_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{g1, g2});
  }
};
