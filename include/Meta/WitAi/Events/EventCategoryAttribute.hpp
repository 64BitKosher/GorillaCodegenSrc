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
// Type namespace: Meta.WitAi.Events
namespace Meta::WitAi::Events {
  // Forward declaring type: EventCategoryAttribute
  class EventCategoryAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::Events::EventCategoryAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::Events::EventCategoryAttribute*, "Meta.WitAi.Events", "EventCategoryAttribute");
// Type namespace: Meta.WitAi.Events
namespace Meta::WitAi::Events {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.Events.EventCategoryAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  class EventCategoryAttribute : public ::UnityEngine::PropertyAttribute {
    public:
    // Writing base type padding for base size: 0x14 to desired offset: 0x18
    char ___base_padding[0x4] = {};
    public:
    // public readonly System.String Category
    // Size: 0x8
    // Offset: 0x18
    ::StringW Category;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator int
    constexpr operator int() const noexcept = delete;
    // Get instance field reference: public readonly System.String Category
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Category();
    // public System.Void .ctor(System.String category)
    // Offset: 0x443A2C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventCategoryAttribute* New_ctor(::StringW category) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Events::EventCategoryAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventCategoryAttribute*, creationType>(category)));
    }
  }; // Meta.WitAi.Events.EventCategoryAttribute
  #pragma pack(pop)
  static check_size<sizeof(EventCategoryAttribute), 24 + sizeof(::StringW)> __Meta_WitAi_Events_EventCategoryAttributeSizeCheck;
  static_assert(sizeof(EventCategoryAttribute) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::Events::EventCategoryAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!