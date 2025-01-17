// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.AudioPhysics/CollisionEvents
#include "Oculus/Interaction/AudioPhysics_CollisionEvents.hpp"
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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collision
  class Collision;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::AudioPhysics::CollisionEvents::$$c);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::AudioPhysics::CollisionEvents::$$c*, "Oculus.Interaction", "AudioPhysics/CollisionEvents/<>c");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.AudioPhysics/CollisionEvents/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class AudioPhysics::CollisionEvents::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Oculus.Interaction.AudioPhysics/CollisionEvents/<>c <>9
    static ::Oculus::Interaction::AudioPhysics::CollisionEvents::$$c* _get_$$9();
    // Set static field: static public readonly Oculus.Interaction.AudioPhysics/CollisionEvents/<>c <>9
    static void _set_$$9(::Oculus::Interaction::AudioPhysics::CollisionEvents::$$c* value);
    // Get static field: static public System.Action`1<UnityEngine.Collision> <>9__4_0
    static ::System::Action_1<::UnityEngine::Collision*>* _get_$$9__4_0();
    // Set static field: static public System.Action`1<UnityEngine.Collision> <>9__4_0
    static void _set_$$9__4_0(::System::Action_1<::UnityEngine::Collision*>* value);
    // static private System.Void .cctor()
    // Offset: 0x47985E8
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x4798650
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioPhysics::CollisionEvents::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::AudioPhysics::CollisionEvents::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioPhysics::CollisionEvents::$$c*, creationType>()));
    }
    // System.Void <.ctor>b__4_0(UnityEngine.Collision <p0>)
    // Offset: 0x4798658
    void $_ctor$b__4_0(::UnityEngine::Collision* $p0$);
  }; // Oculus.Interaction.AudioPhysics/CollisionEvents/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::AudioPhysics::CollisionEvents::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Oculus::Interaction::AudioPhysics::CollisionEvents::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::AudioPhysics::CollisionEvents::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::AudioPhysics::CollisionEvents::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Interaction::AudioPhysics::CollisionEvents::$$c::$_ctor$b__4_0
// Il2CppName: <.ctor>b__4_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::AudioPhysics::CollisionEvents::$$c::*)(::UnityEngine::Collision*)>(&Oculus::Interaction::AudioPhysics::CollisionEvents::$$c::$_ctor$b__4_0)> {
  static const MethodInfo* get() {
    static auto* $p0$ = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collision")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::AudioPhysics::CollisionEvents::$$c*), "<.ctor>b__4_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{$p0$});
  }
};
