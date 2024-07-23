// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GorillaPressableButton
#include "GlobalNamespace/GorillaPressableButton.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameModePages
  class GameModePages;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GameModePageButton
  class GameModePageButton;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GameModePageButton);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameModePageButton*, "", "GameModePageButton");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x79
  #pragma pack(push, 1)
  // Autogenerated type: GameModePageButton
  // [TokenAttribute] Offset: FFFFFFFF
  class GameModePageButton : public ::GlobalNamespace::GorillaPressableButton {
    public:
    public:
    // private GameModePages selector
    // Size: 0x8
    // Offset: 0x70
    ::GlobalNamespace::GameModePages* selector;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameModePages*) == 0x8);
    // private System.Boolean left
    // Size: 0x1
    // Offset: 0x78
    bool left;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private GameModePages selector
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameModePages*& dyn_selector();
    // Get instance field reference: private System.Boolean left
    [[deprecated("Use field access instead!")]] bool& dyn_left();
    // public override System.Void ButtonActivation()
    // Offset: 0x26DD878
    // Implemented from: GorillaPressableButton
    // Base method: System.Void GorillaPressableButton::ButtonActivation()
    void ButtonActivation();
    // public System.Void .ctor()
    // Offset: 0x26DD8A4
    // Implemented from: GorillaPressableButton
    // Base method: System.Void GorillaPressableButton::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameModePageButton* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GameModePageButton::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameModePageButton*, creationType>()));
    }
  }; // GameModePageButton
  #pragma pack(pop)
  static check_size<sizeof(GameModePageButton), 120 + sizeof(bool)> __GlobalNamespace_GameModePageButtonSizeCheck;
  static_assert(sizeof(GameModePageButton) == 0x79);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameModePageButton::ButtonActivation
// Il2CppName: ButtonActivation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameModePageButton::*)()>(&GlobalNamespace::GameModePageButton::ButtonActivation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameModePageButton*), "ButtonActivation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameModePageButton::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!