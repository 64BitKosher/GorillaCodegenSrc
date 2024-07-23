// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.PointableCanvasModule
#include "Oculus/Interaction/PointableCanvasModule.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction
namespace Oculus::Interaction {
  // Forward declaring type: IPointableCanvas
  class IPointableCanvas;
  // Forward declaring type: PointerEvent
  struct PointerEvent;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::PointableCanvasModule::$$c__DisplayClass24_0);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::PointableCanvasModule::$$c__DisplayClass24_0*, "Oculus.Interaction", "PointableCanvasModule/<>c__DisplayClass24_0");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.PointableCanvasModule/<>c__DisplayClass24_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class PointableCanvasModule::$$c__DisplayClass24_0 : public ::Il2CppObject {
    public:
    public:
    // public Oculus.Interaction.PointableCanvasModule <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::Oculus::Interaction::PointableCanvasModule* $$4__this;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::PointableCanvasModule*) == 0x8);
    // public Oculus.Interaction.IPointableCanvas pointerCanvas
    // Size: 0x8
    // Offset: 0x18
    ::Oculus::Interaction::IPointableCanvas* pointerCanvas;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::IPointableCanvas*) == 0x8);
    public:
    // Get instance field reference: public Oculus.Interaction.PointableCanvasModule <>4__this
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::PointableCanvasModule*& dyn_$$4__this();
    // Get instance field reference: public Oculus.Interaction.IPointableCanvas pointerCanvas
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::IPointableCanvas*& dyn_pointerCanvas();
    // public System.Void .ctor()
    // Offset: 0x47D7968
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PointableCanvasModule::$$c__DisplayClass24_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PointableCanvasModule::$$c__DisplayClass24_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PointableCanvasModule::$$c__DisplayClass24_0*, creationType>()));
    }
    // System.Void <AddPointerCanvas>b__0(Oculus.Interaction.PointerEvent args)
    // Offset: 0x47D9C90
    void $AddPointerCanvas$b__0(::Oculus::Interaction::PointerEvent args);
  }; // Oculus.Interaction.PointableCanvasModule/<>c__DisplayClass24_0
  #pragma pack(pop)
  static check_size<sizeof(PointableCanvasModule::$$c__DisplayClass24_0), 24 + sizeof(::Oculus::Interaction::IPointableCanvas*)> __Oculus_Interaction_PointableCanvasModule_$$c__DisplayClass24_0SizeCheck;
  static_assert(sizeof(PointableCanvasModule::$$c__DisplayClass24_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::PointableCanvasModule::$$c__DisplayClass24_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Interaction::PointableCanvasModule::$$c__DisplayClass24_0::$AddPointerCanvas$b__0
// Il2CppName: <AddPointerCanvas>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PointableCanvasModule::$$c__DisplayClass24_0::*)(::Oculus::Interaction::PointerEvent)>(&Oculus::Interaction::PointableCanvasModule::$$c__DisplayClass24_0::$AddPointerCanvas$b__0)> {
  static const MethodInfo* get() {
    static auto* args = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "PointerEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PointableCanvasModule::$$c__DisplayClass24_0*), "<AddPointerCanvas>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};