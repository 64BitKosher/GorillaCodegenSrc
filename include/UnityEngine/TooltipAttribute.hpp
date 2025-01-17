// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.PropertyAttribute
#include "UnityEngine/PropertyAttribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TooltipAttribute
  class TooltipAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TooltipAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TooltipAttribute*, "UnityEngine", "TooltipAttribute");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TooltipAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  class TooltipAttribute : public ::UnityEngine::PropertyAttribute {
    public:
    // Writing base type padding for base size: 0x14 to desired offset: 0x18
    char ___base_padding[0x4] = {};
    public:
    // public readonly System.String tooltip
    // Size: 0x8
    // Offset: 0x18
    ::StringW tooltip;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator int
    constexpr operator int() const noexcept = delete;
    // Get instance field reference: public readonly System.String tooltip
    [[deprecated("Use field access instead!")]] ::StringW& dyn_tooltip();
    // public System.Void .ctor(System.String tooltip)
    // Offset: 0x54BFED0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TooltipAttribute* New_ctor(::StringW tooltip) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::TooltipAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TooltipAttribute*, creationType>(tooltip)));
    }
  }; // UnityEngine.TooltipAttribute
  #pragma pack(pop)
  static check_size<sizeof(TooltipAttribute), 24 + sizeof(::StringW)> __UnityEngine_TooltipAttributeSizeCheck;
  static_assert(sizeof(TooltipAttribute) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TooltipAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
