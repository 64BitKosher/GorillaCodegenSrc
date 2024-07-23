// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.ContinuousTurnProviderBase
#include "UnityEngine/XR/Interaction/Toolkit/ContinuousTurnProviderBase.hpp"
// Including type: UnityEngine.XR.InputFeatureUsage`1
#include "UnityEngine/XR/InputFeatureUsage_1.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: XRBaseController
  class XRBaseController;
  // Skipping declaration: InputAxes because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: DeviceBasedContinuousTurnProvider
  class DeviceBasedContinuousTurnProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider*, "UnityEngine.XR.Interaction.Toolkit", "DeviceBasedContinuousTurnProvider");
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.DeviceBasedContinuousTurnProvider
  // [TokenAttribute] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: FFFFFFFF
  class DeviceBasedContinuousTurnProvider : public ::UnityEngine::XR::Interaction::Toolkit::ContinuousTurnProviderBase {
    public:
    // Writing base type padding for base size: 0x4D to desired offset: 0x50
    char ___base_padding[0x3] = {};
    // Nested type: ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::InputAxes
    struct InputAxes;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.DeviceBasedContinuousTurnProvider/InputAxes
    // [TokenAttribute] Offset: FFFFFFFF
    struct InputAxes/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: InputAxes
      constexpr InputAxes(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.XR.Interaction.Toolkit.DeviceBasedContinuousTurnProvider/InputAxes Primary2DAxis
      static constexpr const int Primary2DAxis = 0;
      // Get static field: static public UnityEngine.XR.Interaction.Toolkit.DeviceBasedContinuousTurnProvider/InputAxes Primary2DAxis
      static ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::InputAxes _get_Primary2DAxis();
      // Set static field: static public UnityEngine.XR.Interaction.Toolkit.DeviceBasedContinuousTurnProvider/InputAxes Primary2DAxis
      static void _set_Primary2DAxis(::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::InputAxes value);
      // static field const value: static public UnityEngine.XR.Interaction.Toolkit.DeviceBasedContinuousTurnProvider/InputAxes Secondary2DAxis
      static constexpr const int Secondary2DAxis = 1;
      // Get static field: static public UnityEngine.XR.Interaction.Toolkit.DeviceBasedContinuousTurnProvider/InputAxes Secondary2DAxis
      static ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::InputAxes _get_Secondary2DAxis();
      // Set static field: static public UnityEngine.XR.Interaction.Toolkit.DeviceBasedContinuousTurnProvider/InputAxes Secondary2DAxis
      static void _set_Secondary2DAxis(::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::InputAxes value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // UnityEngine.XR.Interaction.Toolkit.DeviceBasedContinuousTurnProvider/InputAxes
    #pragma pack(pop)
    static check_size<sizeof(DeviceBasedContinuousTurnProvider::InputAxes), 0 + sizeof(int)> __UnityEngine_XR_Interaction_Toolkit_DeviceBasedContinuousTurnProvider_InputAxesSizeCheck;
    static_assert(sizeof(DeviceBasedContinuousTurnProvider::InputAxes) == 0x4);
    public:
    // private UnityEngine.XR.Interaction.Toolkit.DeviceBasedContinuousTurnProvider/InputAxes m_InputBinding
    // Size: 0x4
    // Offset: 0x50
    ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::InputAxes m_InputBinding;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::InputAxes) == 0x4);
    // Padding between fields: m_InputBinding and: m_Controllers
    char __padding0[0x4] = {};
    // private System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseController> m_Controllers
    // Size: 0x8
    // Offset: 0x58
    ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>* m_Controllers;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>*) == 0x8);
    // private System.Single m_DeadzoneMin
    // Size: 0x4
    // Offset: 0x60
    float m_DeadzoneMin;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_DeadzoneMax
    // Size: 0x4
    // Offset: 0x64
    float m_DeadzoneMax;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get static field: static private readonly UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>[] k_Vec2UsageList
    static ::ArrayW<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>> _get_k_Vec2UsageList();
    // Set static field: static private readonly UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>[] k_Vec2UsageList
    static void _set_k_Vec2UsageList(::ArrayW<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>> value);
    // Get instance field reference: private UnityEngine.XR.Interaction.Toolkit.DeviceBasedContinuousTurnProvider/InputAxes m_InputBinding
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::InputAxes& dyn_m_InputBinding();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseController> m_Controllers
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>*& dyn_m_Controllers();
    // Get instance field reference: private System.Single m_DeadzoneMin
    [[deprecated("Use field access instead!")]] float& dyn_m_DeadzoneMin();
    // Get instance field reference: private System.Single m_DeadzoneMax
    [[deprecated("Use field access instead!")]] float& dyn_m_DeadzoneMax();
    // public UnityEngine.XR.Interaction.Toolkit.DeviceBasedContinuousTurnProvider/InputAxes get_inputBinding()
    // Offset: 0x540C2F4
    ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::InputAxes get_inputBinding();
    // public System.Void set_inputBinding(UnityEngine.XR.Interaction.Toolkit.DeviceBasedContinuousTurnProvider/InputAxes value)
    // Offset: 0x540C2FC
    void set_inputBinding(::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::InputAxes value);
    // public System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseController> get_controllers()
    // Offset: 0x540C304
    ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>* get_controllers();
    // public System.Void set_controllers(System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseController> value)
    // Offset: 0x540C30C
    void set_controllers(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>* value);
    // public System.Single get_deadzoneMin()
    // Offset: 0x540C314
    float get_deadzoneMin();
    // public System.Void set_deadzoneMin(System.Single value)
    // Offset: 0x540C31C
    void set_deadzoneMin(float value);
    // public System.Single get_deadzoneMax()
    // Offset: 0x540C324
    float get_deadzoneMax();
    // public System.Void set_deadzoneMax(System.Single value)
    // Offset: 0x540C32C
    void set_deadzoneMax(float value);
    // protected UnityEngine.Vector2 GetDeadzoneAdjustedValue(UnityEngine.Vector2 value)
    // Offset: 0x540C544
    ::UnityEngine::Vector2 GetDeadzoneAdjustedValue(::UnityEngine::Vector2 value);
    // protected System.Single GetDeadzoneAdjustedValue(System.Single value)
    // Offset: 0x540C6A8
    float GetDeadzoneAdjustedValue(float value);
    // static private System.Void .cctor()
    // Offset: 0x540C78C
    static void _cctor();
    // protected override UnityEngine.Vector2 ReadInput()
    // Offset: 0x540C334
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.ContinuousTurnProviderBase
    // Base method: UnityEngine.Vector2 ContinuousTurnProviderBase::ReadInput()
    ::UnityEngine::Vector2 ReadInput();
    // public System.Void .ctor()
    // Offset: 0x540C6F0
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.ContinuousTurnProviderBase
    // Base method: System.Void ContinuousTurnProviderBase::.ctor()
    // Base method: System.Void LocomotionProvider::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DeviceBasedContinuousTurnProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DeviceBasedContinuousTurnProvider*, creationType>()));
    }
  }; // UnityEngine.XR.Interaction.Toolkit.DeviceBasedContinuousTurnProvider
  #pragma pack(pop)
  static check_size<sizeof(DeviceBasedContinuousTurnProvider), 100 + sizeof(float)> __UnityEngine_XR_Interaction_Toolkit_DeviceBasedContinuousTurnProviderSizeCheck;
  static_assert(sizeof(DeviceBasedContinuousTurnProvider) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::InputAxes, "UnityEngine.XR.Interaction.Toolkit", "DeviceBasedContinuousTurnProvider/InputAxes");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::get_inputBinding
