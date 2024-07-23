// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: Oculus.Interaction.Surfaces
namespace Oculus::Interaction::Surfaces {
  // Forward declaring type: CylinderSegment
  struct CylinderSegment;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Surfaces::CylinderSegment, "Oculus.Interaction.Surfaces", "CylinderSegment");
// Type namespace: Oculus.Interaction.Surfaces
namespace Oculus::Interaction::Surfaces {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Oculus.Interaction.Surfaces.CylinderSegment
  // [TokenAttribute] Offset: FFFFFFFF
  struct CylinderSegment/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Single _rotation
    // Size: 0x4
    // Offset: 0x0
    float rotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _arcDegrees
    // Size: 0x4
    // Offset: 0x4
    float arcDegrees;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _bottom
    // Size: 0x4
    // Offset: 0x8
    float bottom;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _top
    // Size: 0x4
    // Offset: 0xC
    float top;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: CylinderSegment
    constexpr CylinderSegment(float rotation_ = {}, float arcDegrees_ = {}, float bottom_ = {}, float top_ = {}) noexcept : rotation{rotation_}, arcDegrees{arcDegrees_}, bottom{bottom_}, top{top_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
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
    // Offset: 0x4804FEC
    float get_ArcDegrees();
    // public System.Single get_Rotation()
    // Offset: 0x4804FF4
    float get_Rotation();
    // public System.Single get_Bottom()
    // Offset: 0x4804FFC
    float get_Bottom();
    // public System.Single get_Top()
    // Offset: 0x4805004
    float get_Top();
    // public System.Boolean get_IsInfiniteHeight()
    // Offset: 0x4801608
    bool get_IsInfiniteHeight();
    // public System.Boolean get_IsInfiniteArc()
    // Offset: 0x480163C
    bool get_IsInfiniteArc();
    // public System.Void .ctor(System.Single rotation, System.Single arcDegrees, System.Single bottom, System.Single top)
    // Offset: 0x4801630
    // ABORTED: conflicts with another method.  CylinderSegment(float rotation, float arcDegrees, float bottom, float top);
    // static public Oculus.Interaction.Surfaces.CylinderSegment Default()
    // Offset: 0x480500C
    static ::Oculus::Interaction::Surfaces::CylinderSegment Default();
    // static public Oculus.Interaction.Surfaces.CylinderSegment Infinite()
    // Offset: 0x4801618
    static ::Oculus::Interaction::Surfaces::CylinderSegment Infinite();
  }; // Oculus.Interaction.Surfaces.CylinderSegment
  #pragma pack(pop)
  static check_size<sizeof(CylinderSegment), 12 + sizeof(float)> __Oculus_Interaction_Surfaces_CylinderSegmentSizeCheck;
  static_assert(sizeof(CylinderSegment) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::CylinderSegment::get_ArcDegrees
// Il2CppName: get_ArcDegrees
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::Surfaces::CylinderSegment::*)()>(&Oculus::Interaction::Surfaces::CylinderSegment::get_ArcDegrees)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Surfaces::CylinderSegment), "get_ArcDegrees", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::CylinderSegment::get_Rotation
// Il2CppName: get_Rotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::Surfaces::CylinderSegment::*)()>(&Oculus::Interaction::Surfaces::CylinderSegment::get_Rotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Surfaces::CylinderSegment), "get_Rotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::CylinderSegment::get_Bottom
// Il2CppName: get_Bottom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::Surfaces::CylinderSegment::*)()>(&Oculus::Interaction::Surfaces::CylinderSegment::get_Bottom)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Surfaces::CylinderSegment), "get_Bottom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::CylinderSegment::get_Top
// Il2CppName: get_Top
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::Surfaces::CylinderSegment::*)()>(&Oculus::Interaction::Surfaces::CylinderSegment::get_Top)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Surfaces::CylinderSegment), "get_Top", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::CylinderSegment::get_IsInfiniteHeight
// Il2CppName: get_IsInfiniteHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::Surfaces::CylinderSegment::*)()>(&Oculus::Interaction::Surfaces::CylinderSegment::get_IsInfiniteHeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Surfaces::CylinderSegment), "get_IsInfiniteHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::CylinderSegment::get_IsInfiniteArc
// Il2CppName: get_IsInfiniteArc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::Surfaces::CylinderSegment::*)()>(&Oculus::Interaction::Surfaces::CylinderSegment::get_IsInfiniteArc)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Surfaces::CylinderSegment), "get_IsInfiniteArc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::CylinderSegment::CylinderSegment
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::CylinderSegment::Default
// Il2CppName: Default
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::Surfaces::CylinderSegment (*)()>(&Oculus::Interaction::Surfaces::CylinderSegment::Default)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Surfaces::CylinderSegment), "Default", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::CylinderSegment::Infinite
// Il2CppName: Infinite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::Surfaces::CylinderSegment (*)()>(&Oculus::Interaction::Surfaces::CylinderSegment::Infinite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Surfaces::CylinderSegment), "Infinite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};