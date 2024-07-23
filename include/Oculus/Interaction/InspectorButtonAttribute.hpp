// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.PropertyAttribute
#include "UnityEngine/PropertyAttribute.hpp"
// Including type: System.Single
#include "System/Single.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Forward declaring type: InspectorButtonAttribute
  class InspectorButtonAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::InspectorButtonAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::InspectorButtonAttribute*, "Oculus.Interaction", "InspectorButtonAttribute");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.InspectorButtonAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  class InspectorButtonAttribute : public ::UnityEngine::PropertyAttribute {
    public:
    public:
    // private System.Single <ButtonWidth>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    float ButtonWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.String methodName
    // Size: 0x8
    // Offset: 0x18
    ::StringW methodName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.Single buttonHeight
    // Size: 0x4
    // Offset: 0x20
    float buttonHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator int
    constexpr operator int() const noexcept = delete;
    // static field const value: static private System.Single BUTTON_WIDTH
    static constexpr const float BUTTON_WIDTH = 80;
    // Get static field: static private System.Single BUTTON_WIDTH
    static float _get_BUTTON_WIDTH();
    // Set static field: static private System.Single BUTTON_WIDTH
    static void _set_BUTTON_WIDTH(float value);
    // static field const value: static private System.Single BUTTON_HEIGHT
    static constexpr const float BUTTON_HEIGHT = 20;
    // Get static field: static private System.Single BUTTON_HEIGHT
    static float _get_BUTTON_HEIGHT();
    // Set static field: static private System.Single BUTTON_HEIGHT
    static void _set_BUTTON_HEIGHT(float value);
    // Get instance field reference: private System.Single <ButtonWidth>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$ButtonWidth$k__BackingField();
    // Get instance field reference: public readonly System.String methodName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_methodName();
    // Get instance field reference: public readonly System.Single buttonHeight
    [[deprecated("Use field access instead!")]] float& dyn_buttonHeight();
    // public System.Single get_ButtonWidth()
    // Offset: 0x47705C4
    float get_ButtonWidth();
    // public System.Void set_ButtonWidth(System.Single value)
    // Offset: 0x47705CC
    void set_ButtonWidth(float value);
    // public System.Void .ctor(System.String methodName)
    // Offset: 0x47705D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InspectorButtonAttribute* New_ctor(::StringW methodName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::InspectorButtonAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InspectorButtonAttribute*, creationType>(methodName)));
    }
    // public System.Void .ctor(System.String methodName, System.Single buttonHeight)
    // Offset: 0x4770618
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InspectorButtonAttribute* New_ctor(::StringW methodName, float buttonHeight) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::InspectorButtonAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InspectorButtonAttribute*, creationType>(methodName, buttonHeight)));
    }
  }; // Oculus.Interaction.InspectorButtonAttribute
  #pragma pack(pop)
  static check_size<sizeof(InspectorButtonAttribute), 32 + sizeof(float)> __Oculus_Interaction_InspectorButtonAttributeSizeCheck;
  static_assert(sizeof(InspectorButtonAttribute) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::InspectorButtonAttribute::get_ButtonWidth
// Il2CppName: get_ButtonWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::InspectorButtonAttribute::*)()>(&Oculus::Interaction::InspectorButtonAttribute::get_ButtonWidth)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::InspectorButtonAttribute*), "get_ButtonWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::InspectorButtonAttribute::set_ButtonWidth
// Il2CppName: set_ButtonWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::InspectorButtonAttribute::*)(float)>(&Oculus::Interaction::InspectorButtonAttribute::set_ButtonWidth)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::InspectorButtonAttribute*), "set_ButtonWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::InspectorButtonAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Interaction::InspectorButtonAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
