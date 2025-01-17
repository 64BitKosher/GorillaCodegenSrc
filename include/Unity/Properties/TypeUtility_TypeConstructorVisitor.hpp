// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Unity.Properties.TypeUtility
#include "Unity/Properties/TypeUtility.hpp"
// Including type: Unity.Properties.ITypeVisitor
#include "Unity/Properties/ITypeVisitor.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::Properties::TypeUtility::TypeConstructorVisitor);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::TypeUtility::TypeConstructorVisitor*, "Unity.Properties", "TypeUtility/TypeConstructorVisitor");
// Type namespace: Unity.Properties
namespace Unity::Properties {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Unity.Properties.TypeUtility/TypeConstructorVisitor
  // [TokenAttribute] Offset: FFFFFFFF
  class TypeUtility::TypeConstructorVisitor : public ::Il2CppObject/*, public ::Unity::Properties::ITypeVisitor*/ {
    public:
    public:
    // public Unity.Properties.TypeUtility/ITypeConstructor TypeConstructor
    // Size: 0x8
    // Offset: 0x10
    ::Unity::Properties::TypeUtility::ITypeConstructor* TypeConstructor;
    // Field size check
    static_assert(sizeof(::Unity::Properties::TypeUtility::ITypeConstructor*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Unity::Properties::ITypeVisitor
    operator ::Unity::Properties::ITypeVisitor() noexcept {
      return *reinterpret_cast<::Unity::Properties::ITypeVisitor*>(this);
    }
    // Creating conversion operator: operator ::Unity::Properties::TypeUtility::ITypeConstructor*
    constexpr operator ::Unity::Properties::TypeUtility::ITypeConstructor*() const noexcept {
      return TypeConstructor;
    }
    // Get instance field reference: public Unity.Properties.TypeUtility/ITypeConstructor TypeConstructor
    [[deprecated("Use field access instead!")]] ::Unity::Properties::TypeUtility::ITypeConstructor*& dyn_TypeConstructor();
    // public System.Void Visit()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TContainer>
    void Visit() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::TypeUtility::TypeConstructorVisitor::Visit");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Unity::Properties::TypeUtility::TypeConstructorVisitor*), -1));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContainer>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method);
    }
    // public System.Void .ctor()
    // Offset: 0x5537A7C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeUtility::TypeConstructorVisitor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::TypeUtility::TypeConstructorVisitor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeUtility::TypeConstructorVisitor*, creationType>()));
    }
  }; // Unity.Properties.TypeUtility/TypeConstructorVisitor
  #pragma pack(pop)
  static check_size<sizeof(TypeUtility::TypeConstructorVisitor), 16 + sizeof(::Unity::Properties::TypeUtility::ITypeConstructor*)> __Unity_Properties_TypeUtility_TypeConstructorVisitorSizeCheck;
  static_assert(sizeof(TypeUtility::TypeConstructorVisitor) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::Properties::TypeUtility::TypeConstructorVisitor::Visit
// Il2CppName: Visit
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Unity::Properties::TypeUtility::TypeConstructorVisitor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
