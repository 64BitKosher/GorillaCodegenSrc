// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.IPointableElement
#include "Oculus/Interaction/IPointableElement.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Canvas
  class Canvas;
}
// Completed forward declares
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Forward declaring type: IPointableCanvas
  class IPointableCanvas;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::IPointableCanvas);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::IPointableCanvas*, "Oculus.Interaction", "IPointableCanvas");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.IPointableCanvas
  // [TokenAttribute] Offset: FFFFFFFF
  class IPointableCanvas/*, public ::Oculus::Interaction::IPointableElement*/ {
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::IPointableElement
    operator ::Oculus::Interaction::IPointableElement() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::IPointableElement*>(this);
    }
    // public UnityEngine.Canvas get_Canvas()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Canvas* get_Canvas();
  }; // Oculus.Interaction.IPointableCanvas
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::IPointableCanvas::get_Canvas
// Il2CppName: get_Canvas
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Canvas* (Oculus::Interaction::IPointableCanvas::*)()>(&Oculus::Interaction::IPointableCanvas::get_Canvas)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::IPointableCanvas*), "get_Canvas", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
