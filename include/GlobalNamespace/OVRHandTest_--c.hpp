// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRHandTest
#include "GlobalNamespace/OVRHandTest.hpp"
// Including type: OVRHandTest/BoolMonitor
#include "GlobalNamespace/OVRHandTest_BoolMonitor.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRHandTest::$$c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRHandTest::$$c*, "", "OVRHandTest/<>c");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRHandTest/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class OVRHandTest::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly OVRHandTest/<>c <>9
    static ::GlobalNamespace::OVRHandTest::$$c* _get_$$9();
    // Set static field: static public readonly OVRHandTest/<>c <>9
    static void _set_$$9(::GlobalNamespace::OVRHandTest::$$c* value);
    // Get static field: static public OVRHandTest/BoolMonitor/BoolGenerator <>9__14_0
    static ::GlobalNamespace::OVRHandTest::BoolMonitor::BoolGenerator* _get_$$9__14_0();
    // Set static field: static public OVRHandTest/BoolMonitor/BoolGenerator <>9__14_0
    static void _set_$$9__14_0(::GlobalNamespace::OVRHandTest::BoolMonitor::BoolGenerator* value);
    // static private System.Void .cctor()
    // Offset: 0x494CC98
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x494CD00
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRHandTest::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRHandTest::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRHandTest::$$c*, creationType>()));
    }
    // System.Boolean <Start>b__14_0()
    // Offset: 0x494CD08
    bool $Start$b__14_0();
    // System.Boolean <.cctor>b__19_0()
    // Offset: 0x494CD60
    bool $_cctor$b__19_0();
  }; // OVRHandTest/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRHandTest::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRHandTest::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHandTest::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHandTest::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRHandTest::$$c::$Start$b__14_0
// Il2CppName: <Start>b__14_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRHandTest::$$c::*)()>(&GlobalNamespace::OVRHandTest::$$c::$Start$b__14_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHandTest::$$c*), "<Start>b__14_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRHandTest::$$c::$_cctor$b__19_0
// Il2CppName: <.cctor>b__19_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRHandTest::$$c::*)()>(&GlobalNamespace::OVRHandTest::$$c::$_cctor$b__19_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRHandTest::$$c*), "<.cctor>b__19_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
