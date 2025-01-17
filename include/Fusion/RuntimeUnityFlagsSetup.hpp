// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.RuntimeFlagsBuildFlags
#include "Fusion/RuntimeFlagsBuildFlags.hpp"
// Including type: Fusion.RuntimeFlagsBuildTypes
#include "Fusion/RuntimeFlagsBuildTypes.hpp"
// Including type: Fusion.RuntimeFlagsDotNetVersion
#include "Fusion/RuntimeFlagsDotNetVersion.hpp"
// Completed includes
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: RuntimeUnityFlagsSetup
  class RuntimeUnityFlagsSetup;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::RuntimeUnityFlagsSetup);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::RuntimeUnityFlagsSetup*, "Fusion", "RuntimeUnityFlagsSetup");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.RuntimeUnityFlagsSetup
  // [TokenAttribute] Offset: FFFFFFFF
  class RuntimeUnityFlagsSetup : public ::Il2CppObject {
    public:
    // Get static field: static private Fusion.RuntimeFlagsBuildFlags flagsBuildFlags
    static ::Fusion::RuntimeFlagsBuildFlags _get_flagsBuildFlags();
    // Set static field: static private Fusion.RuntimeFlagsBuildFlags flagsBuildFlags
    static void _set_flagsBuildFlags(::Fusion::RuntimeFlagsBuildFlags value);
    // Get static field: static private Fusion.RuntimeFlagsBuildTypes flagsBuildTypes
    static ::Fusion::RuntimeFlagsBuildTypes _get_flagsBuildTypes();
    // Set static field: static private Fusion.RuntimeFlagsBuildTypes flagsBuildTypes
    static void _set_flagsBuildTypes(::Fusion::RuntimeFlagsBuildTypes value);
    // Get static field: static private Fusion.RuntimeFlagsDotNetVersion flagsDotNetVersion
    static ::Fusion::RuntimeFlagsDotNetVersion _get_flagsDotNetVersion();
    // Set static field: static private Fusion.RuntimeFlagsDotNetVersion flagsDotNetVersion
    static void _set_flagsDotNetVersion(::Fusion::RuntimeFlagsDotNetVersion value);
    // static System.Boolean get_IsUNITY_WEBGL()
    // Offset: 0x2AD996C
    static bool get_IsUNITY_WEBGL();
    // static System.Boolean get_IsUNITY_XBOXONE()
    // Offset: 0x2AD99B8
    static bool get_IsUNITY_XBOXONE();
    // static System.Boolean get_IsUNITY_GAMECORE()
    // Offset: 0x2AD9A04
    static bool get_IsUNITY_GAMECORE();
    // static System.Boolean get_IsUNITY_EDITOR()
    // Offset: 0x2AD9A50
    static bool get_IsUNITY_EDITOR();
    // static System.Boolean get_IsUNITY_SWITCH()
    // Offset: 0x2AD9A9C
    static bool get_IsUNITY_SWITCH();
    // static public System.Void Check_UNITY_2019_4_OR_NEWER()
    // Offset: 0x2AD9AE8
    static void Check_UNITY_2019_4_OR_NEWER();
    // static System.Boolean get_IsENABLE_MONO()
    // Offset: 0x2AD9B38
    static bool get_IsENABLE_MONO();
    // static System.Boolean get_IsENABLE_IL2CPP()
    // Offset: 0x2AD9B84
    static bool get_IsENABLE_IL2CPP();
    // static public System.Void Check_ENABLE_IL2CPP()
    // Offset: 0x2AD9BD0
    static void Check_ENABLE_IL2CPP();
    // static System.Boolean get_IsNET_4_6()
    // Offset: 0x2AD9C20
    static bool get_IsNET_4_6();
    // static System.Boolean get_IsNETFX_CORE()
    // Offset: 0x2AD9C6C
    static bool get_IsNETFX_CORE();
    // static System.Boolean get_IsNET_STANDARD_2_0()
    // Offset: 0x2AD9CB8
    static bool get_IsNET_STANDARD_2_0();
    // static public System.Void Check_NET_STANDARD_2_0()
    // Offset: 0x2AD9D04
    static void Check_NET_STANDARD_2_0();
  }; // Fusion.RuntimeUnityFlagsSetup
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::RuntimeUnityFlagsSetup::get_IsUNITY_WEBGL
// Il2CppName: get_IsUNITY_WEBGL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Fusion::RuntimeUnityFlagsSetup::get_IsUNITY_WEBGL)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::RuntimeUnityFlagsSetup*), "get_IsUNITY_WEBGL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::RuntimeUnityFlagsSetup::get_IsUNITY_XBOXONE
// Il2CppName: get_IsUNITY_XBOXONE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Fusion::RuntimeUnityFlagsSetup::get_IsUNITY_XBOXONE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::RuntimeUnityFlagsSetup*), "get_IsUNITY_XBOXONE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::RuntimeUnityFlagsSetup::get_IsUNITY_GAMECORE
// Il2CppName: get_IsUNITY_GAMECORE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Fusion::RuntimeUnityFlagsSetup::get_IsUNITY_GAMECORE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::RuntimeUnityFlagsSetup*), "get_IsUNITY_GAMECORE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::RuntimeUnityFlagsSetup::get_IsUNITY_EDITOR
// Il2CppName: get_IsUNITY_EDITOR
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Fusion::RuntimeUnityFlagsSetup::get_IsUNITY_EDITOR)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::RuntimeUnityFlagsSetup*), "get_IsUNITY_EDITOR", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::RuntimeUnityFlagsSetup::get_IsUNITY_SWITCH
// Il2CppName: get_IsUNITY_SWITCH
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Fusion::RuntimeUnityFlagsSetup::get_IsUNITY_SWITCH)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::RuntimeUnityFlagsSetup*), "get_IsUNITY_SWITCH", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::RuntimeUnityFlagsSetup::Check_UNITY_2019_4_OR_NEWER
// Il2CppName: Check_UNITY_2019_4_OR_NEWER
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Fusion::RuntimeUnityFlagsSetup::Check_UNITY_2019_4_OR_NEWER)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::RuntimeUnityFlagsSetup*), "Check_UNITY_2019_4_OR_NEWER", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::RuntimeUnityFlagsSetup::get_IsENABLE_MONO
// Il2CppName: get_IsENABLE_MONO
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Fusion::RuntimeUnityFlagsSetup::get_IsENABLE_MONO)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::RuntimeUnityFlagsSetup*), "get_IsENABLE_MONO", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::RuntimeUnityFlagsSetup::get_IsENABLE_IL2CPP
// Il2CppName: get_IsENABLE_IL2CPP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Fusion::RuntimeUnityFlagsSetup::get_IsENABLE_IL2CPP)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::RuntimeUnityFlagsSetup*), "get_IsENABLE_IL2CPP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::RuntimeUnityFlagsSetup::Check_ENABLE_IL2CPP
// Il2CppName: Check_ENABLE_IL2CPP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Fusion::RuntimeUnityFlagsSetup::Check_ENABLE_IL2CPP)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::RuntimeUnityFlagsSetup*), "Check_ENABLE_IL2CPP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::RuntimeUnityFlagsSetup::get_IsNET_4_6
// Il2CppName: get_IsNET_4_6
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Fusion::RuntimeUnityFlagsSetup::get_IsNET_4_6)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::RuntimeUnityFlagsSetup*), "get_IsNET_4_6", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::RuntimeUnityFlagsSetup::get_IsNETFX_CORE
// Il2CppName: get_IsNETFX_CORE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Fusion::RuntimeUnityFlagsSetup::get_IsNETFX_CORE)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::RuntimeUnityFlagsSetup*), "get_IsNETFX_CORE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::RuntimeUnityFlagsSetup::get_IsNET_STANDARD_2_0
// Il2CppName: get_IsNET_STANDARD_2_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Fusion::RuntimeUnityFlagsSetup::get_IsNET_STANDARD_2_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::RuntimeUnityFlagsSetup*), "get_IsNET_STANDARD_2_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::RuntimeUnityFlagsSetup::Check_NET_STANDARD_2_0
// Il2CppName: Check_NET_STANDARD_2_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Fusion::RuntimeUnityFlagsSetup::Check_NET_STANDARD_2_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::RuntimeUnityFlagsSetup*), "Check_NET_STANDARD_2_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
