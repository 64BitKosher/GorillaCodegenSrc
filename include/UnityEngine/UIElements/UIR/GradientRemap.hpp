// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.UIR.LinkedPoolItem`1
#include "UnityEngine/UIElements/UIR/LinkedPoolItem_1.hpp"
// Including type: UnityEngine.RectInt
#include "UnityEngine/RectInt.hpp"
// Including type: UnityEngine.UIElements.TextureId
#include "UnityEngine/UIElements/TextureId.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.UIElements.UIR
namespace UnityEngine::UIElements::UIR {
  // Forward declaring type: GradientRemap
  class GradientRemap;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::UIR::GradientRemap);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::GradientRemap*, "UnityEngine.UIElements.UIR", "GradientRemap");
// Type namespace: UnityEngine.UIElements.UIR
namespace UnityEngine::UIElements::UIR {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.UIR.GradientRemap
  // [TokenAttribute] Offset: FFFFFFFF
  class GradientRemap : public ::UnityEngine::UIElements::UIR::LinkedPoolItem_1<::UnityEngine::UIElements::UIR::GradientRemap*> {
    public:
    public:
    // public System.Int32 origIndex
    // Size: 0x4
    // Offset: 0x18
    int origIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 destIndex
    // Size: 0x4
    // Offset: 0x1C
    int destIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public UnityEngine.RectInt location
    // Size: 0x10
    // Offset: 0x20
    ::UnityEngine::RectInt location;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectInt) == 0x10);
    // public UnityEngine.UIElements.UIR.GradientRemap next
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::UIElements::UIR::GradientRemap* next;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::UIR::GradientRemap*) == 0x8);
    // public UnityEngine.UIElements.TextureId atlas
    // Size: 0x4
    // Offset: 0x38
    ::UnityEngine::UIElements::TextureId atlas;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::TextureId) == 0x4);
    public:
    // Get instance field reference: public System.Int32 origIndex
    [[deprecated("Use field access instead!")]] int& dyn_origIndex();
    // Get instance field reference: public System.Int32 destIndex
    [[deprecated("Use field access instead!")]] int& dyn_destIndex();
    // Get instance field reference: public UnityEngine.RectInt location
    [[deprecated("Use field access instead!")]] ::UnityEngine::RectInt& dyn_location();
    // Get instance field reference: public UnityEngine.UIElements.UIR.GradientRemap next
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::UIR::GradientRemap*& dyn_next();
    // Get instance field reference: public UnityEngine.UIElements.TextureId atlas
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::TextureId& dyn_atlas();
    // public System.Void Reset()
    // Offset: 0x55D88B8
    void Reset();
    // public System.Void .ctor()
    // Offset: 0x55D885C
    // Implemented from: UnityEngine.UIElements.UIR.LinkedPoolItem`1
    // Base method: System.Void LinkedPoolItem_1::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GradientRemap* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::UIR::GradientRemap::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GradientRemap*, creationType>()));
    }
  }; // UnityEngine.UIElements.UIR.GradientRemap
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::GradientRemap::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::GradientRemap::*)()>(&UnityEngine::UIElements::UIR::GradientRemap::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIR::GradientRemap*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::GradientRemap::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
