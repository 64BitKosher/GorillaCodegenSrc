// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IDictionary_2;
}
// Completed forward declares
// Type namespace: Backtrace.Unity.Model.Attributes
namespace Backtrace::Unity::Model::Attributes {
  // Forward declaring type: IScopeAttributeProvider
  class IScopeAttributeProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider);
DEFINE_IL2CPP_ARG_TYPE(::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider*, "Backtrace.Unity.Model.Attributes", "IScopeAttributeProvider");
// Type namespace: Backtrace.Unity.Model.Attributes
namespace Backtrace::Unity::Model::Attributes {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Backtrace.Unity.Model.Attributes.IScopeAttributeProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class IScopeAttributeProvider {
    public:
    // public System.Void GetAttributes(System.Collections.Generic.IDictionary`2<System.String,System.String> attributes)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void GetAttributes(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* attributes);
  }; // Backtrace.Unity.Model.Attributes.IScopeAttributeProvider
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Backtrace::Unity::Model::Attributes::IScopeAttributeProvider::GetAttributes
// Il2CppName: GetAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Model::Attributes::IScopeAttributeProvider::*)(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*)>(&Backtrace::Unity::Model::Attributes::IScopeAttributeProvider::GetAttributes)> {
  static const MethodInfo* get() {
    static auto* attributes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IDictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::Attributes::IScopeAttributeProvider*), "GetAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributes});
  }
};
