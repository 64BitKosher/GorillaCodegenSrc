// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GorillaTriggerBox
#include "GlobalNamespace/GorillaTriggerBox.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GorillaTurning
  class GorillaTurning;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GorillaTurningChoice
  class GorillaTurningChoice;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GorillaTurningChoice);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GorillaTurningChoice*, "", "GorillaTurningChoice");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: GorillaTurningChoice
  // [TokenAttribute] Offset: FFFFFFFF
  class GorillaTurningChoice : public ::GlobalNamespace::GorillaTriggerBox {
    public:
    public:
    // public System.String choiceName
    // Size: 0x8
    // Offset: 0x28
    ::StringW choiceName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public GorillaTurning parent
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::GorillaTurning* parent;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GorillaTurning*) == 0x8);
    public:
    // Get instance field reference: public System.String choiceName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_choiceName();
    // Get instance field reference: public GorillaTurning parent
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GorillaTurning*& dyn_parent();
    // public override System.Void OnBoxTriggered()
    // Offset: 0x27226C4
    // Implemented from: GorillaTriggerBox
    // Base method: System.Void GorillaTriggerBox::OnBoxTriggered()
    void OnBoxTriggered();
    // public System.Void .ctor()
    // Offset: 0x27226CC
    // Implemented from: GorillaTriggerBox
    // Base method: System.Void GorillaTriggerBox::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GorillaTurningChoice* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GorillaTurningChoice::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GorillaTurningChoice*, creationType>()));
    }
  }; // GorillaTurningChoice
  #pragma pack(pop)
  static check_size<sizeof(GorillaTurningChoice), 48 + sizeof(::GlobalNamespace::GorillaTurning*)> __GlobalNamespace_GorillaTurningChoiceSizeCheck;
  static_assert(sizeof(GorillaTurningChoice) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GorillaTurningChoice::OnBoxTriggered
// Il2CppName: OnBoxTriggered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaTurningChoice::*)()>(&GlobalNamespace::GorillaTurningChoice::OnBoxTriggered)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaTurningChoice*), "OnBoxTriggered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaTurningChoice::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!