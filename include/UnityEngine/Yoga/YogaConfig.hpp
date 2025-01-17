// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Yoga
namespace UnityEngine::Yoga {
  // Forward declaring type: Logger
  class Logger;
}
// Completed forward declares
// Type namespace: UnityEngine.Yoga
namespace UnityEngine::Yoga {
  // Forward declaring type: YogaConfig
  class YogaConfig;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Yoga::YogaConfig);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::YogaConfig*, "UnityEngine.Yoga", "YogaConfig");
// Type namespace: UnityEngine.Yoga
namespace UnityEngine::Yoga {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Yoga.YogaConfig
  // [TokenAttribute] Offset: FFFFFFFF
  class YogaConfig : public ::Il2CppObject {
    public:
    public:
    // private System.IntPtr _ygConfig
    // Size: 0x8
    // Offset: 0x10
    ::System::IntPtr ygConfig;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // private UnityEngine.Yoga.Logger _logger
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Yoga::Logger* logger;
    // Field size check
    static_assert(sizeof(::UnityEngine::Yoga::Logger*) == 0x8);
    public:
    // Get static field: static readonly UnityEngine.Yoga.YogaConfig Default
    static ::UnityEngine::Yoga::YogaConfig* _get_Default();
    // Set static field: static readonly UnityEngine.Yoga.YogaConfig Default
    static void _set_Default(::UnityEngine::Yoga::YogaConfig* value);
    // Get instance field reference: private System.IntPtr _ygConfig
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn__ygConfig();
    // Get instance field reference: private UnityEngine.Yoga.Logger _logger
    [[deprecated("Use field access instead!")]] ::UnityEngine::Yoga::Logger*& dyn__logger();
    // private System.Void .ctor(System.IntPtr ygConfig)
    // Offset: 0x558E588
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static YogaConfig* New_ctor(::System::IntPtr ygConfig) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Yoga::YogaConfig::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<YogaConfig*, creationType>(ygConfig)));
    }
    // public System.Void .ctor()
    // Offset: 0x558E60C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static YogaConfig* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Yoga::YogaConfig::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<YogaConfig*, creationType>()));
    }
    // System.IntPtr get_Handle()
    // Offset: 0x558E780
    ::System::IntPtr get_Handle();
    // public System.Boolean get_UseWebDefaults()
    // Offset: 0x558E7E0
    bool get_UseWebDefaults();
    // public System.Void set_UseWebDefaults(System.Boolean value)
    // Offset: 0x558E858
    void set_UseWebDefaults(bool value);
    // public System.Void set_PointScaleFactor(System.Single value)
    // Offset: 0x558E8E0
    void set_PointScaleFactor(float value);
    // static private System.Void .cctor()
    // Offset: 0x558E978
    static void _cctor();
    // protected override System.Void Finalize()
    // Offset: 0x558E678
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // UnityEngine.Yoga.YogaConfig
  #pragma pack(pop)
  static check_size<sizeof(YogaConfig), 24 + sizeof(::UnityEngine::Yoga::Logger*)> __UnityEngine_Yoga_YogaConfigSizeCheck;
  static_assert(sizeof(YogaConfig) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Yoga::YogaConfig::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Yoga::YogaConfig::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Yoga::YogaConfig::get_Handle
// Il2CppName: get_Handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (UnityEngine::Yoga::YogaConfig::*)()>(&UnityEngine::Yoga::YogaConfig::get_Handle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Yoga::YogaConfig*), "get_Handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Yoga::YogaConfig::get_UseWebDefaults
// Il2CppName: get_UseWebDefaults
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Yoga::YogaConfig::*)()>(&UnityEngine::Yoga::YogaConfig::get_UseWebDefaults)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Yoga::YogaConfig*), "get_UseWebDefaults", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Yoga::YogaConfig::set_UseWebDefaults
// Il2CppName: set_UseWebDefaults
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Yoga::YogaConfig::*)(bool)>(&UnityEngine::Yoga::YogaConfig::set_UseWebDefaults)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Yoga::YogaConfig*), "set_UseWebDefaults", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Yoga::YogaConfig::set_PointScaleFactor
// Il2CppName: set_PointScaleFactor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Yoga::YogaConfig::*)(float)>(&UnityEngine::Yoga::YogaConfig::set_PointScaleFactor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Yoga::YogaConfig*), "set_PointScaleFactor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Yoga::YogaConfig::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Yoga::YogaConfig::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Yoga::YogaConfig*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Yoga::YogaConfig::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Yoga::YogaConfig::*)()>(&UnityEngine::Yoga::YogaConfig::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Yoga::YogaConfig*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
