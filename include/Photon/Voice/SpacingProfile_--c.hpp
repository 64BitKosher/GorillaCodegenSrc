// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Voice.SpacingProfile
#include "Photon/Voice/SpacingProfile.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Voice::SpacingProfile::$$c);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Voice::SpacingProfile::$$c*, "Photon.Voice", "SpacingProfile/<>c");
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Voice.SpacingProfile/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SpacingProfile::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Photon.Voice.SpacingProfile/<>c <>9
    static ::Photon::Voice::SpacingProfile::$$c* _get_$$9();
    // Set static field: static public readonly Photon.Voice.SpacingProfile/<>c <>9
    static void _set_$$9(::Photon::Voice::SpacingProfile::$$c* value);
    // Get static field: static public System.Func`2<System.Int16,System.Int16> <>9__13_0
    static ::System::Func_2<int16_t, int16_t>* _get_$$9__13_0();
    // Set static field: static public System.Func`2<System.Int16,System.Int16> <>9__13_0
    static void _set_$$9__13_0(::System::Func_2<int16_t, int16_t>* value);
    // static private System.Void .cctor()
    // Offset: 0x4A65160
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x4A651C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SpacingProfile::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::SpacingProfile::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SpacingProfile::$$c*, creationType>()));
    }
    // System.Int16 <get_Max>b__13_0(System.Int16 v)
    // Offset: 0x4A651D0
    int16_t $get_Max$b__13_0(int16_t v);
  }; // Photon.Voice.SpacingProfile/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Voice::SpacingProfile::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Photon::Voice::SpacingProfile::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::SpacingProfile::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::SpacingProfile::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Photon::Voice::SpacingProfile::$$c::$get_Max$b__13_0
// Il2CppName: <get_Max>b__13_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (Photon::Voice::SpacingProfile::$$c::*)(int16_t)>(&Photon::Voice::SpacingProfile::$$c::$get_Max$b__13_0)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("System", "Int16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::SpacingProfile::$$c*), "<get_Max>b__13_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v});
  }
};
