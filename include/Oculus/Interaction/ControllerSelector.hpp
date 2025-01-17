// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Oculus.Interaction.ISelector
#include "Oculus/Interaction/ISelector.hpp"
// Including type: Oculus.Interaction.Input.ControllerButtonUsage
#include "Oculus/Interaction/Input/ControllerButtonUsage.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction::Input
namespace Oculus::Interaction::Input {
  // Forward declaring type: IController
  class IController;
}
// Forward declaring namespace: Oculus::Interaction
namespace Oculus::Interaction {
  // Skipping declaration: ControllerSelectorLogicOperator because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Object because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Forward declaring type: ControllerSelector
  class ControllerSelector;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::ControllerSelector);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::ControllerSelector*, "Oculus.Interaction", "ControllerSelector");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x49
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.ControllerSelector
  // [TokenAttribute] Offset: FFFFFFFF
  class ControllerSelector : public ::UnityEngine::MonoBehaviour/*, public ::Oculus::Interaction::ISelector*/ {
    public:
    // Nested type: ::Oculus::Interaction::ControllerSelector::ControllerSelectorLogicOperator
    struct ControllerSelectorLogicOperator;
    // Nested type: ::Oculus::Interaction::ControllerSelector::$$c
    class $$c;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: Oculus.Interaction.ControllerSelector/ControllerSelectorLogicOperator
    // [TokenAttribute] Offset: FFFFFFFF
    struct ControllerSelectorLogicOperator/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: ControllerSelectorLogicOperator
      constexpr ControllerSelectorLogicOperator(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Oculus.Interaction.ControllerSelector/ControllerSelectorLogicOperator Any
      static constexpr const int Any = 0;
      // Get static field: static public Oculus.Interaction.ControllerSelector/ControllerSelectorLogicOperator Any
      static ::Oculus::Interaction::ControllerSelector::ControllerSelectorLogicOperator _get_Any();
      // Set static field: static public Oculus.Interaction.ControllerSelector/ControllerSelectorLogicOperator Any
      static void _set_Any(::Oculus::Interaction::ControllerSelector::ControllerSelectorLogicOperator value);
      // static field const value: static public Oculus.Interaction.ControllerSelector/ControllerSelectorLogicOperator All
      static constexpr const int All = 1;
      // Get static field: static public Oculus.Interaction.ControllerSelector/ControllerSelectorLogicOperator All
      static ::Oculus::Interaction::ControllerSelector::ControllerSelectorLogicOperator _get_All();
      // Set static field: static public Oculus.Interaction.ControllerSelector/ControllerSelectorLogicOperator All
      static void _set_All(::Oculus::Interaction::ControllerSelector::ControllerSelectorLogicOperator value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // Oculus.Interaction.ControllerSelector/ControllerSelectorLogicOperator
    #pragma pack(pop)
    static check_size<sizeof(ControllerSelector::ControllerSelectorLogicOperator), 0 + sizeof(int)> __Oculus_Interaction_ControllerSelector_ControllerSelectorLogicOperatorSizeCheck;
    static_assert(sizeof(ControllerSelector::ControllerSelectorLogicOperator) == 0x4);
    public:
    // private UnityEngine.Object _controller
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Object* controller;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    // private Oculus.Interaction.Input.ControllerButtonUsage _controllerButtonUsage
    // Size: 0x4
    // Offset: 0x28
    ::Oculus::Interaction::Input::ControllerButtonUsage controllerButtonUsage;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Input::ControllerButtonUsage) == 0x4);
    // private Oculus.Interaction.ControllerSelector/ControllerSelectorLogicOperator _requireButtonUsages
    // Size: 0x4
    // Offset: 0x2C
    ::Oculus::Interaction::ControllerSelector::ControllerSelectorLogicOperator requireButtonUsages;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::ControllerSelector::ControllerSelectorLogicOperator) == 0x4);
    // private Oculus.Interaction.Input.IController <Controller>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    ::Oculus::Interaction::Input::IController* Controller;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Input::IController*) == 0x8);
    // private System.Action WhenSelected
    // Size: 0x8
    // Offset: 0x38
    ::System::Action* WhenSelected;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Action WhenUnselected
    // Size: 0x8
    // Offset: 0x40
    ::System::Action* WhenUnselected;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Boolean _selected
    // Size: 0x1
    // Offset: 0x48
    bool selected;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::ISelector
    operator ::Oculus::Interaction::ISelector() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::ISelector*>(this);
    }
    // Get instance field reference: private UnityEngine.Object _controller
    [[deprecated("Use field access instead!")]] ::UnityEngine::Object*& dyn__controller();
    // Get instance field reference: private Oculus.Interaction.Input.ControllerButtonUsage _controllerButtonUsage
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Input::ControllerButtonUsage& dyn__controllerButtonUsage();
    // Get instance field reference: private Oculus.Interaction.ControllerSelector/ControllerSelectorLogicOperator _requireButtonUsages
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::ControllerSelector::ControllerSelectorLogicOperator& dyn__requireButtonUsages();
    // Get instance field reference: private Oculus.Interaction.Input.IController <Controller>k__BackingField
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Input::IController*& dyn_$Controller$k__BackingField();
    // Get instance field reference: private System.Action WhenSelected
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_WhenSelected();
    // Get instance field reference: private System.Action WhenUnselected
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_WhenUnselected();
    // Get instance field reference: private System.Boolean _selected
    [[deprecated("Use field access instead!")]] bool& dyn__selected();
    // public Oculus.Interaction.Input.ControllerButtonUsage get_ControllerButtonUsage()
    // Offset: 0x47CE8A4
    ::Oculus::Interaction::Input::ControllerButtonUsage get_ControllerButtonUsage();
    // public System.Void set_ControllerButtonUsage(Oculus.Interaction.Input.ControllerButtonUsage value)
    // Offset: 0x47CE8AC
    void set_ControllerButtonUsage(::Oculus::Interaction::Input::ControllerButtonUsage value);
    // public Oculus.Interaction.ControllerSelector/ControllerSelectorLogicOperator get_RequireButtonUsages()
    // Offset: 0x47CE8B4
    ::Oculus::Interaction::ControllerSelector::ControllerSelectorLogicOperator get_RequireButtonUsages();
    // public System.Void set_RequireButtonUsages(Oculus.Interaction.ControllerSelector/ControllerSelectorLogicOperator value)
    // Offset: 0x47CE8BC
    void set_RequireButtonUsages(::Oculus::Interaction::ControllerSelector::ControllerSelectorLogicOperator value);
    // public Oculus.Interaction.Input.IController get_Controller()
    // Offset: 0x47CE8C4
    ::Oculus::Interaction::Input::IController* get_Controller();
    // private System.Void set_Controller(Oculus.Interaction.Input.IController value)
    // Offset: 0x47CE8CC
    void set_Controller(::Oculus::Interaction::Input::IController* value);
    // public System.Void add_WhenSelected(System.Action value)
    // Offset: 0x47CE8D4
    void add_WhenSelected(::System::Action* value);
    // public System.Void remove_WhenSelected(System.Action value)
    // Offset: 0x47CE970
    void remove_WhenSelected(::System::Action* value);
    // public System.Void add_WhenUnselected(System.Action value)
    // Offset: 0x47CEA0C
    void add_WhenUnselected(::System::Action* value);
    // public System.Void remove_WhenUnselected(System.Action value)
    // Offset: 0x47CEAA8
    void remove_WhenUnselected(::System::Action* value);
    // protected System.Void Awake()
    // Offset: 0x47CEB44
    void Awake();
    // protected System.Void Start()
    // Offset: 0x47CEB9C
    void Start();
    // protected System.Void Update()
    // Offset: 0x47CEBA0
    void Update();
    // public System.Void InjectAllControllerSelector(Oculus.Interaction.Input.IController controller)
    // Offset: 0x47CECDC
    void InjectAllControllerSelector(::Oculus::Interaction::Input::IController* controller);
    // public System.Void InjectController(Oculus.Interaction.Input.IController controller)
    // Offset: 0x47CECE0
    void InjectController(::Oculus::Interaction::Input::IController* controller);
    // public System.Void .ctor()
    // Offset: 0x47CEDB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ControllerSelector* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::ControllerSelector::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ControllerSelector*, creationType>()));
    }
  }; // Oculus.Interaction.ControllerSelector
  #pragma pack(pop)
  static check_size<sizeof(ControllerSelector), 72 + sizeof(bool)> __Oculus_Interaction_ControllerSelectorSizeCheck;
  static_assert(sizeof(ControllerSelector) == 0x49);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::ControllerSelector::ControllerSelectorLogicOperator, "Oculus.Interaction", "ControllerSelector/ControllerSelectorLogicOperator");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::ControllerSelector::get_ControllerButtonUsage
