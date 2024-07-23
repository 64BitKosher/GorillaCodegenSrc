// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine.ProBuilder.Shapes
namespace UnityEngine::ProBuilder::Shapes {
  // Forward declaring type: ShapeAttribute
  class ShapeAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::Shapes::ShapeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Shapes::ShapeAttribute*, "UnityEngine.ProBuilder.Shapes", "ShapeAttribute");
// Type namespace: UnityEngine.ProBuilder.Shapes
namespace UnityEngine::ProBuilder::Shapes {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Shapes.ShapeAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  class ShapeAttribute : public ::System::Attribute {
    public:
    public:
    // public System.String name
    // Size: 0x8
    // Offset: 0x10
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return name;
    }
    // Get instance field reference: public System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
    // public System.Void .ctor(System.String n)
    // Offset: 0x51F18FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShapeAttribute* New_ctor(::StringW n) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::Shapes::ShapeAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShapeAttribute*, creationType>(n)));
    }
  }; // UnityEngine.ProBuilder.Shapes.ShapeAttribute
  #pragma pack(pop)
  static check_size<sizeof(ShapeAttribute), 16 + sizeof(::StringW)> __UnityEngine_ProBuilder_Shapes_ShapeAttributeSizeCheck;
  static_assert(sizeof(ShapeAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Shapes::ShapeAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!