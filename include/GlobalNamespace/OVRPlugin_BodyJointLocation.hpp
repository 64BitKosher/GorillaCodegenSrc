// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVRPlugin/SpaceLocationFlags
#include "GlobalNamespace/OVRPlugin_SpaceLocationFlags.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::BodyJointLocation, "", "OVRPlugin/BodyJointLocation");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/BodyJointLocation
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::BodyJointLocation/*, public ::System::ValueType*/ {
    public:
    public:
    // public OVRPlugin/SpaceLocationFlags LocationFlags
    // Size: 0x8
    // Offset: 0x0
    ::GlobalNamespace::OVRPlugin::SpaceLocationFlags LocationFlags;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::SpaceLocationFlags) == 0x8);
    // public OVRPlugin/Posef Pose
    // Size: 0x1C
    // Offset: 0x8
    ::GlobalNamespace::OVRPlugin::Posef Pose;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::Posef) == 0x1C);
    public:
    // Creating value type constructor for type: BodyJointLocation
    constexpr BodyJointLocation(::GlobalNamespace::OVRPlugin::SpaceLocationFlags LocationFlags_ = {}, ::GlobalNamespace::OVRPlugin::Posef Pose_ = {}) noexcept : LocationFlags{LocationFlags_}, Pose{Pose_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public OVRPlugin/SpaceLocationFlags LocationFlags
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRPlugin::SpaceLocationFlags& dyn_LocationFlags();
    // Get instance field reference: public OVRPlugin/Posef Pose
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRPlugin::Posef& dyn_Pose();
    // public System.Boolean get_OrientationValid()
    // Offset: 0x4906258
    bool get_OrientationValid();
    // public System.Boolean get_PositionValid()
    // Offset: 0x4906264
    bool get_PositionValid();
    // public System.Boolean get_OrientationTracked()
    // Offset: 0x4906270
    bool get_OrientationTracked();
    // public System.Boolean get_PositionTracked()
    // Offset: 0x490627C
    bool get_PositionTracked();
  }; // OVRPlugin/BodyJointLocation
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::BodyJointLocation), 8 + sizeof(::GlobalNamespace::OVRPlugin::Posef)> __GlobalNamespace_OVRPlugin_BodyJointLocationSizeCheck;
  static_assert(sizeof(OVRPlugin::BodyJointLocation) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::BodyJointLocation::get_OrientationValid
// Il2CppName: get_OrientationValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRPlugin::BodyJointLocation::*)()>(&GlobalNamespace::OVRPlugin::BodyJointLocation::get_OrientationValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::BodyJointLocation), "get_OrientationValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::BodyJointLocation::get_PositionValid
// Il2CppName: get_PositionValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRPlugin::BodyJointLocation::*)()>(&GlobalNamespace::OVRPlugin::BodyJointLocation::get_PositionValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::BodyJointLocation), "get_PositionValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::BodyJointLocation::get_OrientationTracked
// Il2CppName: get_OrientationTracked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRPlugin::BodyJointLocation::*)()>(&GlobalNamespace::OVRPlugin::BodyJointLocation::get_OrientationTracked)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::BodyJointLocation), "get_OrientationTracked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::BodyJointLocation::get_PositionTracked
// Il2CppName: get_PositionTracked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRPlugin::BodyJointLocation::*)()>(&GlobalNamespace::OVRPlugin::BodyJointLocation::get_PositionTracked)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::BodyJointLocation), "get_PositionTracked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
