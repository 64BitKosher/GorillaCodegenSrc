// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GorillaNetworking.CosmeticsController
#include "GorillaNetworking/CosmeticsController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: PlayFab::ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: ItemInstance
  class ItemInstance;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaNetworking::CosmeticsController::$$c__DisplayClass204_5);
DEFINE_IL2CPP_ARG_TYPE(::GorillaNetworking::CosmeticsController::$$c__DisplayClass204_5*, "GorillaNetworking", "CosmeticsController/<>c__DisplayClass204_5");
// Type namespace: GorillaNetworking
namespace GorillaNetworking {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: GorillaNetworking.CosmeticsController/<>c__DisplayClass204_5
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class CosmeticsController::$$c__DisplayClass204_5 : public ::Il2CppObject {
    public:
    public:
    // public PlayFab.ClientModels.ItemInstance item
    // Size: 0x8
    // Offset: 0x10
    ::PlayFab::ClientModels::ItemInstance* item;
    // Field size check
    static_assert(sizeof(::PlayFab::ClientModels::ItemInstance*) == 0x8);
    public:
    // Creating conversion operator: operator ::PlayFab::ClientModels::ItemInstance*
    constexpr operator ::PlayFab::ClientModels::ItemInstance*() const noexcept {
      return item;
    }
    // Get instance field reference: public PlayFab.ClientModels.ItemInstance item
    [[deprecated("Use field access instead!")]] ::PlayFab::ClientModels::ItemInstance*& dyn_item();
    // public System.Void .ctor()
    // Offset: 0x2844320
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CosmeticsController::$$c__DisplayClass204_5* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaNetworking::CosmeticsController::$$c__DisplayClass204_5::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CosmeticsController::$$c__DisplayClass204_5*, creationType>()));
    }
    // System.Boolean <GetCosmeticsPlayFabCatalogData>b__9(GorillaNetworking.CosmeticsController/CosmeticItem x)
    // Offset: 0x2844398
    bool $GetCosmeticsPlayFabCatalogData$b__9(::GorillaNetworking::CosmeticsController::CosmeticItem x);
  }; // GorillaNetworking.CosmeticsController/<>c__DisplayClass204_5
  #pragma pack(pop)
  static check_size<sizeof(CosmeticsController::$$c__DisplayClass204_5), 16 + sizeof(::PlayFab::ClientModels::ItemInstance*)> __GorillaNetworking_CosmeticsController_$$c__DisplayClass204_5SizeCheck;
  static_assert(sizeof(CosmeticsController::$$c__DisplayClass204_5) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaNetworking::CosmeticsController::$$c__DisplayClass204_5::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GorillaNetworking::CosmeticsController::$$c__DisplayClass204_5::$GetCosmeticsPlayFabCatalogData$b__9
// Il2CppName: <GetCosmeticsPlayFabCatalogData>b__9
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GorillaNetworking::CosmeticsController::$$c__DisplayClass204_5::*)(::GorillaNetworking::CosmeticsController::CosmeticItem)>(&GorillaNetworking::CosmeticsController::$$c__DisplayClass204_5::$GetCosmeticsPlayFabCatalogData$b__9)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("GorillaNetworking", "CosmeticsController/CosmeticItem")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::CosmeticsController::$$c__DisplayClass204_5*), "<GetCosmeticsPlayFabCatalogData>b__9", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
