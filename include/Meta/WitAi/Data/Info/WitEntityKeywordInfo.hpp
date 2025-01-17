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
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: Meta.WitAi.Data.Info
namespace Meta::WitAi::Data::Info {
  // Forward declaring type: WitEntityKeywordInfo
  struct WitEntityKeywordInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::Data::Info::WitEntityKeywordInfo, "Meta.WitAi.Data.Info", "WitEntityKeywordInfo");
// Type namespace: Meta.WitAi.Data.Info
namespace Meta::WitAi::Data::Info {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Meta.WitAi.Data.Info.WitEntityKeywordInfo
  // [TokenAttribute] Offset: FFFFFFFF
  struct WitEntityKeywordInfo/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.String keyword
    // Size: 0x8
    // Offset: 0x0
    ::StringW keyword;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Collections.Generic.List`1<System.String> synonyms
    // Size: 0x8
    // Offset: 0x8
    ::System::Collections::Generic::List_1<::StringW>* synonyms;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    public:
    // Creating value type constructor for type: WitEntityKeywordInfo
    constexpr WitEntityKeywordInfo(::StringW keyword_ = {}, ::System::Collections::Generic::List_1<::StringW>* synonyms_ = {}) noexcept : keyword{keyword_}, synonyms{synonyms_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.String keyword
    [[deprecated("Use field access instead!")]] ::StringW& dyn_keyword();
    // Get instance field reference: public System.Collections.Generic.List`1<System.String> synonyms
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::StringW>*& dyn_synonyms();
    // public System.Void .ctor(System.String keyword, System.Collections.Generic.List`1<System.String> synonyms)
    // Offset: 0x4451568
    // ABORTED: conflicts with another method.  WitEntityKeywordInfo(::StringW keyword, ::System::Collections::Generic::List_1<::StringW>* synonyms);
    // public System.Boolean Equals(Meta.WitAi.Data.Info.WitEntityKeywordInfo other)
    // Offset: 0x4451678
    bool Equals(::Meta::WitAi::Data::Info::WitEntityKeywordInfo other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x4451600
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x44516FC
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // Meta.WitAi.Data.Info.WitEntityKeywordInfo
  #pragma pack(pop)
  static check_size<sizeof(WitEntityKeywordInfo), 8 + sizeof(::System::Collections::Generic::List_1<::StringW>*)> __Meta_WitAi_Data_Info_WitEntityKeywordInfoSizeCheck;
  static_assert(sizeof(WitEntityKeywordInfo) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::Data::Info::WitEntityKeywordInfo::WitEntityKeywordInfo
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Meta::WitAi::Data::Info::WitEntityKeywordInfo::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Meta::WitAi::Data::Info::WitEntityKeywordInfo::*)(::Meta::WitAi::Data::Info::WitEntityKeywordInfo)>(&Meta::WitAi::Data::Info::WitEntityKeywordInfo::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Data.Info", "WitEntityKeywordInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Data::Info::WitEntityKeywordInfo), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Data::Info::WitEntityKeywordInfo::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Meta::WitAi::Data::Info::WitEntityKeywordInfo::*)(::Il2CppObject*)>(&Meta::WitAi::Data::Info::WitEntityKeywordInfo::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Data::Info::WitEntityKeywordInfo), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Data::Info::WitEntityKeywordInfo::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Meta::WitAi::Data::Info::WitEntityKeywordInfo::*)()>(&Meta::WitAi::Data::Info::WitEntityKeywordInfo::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Data::Info::WitEntityKeywordInfo), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
