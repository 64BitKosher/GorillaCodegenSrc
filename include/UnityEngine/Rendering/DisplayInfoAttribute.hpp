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
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: DisplayInfoAttribute
  class DisplayInfoAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::DisplayInfoAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DisplayInfoAttribute*, "UnityEngine.Rendering", "DisplayInfoAttribute");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.DisplayInfoAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  class DisplayInfoAttribute : public ::System::Attribute {
    public:
    public:
    // public System.String name
    // Size: 0x8
    // Offset: 0x10
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 order
    // Size: 0x4
    // Offset: 0x18
    int order;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
    // Get instance field reference: public System.Int32 order
    [[deprecated("Use field access instead!")]] int& dyn_order();
    // public System.Void .ctor()
    // Offset: 0x523DD1C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DisplayInfoAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::DisplayInfoAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DisplayInfoAttribute*, creationType>()));
    }
  }; // UnityEngine.Rendering.DisplayInfoAttribute
  #pragma pack(pop)
  static check_size<sizeof(DisplayInfoAttribute), 24 + sizeof(int)> __UnityEngine_Rendering_DisplayInfoAttributeSizeCheck;
  static_assert(sizeof(DisplayInfoAttribute) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::DisplayInfoAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
