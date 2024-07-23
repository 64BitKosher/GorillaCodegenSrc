// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MagicCauldron
#include "GlobalNamespace/MagicCauldron.hpp"
// Including type: FXSArgs
#include "GlobalNamespace/FXSArgs.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MagicCauldron::IngredientArgs);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MagicCauldron::IngredientArgs*, "", "MagicCauldron/IngredientArgs");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: MagicCauldron/IngredientArgs
  // [TokenAttribute] Offset: FFFFFFFF
  class MagicCauldron::IngredientArgs : public ::GlobalNamespace::FXSArgs {
    public:
    public:
    // public System.Int32 key
    // Size: 0x4
    // Offset: 0x10
    int key;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return key;
    }
    // Get instance field reference: public System.Int32 key
    [[deprecated("Use field access instead!")]] int& dyn_key();
    // public System.Void .ctor()
    // Offset: 0x2726F24
    // Implemented from: FXSArgs
    // Base method: System.Void FXSArgs::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MagicCauldron::IngredientArgs* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MagicCauldron::IngredientArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MagicCauldron::IngredientArgs*, creationType>()));
    }
  }; // MagicCauldron/IngredientArgs
  #pragma pack(pop)
  static check_size<sizeof(MagicCauldron::IngredientArgs), 16 + sizeof(int)> __GlobalNamespace_MagicCauldron_IngredientArgsSizeCheck;
  static_assert(sizeof(MagicCauldron::IngredientArgs) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MagicCauldron::IngredientArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
