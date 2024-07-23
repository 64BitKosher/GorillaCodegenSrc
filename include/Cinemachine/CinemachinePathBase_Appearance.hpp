// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Cinemachine.CinemachinePathBase
#include "Cinemachine/CinemachinePathBase.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Cinemachine::CinemachinePathBase::Appearance);
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::CinemachinePathBase::Appearance*, "Cinemachine", "CinemachinePathBase/Appearance");
// Type namespace: Cinemachine
namespace Cinemachine {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: Cinemachine.CinemachinePathBase/Appearance
  // [TokenAttribute] Offset: FFFFFFFF
  // [DocumentationSortingAttribute] Offset: FFFFFFFF
  class CinemachinePathBase::Appearance : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Color pathColor
    // Size: 0x10
    // Offset: 0x10
    ::UnityEngine::Color pathColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public UnityEngine.Color inactivePathColor
    // Size: 0x10
    // Offset: 0x20
    ::UnityEngine::Color inactivePathColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public System.Single width
    // Size: 0x4
    // Offset: 0x30
    float width;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public UnityEngine.Color pathColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_pathColor();
    // Get instance field reference: public UnityEngine.Color inactivePathColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_inactivePathColor();
    // Get instance field reference: public System.Single width
    [[deprecated("Use field access instead!")]] float& dyn_width();
    // public System.Void .ctor()
    // Offset: 0x2AAF228
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CinemachinePathBase::Appearance* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cinemachine::CinemachinePathBase::Appearance::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CinemachinePathBase::Appearance*, creationType>()));
    }
  }; // Cinemachine.CinemachinePathBase/Appearance
  #pragma pack(pop)
  static check_size<sizeof(CinemachinePathBase::Appearance), 48 + sizeof(float)> __Cinemachine_CinemachinePathBase_AppearanceSizeCheck;
  static_assert(sizeof(CinemachinePathBase::Appearance) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Cinemachine::CinemachinePathBase::Appearance::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
