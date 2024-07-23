// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.UIElements.TextureId
#include "UnityEngine/UIElements/TextureId.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements.UIR
namespace UnityEngine::UIElements::UIR {
  // Forward declaring type: State
  struct State;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::State, "UnityEngine.UIElements.UIR", "State");
// Type namespace: UnityEngine.UIElements.UIR
namespace UnityEngine::UIElements::UIR {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.UIElements.UIR.State
  // [TokenAttribute] Offset: FFFFFFFF
  struct State/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityEngine.Material material
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::Material* material;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // public UnityEngine.UIElements.TextureId texture
    // Size: 0x4
    // Offset: 0x8
    ::UnityEngine::UIElements::TextureId texture;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::TextureId) == 0x4);
    // public System.Int32 stencilRef
    // Size: 0x4
    // Offset: 0xC
    int stencilRef;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single sdfScale
    // Size: 0x4
    // Offset: 0x10
    float sdfScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: State
    constexpr State(::UnityEngine::Material* material_ = {}, ::UnityEngine::UIElements::TextureId texture_ = {}, int stencilRef_ = {}, float sdfScale_ = {}) noexcept : material{material_}, texture{texture_}, stencilRef{stencilRef_}, sdfScale{sdfScale_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public UnityEngine.Material material
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_material();
    // Get instance field reference: public UnityEngine.UIElements.TextureId texture
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::TextureId& dyn_texture();
    // Get instance field reference: public System.Int32 stencilRef
    [[deprecated("Use field access instead!")]] int& dyn_stencilRef();
    // Get instance field reference: public System.Single sdfScale
    [[deprecated("Use field access instead!")]] float& dyn_sdfScale();
  }; // UnityEngine.UIElements.UIR.State
  #pragma pack(pop)
  static check_size<sizeof(State), 16 + sizeof(float)> __UnityEngine_UIElements_UIR_StateSizeCheck;
  static_assert(sizeof(State) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
