// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Oculus.Interaction.DistanceReticles.IReticleData
#include "Oculus/Interaction/DistanceReticles/IReticleData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
  // Forward declaring type: Texture
  class Texture;
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: Oculus.Interaction.DistanceReticles
namespace Oculus::Interaction::DistanceReticles {
  // Forward declaring type: ReticleDataIcon
  class ReticleDataIcon;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::DistanceReticles::ReticleDataIcon);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::DistanceReticles::ReticleDataIcon*, "Oculus.Interaction.DistanceReticles", "ReticleDataIcon");
// Type namespace: Oculus.Interaction.DistanceReticles
namespace Oculus::Interaction::DistanceReticles {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.DistanceReticles.ReticleDataIcon
  // [TokenAttribute] Offset: FFFFFFFF
  class ReticleDataIcon : public ::UnityEngine::MonoBehaviour/*, public ::Oculus::Interaction::DistanceReticles::IReticleData*/ {
    public:
    public:
    // private UnityEngine.MeshRenderer _renderer
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::MeshRenderer* renderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshRenderer*) == 0x8);
    // private UnityEngine.Texture _customIcon
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Texture* customIcon;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture*) == 0x8);
    // private System.Single _snappiness
    // Size: 0x4
    // Offset: 0x30
    float snappiness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::DistanceReticles::IReticleData
    operator ::Oculus::Interaction::DistanceReticles::IReticleData() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::DistanceReticles::IReticleData*>(this);
    }
    // Get instance field reference: private UnityEngine.MeshRenderer _renderer
    [[deprecated("Use field access instead!")]] ::UnityEngine::MeshRenderer*& dyn__renderer();
    // Get instance field reference: private UnityEngine.Texture _customIcon
    [[deprecated("Use field access instead!")]] ::UnityEngine::Texture*& dyn__customIcon();
    // Get instance field reference: private System.Single _snappiness
    [[deprecated("Use field access instead!")]] float& dyn__snappiness();
    // public UnityEngine.Texture get_CustomIcon()
    // Offset: 0x483E220
    ::UnityEngine::Texture* get_CustomIcon();
    // public System.Void set_CustomIcon(UnityEngine.Texture value)
    // Offset: 0x483E228
    void set_CustomIcon(::UnityEngine::Texture* value);
    // public System.Single get_Snappiness()
    // Offset: 0x483E230
    float get_Snappiness();
    // public System.Void set_Snappiness(System.Single value)
    // Offset: 0x483E238
    void set_Snappiness(float value);
    // public UnityEngine.Vector3 GetTargetSize()
    // Offset: 0x483E240
    ::UnityEngine::Vector3 GetTargetSize();
    // public UnityEngine.Vector3 ProcessHitPoint(UnityEngine.Vector3 hitPoint)
    // Offset: 0x483E2F8
    ::UnityEngine::Vector3 ProcessHitPoint(::UnityEngine::Vector3 hitPoint);
    // public System.Void InjectOptionalRenderer(UnityEngine.MeshRenderer renderer)
    // Offset: 0x483E378
    void InjectOptionalRenderer(::UnityEngine::MeshRenderer* renderer);
    // public System.Void .ctor()
    // Offset: 0x483E380
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReticleDataIcon* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::DistanceReticles::ReticleDataIcon::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReticleDataIcon*, creationType>()));
    }
  }; // Oculus.Interaction.DistanceReticles.ReticleDataIcon
  #pragma pack(pop)
  static check_size<sizeof(ReticleDataIcon), 48 + sizeof(float)> __Oculus_Interaction_DistanceReticles_ReticleDataIconSizeCheck;
  static_assert(sizeof(ReticleDataIcon) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::ReticleDataIcon::get_CustomIcon
// Il2CppName: get_CustomIcon
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Texture* (Oculus::Interaction::DistanceReticles::ReticleDataIcon::*)()>(&Oculus::Interaction::DistanceReticles::ReticleDataIcon::get_CustomIcon)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::ReticleDataIcon*), "get_CustomIcon", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::ReticleDataIcon::set_CustomIcon
// Il2CppName: set_CustomIcon
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::DistanceReticles::ReticleDataIcon::*)(::UnityEngine::Texture*)>(&Oculus::Interaction::DistanceReticles::ReticleDataIcon::set_CustomIcon)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::ReticleDataIcon*), "set_CustomIcon", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::ReticleDataIcon::get_Snappiness
// Il2CppName: get_Snappiness
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::DistanceReticles::ReticleDataIcon::*)()>(&Oculus::Interaction::DistanceReticles::ReticleDataIcon::get_Snappiness)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::ReticleDataIcon*), "get_Snappiness", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::ReticleDataIcon::set_Snappiness
// Il2CppName: set_Snappiness
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::DistanceReticles::ReticleDataIcon::*)(float)>(&Oculus::Interaction::DistanceReticles::ReticleDataIcon::set_Snappiness)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::ReticleDataIcon*), "set_Snappiness", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::ReticleDataIcon::GetTargetSize
// Il2CppName: GetTargetSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Oculus::Interaction::DistanceReticles::ReticleDataIcon::*)()>(&Oculus::Interaction::DistanceReticles::ReticleDataIcon::GetTargetSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::ReticleDataIcon*), "GetTargetSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::ReticleDataIcon::ProcessHitPoint
// Il2CppName: ProcessHitPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Oculus::Interaction::DistanceReticles::ReticleDataIcon::*)(::UnityEngine::Vector3)>(&Oculus::Interaction::DistanceReticles::ReticleDataIcon::ProcessHitPoint)> {
  static const MethodInfo* get() {
    static auto* hitPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::ReticleDataIcon*), "ProcessHitPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hitPoint});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::ReticleDataIcon::InjectOptionalRenderer
// Il2CppName: InjectOptionalRenderer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::DistanceReticles::ReticleDataIcon::*)(::UnityEngine::MeshRenderer*)>(&Oculus::Interaction::DistanceReticles::ReticleDataIcon::InjectOptionalRenderer)> {
  static const MethodInfo* get() {
    static auto* renderer = &::il2cpp_utils::GetClassFromName("UnityEngine", "MeshRenderer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::ReticleDataIcon*), "InjectOptionalRenderer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{renderer});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::ReticleDataIcon::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!