// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.WitAi.Data.Entities.WitDynamicEntities
#include "Meta/WitAi/Data/Entities/WitDynamicEntities.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Meta::WitAi::Data::Entities
namespace Meta::WitAi::Data::Entities {
  // Forward declaring type: WitDynamicEntity
  class WitDynamicEntity;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::Data::Entities::WitDynamicEntities::$$c__DisplayClass12_0);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::Data::Entities::WitDynamicEntities::$$c__DisplayClass12_0*, "Meta.WitAi.Data.Entities", "WitDynamicEntities/<>c__DisplayClass12_0");
// Type namespace: Meta.WitAi.Data.Entities
namespace Meta::WitAi::Data::Entities {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass12_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class WitDynamicEntities::$$c__DisplayClass12_0 : public ::Il2CppObject {
    public:
    public:
    // public Meta.WitAi.Data.Entities.WitDynamicEntity dynamicEntity
    // Size: 0x8
    // Offset: 0x10
    ::Meta::WitAi::Data::Entities::WitDynamicEntity* dynamicEntity;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::Data::Entities::WitDynamicEntity*) == 0x8);
    public:
    // Creating conversion operator: operator ::Meta::WitAi::Data::Entities::WitDynamicEntity*
    constexpr operator ::Meta::WitAi::Data::Entities::WitDynamicEntity*() const noexcept {
      return dynamicEntity;
    }
    // Get instance field reference: public Meta.WitAi.Data.Entities.WitDynamicEntity dynamicEntity
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::Data::Entities::WitDynamicEntity*& dyn_dynamicEntity();
    // public System.Void .ctor()
    // Offset: 0x44670E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WitDynamicEntities::$$c__DisplayClass12_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::Entities::WitDynamicEntities::$$c__DisplayClass12_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WitDynamicEntities::$$c__DisplayClass12_0*, creationType>()));
    }
    // System.Boolean <Add>b__0(Meta.WitAi.Data.Entities.WitDynamicEntity e)
    // Offset: 0x4467380
    bool $Add$b__0(::Meta::WitAi::Data::Entities::WitDynamicEntity* e);
  }; // Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass12_0
  #pragma pack(pop)
  static check_size<sizeof(WitDynamicEntities::$$c__DisplayClass12_0), 16 + sizeof(::Meta::WitAi::Data::Entities::WitDynamicEntity*)> __Meta_WitAi_Data_Entities_WitDynamicEntities_$$c__DisplayClass12_0SizeCheck;
  static_assert(sizeof(WitDynamicEntities::$$c__DisplayClass12_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::Data::Entities::WitDynamicEntities::$$c__DisplayClass12_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Meta::WitAi::Data::Entities::WitDynamicEntities::$$c__DisplayClass12_0::$Add$b__0
// Il2CppName: <Add>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Meta::WitAi::Data::Entities::WitDynamicEntities::$$c__DisplayClass12_0::*)(::Meta::WitAi::Data::Entities::WitDynamicEntity*)>(&Meta::WitAi::Data::Entities::WitDynamicEntities::$$c__DisplayClass12_0::$Add$b__0)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Data.Entities", "WitDynamicEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Data::Entities::WitDynamicEntities::$$c__DisplayClass12_0*), "<Add>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
