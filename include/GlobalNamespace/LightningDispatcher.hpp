// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LightningDispatcher
  class LightningDispatcher;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LightningDispatcher);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightningDispatcher*, "", "LightningDispatcher");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: LightningDispatcher
  // [TokenAttribute] Offset: FFFFFFFF
  class LightningDispatcher : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::LightningDispatcher::DispatchLightningEvent
    class DispatchLightningEvent;
    public:
    // private System.Single beamWidthCM
    // Size: 0x4
    // Offset: 0x20
    float beamWidthCM;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single soundVolumeMultiplier
    // Size: 0x4
    // Offset: 0x24
    float soundVolumeMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get static field: static private LightningDispatcher/DispatchLightningEvent RequestLightningStrike
    static ::GlobalNamespace::LightningDispatcher::DispatchLightningEvent* _get_RequestLightningStrike();
    // Set static field: static private LightningDispatcher/DispatchLightningEvent RequestLightningStrike
    static void _set_RequestLightningStrike(::GlobalNamespace::LightningDispatcher::DispatchLightningEvent* value);
    // Get instance field reference: private System.Single beamWidthCM
    [[deprecated("Use field access instead!")]] float& dyn_beamWidthCM();
    // Get instance field reference: private System.Single soundVolumeMultiplier
    [[deprecated("Use field access instead!")]] float& dyn_soundVolumeMultiplier();
    // static public System.Void add_RequestLightningStrike(LightningDispatcher/DispatchLightningEvent value)
    // Offset: 0x27A0800
    static void add_RequestLightningStrike(::GlobalNamespace::LightningDispatcher::DispatchLightningEvent* value);
    // static public System.Void remove_RequestLightningStrike(LightningDispatcher/DispatchLightningEvent value)
    // Offset: 0x27A08B8
    static void remove_RequestLightningStrike(::GlobalNamespace::LightningDispatcher::DispatchLightningEvent* value);
    // public System.Void DispatchLightning(UnityEngine.Vector3 p1, UnityEngine.Vector3 p2)
    // Offset: 0x27A0970
    void DispatchLightning(::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2);
    // public System.Void .ctor()
    // Offset: 0x27A0E18
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightningDispatcher* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightningDispatcher::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightningDispatcher*, creationType>()));
    }
  }; // LightningDispatcher
  #pragma pack(pop)
  static check_size<sizeof(LightningDispatcher), 36 + sizeof(float)> __GlobalNamespace_LightningDispatcherSizeCheck;
  static_assert(sizeof(LightningDispatcher) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LightningDispatcher::add_RequestLightningStrike
// Il2CppName: add_RequestLightningStrike
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::LightningDispatcher::DispatchLightningEvent*)>(&GlobalNamespace::LightningDispatcher::add_RequestLightningStrike)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "LightningDispatcher/DispatchLightningEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightningDispatcher*), "add_RequestLightningStrike", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightningDispatcher::remove_RequestLightningStrike
// Il2CppName: remove_RequestLightningStrike
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::LightningDispatcher::DispatchLightningEvent*)>(&GlobalNamespace::LightningDispatcher::remove_RequestLightningStrike)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "LightningDispatcher/DispatchLightningEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightningDispatcher*), "remove_RequestLightningStrike", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightningDispatcher::DispatchLightning
// Il2CppName: DispatchLightning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightningDispatcher::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&GlobalNamespace::LightningDispatcher::DispatchLightning)> {
  static const MethodInfo* get() {
    static auto* p1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* p2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightningDispatcher*), "DispatchLightning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p1, p2});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightningDispatcher::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
