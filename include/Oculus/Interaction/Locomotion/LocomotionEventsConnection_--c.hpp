// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.Locomotion.LocomotionEventsConnection
#include "Oculus/Interaction/Locomotion/LocomotionEventsConnection.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Converter`2<TInput, TOutput>
  template<typename TInput, typename TOutput>
  class Converter_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Forward declaring namespace: Oculus::Interaction::Locomotion
namespace Oculus::Interaction::Locomotion {
  // Forward declaring type: ILocomotionEventBroadcaster
  class ILocomotionEventBroadcaster;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::Locomotion::LocomotionEventsConnection::$$c);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Locomotion::LocomotionEventsConnection::$$c*, "Oculus.Interaction.Locomotion", "LocomotionEventsConnection/<>c");
// Type namespace: Oculus.Interaction.Locomotion
namespace Oculus::Interaction::Locomotion {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.Locomotion.LocomotionEventsConnection/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class LocomotionEventsConnection::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Oculus.Interaction.Locomotion.LocomotionEventsConnection/<>c <>9
    static ::Oculus::Interaction::Locomotion::LocomotionEventsConnection::$$c* _get_$$9();
    // Set static field: static public readonly Oculus.Interaction.Locomotion.LocomotionEventsConnection/<>c <>9
    static void _set_$$9(::Oculus::Interaction::Locomotion::LocomotionEventsConnection::$$c* value);
    // Get static field: static public System.Converter`2<UnityEngine.Object,Oculus.Interaction.Locomotion.ILocomotionEventBroadcaster> <>9__14_0
    static ::System::Converter_2<::UnityEngine::Object*, ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>* _get_$$9__14_0();
    // Set static field: static public System.Converter`2<UnityEngine.Object,Oculus.Interaction.Locomotion.ILocomotionEventBroadcaster> <>9__14_0
    static void _set_$$9__14_0(::System::Converter_2<::UnityEngine::Object*, ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>* value);
    // static private System.Void .cctor()
    // Offset: 0x4805E54
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x4805EBC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocomotionEventsConnection::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Locomotion::LocomotionEventsConnection::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocomotionEventsConnection::$$c*, creationType>()));
    }
    // Oculus.Interaction.Locomotion.ILocomotionEventBroadcaster <Awake>b__14_0(UnityEngine.Object b)
    // Offset: 0x4805EC4
    ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster* $Awake$b__14_0(::UnityEngine::Object* b);
  }; // Oculus.Interaction.Locomotion.LocomotionEventsConnection/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::LocomotionEventsConnection::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Oculus::Interaction::Locomotion::LocomotionEventsConnection::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::LocomotionEventsConnection::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::LocomotionEventsConnection::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Interaction::Locomotion::LocomotionEventsConnection::$$c::$Awake$b__14_0
// Il2CppName: <Awake>b__14_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster* (Oculus::Interaction::Locomotion::LocomotionEventsConnection::$$c::*)(::UnityEngine::Object*)>(&Oculus::Interaction::Locomotion::LocomotionEventsConnection::$$c::$Awake$b__14_0)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Locomotion::LocomotionEventsConnection::$$c*), "<Awake>b__14_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
