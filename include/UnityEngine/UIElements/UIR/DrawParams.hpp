// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Matrix4x4
#include "UnityEngine/Matrix4x4.hpp"
// Including type: UnityEngine.Rect
#include "UnityEngine/Rect.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Stack`1<T>
  template<typename T>
  class Stack_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RenderTexture
  class RenderTexture;
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements.UIR
namespace UnityEngine::UIElements::UIR {
  // Forward declaring type: DrawParams
  class DrawParams;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::UIR::DrawParams);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::DrawParams*, "UnityEngine.UIElements.UIR", "DrawParams");
// Type namespace: UnityEngine.UIElements.UIR
namespace UnityEngine::UIElements::UIR {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.UIR.DrawParams
  // [TokenAttribute] Offset: FFFFFFFF
  class DrawParams : public ::Il2CppObject {
    public:
    public:
    // readonly System.Collections.Generic.Stack`1<UnityEngine.Matrix4x4> view
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::Stack_1<::UnityEngine::Matrix4x4>* view;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Stack_1<::UnityEngine::Matrix4x4>*) == 0x8);
    // readonly System.Collections.Generic.Stack`1<UnityEngine.Rect> scissor
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::Stack_1<::UnityEngine::Rect>* scissor;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Stack_1<::UnityEngine::Rect>*) == 0x8);
    // readonly System.Collections.Generic.List`1<UnityEngine.RenderTexture> renderTexture
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::UnityEngine::RenderTexture*>* renderTexture;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::RenderTexture*>*) == 0x8);
    // readonly System.Collections.Generic.List`1<UnityEngine.Material> defaultMaterial
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::UnityEngine::Material*>* defaultMaterial;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Material*>*) == 0x8);
    public:
    // Get static field: static readonly UnityEngine.Rect k_UnlimitedRect
    static ::UnityEngine::Rect _get_k_UnlimitedRect();
    // Set static field: static readonly UnityEngine.Rect k_UnlimitedRect
    static void _set_k_UnlimitedRect(::UnityEngine::Rect value);
    // Get static field: static readonly UnityEngine.Rect k_FullNormalizedRect
    static ::UnityEngine::Rect _get_k_FullNormalizedRect();
    // Set static field: static readonly UnityEngine.Rect k_FullNormalizedRect
    static void _set_k_FullNormalizedRect(::UnityEngine::Rect value);
    // Get instance field reference: readonly System.Collections.Generic.Stack`1<UnityEngine.Matrix4x4> view
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Stack_1<::UnityEngine::Matrix4x4>*& dyn_view();
    // Get instance field reference: readonly System.Collections.Generic.Stack`1<UnityEngine.Rect> scissor
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Stack_1<::UnityEngine::Rect>*& dyn_scissor();
    // Get instance field reference: readonly System.Collections.Generic.List`1<UnityEngine.RenderTexture> renderTexture
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::RenderTexture*>*& dyn_renderTexture();
    // Get instance field reference: readonly System.Collections.Generic.List`1<UnityEngine.Material> defaultMaterial
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Material*>*& dyn_defaultMaterial();
    // public System.Void Reset()
    // Offset: 0x55DE270
    void Reset();
    // public System.Void .ctor()
    // Offset: 0x55D9C8C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DrawParams* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::UIR::DrawParams::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DrawParams*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x55E03F0
    static void _cctor();
  }; // UnityEngine.UIElements.UIR.DrawParams
  #pragma pack(pop)
  static check_size<sizeof(DrawParams), 40 + sizeof(::System::Collections::Generic::List_1<::UnityEngine::Material*>*)> __UnityEngine_UIElements_UIR_DrawParamsSizeCheck;
  static_assert(sizeof(DrawParams) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::DrawParams::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::DrawParams::*)()>(&UnityEngine::UIElements::UIR::DrawParams::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIR::DrawParams*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::DrawParams::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::DrawParams::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::UIR::DrawParams::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIR::DrawParams*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
