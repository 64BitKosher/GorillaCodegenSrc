// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Skipping declaration: LocationFlag because it is already included!
  // Forward declaring type: IPanel
  class IPanel;
  // Forward declaring type: ContextType
  struct ContextType;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: PointerDeviceState
  class PointerDeviceState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::PointerDeviceState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerDeviceState*, "UnityEngine.UIElements", "PointerDeviceState");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.PointerDeviceState
  // [TokenAttribute] Offset: FFFFFFFF
  class PointerDeviceState : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::UIElements::PointerDeviceState::LocationFlag
    struct LocationFlag;
    // Nested type: ::UnityEngine::UIElements::PointerDeviceState::PointerLocation
    struct PointerLocation;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.UIElements.PointerDeviceState/LocationFlag
    // [TokenAttribute] Offset: FFFFFFFF
    // [FlagsAttribute] Offset: FFFFFFFF
    struct LocationFlag/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: LocationFlag
      constexpr LocationFlag(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.UIElements.PointerDeviceState/LocationFlag None
      static constexpr const int None = 0;
      // Get static field: static public UnityEngine.UIElements.PointerDeviceState/LocationFlag None
      static ::UnityEngine::UIElements::PointerDeviceState::LocationFlag _get_None();
      // Set static field: static public UnityEngine.UIElements.PointerDeviceState/LocationFlag None
      static void _set_None(::UnityEngine::UIElements::PointerDeviceState::LocationFlag value);
      // static field const value: static public UnityEngine.UIElements.PointerDeviceState/LocationFlag OutsidePanel
      static constexpr const int OutsidePanel = 1;
      // Get static field: static public UnityEngine.UIElements.PointerDeviceState/LocationFlag OutsidePanel
      static ::UnityEngine::UIElements::PointerDeviceState::LocationFlag _get_OutsidePanel();
      // Set static field: static public UnityEngine.UIElements.PointerDeviceState/LocationFlag OutsidePanel
      static void _set_OutsidePanel(::UnityEngine::UIElements::PointerDeviceState::LocationFlag value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // UnityEngine.UIElements.PointerDeviceState/LocationFlag
    #pragma pack(pop)
    static check_size<sizeof(PointerDeviceState::LocationFlag), 0 + sizeof(int)> __UnityEngine_UIElements_PointerDeviceState_LocationFlagSizeCheck;
    static_assert(sizeof(PointerDeviceState::LocationFlag) == 0x4);
    // Size: 0x14
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: UnityEngine.UIElements.PointerDeviceState/PointerLocation
    // [TokenAttribute] Offset: FFFFFFFF
    struct PointerLocation/*, public ::System::ValueType*/ {
      public:
      public:
      // private UnityEngine.Vector2 <Position>k__BackingField
      // Size: 0x8
      // Offset: 0x0
      ::UnityEngine::Vector2 Position;
      // Field size check
      static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
      // private UnityEngine.UIElements.IPanel <Panel>k__BackingField
      // Size: 0x8
      // Offset: 0x8
      ::UnityEngine::UIElements::IPanel* Panel;
      // Field size check
      static_assert(sizeof(::UnityEngine::UIElements::IPanel*) == 0x8);
      // private UnityEngine.UIElements.PointerDeviceState/LocationFlag <Flags>k__BackingField
      // Size: 0x4
      // Offset: 0x10
      ::UnityEngine::UIElements::PointerDeviceState::LocationFlag Flags;
      // Field size check
      static_assert(sizeof(::UnityEngine::UIElements::PointerDeviceState::LocationFlag) == 0x4);
      public:
      // Creating value type constructor for type: PointerLocation
      constexpr PointerLocation(::UnityEngine::Vector2 Position_ = {}, ::UnityEngine::UIElements::IPanel* Panel_ = {}, ::UnityEngine::UIElements::PointerDeviceState::LocationFlag Flags_ = {}) noexcept : Position{Position_}, Panel{Panel_}, Flags{Flags_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: private UnityEngine.Vector2 <Position>k__BackingField
      [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_$Position$k__BackingField();
      // Get instance field reference: private UnityEngine.UIElements.IPanel <Panel>k__BackingField
      [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::IPanel*& dyn_$Panel$k__BackingField();
      // Get instance field reference: private UnityEngine.UIElements.PointerDeviceState/LocationFlag <Flags>k__BackingField
      [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::PointerDeviceState::LocationFlag& dyn_$Flags$k__BackingField();
      // UnityEngine.Vector2 get_Position()
      // Offset: 0x5653FF8
      ::UnityEngine::Vector2 get_Position();
      // private System.Void set_Position(UnityEngine.Vector2 value)
      // Offset: 0x5654000
      void set_Position(::UnityEngine::Vector2 value);
      // UnityEngine.UIElements.IPanel get_Panel()
      // Offset: 0x5654008
      ::UnityEngine::UIElements::IPanel* get_Panel();
      // private System.Void set_Panel(UnityEngine.UIElements.IPanel value)
      // Offset: 0x5654010
      void set_Panel(::UnityEngine::UIElements::IPanel* value);
      // UnityEngine.UIElements.PointerDeviceState/LocationFlag get_Flags()
      // Offset: 0x5654018
      ::UnityEngine::UIElements::PointerDeviceState::LocationFlag get_Flags();
      // private System.Void set_Flags(UnityEngine.UIElements.PointerDeviceState/LocationFlag value)
      // Offset: 0x5654020
      void set_Flags(::UnityEngine::UIElements::PointerDeviceState::LocationFlag value);
      // System.Void SetLocation(UnityEngine.Vector2 position, UnityEngine.UIElements.IPanel panel)
      // Offset: 0x56539B4
      void SetLocation(::UnityEngine::Vector2 position, ::UnityEngine::UIElements::IPanel* panel);
    }; // UnityEngine.UIElements.PointerDeviceState/PointerLocation
    #pragma pack(pop)
    static check_size<sizeof(PointerDeviceState::PointerLocation), 16 + sizeof(::UnityEngine::UIElements::PointerDeviceState::LocationFlag)> __UnityEngine_UIElements_PointerDeviceState_PointerLocationSizeCheck;
    static_assert(sizeof(PointerDeviceState::PointerLocation) == 0x14);
    // Get static field: static private UnityEngine.UIElements.PointerDeviceState/PointerLocation[] s_PlayerPointerLocations
    static ::ArrayW<::UnityEngine::UIElements::PointerDeviceState::PointerLocation> _get_s_PlayerPointerLocations();
    // Set static field: static private UnityEngine.UIElements.PointerDeviceState/PointerLocation[] s_PlayerPointerLocations
    static void _set_s_PlayerPointerLocations(::ArrayW<::UnityEngine::UIElements::PointerDeviceState::PointerLocation> value);
    // Get static field: static private System.Int32[] s_PressedButtons
    static ::ArrayW<int> _get_s_PressedButtons();
    // Set static field: static private System.Int32[] s_PressedButtons
    static void _set_s_PressedButtons(::ArrayW<int> value);
    // Get static field: static private readonly UnityEngine.UIElements.IPanel[] s_PlayerPanelWithSoftPointerCapture
    static ::ArrayW<::UnityEngine::UIElements::IPanel*> _get_s_PlayerPanelWithSoftPointerCapture();
    // Set static field: static private readonly UnityEngine.UIElements.IPanel[] s_PlayerPanelWithSoftPointerCapture
    static void _set_s_PlayerPanelWithSoftPointerCapture(::ArrayW<::UnityEngine::UIElements::IPanel*> value);
    // static System.Void RemovePanelData(UnityEngine.UIElements.IPanel panel)
    // Offset: 0x56537F0
    static void RemovePanelData(::UnityEngine::UIElements::IPanel* panel);
    // static public System.Void SavePointerPosition(System.Int32 pointerId, UnityEngine.Vector2 position, UnityEngine.UIElements.IPanel panel, UnityEngine.UIElements.ContextType contextType)
    // Offset: 0x5653AC8
    static void SavePointerPosition(int pointerId, ::UnityEngine::Vector2 position, ::UnityEngine::UIElements::IPanel* panel, ::UnityEngine::UIElements::ContextType contextType);
    // static public System.Void PressButton(System.Int32 pointerId, System.Int32 buttonId)
    // Offset: 0x564F680
    static void PressButton(int pointerId, int buttonId);
    // static public System.Void ReleaseButton(System.Int32 pointerId, System.Int32 buttonId)
    // Offset: 0x564FBE8
    static void ReleaseButton(int pointerId, int buttonId);
    // static public System.Void ReleaseAllButtons(System.Int32 pointerId)
    // Offset: 0x56512C4
    static void ReleaseAllButtons(int pointerId);
    // static public UnityEngine.Vector2 GetPointerPosition(System.Int32 pointerId, UnityEngine.UIElements.ContextType contextType)
    // Offset: 0x564939C
    static ::UnityEngine::Vector2 GetPointerPosition(int pointerId, ::UnityEngine::UIElements::ContextType contextType);
    // static public UnityEngine.UIElements.IPanel GetPanel(System.Int32 pointerId, UnityEngine.UIElements.ContextType contextType)
    // Offset: 0x5653B70
    static ::UnityEngine::UIElements::IPanel* GetPanel(int pointerId, ::UnityEngine::UIElements::ContextType contextType);
    // static private System.Boolean HasFlagFast(UnityEngine.UIElements.PointerDeviceState/LocationFlag flagSet, UnityEngine.UIElements.PointerDeviceState/LocationFlag flag)
    // Offset: 0x5653BF0
    static bool HasFlagFast(::UnityEngine::UIElements::PointerDeviceState::LocationFlag flagSet, ::UnityEngine::UIElements::PointerDeviceState::LocationFlag flag);
    // static public System.Boolean HasLocationFlag(System.Int32 pointerId, UnityEngine.UIElements.ContextType contextType, UnityEngine.UIElements.PointerDeviceState/LocationFlag flag)
    // Offset: 0x5653BFC
    static bool HasLocationFlag(int pointerId, ::UnityEngine::UIElements::ContextType contextType, ::UnityEngine::UIElements::PointerDeviceState::LocationFlag flag);
    // static public System.Int32 GetPressedButtons(System.Int32 pointerId)
    // Offset: 0x5653C90
    static int GetPressedButtons(int pointerId);
    // static System.Boolean HasAdditionalPressedButtons(System.Int32 pointerId, System.Int32 exceptButtonId)
    // Offset: 0x5653D0C
    static bool HasAdditionalPressedButtons(int pointerId, int exceptButtonId);
    // static System.Void SetPlayerPanelWithSoftPointerCapture(System.Int32 pointerId, UnityEngine.UIElements.IPanel panel)
    // Offset: 0x5653DA4
    static void SetPlayerPanelWithSoftPointerCapture(int pointerId, ::UnityEngine::UIElements::IPanel* panel);
    // static UnityEngine.UIElements.IPanel GetPlayerPanelWithSoftPointerCapture(System.Int32 pointerId)
    // Offset: 0x5653E54
    static ::UnityEngine::UIElements::IPanel* GetPlayerPanelWithSoftPointerCapture(int pointerId);
    // static private System.Void .cctor()
    // Offset: 0x5653ED0
    static void _cctor();
  }; // UnityEngine.UIElements.PointerDeviceState
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerDeviceState::PointerLocation, "UnityEngine.UIElements", "PointerDeviceState/PointerLocation");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerDeviceState::LocationFlag, "UnityEngine.UIElements", "PointerDeviceState/LocationFlag");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::PointerDeviceState::RemovePanelData
// Il2CppName: RemovePanelData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::IPanel*)>(&UnityEngine::UIElements::PointerDeviceState::RemovePanelData)> {
  static const MethodInfo* get() {
    static auto* panel = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IPanel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::PointerDeviceState*), "RemovePanelData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{panel});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::PointerDeviceState::SavePointerPosition
// Il2CppName: SavePointerPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::UnityEngine::Vector2, ::UnityEngine::UIElements::IPanel*, ::UnityEngine::UIElements::ContextType)>(&UnityEngine::UIElements::PointerDeviceState::SavePointerPosition)> {
  static const MethodInfo* get() {
    static auto* pointerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* panel = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IPanel")->byval_arg;
    static auto* contextType = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "ContextType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::PointerDeviceState*), "SavePointerPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointerId, position, panel, contextType});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::PointerDeviceState::PressButton
// Il2CppName: PressButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, int)>(&UnityEngine::UIElements::PointerDeviceState::PressButton)> {
  static const MethodInfo* get() {
    static auto* pointerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* buttonId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::PointerDeviceState*), "PressButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointerId, buttonId});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::PointerDeviceState::ReleaseButton
// Il2CppName: ReleaseButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, int)>(&UnityEngine::UIElements::PointerDeviceState::ReleaseButton)> {
  static const MethodInfo* get() {
    static auto* pointerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* buttonId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::PointerDeviceState*), "ReleaseButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointerId, buttonId});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::PointerDeviceState::ReleaseAllButtons
// Il2CppName: ReleaseAllButtons
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int)>(&UnityEngine::UIElements::PointerDeviceState::ReleaseAllButtons)> {
  static const MethodInfo* get() {
    static auto* pointerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::PointerDeviceState*), "ReleaseAllButtons", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointerId});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::PointerDeviceState::GetPointerPosition