// Il2CppName: get_inputBinding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::InputAxes (UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::*)()>(&UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::get_inputBinding)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider*), "get_inputBinding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::set_inputBinding
// Il2CppName: set_inputBinding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::*)(::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::InputAxes)>(&UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::set_inputBinding)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "DeviceBasedContinuousTurnProvider/InputAxes")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider*), "set_inputBinding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::get_controllers
// Il2CppName: get_controllers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>* (UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::*)()>(&UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::get_controllers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider*), "get_controllers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::set_controllers
// Il2CppName: set_controllers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::*)(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>*)>(&UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::set_controllers)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "XRBaseController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider*), "set_controllers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::get_deadzoneMin
// Il2CppName: get_deadzoneMin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::*)()>(&UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::get_deadzoneMin)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider*), "get_deadzoneMin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::set_deadzoneMin
// Il2CppName: set_deadzoneMin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::*)(float)>(&UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::set_deadzoneMin)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider*), "set_deadzoneMin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::get_deadzoneMax
// Il2CppName: get_deadzoneMax
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::*)()>(&UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::get_deadzoneMax)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider*), "get_deadzoneMax", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::set_deadzoneMax
// Il2CppName: set_deadzoneMax
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::*)(float)>(&UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::set_deadzoneMax)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider*), "set_deadzoneMax", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::GetDeadzoneAdjustedValue
// Il2CppName: GetDeadzoneAdjustedValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::*)(::UnityEngine::Vector2)>(&UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::GetDeadzoneAdjustedValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider*), "GetDeadzoneAdjustedValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::GetDeadzoneAdjustedValue
// Il2CppName: GetDeadzoneAdjustedValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::*)(float)>(&UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::GetDeadzoneAdjustedValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider*), "GetDeadzoneAdjustedValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::ReadInput
// Il2CppName: ReadInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::*)()>(&UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::ReadInput)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider*), "ReadInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousTurnProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
