// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Serialization.DefaultContractResolver
#include "Newtonsoft/Json/Serialization/DefaultContractResolver.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Newtonsoft::Json::Serialization
namespace Newtonsoft::Json::Serialization {
  // Forward declaring type: NamingStrategy
  class NamingStrategy;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Serialization::DefaultContractResolver::$$c__DisplayClass42_0);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::DefaultContractResolver::$$c__DisplayClass42_0*, "Newtonsoft.Json.Serialization", "DefaultContractResolver/<>c__DisplayClass42_0");
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass42_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class DefaultContractResolver::$$c__DisplayClass42_0 : public ::Il2CppObject {
    public:
    public:
    // public Newtonsoft.Json.Serialization.NamingStrategy namingStrategy
    // Size: 0x8
    // Offset: 0x10
    ::Newtonsoft::Json::Serialization::NamingStrategy* namingStrategy;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Serialization::NamingStrategy*) == 0x8);
    public:
    // Creating conversion operator: operator ::Newtonsoft::Json::Serialization::NamingStrategy*
    constexpr operator ::Newtonsoft::Json::Serialization::NamingStrategy*() const noexcept {
      return namingStrategy;
    }
    // Get instance field reference: public Newtonsoft.Json.Serialization.NamingStrategy namingStrategy
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Serialization::NamingStrategy*& dyn_namingStrategy();
    // public System.Void .ctor()
    // Offset: 0x471DF14
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultContractResolver::$$c__DisplayClass42_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Serialization::DefaultContractResolver::$$c__DisplayClass42_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultContractResolver::$$c__DisplayClass42_0*, creationType>()));
    }
    // System.String <CreateObjectContract>b__0(System.String s)
    // Offset: 0x471DF1C
    ::StringW $CreateObjectContract$b__0(::StringW s);
  }; // Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass42_0
  #pragma pack(pop)
  static check_size<sizeof(DefaultContractResolver::$$c__DisplayClass42_0), 16 + sizeof(::Newtonsoft::Json::Serialization::NamingStrategy*)> __Newtonsoft_Json_Serialization_DefaultContractResolver_$$c__DisplayClass42_0SizeCheck;
  static_assert(sizeof(DefaultContractResolver::$$c__DisplayClass42_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::DefaultContractResolver::$$c__DisplayClass42_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::DefaultContractResolver::$$c__DisplayClass42_0::$CreateObjectContract$b__0
// Il2CppName: <CreateObjectContract>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Serialization::DefaultContractResolver::$$c__DisplayClass42_0::*)(::StringW)>(&Newtonsoft::Json::Serialization::DefaultContractResolver::$$c__DisplayClass42_0::$CreateObjectContract$b__0)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::DefaultContractResolver::$$c__DisplayClass42_0*), "<CreateObjectContract>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
