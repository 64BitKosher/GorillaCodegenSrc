// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.PoseDetection.JointRotationActiveState
#include "Oculus/Interaction/PoseDetection/JointRotationActiveState.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::PoseDetection::JointRotationActiveState::$$c);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::PoseDetection::JointRotationActiveState::$$c*, "Oculus.Interaction.PoseDetection", "JointRotationActiveState/<>c");
// Type namespace: Oculus.Interaction.PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.PoseDetection.JointRotationActiveState/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class JointRotationActiveState::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Oculus.Interaction.PoseDetection.JointRotationActiveState/<>c <>9
    static ::Oculus::Interaction::PoseDetection::JointRotationActiveState::$$c* _get_$$9();
    // Set static field: static public readonly Oculus.Interaction.PoseDetection.JointRotationActiveState/<>c <>9
    static void _set_$$9(::Oculus::Interaction::PoseDetection::JointRotationActiveState::$$c* value);
    // Get static field: static public System.Func`1<System.Single> <>9__32_0
    static ::System::Func_1<float>* _get_$$9__32_0();
    // Set static field: static public System.Func`1<System.Single> <>9__32_0
    static void _set_$$9__32_0(::System::Func_1<float>* value);
    // static private System.Void .cctor()
    // Offset: 0x47EF4A4
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x47EF50C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JointRotationActiveState::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::JointRotationActiveState::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JointRotationActiveState::$$c*, creationType>()));
    }
    // System.Single <Awake>b__32_0()
    // Offset: 0x47EF514
    float $Awake$b__32_0();
  }; // Oculus.Interaction.PoseDetection.JointRotationActiveState/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::JointRotationActiveState::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Oculus::Interaction::PoseDetection::JointRotationActiveState::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::JointRotationActiveState::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::JointRotationActiveState::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::JointRotationActiveState::$$c::$Awake$b__32_0
// Il2CppName: <Awake>b__32_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::PoseDetection::JointRotationActiveState::$$c::*)()>(&Oculus::Interaction::PoseDetection::JointRotationActiveState::$$c::$Awake$b__32_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::JointRotationActiveState::$$c*), "<Awake>b__32_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
