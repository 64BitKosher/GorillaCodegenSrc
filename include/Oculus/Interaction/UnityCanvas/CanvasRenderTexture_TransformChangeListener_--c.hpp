// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.UnityCanvas.CanvasRenderTexture/TransformChangeListener
#include "Oculus/Interaction/UnityCanvas/CanvasRenderTexture_TransformChangeListener.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::UnityCanvas::CanvasRenderTexture::TransformChangeListener::$$c);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::UnityCanvas::CanvasRenderTexture::TransformChangeListener::$$c*, "Oculus.Interaction.UnityCanvas", "CanvasRenderTexture/TransformChangeListener/<>c");
// Type namespace: Oculus.Interaction.UnityCanvas
namespace Oculus::Interaction::UnityCanvas {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.UnityCanvas.CanvasRenderTexture/TransformChangeListener/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class CanvasRenderTexture::TransformChangeListener::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Oculus.Interaction.UnityCanvas.CanvasRenderTexture/TransformChangeListener/<>c <>9
    static ::Oculus::Interaction::UnityCanvas::CanvasRenderTexture::TransformChangeListener::$$c* _get_$$9();
    // Set static field: static public readonly Oculus.Interaction.UnityCanvas.CanvasRenderTexture/TransformChangeListener/<>c <>9
    static void _set_$$9(::Oculus::Interaction::UnityCanvas::CanvasRenderTexture::TransformChangeListener::$$c* value);
    // Get static field: static public System.Action <>9__4_0
    static ::System::Action* _get_$$9__4_0();
    // Set static field: static public System.Action <>9__4_0
    static void _set_$$9__4_0(::System::Action* value);
    // static private System.Void .cctor()
    // Offset: 0x47E130C
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x47E1374
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CanvasRenderTexture::TransformChangeListener::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::UnityCanvas::CanvasRenderTexture::TransformChangeListener::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CanvasRenderTexture::TransformChangeListener::$$c*, creationType>()));
    }
    // System.Void <.ctor>b__4_0()
    // Offset: 0x47E137C
    void $_ctor$b__4_0();
  }; // Oculus.Interaction.UnityCanvas.CanvasRenderTexture/TransformChangeListener/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::UnityCanvas::CanvasRenderTexture::TransformChangeListener::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Oculus::Interaction::UnityCanvas::CanvasRenderTexture::TransformChangeListener::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::UnityCanvas::CanvasRenderTexture::TransformChangeListener::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::UnityCanvas::CanvasRenderTexture::TransformChangeListener::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Interaction::UnityCanvas::CanvasRenderTexture::TransformChangeListener::$$c::$_ctor$b__4_0
// Il2CppName: <.ctor>b__4_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::UnityCanvas::CanvasRenderTexture::TransformChangeListener::$$c::*)()>(&Oculus::Interaction::UnityCanvas::CanvasRenderTexture::TransformChangeListener::$$c::$_ctor$b__4_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::UnityCanvas::CanvasRenderTexture::TransformChangeListener::$$c*), "<.ctor>b__4_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
