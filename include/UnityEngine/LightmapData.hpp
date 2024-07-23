// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: LightmapData
  class LightmapData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::LightmapData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LightmapData*, "UnityEngine", "LightmapData");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x28
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.LightmapData
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: FFFFFFFF
  class LightmapData : public ::Il2CppObject {
    public:
    public:
    // UnityEngine.Texture2D m_Light
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Texture2D* m_Light;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture2D*) == 0x8);
    // UnityEngine.Texture2D m_Dir
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Texture2D* m_Dir;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture2D*) == 0x8);
    // UnityEngine.Texture2D m_ShadowMask
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Texture2D* m_ShadowMask;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture2D*) == 0x8);
    public:
    // Get instance field reference: UnityEngine.Texture2D m_Light
    [[deprecated("Use field access instead!")]] ::UnityEngine::Texture2D*& dyn_m_Light();
    // Get instance field reference: UnityEngine.Texture2D m_Dir
    [[deprecated("Use field access instead!")]] ::UnityEngine::Texture2D*& dyn_m_Dir();
    // Get instance field reference: UnityEngine.Texture2D m_ShadowMask
    [[deprecated("Use field access instead!")]] ::UnityEngine::Texture2D*& dyn_m_ShadowMask();
    // public UnityEngine.Texture2D get_lightmapColor()
    // Offset: 0x548CEC4
    ::UnityEngine::Texture2D* get_lightmapColor();
    // public System.Void set_lightmapColor(UnityEngine.Texture2D value)
    // Offset: 0x548CECC
    void set_lightmapColor(::UnityEngine::Texture2D* value);
    // public UnityEngine.Texture2D get_lightmapDir()
    // Offset: 0x548CED4
    ::UnityEngine::Texture2D* get_lightmapDir();
    // public System.Void set_lightmapDir(UnityEngine.Texture2D value)
    // Offset: 0x548CEDC
    void set_lightmapDir(::UnityEngine::Texture2D* value);
    // public UnityEngine.Texture2D get_shadowMask()
    // Offset: 0x548CEE4
    ::UnityEngine::Texture2D* get_shadowMask();
    // public System.Void set_shadowMask(UnityEngine.Texture2D value)
    // Offset: 0x548CEEC
    void set_shadowMask(::UnityEngine::Texture2D* value);
    // public System.Void .ctor()
    // Offset: 0x548CEF4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightmapData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::LightmapData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightmapData*, creationType>()));
    }
  }; // UnityEngine.LightmapData
  #pragma pack(pop)
  static check_size<sizeof(LightmapData), 32 + sizeof(::UnityEngine::Texture2D*)> __UnityEngine_LightmapDataSizeCheck;
  static_assert(sizeof(LightmapData) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::LightmapData::get_lightmapColor
// Il2CppName: get_lightmapColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Texture2D* (UnityEngine::LightmapData::*)()>(&UnityEngine::LightmapData::get_lightmapColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LightmapData*), "get_lightmapColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::LightmapData::set_lightmapColor
// Il2CppName: set_lightmapColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::LightmapData::*)(::UnityEngine::Texture2D*)>(&UnityEngine::LightmapData::set_lightmapColor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LightmapData*), "set_lightmapColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::LightmapData::get_lightmapDir
// Il2CppName: get_lightmapDir
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Texture2D* (UnityEngine::LightmapData::*)()>(&UnityEngine::LightmapData::get_lightmapDir)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LightmapData*), "get_lightmapDir", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::LightmapData::set_lightmapDir
// Il2CppName: set_lightmapDir
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::LightmapData::*)(::UnityEngine::Texture2D*)>(&UnityEngine::LightmapData::set_lightmapDir)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LightmapData*), "set_lightmapDir", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::LightmapData::get_shadowMask
// Il2CppName: get_shadowMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Texture2D* (UnityEngine::LightmapData::*)()>(&UnityEngine::LightmapData::get_shadowMask)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LightmapData*), "get_shadowMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::LightmapData::set_shadowMask
// Il2CppName: set_shadowMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::LightmapData::*)(::UnityEngine::Texture2D*)>(&UnityEngine::LightmapData::set_shadowMask)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LightmapData*), "set_shadowMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::LightmapData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
