// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: IAfterHostMigration
  class IAfterHostMigration;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::IAfterHostMigration);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::IAfterHostMigration*, "Fusion", "IAfterHostMigration");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.IAfterHostMigration
  // [TokenAttribute] Offset: FFFFFFFF
  class IAfterHostMigration {
    public:
    // public System.Void AfterHostMigration()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void AfterHostMigration();
  }; // Fusion.IAfterHostMigration
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::IAfterHostMigration::AfterHostMigration
// Il2CppName: AfterHostMigration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::IAfterHostMigration::*)()>(&Fusion::IAfterHostMigration::AfterHostMigration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::IAfterHostMigration*), "AfterHostMigration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
