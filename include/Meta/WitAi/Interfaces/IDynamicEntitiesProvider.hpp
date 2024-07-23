// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Meta::WitAi::Data::Entities
namespace Meta::WitAi::Data::Entities {
  // Forward declaring type: WitDynamicEntities
  class WitDynamicEntities;
}
// Completed forward declares
// Type namespace: Meta.WitAi.Interfaces
namespace Meta::WitAi::Interfaces {
  // Forward declaring type: IDynamicEntitiesProvider
  class IDynamicEntitiesProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::Interfaces::IDynamicEntitiesProvider);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*, "Meta.WitAi.Interfaces", "IDynamicEntitiesProvider");
// Type namespace: Meta.WitAi.Interfaces
namespace Meta::WitAi::Interfaces {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.Interfaces.IDynamicEntitiesProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class IDynamicEntitiesProvider {
    public:
    // public Meta.WitAi.Data.Entities.WitDynamicEntities GetDynamicEntities()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Meta::WitAi::Data::Entities::WitDynamicEntities* GetDynamicEntities();
  }; // Meta.WitAi.Interfaces.IDynamicEntitiesProvider
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::Interfaces::IDynamicEntitiesProvider::GetDynamicEntities
// Il2CppName: GetDynamicEntities
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::Data::Entities::WitDynamicEntities* (Meta::WitAi::Interfaces::IDynamicEntitiesProvider::*)()>(&Meta::WitAi::Interfaces::IDynamicEntitiesProvider::GetDynamicEntities)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Interfaces::IDynamicEntitiesProvider*), "GetDynamicEntities", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
