// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.Controls.Vector2Control
#include "UnityEngine/InputSystem/Controls/Vector2Control.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem::Controls
namespace UnityEngine::InputSystem::Controls {
  // Forward declaring type: AxisControl
  class AxisControl;
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem.Controls
namespace UnityEngine::InputSystem::Controls {
  // Forward declaring type: DeltaControl
  class DeltaControl;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::Controls::DeltaControl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Controls::DeltaControl*, "UnityEngine.InputSystem.Controls", "DeltaControl");
// Type namespace: UnityEngine.InputSystem.Controls
namespace UnityEngine::InputSystem::Controls {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.InputSystem.Controls.DeltaControl
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  class DeltaControl : public ::UnityEngine::InputSystem::Controls::Vector2Control {
    public:
    public:
    // private UnityEngine.InputSystem.Controls.AxisControl <up>k__BackingField
    // Size: 0x8
    // Offset: 0x120
    ::UnityEngine::InputSystem::Controls::AxisControl* up;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::AxisControl*) == 0x8);
    // private UnityEngine.InputSystem.Controls.AxisControl <down>k__BackingField
    // Size: 0x8
    // Offset: 0x128
    ::UnityEngine::InputSystem::Controls::AxisControl* down;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::AxisControl*) == 0x8);
    // private UnityEngine.InputSystem.Controls.AxisControl <left>k__BackingField
    // Size: 0x8
    // Offset: 0x130
    ::UnityEngine::InputSystem::Controls::AxisControl* left;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::AxisControl*) == 0x8);
    // private UnityEngine.InputSystem.Controls.AxisControl <right>k__BackingField
    // Size: 0x8
    // Offset: 0x138
    ::UnityEngine::InputSystem::Controls::AxisControl* right;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Controls::AxisControl*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.InputSystem.Controls.AxisControl <up>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::AxisControl*& dyn_$up$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.AxisControl <down>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::AxisControl*& dyn_$down$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.AxisControl <left>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::AxisControl*& dyn_$left$k__BackingField();
    // Get instance field reference: private UnityEngine.InputSystem.Controls.AxisControl <right>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Controls::AxisControl*& dyn_$right$k__BackingField();
    // public UnityEngine.InputSystem.Controls.AxisControl get_up()
    // Offset: 0x516C444
    ::UnityEngine::InputSystem::Controls::AxisControl* get_up();
    // public System.Void set_up(UnityEngine.InputSystem.Controls.AxisControl value)
    // Offset: 0x516C44C
    void set_up(::UnityEngine::InputSystem::Controls::AxisControl* value);
    // public UnityEngine.InputSystem.Controls.AxisControl get_down()
    // Offset: 0x516C45C
    ::UnityEngine::InputSystem::Controls::AxisControl* get_down();
    // public System.Void set_down(UnityEngine.InputSystem.Controls.AxisControl value)
    // Offset: 0x516C464
    void set_down(::UnityEngine::InputSystem::Controls::AxisControl* value);
    // public UnityEngine.InputSystem.Controls.AxisControl get_left()
    // Offset: 0x516C474
    ::UnityEngine::InputSystem::Controls::AxisControl* get_left();
    // public System.Void set_left(UnityEngine.InputSystem.Controls.AxisControl value)
    // Offset: 0x516C47C
    void set_left(::UnityEngine::InputSystem::Controls::AxisControl* value);
    // public UnityEngine.InputSystem.Controls.AxisControl get_right()
    // Offset: 0x516C48C
    ::UnityEngine::InputSystem::Controls::AxisControl* get_right();
    // public System.Void set_right(UnityEngine.InputSystem.Controls.AxisControl value)
    // Offset: 0x516C494
    void set_right(::UnityEngine::InputSystem::Controls::AxisControl* value);
    // protected override System.Void FinishSetup()
    // Offset: 0x516C4A4
    // Implemented from: UnityEngine.InputSystem.Controls.Vector2Control
    // Base method: System.Void Vector2Control::FinishSetup()
    void FinishSetup();
    // public System.Void .ctor()
    // Offset: 0x516C69C
    // Implemented from: UnityEngine.InputSystem.Controls.Vector2Control
    // Base method: System.Void Vector2Control::.ctor()
    // Base method: System.Void InputControl_1::.ctor()
    // Base method: System.Void InputControl::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DeltaControl* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Controls::DeltaControl::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DeltaControl*, creationType>()));
    }
  }; // UnityEngine.InputSystem.Controls.DeltaControl
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::Controls::DeltaControl::get_up
// Il2CppName: get_up
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (UnityEngine::InputSystem::Controls::DeltaControl::*)()>(&UnityEngine::InputSystem::Controls::DeltaControl::get_up)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Controls::DeltaControl*), "get_up", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Controls::DeltaControl::set_up
// Il2CppName: set_up
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Controls::DeltaControl::*)(::UnityEngine::InputSystem::Controls::AxisControl*)>(&UnityEngine::InputSystem::Controls::DeltaControl::set_up)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "AxisControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Controls::DeltaControl*), "set_up", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Controls::DeltaControl::get_down
// Il2CppName: get_down
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (UnityEngine::InputSystem::Controls::DeltaControl::*)()>(&UnityEngine::InputSystem::Controls::DeltaControl::get_down)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Controls::DeltaControl*), "get_down", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Controls::DeltaControl::set_down
// Il2CppName: set_down
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Controls::DeltaControl::*)(::UnityEngine::InputSystem::Controls::AxisControl*)>(&UnityEngine::InputSystem::Controls::DeltaControl::set_down)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "AxisControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Controls::DeltaControl*), "set_down", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Controls::DeltaControl::get_left
// Il2CppName: get_left
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (UnityEngine::InputSystem::Controls::DeltaControl::*)()>(&UnityEngine::InputSystem::Controls::DeltaControl::get_left)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Controls::DeltaControl*), "get_left", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Controls::DeltaControl::set_left
// Il2CppName: set_left
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Controls::DeltaControl::*)(::UnityEngine::InputSystem::Controls::AxisControl*)>(&UnityEngine::InputSystem::Controls::DeltaControl::set_left)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "AxisControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Controls::DeltaControl*), "set_left", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Controls::DeltaControl::get_right
// Il2CppName: get_right
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::AxisControl* (UnityEngine::InputSystem::Controls::DeltaControl::*)()>(&UnityEngine::InputSystem::Controls::DeltaControl::get_right)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Controls::DeltaControl*), "get_right", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Controls::DeltaControl::set_right
// Il2CppName: set_right
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Controls::DeltaControl::*)(::UnityEngine::InputSystem::Controls::AxisControl*)>(&UnityEngine::InputSystem::Controls::DeltaControl::set_right)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Controls", "AxisControl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Controls::DeltaControl*), "set_right", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Controls::DeltaControl::FinishSetup
// Il2CppName: FinishSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Controls::DeltaControl::*)()>(&UnityEngine::InputSystem::Controls::DeltaControl::FinishSetup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Controls::DeltaControl*), "FinishSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Controls::DeltaControl::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