// Il2CppName: get_ControllerButtonUsage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::Input::ControllerButtonUsage (Oculus::Interaction::ControllerSelector::*)()>(&Oculus::Interaction::ControllerSelector::get_ControllerButtonUsage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ControllerSelector*), "get_ControllerButtonUsage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ControllerSelector::set_ControllerButtonUsage
// Il2CppName: set_ControllerButtonUsage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ControllerSelector::*)(::Oculus::Interaction::Input::ControllerButtonUsage)>(&Oculus::Interaction::ControllerSelector::set_ControllerButtonUsage)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "ControllerButtonUsage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ControllerSelector*), "set_ControllerButtonUsage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ControllerSelector::get_RequireButtonUsages
// Il2CppName: get_RequireButtonUsages
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::ControllerSelector::ControllerSelectorLogicOperator (Oculus::Interaction::ControllerSelector::*)()>(&Oculus::Interaction::ControllerSelector::get_RequireButtonUsages)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ControllerSelector*), "get_RequireButtonUsages", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ControllerSelector::set_RequireButtonUsages
// Il2CppName: set_RequireButtonUsages
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ControllerSelector::*)(::Oculus::Interaction::ControllerSelector::ControllerSelectorLogicOperator)>(&Oculus::Interaction::ControllerSelector::set_RequireButtonUsages)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "ControllerSelector/ControllerSelectorLogicOperator")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ControllerSelector*), "set_RequireButtonUsages", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ControllerSelector::get_Controller
// Il2CppName: get_Controller
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::Input::IController* (Oculus::Interaction::ControllerSelector::*)()>(&Oculus::Interaction::ControllerSelector::get_Controller)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ControllerSelector*), "get_Controller", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ControllerSelector::set_Controller
// Il2CppName: set_Controller
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ControllerSelector::*)(::Oculus::Interaction::Input::IController*)>(&Oculus::Interaction::ControllerSelector::set_Controller)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "IController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ControllerSelector*), "set_Controller", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ControllerSelector::add_WhenSelected
// Il2CppName: add_WhenSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ControllerSelector::*)(::System::Action*)>(&Oculus::Interaction::ControllerSelector::add_WhenSelected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ControllerSelector*), "add_WhenSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ControllerSelector::remove_WhenSelected
// Il2CppName: remove_WhenSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ControllerSelector::*)(::System::Action*)>(&Oculus::Interaction::ControllerSelector::remove_WhenSelected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ControllerSelector*), "remove_WhenSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ControllerSelector::add_WhenUnselected
// Il2CppName: add_WhenUnselected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ControllerSelector::*)(::System::Action*)>(&Oculus::Interaction::ControllerSelector::add_WhenUnselected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ControllerSelector*), "add_WhenUnselected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ControllerSelector::remove_WhenUnselected
// Il2CppName: remove_WhenUnselected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ControllerSelector::*)(::System::Action*)>(&Oculus::Interaction::ControllerSelector::remove_WhenUnselected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ControllerSelector*), "remove_WhenUnselected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ControllerSelector::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ControllerSelector::*)()>(&Oculus::Interaction::ControllerSelector::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ControllerSelector*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ControllerSelector::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ControllerSelector::*)()>(&Oculus::Interaction::ControllerSelector::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ControllerSelector*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ControllerSelector::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ControllerSelector::*)()>(&Oculus::Interaction::ControllerSelector::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ControllerSelector*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ControllerSelector::InjectAllControllerSelector
// Il2CppName: InjectAllControllerSelector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ControllerSelector::*)(::Oculus::Interaction::Input::IController*)>(&Oculus::Interaction::ControllerSelector::InjectAllControllerSelector)> {
  static const MethodInfo* get() {
    static auto* controller = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "IController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ControllerSelector*), "InjectAllControllerSelector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{controller});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ControllerSelector::InjectController
// Il2CppName: InjectController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ControllerSelector::*)(::Oculus::Interaction::Input::IController*)>(&Oculus::Interaction::ControllerSelector::InjectController)> {
  static const MethodInfo* get() {
    static auto* controller = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "IController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ControllerSelector*), "InjectController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{controller});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ControllerSelector::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
