// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase
#include "UnityEngine/ResourceManagement/ResourceProviders/ResourceProviderBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ResourceManagement::ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Forward declaring type: ProvideHandle
  struct ProvideHandle;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement.ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Forward declaring type: TextDataProvider
  class TextDataProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider*, "UnityEngine.ResourceManagement.ResourceProviders", "TextDataProvider");
// Type namespace: UnityEngine.ResourceManagement.ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Size: 0x1D
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider
  // [TokenAttribute] Offset: FFFFFFFF
  // [DisplayNameAttribute] Offset: FFFFFFFF
  class TextDataProvider : public ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase {
    public:
    // Nested type: ::UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider::InternalOp
    class InternalOp;
    public:
    // private System.Boolean <IgnoreFailures>k__BackingField
    // Size: 0x1
    // Offset: 0x1C
    bool IgnoreFailures;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return IgnoreFailures;
    }
    // Get instance field reference: private System.Boolean <IgnoreFailures>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IgnoreFailures$k__BackingField();
    // public System.Boolean get_IgnoreFailures()
    // Offset: 0x533B914
    bool get_IgnoreFailures();
    // public System.Void set_IgnoreFailures(System.Boolean value)
    // Offset: 0x533B91C
    void set_IgnoreFailures(bool value);
    // public System.Object Convert(System.Type type, System.String text)
    // Offset: 0x533B928
    ::Il2CppObject* Convert(::System::Type* type, ::StringW text);
    // public override System.Void Provide(UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle provideHandle)
    // Offset: 0x533B930
    // Implemented from: UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase
    // Base method: System.Void ResourceProviderBase::Provide(UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle provideHandle)
    void Provide(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle provideHandle);
    // public System.Void .ctor()
    // Offset: 0x5338968
    // Implemented from: UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase
    // Base method: System.Void ResourceProviderBase::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextDataProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextDataProvider*, creationType>()));
    }
  }; // UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider
  #pragma pack(pop)
  static check_size<sizeof(TextDataProvider), 28 + sizeof(bool)> __UnityEngine_ResourceManagement_ResourceProviders_TextDataProviderSizeCheck;
  static_assert(sizeof(TextDataProvider) == 0x1D);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider::get_IgnoreFailures
// Il2CppName: get_IgnoreFailures
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider::get_IgnoreFailures)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider*), "get_IgnoreFailures", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider::set_IgnoreFailures
// Il2CppName: set_IgnoreFailures
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider::*)(bool)>(&UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider::set_IgnoreFailures)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider*), "set_IgnoreFailures", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider::Convert
// Il2CppName: Convert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider::*)(::System::Type*, ::StringW)>(&UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider::Convert)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider*), "Convert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, text});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider::Provide
// Il2CppName: Provide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider::*)(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle)>(&UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider::Provide)> {
  static const MethodInfo* get() {
    static auto* provideHandle = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceProviders", "ProvideHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider*), "Provide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provideHandle});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!