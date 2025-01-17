// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.Locomotion.LocomotionTurnerInteractor
#include "Oculus/Interaction/Locomotion/LocomotionTurnerInteractor.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::$$c);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::$$c*, "Oculus.Interaction.Locomotion", "LocomotionTurnerInteractor/<>c");
// Type namespace: Oculus.Interaction.Locomotion
namespace Oculus::Interaction::Locomotion {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.Locomotion.LocomotionTurnerInteractor/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class LocomotionTurnerInteractor::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Oculus.Interaction.Locomotion.LocomotionTurnerInteractor/<>c <>9
    static ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::$$c* _get_$$9();
    // Set static field: static public readonly Oculus.Interaction.Locomotion.LocomotionTurnerInteractor/<>c <>9
    static void _set_$$9(::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::$$c* value);
    // Get static field: static public System.Action`1<System.Single> <>9__40_0
    static ::System::Action_1<float>* _get_$$9__40_0();
    // Set static field: static public System.Action`1<System.Single> <>9__40_0
    static void _set_$$9__40_0(::System::Action_1<float>* value);
    // static private System.Void .cctor()
    // Offset: 0x480F3B0
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x480F418
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocomotionTurnerInteractor::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocomotionTurnerInteractor::$$c*, creationType>()));
    }
    // System.Void <.ctor>b__40_0(System.Single <p0>)
    // Offset: 0x480F420
    void $_ctor$b__40_0(float $p0$);
  }; // Oculus.Interaction.Locomotion.LocomotionTurnerInteractor/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::$$c::$_ctor$b__40_0
// Il2CppName: <.ctor>b__40_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::$$c::*)(float)>(&Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::$$c::$_ctor$b__40_0)> {
  static const MethodInfo* get() {
    static auto* $p0$ = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::$$c*), "<.ctor>b__40_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{$p0$});
  }
};