// Il2CppName: GetPointerPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(int, ::UnityEngine::UIElements::ContextType)>(&UnityEngine::UIElements::PointerDeviceState::GetPointerPosition)> {
  static const MethodInfo* get() {
    static auto* pointerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* contextType = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "ContextType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::PointerDeviceState*), "GetPointerPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointerId, contextType});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::PointerDeviceState::GetPanel
// Il2CppName: GetPanel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::IPanel* (*)(int, ::UnityEngine::UIElements::ContextType)>(&UnityEngine::UIElements::PointerDeviceState::GetPanel)> {
  static const MethodInfo* get() {
    static auto* pointerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* contextType = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "ContextType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::PointerDeviceState*), "GetPanel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointerId, contextType});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::PointerDeviceState::HasFlagFast
// Il2CppName: HasFlagFast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::UIElements::PointerDeviceState::LocationFlag, ::UnityEngine::UIElements::PointerDeviceState::LocationFlag)>(&UnityEngine::UIElements::PointerDeviceState::HasFlagFast)> {
  static const MethodInfo* get() {
    static auto* flagSet = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "PointerDeviceState/LocationFlag")->byval_arg;
    static auto* flag = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "PointerDeviceState/LocationFlag")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::PointerDeviceState*), "HasFlagFast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{flagSet, flag});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::PointerDeviceState::HasLocationFlag
