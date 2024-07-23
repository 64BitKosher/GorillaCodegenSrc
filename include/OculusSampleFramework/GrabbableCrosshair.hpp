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
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Skipping declaration: CrosshairState because it is already included!
}
// Completed forward declares
// Type namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Forward declaring type: GrabbableCrosshair
  class GrabbableCrosshair;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OculusSampleFramework::GrabbableCrosshair);
DEFINE_IL2CPP_ARG_TYPE(::OculusSampleFramework::GrabbableCrosshair*, "OculusSampleFramework", "GrabbableCrosshair");
// Type namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: OculusSampleFramework.GrabbableCrosshair
  // [TokenAttribute] Offset: FFFFFFFF
  class GrabbableCrosshair : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::OculusSampleFramework::GrabbableCrosshair::CrosshairState
    struct CrosshairState;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: OculusSampleFramework.GrabbableCrosshair/CrosshairState
    // [TokenAttribute] Offset: FFFFFFFF
    struct CrosshairState/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: CrosshairState
      constexpr CrosshairState(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public OculusSampleFramework.GrabbableCrosshair/CrosshairState Disabled
      static constexpr const int Disabled = 0;
      // Get static field: static public OculusSampleFramework.GrabbableCrosshair/CrosshairState Disabled
      static ::OculusSampleFramework::GrabbableCrosshair::CrosshairState _get_Disabled();
      // Set static field: static public OculusSampleFramework.GrabbableCrosshair/CrosshairState Disabled
      static void _set_Disabled(::OculusSampleFramework::GrabbableCrosshair::CrosshairState value);
      // static field const value: static public OculusSampleFramework.GrabbableCrosshair/CrosshairState Enabled
      static constexpr const int Enabled = 1;
      // Get static field: static public OculusSampleFramework.GrabbableCrosshair/CrosshairState Enabled
      static ::OculusSampleFramework::GrabbableCrosshair::CrosshairState _get_Enabled();
      // Set static field: static public OculusSampleFramework.GrabbableCrosshair/CrosshairState Enabled
      static void _set_Enabled(::OculusSampleFramework::GrabbableCrosshair::CrosshairState value);
      // static field const value: static public OculusSampleFramework.GrabbableCrosshair/CrosshairState Targeted
      static constexpr const int Targeted = 2;
      // Get static field: static public OculusSampleFramework.GrabbableCrosshair/CrosshairState Targeted
      static ::OculusSampleFramework::GrabbableCrosshair::CrosshairState _get_Targeted();
      // Set static field: static public OculusSampleFramework.GrabbableCrosshair/CrosshairState Targeted
      static void _set_Targeted(::OculusSampleFramework::GrabbableCrosshair::CrosshairState value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // OculusSampleFramework.GrabbableCrosshair/CrosshairState
    #pragma pack(pop)
    static check_size<sizeof(GrabbableCrosshair::CrosshairState), 0 + sizeof(int)> __OculusSampleFramework_GrabbableCrosshair_CrosshairStateSizeCheck;
    static_assert(sizeof(GrabbableCrosshair::CrosshairState) == 0x4);
    public:
    // private OculusSampleFramework.GrabbableCrosshair/CrosshairState m_state
    // Size: 0x4
    // Offset: 0x20
    ::OculusSampleFramework::GrabbableCrosshair::CrosshairState m_state;
    // Field size check
    static_assert(sizeof(::OculusSampleFramework::GrabbableCrosshair::CrosshairState) == 0x4);
    // Padding between fields: m_state and: m_centerEyeAnchor
    char __padding0[0x4] = {};
    // private UnityEngine.Transform m_centerEyeAnchor
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Transform* m_centerEyeAnchor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.GameObject m_targetedCrosshair
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::GameObject* m_targetedCrosshair;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject m_enabledCrosshair
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::GameObject* m_enabledCrosshair;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    public:
    // Get instance field reference: private OculusSampleFramework.GrabbableCrosshair/CrosshairState m_state
    [[deprecated("Use field access instead!")]] ::OculusSampleFramework::GrabbableCrosshair::CrosshairState& dyn_m_state();
    // Get instance field reference: private UnityEngine.Transform m_centerEyeAnchor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_m_centerEyeAnchor();
    // Get instance field reference: private UnityEngine.GameObject m_targetedCrosshair
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_m_targetedCrosshair();
    // Get instance field reference: private UnityEngine.GameObject m_enabledCrosshair
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_m_enabledCrosshair();
    // private System.Void Start()
    // Offset: 0x2822050
    void Start();
    // public System.Void SetState(OculusSampleFramework.GrabbableCrosshair/CrosshairState cs)
    // Offset: 0x2820440
    void SetState(::OculusSampleFramework::GrabbableCrosshair::CrosshairState cs);
    // private System.Void Update()
    // Offset: 0x28220B8
    void Update();
    // public System.Void .ctor()
    // Offset: 0x28220F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GrabbableCrosshair* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::OculusSampleFramework::GrabbableCrosshair::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GrabbableCrosshair*, creationType>()));
    }
  }; // OculusSampleFramework.GrabbableCrosshair
  #pragma pack(pop)
  static check_size<sizeof(GrabbableCrosshair), 56 + sizeof(::UnityEngine::GameObject*)> __OculusSampleFramework_GrabbableCrosshairSizeCheck;
  static_assert(sizeof(GrabbableCrosshair) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OculusSampleFramework::GrabbableCrosshair::CrosshairState, "OculusSampleFramework", "GrabbableCrosshair/CrosshairState");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OculusSampleFramework::GrabbableCrosshair::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::GrabbableCrosshair::*)()>(&OculusSampleFramework::GrabbableCrosshair::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::GrabbableCrosshair*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::GrabbableCrosshair::SetState
// Il2CppName: SetState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::GrabbableCrosshair::*)(::OculusSampleFramework::GrabbableCrosshair::CrosshairState)>(&OculusSampleFramework::GrabbableCrosshair::SetState)> {
  static const MethodInfo* get() {
    static auto* cs = &::il2cpp_utils::GetClassFromName("OculusSampleFramework", "GrabbableCrosshair/CrosshairState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::GrabbableCrosshair*), "SetState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cs});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::GrabbableCrosshair::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::GrabbableCrosshair::*)()>(&OculusSampleFramework::GrabbableCrosshair::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::GrabbableCrosshair*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::GrabbableCrosshair::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
