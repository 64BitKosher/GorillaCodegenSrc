// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRSpatialAnchor
#include "GlobalNamespace/OVRSpatialAnchor.hpp"
// Including type: OVRSpaceUser
#include "GlobalNamespace/OVRSpaceUser.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRSpatialAnchor::$$c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSpatialAnchor::$$c*, "", "OVRSpatialAnchor/<>c");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRSpatialAnchor/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class OVRSpatialAnchor::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly OVRSpatialAnchor/<>c <>9
    static ::GlobalNamespace::OVRSpatialAnchor::$$c* _get_$$9();
    // Set static field: static public readonly OVRSpatialAnchor/<>c <>9
    static void _set_$$9(::GlobalNamespace::OVRSpatialAnchor::$$c* value);
    // Get static field: static public System.Comparison`1<OVRSpaceUser> <>9__41_0
    static ::System::Comparison_1<::GlobalNamespace::OVRSpaceUser>* _get_$$9__41_0();
    // Set static field: static public System.Comparison`1<OVRSpaceUser> <>9__41_0
    static void _set_$$9__41_0(::System::Comparison_1<::GlobalNamespace::OVRSpaceUser>* value);
    // static private System.Void .cctor()
    // Offset: 0x492F038
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x492F0A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRSpatialAnchor::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRSpatialAnchor::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRSpatialAnchor::$$c*, creationType>()));
    }
    // System.Int32 <GetListToStoreTheShareRequest>b__41_0(OVRSpaceUser x, OVRSpaceUser y)
    // Offset: 0x492F0A8
    int $GetListToStoreTheShareRequest$b__41_0(::GlobalNamespace::OVRSpaceUser x, ::GlobalNamespace::OVRSpaceUser y);
  }; // OVRSpatialAnchor/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRSpatialAnchor::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRSpatialAnchor::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSpatialAnchor::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSpatialAnchor::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRSpatialAnchor::$$c::$GetListToStoreTheShareRequest$b__41_0
// Il2CppName: <GetListToStoreTheShareRequest>b__41_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::OVRSpatialAnchor::$$c::*)(::GlobalNamespace::OVRSpaceUser, ::GlobalNamespace::OVRSpaceUser)>(&GlobalNamespace::OVRSpatialAnchor::$$c::$GetListToStoreTheShareRequest$b__41_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("", "OVRSpaceUser")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("", "OVRSpaceUser")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSpatialAnchor::$$c*), "<GetListToStoreTheShareRequest>b__41_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
