// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.Behaviour
#include "Fusion/Behaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ToggleRunnerProvideInput
  class ToggleRunnerProvideInput;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ToggleRunnerProvideInput);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ToggleRunnerProvideInput*, "", "ToggleRunnerProvideInput");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: ToggleRunnerProvideInput
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: FFFFFFFF
  // [ScriptHelpAttribute] Offset: FFFFFFFF
  // [DisallowMultipleComponent] Offset: FFFFFFFF
  class ToggleRunnerProvideInput : public ::Fusion::Behaviour {
    public:
    // Get static field: static private ToggleRunnerProvideInput _instance
    static ::GlobalNamespace::ToggleRunnerProvideInput* _get__instance();
    // Set static field: static private ToggleRunnerProvideInput _instance
    static void _set__instance(::GlobalNamespace::ToggleRunnerProvideInput* value);
    // public System.Void Awake()
    // Offset: 0x295FD94
    void Awake();
    // public System.Void Update()
    // Offset: 0x295FEE0
    void Update();
    // private System.Void ToggleAll(System.Int32 runnerIndex)
    // Offset: 0x2960010
    void ToggleAll(int runnerIndex);
    // public System.Void .ctor()
    // Offset: 0x296015C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ToggleRunnerProvideInput* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ToggleRunnerProvideInput::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ToggleRunnerProvideInput*, creationType>()));
    }
  }; // ToggleRunnerProvideInput
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ToggleRunnerProvideInput::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ToggleRunnerProvideInput::*)()>(&GlobalNamespace::ToggleRunnerProvideInput::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ToggleRunnerProvideInput*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ToggleRunnerProvideInput::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ToggleRunnerProvideInput::*)()>(&GlobalNamespace::ToggleRunnerProvideInput::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ToggleRunnerProvideInput*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ToggleRunnerProvideInput::ToggleAll
// Il2CppName: ToggleAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ToggleRunnerProvideInput::*)(int)>(&GlobalNamespace::ToggleRunnerProvideInput::ToggleAll)> {
  static const MethodInfo* get() {
    static auto* runnerIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ToggleRunnerProvideInput*), "ToggleAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{runnerIndex});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ToggleRunnerProvideInput::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
