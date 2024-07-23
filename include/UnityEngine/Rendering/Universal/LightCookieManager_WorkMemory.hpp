// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.LightCookieManager
#include "UnityEngine/Rendering/Universal/LightCookieManager.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::LightCookieManager::WorkMemory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LightCookieManager::WorkMemory*, "UnityEngine.Rendering.Universal", "LightCookieManager/WorkMemory");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.LightCookieManager/WorkMemory
  // [TokenAttribute] Offset: FFFFFFFF
  class LightCookieManager::WorkMemory : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping[] lightMappings
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::UnityEngine::Rendering::Universal::LightCookieManager::LightCookieMapping> lightMappings;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Rendering::Universal::LightCookieManager::LightCookieMapping>) == 0x8);
    // public UnityEngine.Vector4[] uvRects
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::UnityEngine::Vector4> uvRects;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector4>) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping[] lightMappings
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Rendering::Universal::LightCookieManager::LightCookieMapping>& dyn_lightMappings();
    // Get instance field reference: public UnityEngine.Vector4[] uvRects
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector4>& dyn_uvRects();
    // public System.Void Resize(System.Int32 size)
    // Offset: 0x52BD410
    void Resize(int size);
    // public System.Void .ctor()
    // Offset: 0x52BC648
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightCookieManager::WorkMemory* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::LightCookieManager::WorkMemory::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightCookieManager::WorkMemory*, creationType>()));
    }
  }; // UnityEngine.Rendering.Universal.LightCookieManager/WorkMemory
  #pragma pack(pop)
  static check_size<sizeof(LightCookieManager::WorkMemory), 24 + sizeof(::ArrayW<::UnityEngine::Vector4>)> __UnityEngine_Rendering_Universal_LightCookieManager_WorkMemorySizeCheck;
  static_assert(sizeof(LightCookieManager::WorkMemory) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::LightCookieManager::WorkMemory::Resize
// Il2CppName: Resize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::LightCookieManager::WorkMemory::*)(int)>(&UnityEngine::Rendering::Universal::LightCookieManager::WorkMemory::Resize)> {
  static const MethodInfo* get() {
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::LightCookieManager::WorkMemory*), "Resize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{size});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::LightCookieManager::WorkMemory::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
