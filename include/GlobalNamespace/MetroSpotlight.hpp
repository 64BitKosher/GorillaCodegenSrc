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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MetroSpotlight
  class MetroSpotlight;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MetroSpotlight);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MetroSpotlight*, "", "MetroSpotlight");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: MetroSpotlight
  // [TokenAttribute] Offset: FFFFFFFF
  class MetroSpotlight : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Transform _blimp
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Transform* blimp;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform _light
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Transform* light;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform _target
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Transform* target;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private System.Single _radius
    // Size: 0x4
    // Offset: 0x38
    float radius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _offset
    // Size: 0x4
    // Offset: 0x3C
    float offset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _theta
    // Size: 0x4
    // Offset: 0x40
    float theta;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single speed
    // Size: 0x4
    // Offset: 0x44
    float speed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _time
    // Size: 0x4
    // Offset: 0x48
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private UnityEngine.Transform _blimp
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__blimp();
    // Get instance field reference: private UnityEngine.Transform _light
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__light();
    // Get instance field reference: private UnityEngine.Transform _target
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__target();
    // Get instance field reference: private System.Single _radius
    [[deprecated("Use field access instead!")]] float& dyn__radius();
    // Get instance field reference: private System.Single _offset
    [[deprecated("Use field access instead!")]] float& dyn__offset();
    // Get instance field reference: private System.Single _theta
    [[deprecated("Use field access instead!")]] float& dyn__theta();
    // Get instance field reference: public System.Single speed
    [[deprecated("Use field access instead!")]] float& dyn_speed();
    // Get instance field reference: private System.Single _time
    [[deprecated("Use field access instead!")]] float& dyn__time();
    // public System.Void Tick()
    // Offset: 0x26946D0
    void Tick();
    // static private UnityEngine.Vector3 Figure8(UnityEngine.Vector3 origin, UnityEngine.Vector3 xDir, UnityEngine.Vector3 yDir, System.Single scale, System.Single t, System.Single offset, System.Single theta)
    // Offset: 0x26949E0
    static ::UnityEngine::Vector3 Figure8(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 xDir, ::UnityEngine::Vector3 yDir, float scale, float t, float offset, float theta);
    // public System.Void .ctor()
    // Offset: 0x2694B5C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MetroSpotlight* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MetroSpotlight::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MetroSpotlight*, creationType>()));
    }
  }; // MetroSpotlight
  #pragma pack(pop)
  static check_size<sizeof(MetroSpotlight), 72 + sizeof(float)> __GlobalNamespace_MetroSpotlightSizeCheck;
  static_assert(sizeof(MetroSpotlight) == 0x4C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MetroSpotlight::Tick
// Il2CppName: Tick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MetroSpotlight::*)()>(&GlobalNamespace::MetroSpotlight::Tick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MetroSpotlight*), "Tick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MetroSpotlight::Figure8
// Il2CppName: Figure8
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float, float, float, float)>(&GlobalNamespace::MetroSpotlight::Figure8)> {
  static const MethodInfo* get() {
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* xDir = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* yDir = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* scale = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* theta = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MetroSpotlight*), "Figure8", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{origin, xDir, yDir, scale, t, offset, theta});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MetroSpotlight::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
