// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Oculus.Interaction.Surfaces.ICylinderClipper
#include "Oculus/Interaction/Surfaces/ICylinderClipper.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction::Surfaces
namespace Oculus::Interaction::Surfaces {
  // Forward declaring type: CylinderSegment
  struct CylinderSegment;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.Surfaces
namespace Oculus::Interaction::Surfaces {
  // Forward declaring type: CylinderClipper
  class CylinderClipper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::Surfaces::CylinderClipper);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Surfaces::CylinderClipper*, "Oculus.Interaction.Surfaces", "CylinderClipper");
// Type namespace: Oculus.Interaction.Surfaces
namespace Oculus::Interaction::Surfaces {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.Surfaces.CylinderClipper
  // [TokenAttribute] Offset: FFFFFFFF
  class CylinderClipper : public ::UnityEngine::MonoBehaviour/*, public ::Oculus::Interaction::Surfaces::ICylinderClipper*/ {
    public:
    public:
    // private System.Single _rotation
    // Size: 0x4
    // Offset: 0x20
    float rotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _arcDegrees
    // Size: 0x4
    // Offset: 0x24
    float arcDegrees;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _bottom
    // Size: 0x4
    // Offset: 0x28
    float bottom;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _top
    // Size: 0x4
    // Offset: 0x2C
    float top;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::Surfaces::ICylinderClipper
    operator ::Oculus::Interaction::Surfaces::ICylinderClipper() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::Surfaces::ICylinderClipper*>(this);
    }
    // Get instance field reference: private System.Single _rotation
    [[deprecated("Use field access instead!")]] float& dyn__rotation();
    // Get instance field reference: private System.Single _arcDegrees
    [[deprecated("Use field access instead!")]] float& dyn__arcDegrees();
    // Get instance field reference: private System.Single _bottom
    [[deprecated("Use field access instead!")]] float& dyn__bottom();
    // Get instance field reference: private System.Single _top
    [[deprecated("Use field access instead!")]] float& dyn__top();
    // public System.Single get_ArcDegrees()
    // Offset: 0x4802CD4
    float get_ArcDegrees();
    // public System.Void set_ArcDegrees(System.Single value)
    // Offset: 0x4802CDC
    void set_ArcDegrees(float value);
    // public System.Single get_Rotation()
    // Offset: 0x4802CE4
    float get_Rotation();
    // public System.Void set_Rotation(System.Single value)
    // Offset: 0x4802CEC
    void set_Rotation(float value);
    // public System.Single get_Bottom()
    // Offset: 0x4802CF4
    float get_Bottom();
    // public System.Void set_Bottom(System.Single value)
    // Offset: 0x4802CFC
    void set_Bottom(float value);
    // public System.Single get_Top()
    // Offset: 0x4802D04
    float get_Top();
    // public System.Void set_Top(System.Single value)
    // Offset: 0x4802D0C
    void set_Top(float value);
    // public System.Boolean GetCylinderSegment(out Oculus.Interaction.Surfaces.CylinderSegment segment)
    // Offset: 0x4802D14
    bool GetCylinderSegment(ByRef<::Oculus::Interaction::Surfaces::CylinderSegment> segment);
    // public System.Void .ctor()
    // Offset: 0x4802D24
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CylinderClipper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Surfaces::CylinderClipper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CylinderClipper*, creationType>()));
    }
  }; // Oculus.Interaction.Surfaces.CylinderClipper
  #pragma pack(pop)
  static check_size<sizeof(CylinderClipper), 44 + sizeof(float)> __Oculus_Interaction_Surfaces_CylinderClipperSizeCheck;
  static_assert(sizeof(CylinderClipper) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::CylinderClipper::get_ArcDegrees
// Il2CppName: get_ArcDegrees
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::Surfaces::CylinderClipper::*)()>(&Oculus::Interaction::Surfaces::CylinderClipper::get_ArcDegrees)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Surfaces::CylinderClipper*), "get_ArcDegrees", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::CylinderClipper::set_ArcDegrees
// Il2CppName: set_ArcDegrees
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Surfaces::CylinderClipper::*)(float)>(&Oculus::Interaction::Surfaces::CylinderClipper::set_ArcDegrees)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Surfaces::CylinderClipper*), "set_ArcDegrees", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::CylinderClipper::get_Rotation
// Il2CppName: get_Rotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::Surfaces::CylinderClipper::*)()>(&Oculus::Interaction::Surfaces::CylinderClipper::get_Rotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Surfaces::CylinderClipper*), "get_Rotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::CylinderClipper::set_Rotation
// Il2CppName: set_Rotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Surfaces::CylinderClipper::*)(float)>(&Oculus::Interaction::Surfaces::CylinderClipper::set_Rotation)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Surfaces::CylinderClipper*), "set_Rotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::CylinderClipper::get_Bottom
// Il2CppName: get_Bottom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::Surfaces::CylinderClipper::*)()>(&Oculus::Interaction::Surfaces::CylinderClipper::get_Bottom)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Surfaces::CylinderClipper*), "get_Bottom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::CylinderClipper::set_Bottom
// Il2CppName: set_Bottom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Surfaces::CylinderClipper::*)(float)>(&Oculus::Interaction::Surfaces::CylinderClipper::set_Bottom)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Surfaces::CylinderClipper*), "set_Bottom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::CylinderClipper::get_Top
// Il2CppName: get_Top
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::Surfaces::CylinderClipper::*)()>(&Oculus::Interaction::Surfaces::CylinderClipper::get_Top)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Surfaces::CylinderClipper*), "get_Top", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::CylinderClipper::set_Top
// Il2CppName: set_Top
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Surfaces::CylinderClipper::*)(float)>(&Oculus::Interaction::Surfaces::CylinderClipper::set_Top)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Surfaces::CylinderClipper*), "set_Top", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::CylinderClipper::GetCylinderSegment
// Il2CppName: GetCylinderSegment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::Surfaces::CylinderClipper::*)(ByRef<::Oculus::Interaction::Surfaces::CylinderSegment>)>(&Oculus::Interaction::Surfaces::CylinderClipper::GetCylinderSegment)> {
  static const MethodInfo* get() {
    static auto* segment = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Surfaces", "CylinderSegment")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Surfaces::CylinderClipper*), "GetCylinderSegment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{segment});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::CylinderClipper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
