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
  // Forward declaring type: InspectorNameAttribute
  class InspectorNameAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InspectorNameAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InspectorNameAttribute*, "UnityEngine", "InspectorNameAttribute");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InspectorNameAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  class InspectorNameAttribute : public ::UnityEngine::PropertyAttribute {
    public:
    // Writing base type padding for base size: 0x14 to desired offset: 0x18
    char ___base_padding[0x4] = {};
    public:
    // public readonly System.String displayName
    // Size: 0x8
    // Offset: 0x18
    ::StringW displayName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator int
    constexpr operator int() const noexcept = delete;
    // Get instance field reference: public readonly System.String displayName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_displayName();
    // public System.Void .ctor(System.String displayName)
    // Offset: 0x54BFEA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InspectorNameAttribute* New_ctor(::StringW displayName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InspectorNameAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InspectorNameAttribute*, creationType>(displayName)));
    }
  }; // UnityEngine.InspectorNameAttribute
  #pragma pack(pop)
  static check_size<sizeof(InspectorNameAttribute), 24 + sizeof(::StringW)> __UnityEngine_InspectorNameAttributeSizeCheck;
  static_assert(sizeof(InspectorNameAttribute) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InspectorNameAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
