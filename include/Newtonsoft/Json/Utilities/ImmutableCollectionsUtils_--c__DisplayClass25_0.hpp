// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Utilities.ImmutableCollectionsUtils
#include "Newtonsoft/Json/Utilities/ImmutableCollectionsUtils.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils::$$c__DisplayClass25_0);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils::$$c__DisplayClass25_0*, "Newtonsoft.Json.Utilities", "ImmutableCollectionsUtils/<>c__DisplayClass25_0");
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c__DisplayClass25_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ImmutableCollectionsUtils::$$c__DisplayClass25_0 : public ::Il2CppObject {
    public:
    public:
    // public System.String name
    // Size: 0x8
    // Offset: 0x10
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return name;
    }
    // Get instance field reference: public System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
    // public System.Void .ctor()
    // Offset: 0x470BB1C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ImmutableCollectionsUtils::$$c__DisplayClass25_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils::$$c__DisplayClass25_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ImmutableCollectionsUtils::$$c__DisplayClass25_0*, creationType>()));
    }
    // System.Boolean <TryBuildImmutableForDictionaryContract>b__0(Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo d)
    // Offset: 0x470C700
    bool $TryBuildImmutableForDictionaryContract$b__0(::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils::ImmutableCollectionTypeInfo* d);
  }; // Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c__DisplayClass25_0
  #pragma pack(pop)
  static check_size<sizeof(ImmutableCollectionsUtils::$$c__DisplayClass25_0), 16 + sizeof(::StringW)> __Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_$$c__DisplayClass25_0SizeCheck;
  static_assert(sizeof(ImmutableCollectionsUtils::$$c__DisplayClass25_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ImmutableCollectionsUtils::$$c__DisplayClass25_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ImmutableCollectionsUtils::$$c__DisplayClass25_0::$TryBuildImmutableForDictionaryContract$b__0
// Il2CppName: <TryBuildImmutableForDictionaryContract>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Utilities::ImmutableCollectionsUtils::$$c__DisplayClass25_0::*)(::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils::ImmutableCollectionTypeInfo*)>(&Newtonsoft::Json::Utilities::ImmutableCollectionsUtils::$$c__DisplayClass25_0::$TryBuildImmutableForDictionaryContract$b__0)> {
  static const MethodInfo* get() {
    static auto* d = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Utilities", "ImmutableCollectionsUtils/ImmutableCollectionTypeInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::ImmutableCollectionsUtils::$$c__DisplayClass25_0*), "<TryBuildImmutableForDictionaryContract>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{d});
  }
};
