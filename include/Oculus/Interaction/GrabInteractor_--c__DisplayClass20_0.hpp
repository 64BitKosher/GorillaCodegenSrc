// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.GrabInteractor
#include "Oculus/Interaction/GrabInteractor.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction
namespace Oculus::Interaction {
  // Forward declaring type: GrabInteractable
  class GrabInteractable;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::GrabInteractor::$$c__DisplayClass20_0);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::GrabInteractor::$$c__DisplayClass20_0*, "Oculus.Interaction", "GrabInteractor/<>c__DisplayClass20_0");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.GrabInteractor/<>c__DisplayClass20_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class GrabInteractor::$$c__DisplayClass20_0 : public ::Il2CppObject {
    public:
    public:
    // public Oculus.Interaction.GrabInteractable interactable
    // Size: 0x8
    // Offset: 0x10
    ::Oculus::Interaction::GrabInteractable* interactable;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::GrabInteractable*) == 0x8);
    // public Oculus.Interaction.GrabInteractor <>4__this
    // Size: 0x8
    // Offset: 0x18
    ::Oculus::Interaction::GrabInteractor* $$4__this;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::GrabInteractor*) == 0x8);
    public:
    // Get instance field reference: public Oculus.Interaction.GrabInteractable interactable
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::GrabInteractable*& dyn_interactable();
    // Get instance field reference: public Oculus.Interaction.GrabInteractor <>4__this
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::GrabInteractor*& dyn_$$4__this();
    // public System.Void .ctor()
    // Offset: 0x47AA580
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GrabInteractor::$$c__DisplayClass20_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::GrabInteractor::$$c__DisplayClass20_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GrabInteractor::$$c__DisplayClass20_0*, creationType>()));
    }
    // Oculus.Interaction.GrabInteractable <ForceSelect>b__0()
    // Offset: 0x47AB8F4
    ::Oculus::Interaction::GrabInteractable* $ForceSelect$b__0();
    // System.Boolean <ForceSelect>b__1()
    // Offset: 0x47AB8FC
    bool $ForceSelect$b__1();
    // System.Boolean <ForceSelect>b__2()
    // Offset: 0x47AB950
    bool $ForceSelect$b__2();
  }; // Oculus.Interaction.GrabInteractor/<>c__DisplayClass20_0
  #pragma pack(pop)
  static check_size<sizeof(GrabInteractor::$$c__DisplayClass20_0), 24 + sizeof(::Oculus::Interaction::GrabInteractor*)> __Oculus_Interaction_GrabInteractor_$$c__DisplayClass20_0SizeCheck;
  static_assert(sizeof(GrabInteractor::$$c__DisplayClass20_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::GrabInteractor::$$c__DisplayClass20_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Interaction::GrabInteractor::$$c__DisplayClass20_0::$ForceSelect$b__0
// Il2CppName: <ForceSelect>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::GrabInteractable* (Oculus::Interaction::GrabInteractor::$$c__DisplayClass20_0::*)()>(&Oculus::Interaction::GrabInteractor::$$c__DisplayClass20_0::$ForceSelect$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::GrabInteractor::$$c__DisplayClass20_0*), "<ForceSelect>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::GrabInteractor::$$c__DisplayClass20_0::$ForceSelect$b__1
// Il2CppName: <ForceSelect>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::GrabInteractor::$$c__DisplayClass20_0::*)()>(&Oculus::Interaction::GrabInteractor::$$c__DisplayClass20_0::$ForceSelect$b__1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::GrabInteractor::$$c__DisplayClass20_0*), "<ForceSelect>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::GrabInteractor::$$c__DisplayClass20_0::$ForceSelect$b__2
// Il2CppName: <ForceSelect>b__2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::GrabInteractor::$$c__DisplayClass20_0::*)()>(&Oculus::Interaction::GrabInteractor::$$c__DisplayClass20_0::$ForceSelect$b__2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::GrabInteractor::$$c__DisplayClass20_0*), "<ForceSelect>b__2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
