// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ScalableBufferManager
  class ScalableBufferManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ScalableBufferManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ScalableBufferManager*, "UnityEngine", "ScalableBufferManager");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ScalableBufferManager
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [StaticAccessorAttribute] Offset: FFFFFFFF
  class ScalableBufferManager : public ::Il2CppObject {
    public:
    // static public System.Single get_widthScaleFactor()
    // Offset: 0x548CE08
    static float get_widthScaleFactor();
    // static public System.Single get_heightScaleFactor()
    // Offset: 0x548CE30
    static float get_heightScaleFactor();
  }; // UnityEngine.ScalableBufferManager
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ScalableBufferManager::get_widthScaleFactor
// Il2CppName: get_widthScaleFactor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&UnityEngine::ScalableBufferManager::get_widthScaleFactor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ScalableBufferManager*), "get_widthScaleFactor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ScalableBufferManager::get_heightScaleFactor
// Il2CppName: get_heightScaleFactor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&UnityEngine::ScalableBufferManager::get_heightScaleFactor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ScalableBufferManager*), "get_heightScaleFactor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
