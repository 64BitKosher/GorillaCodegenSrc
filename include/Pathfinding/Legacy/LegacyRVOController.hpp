// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.RVO.RVOController
#include "Pathfinding/RVO/RVOController.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Pathfinding.Legacy
namespace Pathfinding::Legacy {
  // Forward declaring type: LegacyRVOController
  class LegacyRVOController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::Legacy::LegacyRVOController);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Legacy::LegacyRVOController*, "Pathfinding.Legacy", "LegacyRVOController");
// Type namespace: Pathfinding.Legacy
namespace Pathfinding::Legacy {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Legacy.LegacyRVOController
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: FFFFFFFF
  class LegacyRVOController : public ::Pathfinding::RVO::RVOController {
    public:
    // Writing base type padding for base size: 0x79 to desired offset: 0x7C
    char ___base_padding[0x3] = {};
    public:
    // public UnityEngine.LayerMask mask
    // Size: 0x4
    // Offset: 0x7C
    ::UnityEngine::LayerMask mask;
    // Field size check
    static_assert(sizeof(::UnityEngine::LayerMask) == 0x4);
    // public System.Boolean enableRotation
    // Size: 0x1
    // Offset: 0x80
    bool enableRotation;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: enableRotation and: rotationSpeed
    char __padding1[0x3] = {};
    // public System.Single rotationSpeed
    // Size: 0x4
    // Offset: 0x84
    float rotationSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public UnityEngine.LayerMask mask
    [[deprecated("Use field access instead!")]] ::UnityEngine::LayerMask& dyn_mask();
    // Get instance field reference: public System.Boolean enableRotation
    [[deprecated("Use field access instead!")]] bool& dyn_enableRotation();
    // Get instance field reference: public System.Single rotationSpeed
    [[deprecated("Use field access instead!")]] float& dyn_rotationSpeed();
    // public System.Void Update()
    // Offset: 0x2A0FCC8
    void Update();
    // public System.Void .ctor()
    // Offset: 0x2A100CC
    // Implemented from: Pathfinding.RVO.RVOController
    // Base method: System.Void RVOController::.ctor()
    // Base method: System.Void VersionedMonoBehaviour::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LegacyRVOController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Legacy::LegacyRVOController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LegacyRVOController*, creationType>()));
    }
  }; // Pathfinding.Legacy.LegacyRVOController
  #pragma pack(pop)
  static check_size<sizeof(LegacyRVOController), 132 + sizeof(float)> __Pathfinding_Legacy_LegacyRVOControllerSizeCheck;
  static_assert(sizeof(LegacyRVOController) == 0x88);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::Legacy::LegacyRVOController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Legacy::LegacyRVOController::*)()>(&Pathfinding::Legacy::LegacyRVOController::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Legacy::LegacyRVOController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Legacy::LegacyRVOController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!