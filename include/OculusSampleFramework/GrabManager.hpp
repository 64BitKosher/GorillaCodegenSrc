// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collider
  class Collider;
}
// Completed forward declares
// Type namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Forward declaring type: GrabManager
  class GrabManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OculusSampleFramework::GrabManager);
DEFINE_IL2CPP_ARG_TYPE(::OculusSampleFramework::GrabManager*, "OculusSampleFramework", "GrabManager");
// Type namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: OculusSampleFramework.GrabManager
  // [TokenAttribute] Offset: FFFFFFFF
  class GrabManager : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Collider m_grabVolume
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Collider* m_grabVolume;
    // Field size check
    static_assert(sizeof(::UnityEngine::Collider*) == 0x8);
    // public UnityEngine.Color OutlineColorInRange
    // Size: 0x10
    // Offset: 0x28
    ::UnityEngine::Color OutlineColorInRange;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public UnityEngine.Color OutlineColorHighlighted
    // Size: 0x10
    // Offset: 0x38
    ::UnityEngine::Color OutlineColorHighlighted;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public UnityEngine.Color OutlineColorOutOfRange
    // Size: 0x10
    // Offset: 0x48
    ::UnityEngine::Color OutlineColorOutOfRange;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    public:
    // Get instance field reference: private UnityEngine.Collider m_grabVolume
    [[deprecated("Use field access instead!")]] ::UnityEngine::Collider*& dyn_m_grabVolume();
    // Get instance field reference: public UnityEngine.Color OutlineColorInRange
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_OutlineColorInRange();
    // Get instance field reference: public UnityEngine.Color OutlineColorHighlighted
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_OutlineColorHighlighted();
    // Get instance field reference: public UnityEngine.Color OutlineColorOutOfRange
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_OutlineColorOutOfRange();
    // private System.Void OnTriggerEnter(UnityEngine.Collider otherCollider)
    // Offset: 0x28220F8
    void OnTriggerEnter(::UnityEngine::Collider* otherCollider);
    // private System.Void OnTriggerExit(UnityEngine.Collider otherCollider)
    // Offset: 0x28221A4
    void OnTriggerExit(::UnityEngine::Collider* otherCollider);
    // public System.Void .ctor()
    // Offset: 0x282224C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GrabManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::OculusSampleFramework::GrabManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GrabManager*, creationType>()));
    }
  }; // OculusSampleFramework.GrabManager
  #pragma pack(pop)
  static check_size<sizeof(GrabManager), 72 + sizeof(::UnityEngine::Color)> __OculusSampleFramework_GrabManagerSizeCheck;
  static_assert(sizeof(GrabManager) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OculusSampleFramework::GrabManager::OnTriggerEnter
// Il2CppName: OnTriggerEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::GrabManager::*)(::UnityEngine::Collider*)>(&OculusSampleFramework::GrabManager::OnTriggerEnter)> {
  static const MethodInfo* get() {
    static auto* otherCollider = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::GrabManager*), "OnTriggerEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{otherCollider});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::GrabManager::OnTriggerExit
// Il2CppName: OnTriggerExit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::GrabManager::*)(::UnityEngine::Collider*)>(&OculusSampleFramework::GrabManager::OnTriggerExit)> {
  static const MethodInfo* get() {
    static auto* otherCollider = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::GrabManager*), "OnTriggerExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{otherCollider});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::GrabManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
