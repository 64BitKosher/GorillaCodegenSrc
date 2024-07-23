// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
}
// Completed forward declares
// Type namespace: Unity.XR.Oculus
namespace Unity::XR::Oculus {
  // Forward declaring type: OculusSettings
  class OculusSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::XR::Oculus::OculusSettings);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::OculusSettings*, "Unity.XR.Oculus", "OculusSettings");
// Type namespace: Unity.XR.Oculus
namespace Unity::XR::Oculus {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Unity.XR.Oculus.OculusSettings
  // [TokenAttribute] Offset: FFFFFFFF
  // [XRConfigurationDataAttribute] Offset: FFFFFFFF
  class OculusSettings : public ::UnityEngine::ScriptableObject {
    public:
    // Nested type: ::Unity::XR::Oculus::OculusSettings::StereoRenderingModeDesktop
    struct StereoRenderingModeDesktop;
    // Nested type: ::Unity::XR::Oculus::OculusSettings::StereoRenderingModeAndroid
    struct StereoRenderingModeAndroid;
    // Nested type: ::Unity::XR::Oculus::OculusSettings::FoveationMethod
    struct FoveationMethod;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: Unity.XR.Oculus.OculusSettings/StereoRenderingModeDesktop
    // [TokenAttribute] Offset: FFFFFFFF
    struct StereoRenderingModeDesktop/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: StereoRenderingModeDesktop
      constexpr StereoRenderingModeDesktop(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Unity.XR.Oculus.OculusSettings/StereoRenderingModeDesktop MultiPass
      static constexpr const int MultiPass = 0;
      // Get static field: static public Unity.XR.Oculus.OculusSettings/StereoRenderingModeDesktop MultiPass
      static ::Unity::XR::Oculus::OculusSettings::StereoRenderingModeDesktop _get_MultiPass();
      // Set static field: static public Unity.XR.Oculus.OculusSettings/StereoRenderingModeDesktop MultiPass
      static void _set_MultiPass(::Unity::XR::Oculus::OculusSettings::StereoRenderingModeDesktop value);
      // static field const value: static public Unity.XR.Oculus.OculusSettings/StereoRenderingModeDesktop SinglePassInstanced
      static constexpr const int SinglePassInstanced = 1;
      // Get static field: static public Unity.XR.Oculus.OculusSettings/StereoRenderingModeDesktop SinglePassInstanced
      static ::Unity::XR::Oculus::OculusSettings::StereoRenderingModeDesktop _get_SinglePassInstanced();
      // Set static field: static public Unity.XR.Oculus.OculusSettings/StereoRenderingModeDesktop SinglePassInstanced
      static void _set_SinglePassInstanced(::Unity::XR::Oculus::OculusSettings::StereoRenderingModeDesktop value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // Unity.XR.Oculus.OculusSettings/StereoRenderingModeDesktop
    #pragma pack(pop)
    static check_size<sizeof(OculusSettings::StereoRenderingModeDesktop), 0 + sizeof(int)> __Unity_XR_Oculus_OculusSettings_StereoRenderingModeDesktopSizeCheck;
    static_assert(sizeof(OculusSettings::StereoRenderingModeDesktop) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: Unity.XR.Oculus.OculusSettings/StereoRenderingModeAndroid
    // [TokenAttribute] Offset: FFFFFFFF
    struct StereoRenderingModeAndroid/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: StereoRenderingModeAndroid
      constexpr StereoRenderingModeAndroid(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Unity.XR.Oculus.OculusSettings/StereoRenderingModeAndroid MultiPass
      static constexpr const int MultiPass = 0;
      // Get static field: static public Unity.XR.Oculus.OculusSettings/StereoRenderingModeAndroid MultiPass
      static ::Unity::XR::Oculus::OculusSettings::StereoRenderingModeAndroid _get_MultiPass();
      // Set static field: static public Unity.XR.Oculus.OculusSettings/StereoRenderingModeAndroid MultiPass
      static void _set_MultiPass(::Unity::XR::Oculus::OculusSettings::StereoRenderingModeAndroid value);
      // static field const value: static public Unity.XR.Oculus.OculusSettings/StereoRenderingModeAndroid Multiview
      static constexpr const int Multiview = 2;
      // Get static field: static public Unity.XR.Oculus.OculusSettings/StereoRenderingModeAndroid Multiview
      static ::Unity::XR::Oculus::OculusSettings::StereoRenderingModeAndroid _get_Multiview();
      // Set static field: static public Unity.XR.Oculus.OculusSettings/StereoRenderingModeAndroid Multiview
      static void _set_Multiview(::Unity::XR::Oculus::OculusSettings::StereoRenderingModeAndroid value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // Unity.XR.Oculus.OculusSettings/StereoRenderingModeAndroid
    #pragma pack(pop)
    static check_size<sizeof(OculusSettings::StereoRenderingModeAndroid), 0 + sizeof(int)> __Unity_XR_Oculus_OculusSettings_StereoRenderingModeAndroidSizeCheck;
    static_assert(sizeof(OculusSettings::StereoRenderingModeAndroid) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: Unity.XR.Oculus.OculusSettings/FoveationMethod
    // [TokenAttribute] Offset: FFFFFFFF
    struct FoveationMethod/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: FoveationMethod
      constexpr FoveationMethod(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Unity.XR.Oculus.OculusSettings/FoveationMethod FixedFoveatedRendering
      static constexpr const int FixedFoveatedRendering = 0;
      // Get static field: static public Unity.XR.Oculus.OculusSettings/FoveationMethod FixedFoveatedRendering
      static ::Unity::XR::Oculus::OculusSettings::FoveationMethod _get_FixedFoveatedRendering();
      // Set static field: static public Unity.XR.Oculus.OculusSettings/FoveationMethod FixedFoveatedRendering
      static void _set_FixedFoveatedRendering(::Unity::XR::Oculus::OculusSettings::FoveationMethod value);
      // static field const value: static public Unity.XR.Oculus.OculusSettings/FoveationMethod EyeTrackedFoveatedRendering
      static constexpr const int EyeTrackedFoveatedRendering = 1;
      // Get static field: static public Unity.XR.Oculus.OculusSettings/FoveationMethod EyeTrackedFoveatedRendering
      static ::Unity::XR::Oculus::OculusSettings::FoveationMethod _get_EyeTrackedFoveatedRendering();
      // Set static field: static public Unity.XR.Oculus.OculusSettings/FoveationMethod EyeTrackedFoveatedRendering
      static void _set_EyeTrackedFoveatedRendering(::Unity::XR::Oculus::OculusSettings::FoveationMethod value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // Unity.XR.Oculus.OculusSettings/FoveationMethod
    #pragma pack(pop)
    static check_size<sizeof(OculusSettings::FoveationMethod), 0 + sizeof(int)> __Unity_XR_Oculus_OculusSettings_FoveationMethodSizeCheck;
    static_assert(sizeof(OculusSettings::FoveationMethod) == 0x4);
    public:
    // public Unity.XR.Oculus.OculusSettings/StereoRenderingModeDesktop m_StereoRenderingModeDesktop
    // Size: 0x4
    // Offset: 0x18
    ::Unity::XR::Oculus::OculusSettings::StereoRenderingModeDesktop m_StereoRenderingModeDesktop;
    // Field size check
    static_assert(sizeof(::Unity::XR::Oculus::OculusSettings::StereoRenderingModeDesktop) == 0x4);
    // public Unity.XR.Oculus.OculusSettings/StereoRenderingModeAndroid m_StereoRenderingModeAndroid
    // Size: 0x4
    // Offset: 0x1C
    ::Unity::XR::Oculus::OculusSettings::StereoRenderingModeAndroid m_StereoRenderingModeAndroid;
    // Field size check
    static_assert(sizeof(::Unity::XR::Oculus::OculusSettings::StereoRenderingModeAndroid) == 0x4);
    // public System.Boolean SharedDepthBuffer
    // Size: 0x1
    // Offset: 0x20
    bool SharedDepthBuffer;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean DepthSubmission
    // Size: 0x1
    // Offset: 0x21
    bool DepthSubmission;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean DashSupport
    // Size: 0x1
    // Offset: 0x22
    bool DashSupport;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean LowOverheadMode
    // Size: 0x1
    // Offset: 0x23
    bool LowOverheadMode;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean OptimizeBufferDiscards
    // Size: 0x1
    // Offset: 0x24
    bool OptimizeBufferDiscards;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean PhaseSync
    // Size: 0x1
    // Offset: 0x25
    bool PhaseSync;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean SymmetricProjection
    // Size: 0x1
    // Offset: 0x26
    bool SymmetricProjection;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean SubsampledLayout
    // Size: 0x1
    // Offset: 0x27
    bool SubsampledLayout;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public Unity.XR.Oculus.OculusSettings/FoveationMethod FoveatedRenderingMethod
    // Size: 0x4
    // Offset: 0x28
    ::Unity::XR::Oculus::OculusSettings::FoveationMethod FoveatedRenderingMethod;
    // Field size check
    static_assert(sizeof(::Unity::XR::Oculus::OculusSettings::FoveationMethod) == 0x4);
    // public System.Boolean LateLatching
    // Size: 0x1
    // Offset: 0x2C
    bool LateLatching;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean LateLatchingDebug
    // Size: 0x1
    // Offset: 0x2D
    bool LateLatchingDebug;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean EnableTrackingOriginStageMode
    // Size: 0x1
    // Offset: 0x2E
    bool EnableTrackingOriginStageMode;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean SpaceWarp
    // Size: 0x1
    // Offset: 0x2F
    bool SpaceWarp;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean TargetQuest
    // Size: 0x1
    // Offset: 0x30
    bool TargetQuest;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean TargetQuest2
    // Size: 0x1
    // Offset: 0x31
    bool TargetQuest2;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean TargetQuestPro
    // Size: 0x1
    // Offset: 0x32
    bool TargetQuestPro;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: TargetQuestPro and: SystemSplashScreen
    char __padding17[0x5] = {};
    // public UnityEngine.Texture2D SystemSplashScreen
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Texture2D* SystemSplashScreen;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture2D*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get static field: static public Unity.XR.Oculus.OculusSettings s_Settings
    static ::Unity::XR::Oculus::OculusSettings* _get_s_Settings();
    // Set static field: static public Unity.XR.Oculus.OculusSettings s_Settings
    static void _set_s_Settings(::Unity::XR::Oculus::OculusSettings* value);
    // Get instance field reference: public Unity.XR.Oculus.OculusSettings/StereoRenderingModeDesktop m_StereoRenderingModeDesktop
    [[deprecated("Use field access instead!")]] ::Unity::XR::Oculus::OculusSettings::StereoRenderingModeDesktop& dyn_m_StereoRenderingModeDesktop();
    // Get instance field reference: public Unity.XR.Oculus.OculusSettings/StereoRenderingModeAndroid m_StereoRenderingModeAndroid
    [[deprecated("Use field access instead!")]] ::Unity::XR::Oculus::OculusSettings::StereoRenderingModeAndroid& dyn_m_StereoRenderingModeAndroid();
    // Get instance field reference: public System.Boolean SharedDepthBuffer
    [[deprecated("Use field access instead!")]] bool& dyn_SharedDepthBuffer();
    // Get instance field reference: public System.Boolean DepthSubmission
    [[deprecated("Use field access instead!")]] bool& dyn_DepthSubmission();
    // Get instance field reference: public System.Boolean DashSupport
    [[deprecated("Use field access instead!")]] bool& dyn_DashSupport();
    // Get instance field reference: public System.Boolean LowOverheadMode
    [[deprecated("Use field access instead!")]] bool& dyn_LowOverheadMode();
    // Get instance field reference: public System.Boolean OptimizeBufferDiscards
    [[deprecated("Use field access instead!")]] bool& dyn_OptimizeBufferDiscards();
    // Get instance field reference: public System.Boolean PhaseSync
    [[deprecated("Use field access instead!")]] bool& dyn_PhaseSync();
    // Get instance field reference: public System.Boolean SymmetricProjection
    [[deprecated("Use field access instead!")]] bool& dyn_SymmetricProjection();
    // Get instance field reference: public System.Boolean SubsampledLayout
    [[deprecated("Use field access instead!")]] bool& dyn_SubsampledLayout();
    // Get instance field reference: public Unity.XR.Oculus.OculusSettings/FoveationMethod FoveatedRenderingMethod
    [[deprecated("Use field access instead!")]] ::Unity::XR::Oculus::OculusSettings::FoveationMethod& dyn_FoveatedRenderingMethod();
    // Get instance field reference: public System.Boolean LateLatching
    [[deprecated("Use field access instead!")]] bool& dyn_LateLatching();
    // Get instance field reference: public System.Boolean LateLatchingDebug
    [[deprecated("Use field access instead!")]] bool& dyn_LateLatchingDebug();
    // Get instance field reference: public System.Boolean EnableTrackingOriginStageMode
    [[deprecated("Use field access instead!")]] bool& dyn_EnableTrackingOriginStageMode();
    // Get instance field reference: public System.Boolean SpaceWarp
    [[deprecated("Use field access instead!")]] bool& dyn_SpaceWarp();
    // Get instance field reference: public System.Boolean TargetQuest
    [[deprecated("Use field access instead!")]] bool& dyn_TargetQuest();
    // Get instance field reference: public System.Boolean TargetQuest2
    [[deprecated("Use field access instead!")]] bool& dyn_TargetQuest2();
    // Get instance field reference: public System.Boolean TargetQuestPro
    [[deprecated("Use field access instead!")]] bool& dyn_TargetQuestPro();
    // Get instance field reference: public UnityEngine.Texture2D SystemSplashScreen
    [[deprecated("Use field access instead!")]] ::UnityEngine::Texture2D*& dyn_SystemSplashScreen();
    // public System.UInt16 GetStereoRenderingMode()
    // Offset: 0x5448CCC
    uint16_t GetStereoRenderingMode();
    // public System.Void Awake()
    // Offset: 0x544C660
    void Awake();
    // public System.Void .ctor()
    // Offset: 0x544C6B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::XR::Oculus::OculusSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusSettings*, creationType>()));
    }
  }; // Unity.XR.Oculus.OculusSettings
  #pragma pack(pop)
  static check_size<sizeof(OculusSettings), 56 + sizeof(::UnityEngine::Texture2D*)> __Unity_XR_Oculus_OculusSettingsSizeCheck;
  static_assert(sizeof(OculusSettings) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::OculusSettings::FoveationMethod, "Unity.XR.Oculus", "OculusSettings/FoveationMethod");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::OculusSettings::StereoRenderingModeAndroid, "Unity.XR.Oculus", "OculusSettings/StereoRenderingModeAndroid");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::OculusSettings::StereoRenderingModeDesktop, "Unity.XR.Oculus", "OculusSettings/StereoRenderingModeDesktop");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::XR::Oculus::OculusSettings::GetStereoRenderingMode
// Il2CppName: GetStereoRenderingMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (Unity::XR::Oculus::OculusSettings::*)()>(&Unity::XR::Oculus::OculusSettings::GetStereoRenderingMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::OculusSettings*), "GetStereoRenderingMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::OculusSettings::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::XR::Oculus::OculusSettings::*)()>(&Unity::XR::Oculus::OculusSettings::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::OculusSettings*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::OculusSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
