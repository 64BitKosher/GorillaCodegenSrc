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
// Type namespace: Sirenix.OdinInspector
namespace Sirenix::OdinInspector {
  // Forward declaring type: RequiredListLengthAttribute
  class RequiredListLengthAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Sirenix::OdinInspector::RequiredListLengthAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Sirenix::OdinInspector::RequiredListLengthAttribute*, "Sirenix.OdinInspector", "RequiredListLengthAttribute");
// Type namespace: Sirenix.OdinInspector
namespace Sirenix::OdinInspector {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Sirenix.OdinInspector.RequiredListLengthAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  class RequiredListLengthAttribute : public ::System::Attribute {
    public:
    public:
    // private System.Int32 minLength
    // Size: 0x4
    // Offset: 0x10
    int minLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean minLengthIsSet
    // Size: 0x1
    // Offset: 0x14
    bool minLengthIsSet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: minLengthIsSet and: MaxLengthGetter
    char __padding1[0x3] = {};
    // public System.String MaxLengthGetter
    // Size: 0x8
    // Offset: 0x18
    ::StringW MaxLengthGetter;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.Int32 minLength
    [[deprecated("Use field access instead!")]] int& dyn_minLength();
    // Get instance field reference: private System.Boolean minLengthIsSet
    [[deprecated("Use field access instead!")]] bool& dyn_minLengthIsSet();
    // Get instance field reference: public System.String MaxLengthGetter
    [[deprecated("Use field access instead!")]] ::StringW& dyn_MaxLengthGetter();
    // public System.Void set_MinLength(System.Int32 value)
    // Offset: 0x4B6F0B0
    void set_MinLength(int value);
    // public System.Void .ctor(System.Int32 minLength, System.String maxLengthGetter)
    // Offset: 0x4B6F0C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RequiredListLengthAttribute* New_ctor(int minLength, ::StringW maxLengthGetter) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Sirenix::OdinInspector::RequiredListLengthAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RequiredListLengthAttribute*, creationType>(minLength, maxLengthGetter)));
    }
  }; // Sirenix.OdinInspector.RequiredListLengthAttribute
  #pragma pack(pop)
  static check_size<sizeof(RequiredListLengthAttribute), 24 + sizeof(::StringW)> __Sirenix_OdinInspector_RequiredListLengthAttributeSizeCheck;
  static_assert(sizeof(RequiredListLengthAttribute) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Sirenix::OdinInspector::RequiredListLengthAttribute::set_MinLength
// Il2CppName: set_MinLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Sirenix::OdinInspector::RequiredListLengthAttribute::*)(int)>(&Sirenix::OdinInspector::RequiredListLengthAttribute::set_MinLength)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Sirenix::OdinInspector::RequiredListLengthAttribute*), "set_MinLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Sirenix::OdinInspector::RequiredListLengthAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
