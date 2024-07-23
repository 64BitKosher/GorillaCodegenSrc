// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Pun.MonoBehaviourPun
#include "Photon/Pun/MonoBehaviourPun.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GorillaTriggerBox
  class GorillaTriggerBox;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GorillaTriggerBox);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GorillaTriggerBox*, "", "GorillaTriggerBox");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: GorillaTriggerBox
  // [TokenAttribute] Offset: FFFFFFFF
  class GorillaTriggerBox : public ::Photon::Pun::MonoBehaviourPun {
    public:
    // public System.Void OnBoxTriggered()
    // Offset: 0x26DEE38
    void OnBoxTriggered();
    // public System.Void .ctor()
    // Offset: 0x26DEE10
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GorillaTriggerBox* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GorillaTriggerBox::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GorillaTriggerBox*, creationType>()));
    }
  }; // GorillaTriggerBox
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GorillaTriggerBox::OnBoxTriggered
// Il2CppName: OnBoxTriggered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaTriggerBox::*)()>(&GlobalNamespace::GorillaTriggerBox::OnBoxTriggered)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaTriggerBox*), "OnBoxTriggered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaTriggerBox::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!