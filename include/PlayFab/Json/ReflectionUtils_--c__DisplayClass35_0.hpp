// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.Json.ReflectionUtils
#include "PlayFab/Json/ReflectionUtils.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: FieldInfo
  class FieldInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::Json::ReflectionUtils::$$c__DisplayClass35_0);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::Json::ReflectionUtils::$$c__DisplayClass35_0*, "PlayFab.Json", "ReflectionUtils/<>c__DisplayClass35_0");
// Type namespace: PlayFab.Json
namespace PlayFab::Json {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.Json.ReflectionUtils/<>c__DisplayClass35_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ReflectionUtils::$$c__DisplayClass35_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Reflection.FieldInfo fieldInfo
    // Size: 0x8
    // Offset: 0x10
    ::System::Reflection::FieldInfo* fieldInfo;
    // Field size check
    static_assert(sizeof(::System::Reflection::FieldInfo*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Reflection::FieldInfo*
    constexpr operator ::System::Reflection::FieldInfo*() const noexcept {
      return fieldInfo;
    }
    // Get instance field reference: public System.Reflection.FieldInfo fieldInfo
    [[deprecated("Use field access instead!")]] ::System::Reflection::FieldInfo*& dyn_fieldInfo();
    // public System.Void .ctor()
    // Offset: 0x4B60898
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionUtils::$$c__DisplayClass35_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::Json::ReflectionUtils::$$c__DisplayClass35_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionUtils::$$c__DisplayClass35_0*, creationType>()));
    }
    // System.Void <GetSetMethodByReflection>b__0(System.Object source, System.Object value)
    // Offset: 0x4B60BF0
    void $GetSetMethodByReflection$b__0(::Il2CppObject* source, ::Il2CppObject* value);
  }; // PlayFab.Json.ReflectionUtils/<>c__DisplayClass35_0
  #pragma pack(pop)
  static check_size<sizeof(ReflectionUtils::$$c__DisplayClass35_0), 16 + sizeof(::System::Reflection::FieldInfo*)> __PlayFab_Json_ReflectionUtils_$$c__DisplayClass35_0SizeCheck;
  static_assert(sizeof(ReflectionUtils::$$c__DisplayClass35_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::Json::ReflectionUtils::$$c__DisplayClass35_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: PlayFab::Json::ReflectionUtils::$$c__DisplayClass35_0::$GetSetMethodByReflection$b__0
// Il2CppName: <GetSetMethodByReflection>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlayFab::Json::ReflectionUtils::$$c__DisplayClass35_0::*)(::Il2CppObject*, ::Il2CppObject*)>(&PlayFab::Json::ReflectionUtils::$$c__DisplayClass35_0::$GetSetMethodByReflection$b__0)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Json::ReflectionUtils::$$c__DisplayClass35_0*), "<GetSetMethodByReflection>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source, value});
  }
};
