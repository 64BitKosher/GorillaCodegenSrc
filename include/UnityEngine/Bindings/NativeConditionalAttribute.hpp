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
// Type namespace: UnityEngine.Bindings
namespace UnityEngine::Bindings {
  // Forward declaring type: NativeConditionalAttribute
  class NativeConditionalAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Bindings::NativeConditionalAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::NativeConditionalAttribute*, "UnityEngine.Bindings", "NativeConditionalAttribute");
// Type namespace: UnityEngine.Bindings
namespace UnityEngine::Bindings {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Bindings.NativeConditionalAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [VisibleToOtherModulesAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  class NativeConditionalAttribute : public ::System::Attribute {
    public:
    public:
    // private System.String <Condition>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW Condition;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean <Enabled>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    bool Enabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.String <Condition>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Condition$k__BackingField();
    // Get instance field reference: private System.Boolean <Enabled>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$Enabled$k__BackingField();
    // public System.Void set_Condition(System.String value)
    // Offset: 0x553AD30
    void set_Condition(::StringW value);
    // public System.Void set_Enabled(System.Boolean value)
    // Offset: 0x553AD38
    void set_Enabled(bool value);
    // public System.Void .ctor(System.String condition)
    // Offset: 0x553AD44
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NativeConditionalAttribute* New_ctor(::StringW condition) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Bindings::NativeConditionalAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NativeConditionalAttribute*, creationType>(condition)));
    }
  }; // UnityEngine.Bindings.NativeConditionalAttribute
  #pragma pack(pop)
  static check_size<sizeof(NativeConditionalAttribute), 24 + sizeof(bool)> __UnityEngine_Bindings_NativeConditionalAttributeSizeCheck;
  static_assert(sizeof(NativeConditionalAttribute) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Bindings::NativeConditionalAttribute::set_Condition
// Il2CppName: set_Condition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Bindings::NativeConditionalAttribute::*)(::StringW)>(&UnityEngine::Bindings::NativeConditionalAttribute::set_Condition)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bindings::NativeConditionalAttribute*), "set_Condition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bindings::NativeConditionalAttribute::set_Enabled
// Il2CppName: set_Enabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Bindings::NativeConditionalAttribute::*)(bool)>(&UnityEngine::Bindings::NativeConditionalAttribute::set_Enabled)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bindings::NativeConditionalAttribute*), "set_Enabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bindings::NativeConditionalAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
