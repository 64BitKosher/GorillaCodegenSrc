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
// Completed includes
// Begin forward declares
// Forward declaring namespace: Newtonsoft::Json::Utilities
namespace Newtonsoft::Json::Utilities {
  // Forward declaring type: MethodCall`2<T, TResult>
  template<typename T, typename TResult>
  class MethodCall_2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Serialization::DefaultContractResolver::$$c__DisplayClass80_0);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::DefaultContractResolver::$$c__DisplayClass80_0*, "Newtonsoft.Json.Serialization", "DefaultContractResolver/<>c__DisplayClass80_0");
// Type namespace: Newtonsoft.Json.Serialization
namespace Newtonsoft::Json::Serialization {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass80_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class DefaultContractResolver::$$c__DisplayClass80_0 : public ::Il2CppObject {
    public:
    public:
    // public Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> shouldSerializeCall
    // Size: 0x8
    // Offset: 0x10
    ::Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>* shouldSerializeCall;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>*
    constexpr operator ::Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>*() const noexcept {
      return shouldSerializeCall;
    }
    // Get instance field reference: public Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> shouldSerializeCall
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>*& dyn_shouldSerializeCall();
    // public System.Void .ctor()
    // Offset: 0x471E2C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultContractResolver::$$c__DisplayClass80_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Serialization::DefaultContractResolver::$$c__DisplayClass80_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultContractResolver::$$c__DisplayClass80_0*, creationType>()));
    }
    // System.Boolean <CreateShouldSerializeTest>b__0(System.Object o)
    // Offset: 0x471E2D0
    bool $CreateShouldSerializeTest$b__0(::Il2CppObject* o);
  }; // Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass80_0
  #pragma pack(pop)
  static check_size<sizeof(DefaultContractResolver::$$c__DisplayClass80_0), 16 + sizeof(::Newtonsoft::Json::Utilities::MethodCall_2<::Il2CppObject*, ::Il2CppObject*>*)> __Newtonsoft_Json_Serialization_DefaultContractResolver_$$c__DisplayClass80_0SizeCheck;
  static_assert(sizeof(DefaultContractResolver::$$c__DisplayClass80_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::DefaultContractResolver::$$c__DisplayClass80_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Serialization::DefaultContractResolver::$$c__DisplayClass80_0::$CreateShouldSerializeTest$b__0
// Il2CppName: <CreateShouldSerializeTest>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Serialization::DefaultContractResolver::$$c__DisplayClass80_0::*)(::Il2CppObject*)>(&Newtonsoft::Json::Serialization::DefaultContractResolver::$$c__DisplayClass80_0::$CreateShouldSerializeTest$b__0)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Serialization::DefaultContractResolver::$$c__DisplayClass80_0*), "<CreateShouldSerializeTest>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
