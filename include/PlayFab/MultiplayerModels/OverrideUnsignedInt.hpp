// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabBaseModel
#include "PlayFab/SharedModels/PlayFabBaseModel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: OverrideUnsignedInt
  class OverrideUnsignedInt;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::MultiplayerModels::OverrideUnsignedInt);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::MultiplayerModels::OverrideUnsignedInt*, "PlayFab.MultiplayerModels", "OverrideUnsignedInt");
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.MultiplayerModels.OverrideUnsignedInt
  // [TokenAttribute] Offset: FFFFFFFF
  class OverrideUnsignedInt : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public System.UInt32 Value
    // Size: 0x4
    // Offset: 0x10
    uint Value;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return Value;
    }
    // Get instance field reference: public System.UInt32 Value
    [[deprecated("Use field access instead!")]] uint& dyn_Value();
    // public System.Void .ctor()
    // Offset: 0x4B610C4
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OverrideUnsignedInt* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::MultiplayerModels::OverrideUnsignedInt::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OverrideUnsignedInt*, creationType>()));
    }
  }; // PlayFab.MultiplayerModels.OverrideUnsignedInt
  #pragma pack(pop)
  static check_size<sizeof(OverrideUnsignedInt), 16 + sizeof(uint)> __PlayFab_MultiplayerModels_OverrideUnsignedIntSizeCheck;
  static_assert(sizeof(OverrideUnsignedInt) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::MultiplayerModels::OverrideUnsignedInt::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
