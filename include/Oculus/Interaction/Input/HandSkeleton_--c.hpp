// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.Input.HandSkeleton
#include "Oculus/Interaction/Input/HandSkeleton.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction::Input
namespace Oculus::Interaction::Input {
  // Forward declaring type: HandSkeletonJoint
  struct HandSkeletonJoint;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::Input::HandSkeleton::$$c);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Input::HandSkeleton::$$c*, "Oculus.Interaction.Input", "HandSkeleton/<>c");
// Type namespace: Oculus.Interaction.Input
namespace Oculus::Interaction::Input {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.Input.HandSkeleton/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class HandSkeleton::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Oculus.Interaction.Input.HandSkeleton/<>c <>9
    static ::Oculus::Interaction::Input::HandSkeleton::$$c* _get_$$9();
    // Set static field: static public readonly Oculus.Interaction.Input.HandSkeleton/<>c <>9
    static void _set_$$9(::Oculus::Interaction::Input::HandSkeleton::$$c* value);
    // static private System.Void .cctor()
    // Offset: 0x481C70C
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x481C774
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HandSkeleton::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Input::HandSkeleton::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HandSkeleton::$$c*, creationType>()));
    }
    // Oculus.Interaction.Input.HandSkeletonJoint <.cctor>b__8_0(Oculus.Interaction.Input.HandSkeletonJoint joint)
    // Offset: 0x481C77C
    ::Oculus::Interaction::Input::HandSkeletonJoint $_cctor$b__8_0(::Oculus::Interaction::Input::HandSkeletonJoint joint);
  }; // Oculus.Interaction.Input.HandSkeleton/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::Input::HandSkeleton::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Oculus::Interaction::Input::HandSkeleton::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::HandSkeleton::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::HandSkeleton::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Interaction::Input::HandSkeleton::$$c::$_cctor$b__8_0
// Il2CppName: <.cctor>b__8_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::Input::HandSkeletonJoint (Oculus::Interaction::Input::HandSkeleton::$$c::*)(::Oculus::Interaction::Input::HandSkeletonJoint)>(&Oculus::Interaction::Input::HandSkeleton::$$c::$_cctor$b__8_0)> {
  static const MethodInfo* get() {
    static auto* joint = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "HandSkeletonJoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::HandSkeleton::$$c*), "<.cctor>b__8_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{joint});
  }
};