// Il2CppName: HasLocationFlag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int, ::UnityEngine::UIElements::ContextType, ::UnityEngine::UIElements::PointerDeviceState::LocationFlag)>(&UnityEngine::UIElements::PointerDeviceState::HasLocationFlag)> {
  static const MethodInfo* get() {
    static auto* pointerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* contextType = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "ContextType")->byval_arg;
    static auto* flag = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "PointerDeviceState/LocationFlag")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::PointerDeviceState*), "HasLocationFlag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointerId, contextType, flag});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::PointerDeviceState::GetPressedButtons
// Il2CppName: GetPressedButtons
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&UnityEngine::UIElements::PointerDeviceState::GetPressedButtons)> {
  static const MethodInfo* get() {
    static auto* pointerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::PointerDeviceState*), "GetPressedButtons", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointerId});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::PointerDeviceState::HasAdditionalPressedButtons
// Il2CppName: HasAdditionalPressedButtons
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int, int)>(&UnityEngine::UIElements::PointerDeviceState::HasAdditionalPressedButtons)> {
  static const MethodInfo* get() {
    static auto* pointerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* exceptButtonId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::PointerDeviceState*), "HasAdditionalPressedButtons", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointerId, exceptButtonId});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::PointerDeviceState::SetPlayerPanelWithSoftPointerCapture
// Il2CppName: SetPlayerPanelWithSoftPointerCapture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::UnityEngine::UIElements::IPanel*)>(&UnityEngine::UIElements::PointerDeviceState::SetPlayerPanelWithSoftPointerCapture)> {
  static const MethodInfo* get() {
    static auto* pointerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* panel = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IPanel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::PointerDeviceState*), "SetPlayerPanelWithSoftPointerCapture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointerId, panel});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::PointerDeviceState::GetPlayerPanelWithSoftPointerCapture
// Il2CppName: GetPlayerPanelWithSoftPointerCapture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::IPanel* (*)(int)>(&UnityEngine::UIElements::PointerDeviceState::GetPlayerPanelWithSoftPointerCapture)> {
  static const MethodInfo* get() {
    static auto* pointerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::PointerDeviceState*), "GetPlayerPanelWithSoftPointerCapture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointerId});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::PointerDeviceState::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::PointerDeviceState::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::PointerDeviceState*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
