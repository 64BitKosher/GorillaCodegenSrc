// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Utilities.ReflectionUtils
#include "Newtonsoft/Json/Utilities/ReflectionUtils.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MemberInfo
  class MemberInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Utilities::ReflectionUtils::$$c__DisplayClass31_0);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::ReflectionUtils::$$c__DisplayClass31_0*, "Newtonsoft.Json.Utilities", "ReflectionUtils/<>c__DisplayClass31_0");
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass31_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ReflectionUtils::$$c__DisplayClass31_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Reflection.MemberInfo memberInfo
    // Size: 0x8
    // Offset: 0x10
    ::System::Reflection::MemberInfo* memberInfo;
    // Field size check
    static_assert(sizeof(::System::Reflection::MemberInfo*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Reflection::MemberInfo*
    constexpr operator ::System::Reflection::MemberInfo*() const noexcept {
      return memberInfo;
    }
    // Get instance field reference: public System.Reflection.MemberInfo memberInfo
    [[deprecated("Use field access instead!")]] ::System::Reflection::MemberInfo*& dyn_memberInfo();
    // public System.Void .ctor()
    // Offset: 0x4713440
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionUtils::$$c__DisplayClass31_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::ReflectionUtils::$$c__DisplayClass31_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionUtils::$$c__DisplayClass31_0*, creationType>()));
    }
    // System.Boolean <GetFieldsAndProperties>b__1(System.Reflection.MemberInfo m)
    // Offset: 0x471487C
    bool $GetFieldsAndProperties$b__1(::System::Reflection::MemberInfo* m);
  }; // Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass31_0
  #pragma pack(pop)
  static check_size<sizeof(ReflectionUtils::$$c__DisplayClass31_0), 16 + sizeof(::System::Reflection::MemberInfo*)> __Newtonsoft_Json_Utilities_ReflectionUtils_$$c__DisplayClass31_0SizeCheck;
  static_assert(sizeof(ReflectionUtils::$$c__DisplayClass31_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ReflectionUtils::$$c__DisplayClass31_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ReflectionUtils::$$c__DisplayClass31_0::$GetFieldsAndProperties$b__1
// Il2CppName: <GetFieldsAndProperties>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Utilities::ReflectionUtils::$$c__DisplayClass31_0::*)(::System::Reflection::MemberInfo*)>(&Newtonsoft::Json::Utilities::ReflectionUtils::$$c__DisplayClass31_0::$GetFieldsAndProperties$b__1)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("System.Reflection", "MemberInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::ReflectionUtils::$$c__DisplayClass31_0*), "<GetFieldsAndProperties>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m});
  }
};
