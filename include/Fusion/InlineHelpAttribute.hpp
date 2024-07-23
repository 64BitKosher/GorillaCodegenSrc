// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.DecoratingPropertyAttribute
#include "Fusion/DecoratingPropertyAttribute.hpp"
// Including type: Fusion.InlineHelpButtonPlacement
#include "Fusion/InlineHelpButtonPlacement.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: InlineHelpAttribute
  class InlineHelpAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::InlineHelpAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::InlineHelpAttribute*, "Fusion", "InlineHelpAttribute");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.InlineHelpAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  class InlineHelpAttribute : public ::Fusion::DecoratingPropertyAttribute {
    public:
    public:
    // public Fusion.InlineHelpButtonPlacement ButtonPlacement
    // Size: 0x4
    // Offset: 0x14
    ::Fusion::InlineHelpButtonPlacement ButtonPlacement;
    // Field size check
    static_assert(sizeof(::Fusion::InlineHelpButtonPlacement) == 0x4);
    public:
    // Deleting conversion operator: operator int
    constexpr operator int() const noexcept = delete;
    // static field const value: static private System.Int32 DefaultOrder
    static constexpr const int DefaultOrder = -9000;
    // Get static field: static private System.Int32 DefaultOrder
    static int _get_DefaultOrder();
    // Set static field: static private System.Int32 DefaultOrder
    static void _set_DefaultOrder(int value);
    // Get instance field reference: public Fusion.InlineHelpButtonPlacement ButtonPlacement
    [[deprecated("Use field access instead!")]] ::Fusion::InlineHelpButtonPlacement& dyn_ButtonPlacement();
    // public System.Void .ctor()
    // Offset: 0x2AFF0D0
    // Implemented from: Fusion.DecoratingPropertyAttribute
    // Base method: System.Void DecoratingPropertyAttribute::.ctor()
    // Base method: System.Void PropertyAttribute::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InlineHelpAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::InlineHelpAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InlineHelpAttribute*, creationType>()));
    }
  }; // Fusion.InlineHelpAttribute
  #pragma pack(pop)
  static check_size<sizeof(InlineHelpAttribute), 20 + sizeof(::Fusion::InlineHelpButtonPlacement)> __Fusion_InlineHelpAttributeSizeCheck;
  static_assert(sizeof(InlineHelpAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::InlineHelpAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!