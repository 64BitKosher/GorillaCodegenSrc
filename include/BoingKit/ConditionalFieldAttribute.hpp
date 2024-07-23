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
// Type namespace: BoingKit
namespace BoingKit {
  // Forward declaring type: ConditionalFieldAttribute
  class ConditionalFieldAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BoingKit::ConditionalFieldAttribute);
DEFINE_IL2CPP_ARG_TYPE(::BoingKit::ConditionalFieldAttribute*, "BoingKit", "ConditionalFieldAttribute");
// Type namespace: BoingKit
namespace BoingKit {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: BoingKit.ConditionalFieldAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  class ConditionalFieldAttribute : public ::UnityEngine::PropertyAttribute {
    public:
    // Writing base type padding for base size: 0x14 to desired offset: 0x18
    char ___base_padding[0x4] = {};
    public:
    // public System.String PropertyToCheck
    // Size: 0x8
    // Offset: 0x18
    ::StringW PropertyToCheck;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Object CompareValue
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* CompareValue;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.Object CompareValue2
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppObject* CompareValue2;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.Object CompareValue3
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppObject* CompareValue3;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.Object CompareValue4
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppObject* CompareValue4;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.Object CompareValue5
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppObject* CompareValue5;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.Object CompareValue6
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppObject* CompareValue6;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.String Label
    // Size: 0x8
    // Offset: 0x50
    ::StringW Label;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String Tooltip
    // Size: 0x8
    // Offset: 0x58
    ::StringW Tooltip;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Single Min
    // Size: 0x4
    // Offset: 0x60
    float Min;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single Max
    // Size: 0x4
    // Offset: 0x64
    float Max;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator int
    constexpr operator int() const noexcept = delete;
    // Get instance field reference: public System.String PropertyToCheck
    [[deprecated("Use field access instead!")]] ::StringW& dyn_PropertyToCheck();
    // Get instance field reference: public System.Object CompareValue
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_CompareValue();
    // Get instance field reference: public System.Object CompareValue2
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_CompareValue2();
    // Get instance field reference: public System.Object CompareValue3
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_CompareValue3();
    // Get instance field reference: public System.Object CompareValue4
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_CompareValue4();
    // Get instance field reference: public System.Object CompareValue5
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_CompareValue5();
    // Get instance field reference: public System.Object CompareValue6
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_CompareValue6();
    // Get instance field reference: public System.String Label
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Label();
    // Get instance field reference: public System.String Tooltip
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Tooltip();
    // Get instance field reference: public System.Single Min
    [[deprecated("Use field access instead!")]] float& dyn_Min();
    // Get instance field reference: public System.Single Max
    [[deprecated("Use field access instead!")]] float& dyn_Max();
    // public System.Boolean get_ShowRange()
    // Offset: 0x290222C
    bool get_ShowRange();
    // public System.Void .ctor(System.String propertyToCheck, System.Object compareValue, System.Object compareValue2, System.Object compareValue3, System.Object compareValue4, System.Object compareValue5, System.Object compareValue6)
    // Offset: 0x290223C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConditionalFieldAttribute* New_ctor(::StringW propertyToCheck, ::Il2CppObject* compareValue, ::Il2CppObject* compareValue2, ::Il2CppObject* compareValue3, ::Il2CppObject* compareValue4, ::Il2CppObject* compareValue5, ::Il2CppObject* compareValue6) {
      static auto ___internal__logger = ::Logger::get().WithContext("::BoingKit::ConditionalFieldAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConditionalFieldAttribute*, creationType>(propertyToCheck, compareValue, compareValue2, compareValue3, compareValue4, compareValue5, compareValue6)));
    }
  }; // BoingKit.ConditionalFieldAttribute
  #pragma pack(pop)
  static check_size<sizeof(ConditionalFieldAttribute), 100 + sizeof(float)> __BoingKit_ConditionalFieldAttributeSizeCheck;
  static_assert(sizeof(ConditionalFieldAttribute) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BoingKit::ConditionalFieldAttribute::get_ShowRange
// Il2CppName: get_ShowRange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BoingKit::ConditionalFieldAttribute::*)()>(&BoingKit::ConditionalFieldAttribute::get_ShowRange)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BoingKit::ConditionalFieldAttribute*), "get_ShowRange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BoingKit::ConditionalFieldAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
