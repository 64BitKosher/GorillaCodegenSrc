// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Interaction.Grab.GrabSurfaces
namespace Oculus::Interaction::Grab::GrabSurfaces {
  // Forward declaring type: CylinderSurfaceData
  class CylinderSurfaceData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData*, "Oculus.Interaction.Grab.GrabSurfaces", "CylinderSurfaceData");
// Type namespace: Oculus.Interaction.Grab.GrabSurfaces
namespace Oculus::Interaction::Grab::GrabSurfaces {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.Grab.GrabSurfaces.CylinderSurfaceData
  // [TokenAttribute] Offset: FFFFFFFF
  class CylinderSurfaceData : public ::Il2CppObject/*, public ::System::ICloneable*/ {
    public:
    public:
    // public UnityEngine.Vector3 startPoint
    // Size: 0xC
    // Offset: 0x10
    ::UnityEngine::Vector3 startPoint;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 endPoint
    // Size: 0xC
    // Offset: 0x1C
    ::UnityEngine::Vector3 endPoint;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public System.Single arcOffset
    // Size: 0x4
    // Offset: 0x28
    float arcOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single arcLength
    // Size: 0x4
    // Offset: 0x2C
    float arcLength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::ICloneable
    operator ::System::ICloneable() noexcept {
      return *reinterpret_cast<::System::ICloneable*>(this);
    }
    // Get instance field reference: public UnityEngine.Vector3 startPoint
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_startPoint();
    // Get instance field reference: public UnityEngine.Vector3 endPoint
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_endPoint();
    // Get instance field reference: public System.Single arcOffset
    [[deprecated("Use field access instead!")]] float& dyn_arcOffset();
    // Get instance field reference: public System.Single arcLength
    [[deprecated("Use field access instead!")]] float& dyn_arcLength();
    // public System.Object Clone()
    // Offset: 0x48354E4
    ::Il2CppObject* Clone();
    // public Oculus.Interaction.Grab.GrabSurfaces.CylinderSurfaceData Mirror()
    // Offset: 0x48355B4
    ::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData* Mirror();
    // public System.Void .ctor()
    // Offset: 0x483558C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CylinderSurfaceData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CylinderSurfaceData*, creationType>()));
    }
  }; // Oculus.Interaction.Grab.GrabSurfaces.CylinderSurfaceData
  #pragma pack(pop)
  static check_size<sizeof(CylinderSurfaceData), 44 + sizeof(float)> __Oculus_Interaction_Grab_GrabSurfaces_CylinderSurfaceDataSizeCheck;
  static_assert(sizeof(CylinderSurfaceData) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData::*)()>(&Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData::Mirror
// Il2CppName: Mirror
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData* (Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData::*)()>(&Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData::Mirror)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData*), "Mirror", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
