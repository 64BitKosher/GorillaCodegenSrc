// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: IgnoreLocalRotation
  class IgnoreLocalRotation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::IgnoreLocalRotation);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IgnoreLocalRotation*, "", "IgnoreLocalRotation");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: IgnoreLocalRotation
  // [TokenAttribute] Offset: FFFFFFFF
  class IgnoreLocalRotation : public ::UnityEngine::MonoBehaviour {
    public:
    // private System.Void LateUpdate()
    // Offset: 0x278B0F8
    void LateUpdate();
    // public System.Void .ctor()
    // Offset: 0x278B160
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IgnoreLocalRotation* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::IgnoreLocalRotation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IgnoreLocalRotation*, creationType>()));
    }
  }; // IgnoreLocalRotation
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IgnoreLocalRotation::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IgnoreLocalRotation::*)()>(&GlobalNamespace::IgnoreLocalRotation::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IgnoreLocalRotation*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IgnoreLocalRotation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
