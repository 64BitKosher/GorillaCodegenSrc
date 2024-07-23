// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: Sirenix.OdinInspector
namespace Sirenix::OdinInspector {
  // Forward declaring type: ValueDropdownItem
  struct ValueDropdownItem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Sirenix::OdinInspector::ValueDropdownItem, "Sirenix.OdinInspector", "ValueDropdownItem");
// Type namespace: Sirenix.OdinInspector
namespace Sirenix::OdinInspector {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Sirenix.OdinInspector.ValueDropdownItem
  // [TokenAttribute] Offset: FFFFFFFF
  struct ValueDropdownItem/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.String Text
    // Size: 0x8
    // Offset: 0x0
    ::StringW Text;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Object Value
    // Size: 0x8
    // Offset: 0x8
    ::Il2CppObject* Value;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Creating value type constructor for type: ValueDropdownItem
    constexpr ValueDropdownItem(::StringW Text_ = {}, ::Il2CppObject* Value_ = {}) noexcept : Text{Text_}, Value{Value_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.String Text
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Text();
    // Get instance field reference: public System.Object Value
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_Value();
    // public System.Void .ctor(System.String text, System.Object value)
    // Offset: 0x4B6F100
    // ABORTED: conflicts with another method.  ValueDropdownItem(::StringW text, ::Il2CppObject* value);
    // public override System.String ToString()
    // Offset: 0x4B6F130
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // Sirenix.OdinInspector.ValueDropdownItem
  #pragma pack(pop)
  static check_size<sizeof(ValueDropdownItem), 8 + sizeof(::Il2CppObject*)> __Sirenix_OdinInspector_ValueDropdownItemSizeCheck;
  static_assert(sizeof(ValueDropdownItem) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Sirenix::OdinInspector::ValueDropdownItem::ValueDropdownItem
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Sirenix::OdinInspector::ValueDropdownItem::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Sirenix::OdinInspector::ValueDropdownItem::*)()>(&Sirenix::OdinInspector::ValueDropdownItem::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Sirenix::OdinInspector::ValueDropdownItem), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};