// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: UnityEngine.U2D
namespace UnityEngine::U2D {
  // Forward declaring type: PixelPerfectRendering
  class PixelPerfectRendering;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::U2D::PixelPerfectRendering);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::U2D::PixelPerfectRendering*, "UnityEngine.U2D", "PixelPerfectRendering");
// Type namespace: UnityEngine.U2D
namespace UnityEngine::U2D {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.U2D.PixelPerfectRendering
  // [TokenAttribute] Offset: FFFFFFFF
  // [MovedFromAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  class PixelPerfectRendering : public ::Il2CppObject {
    public:
    // static public System.Void set_pixelSnapSpacing(System.Single value)
    // Offset: 0x54D6BA4
    static void set_pixelSnapSpacing(float value);
  }; // UnityEngine.U2D.PixelPerfectRendering
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::U2D::PixelPerfectRendering::set_pixelSnapSpacing
// Il2CppName: set_pixelSnapSpacing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float)>(&UnityEngine::U2D::PixelPerfectRendering::set_pixelSnapSpacing)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::U2D::PixelPerfectRendering*), "set_pixelSnapSpacing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};