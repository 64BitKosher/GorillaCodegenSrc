// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Enum
  class Enum;
  // Forward declaring type: ValueType
  class ValueType;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: EnumUtilExt
  class EnumUtilExt;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::EnumUtilExt);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnumUtilExt*, "", "EnumUtilExt");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: EnumUtilExt
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class EnumUtilExt : public ::Il2CppObject {
    public:
    // static public System.String GetName(TEnum e)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TEnum>
    static ::StringW GetName(TEnum e) {
      static_assert(std::is_convertible_v<TEnum, ::System::Enum*> && std::is_convertible_v<TEnum, ::System::ValueType*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EnumUtilExt::GetName");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "EnumUtilExt", "GetName", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TEnum>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(e)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TEnum>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::StringW, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, e);
    }
    // static public System.Int32 GetIndex(TEnum e)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TEnum>
    static int GetIndex(TEnum e) {
      static_assert(std::is_convertible_v<TEnum, ::System::Enum*> && std::is_convertible_v<TEnum, ::System::ValueType*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EnumUtilExt::GetIndex");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "EnumUtilExt", "GetIndex", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TEnum>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(e)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TEnum>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, e);
    }
    // static public System.Int64 GetLongValue(TEnum e)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TEnum>
    static int64_t GetLongValue(TEnum e) {
      static_assert(std::is_convertible_v<TEnum, ::System::Enum*> && std::is_convertible_v<TEnum, ::System::ValueType*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EnumUtilExt::GetLongValue");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "EnumUtilExt", "GetLongValue", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TEnum>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(e)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TEnum>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<int64_t, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, e);
    }
  }; // EnumUtilExt
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EnumUtilExt::GetName
// Il2CppName: GetName
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::EnumUtilExt::GetIndex
// Il2CppName: GetIndex
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::EnumUtilExt::GetLongValue
// Il2CppName: GetLongValue
// Cannot write MetadataGetter for generic methods!
