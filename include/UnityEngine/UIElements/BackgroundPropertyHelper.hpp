// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: BackgroundPosition
  struct BackgroundPosition;
  // Forward declaring type: BackgroundRepeat
  struct BackgroundRepeat;
  // Forward declaring type: BackgroundSize
  struct BackgroundSize;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ScaleMode
  struct ScaleMode;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: BackgroundPropertyHelper
  class BackgroundPropertyHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::BackgroundPropertyHelper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BackgroundPropertyHelper*, "UnityEngine.UIElements", "BackgroundPropertyHelper");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.BackgroundPropertyHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class BackgroundPropertyHelper : public ::Il2CppObject {
    public:
    // static public UnityEngine.UIElements.BackgroundPosition ConvertScaleModeToBackgroundPosition(UnityEngine.ScaleMode scaleMode)
    // Offset: 0x5592AF8
    static ::UnityEngine::UIElements::BackgroundPosition ConvertScaleModeToBackgroundPosition(::UnityEngine::ScaleMode scaleMode);
    // static public UnityEngine.UIElements.BackgroundRepeat ConvertScaleModeToBackgroundRepeat(UnityEngine.ScaleMode scaleMode)
    // Offset: 0x5592DA4
    static ::UnityEngine::UIElements::BackgroundRepeat ConvertScaleModeToBackgroundRepeat(::UnityEngine::ScaleMode scaleMode);
    // static public UnityEngine.UIElements.BackgroundSize ConvertScaleModeToBackgroundSize(UnityEngine.ScaleMode scaleMode)
    // Offset: 0x5592DB4
    static ::UnityEngine::UIElements::BackgroundSize ConvertScaleModeToBackgroundSize(::UnityEngine::ScaleMode scaleMode);
    // static public UnityEngine.ScaleMode ResolveUnityBackgroundScaleMode(UnityEngine.UIElements.BackgroundPosition backgroundPositionX, UnityEngine.UIElements.BackgroundPosition backgroundPositionY, UnityEngine.UIElements.BackgroundRepeat backgroundRepeat, UnityEngine.UIElements.BackgroundSize backgroundSize, out System.Boolean valid)
    // Offset: 0x5592EBC
    static ::UnityEngine::ScaleMode ResolveUnityBackgroundScaleMode(::UnityEngine::UIElements::BackgroundPosition backgroundPositionX, ::UnityEngine::UIElements::BackgroundPosition backgroundPositionY, ::UnityEngine::UIElements::BackgroundRepeat backgroundRepeat, ::UnityEngine::UIElements::BackgroundSize backgroundSize, ByRef<bool> valid);
  }; // UnityEngine.UIElements.BackgroundPropertyHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::BackgroundPropertyHelper::ConvertScaleModeToBackgroundPosition
// Il2CppName: ConvertScaleModeToBackgroundPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::BackgroundPosition (*)(::UnityEngine::ScaleMode)>(&UnityEngine::UIElements::BackgroundPropertyHelper::ConvertScaleModeToBackgroundPosition)> {
  static const MethodInfo* get() {
    static auto* scaleMode = &::il2cpp_utils::GetClassFromName("UnityEngine", "ScaleMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::BackgroundPropertyHelper*), "ConvertScaleModeToBackgroundPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scaleMode});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::BackgroundPropertyHelper::ConvertScaleModeToBackgroundRepeat
// Il2CppName: ConvertScaleModeToBackgroundRepeat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::BackgroundRepeat (*)(::UnityEngine::ScaleMode)>(&UnityEngine::UIElements::BackgroundPropertyHelper::ConvertScaleModeToBackgroundRepeat)> {
  static const MethodInfo* get() {
    static auto* scaleMode = &::il2cpp_utils::GetClassFromName("UnityEngine", "ScaleMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::BackgroundPropertyHelper*), "ConvertScaleModeToBackgroundRepeat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scaleMode});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::BackgroundPropertyHelper::ConvertScaleModeToBackgroundSize
// Il2CppName: ConvertScaleModeToBackgroundSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::BackgroundSize (*)(::UnityEngine::ScaleMode)>(&UnityEngine::UIElements::BackgroundPropertyHelper::ConvertScaleModeToBackgroundSize)> {
  static const MethodInfo* get() {
    static auto* scaleMode = &::il2cpp_utils::GetClassFromName("UnityEngine", "ScaleMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::BackgroundPropertyHelper*), "ConvertScaleModeToBackgroundSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scaleMode});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::BackgroundPropertyHelper::ResolveUnityBackgroundScaleMode
// Il2CppName: ResolveUnityBackgroundScaleMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ScaleMode (*)(::UnityEngine::UIElements::BackgroundPosition, ::UnityEngine::UIElements::BackgroundPosition, ::UnityEngine::UIElements::BackgroundRepeat, ::UnityEngine::UIElements::BackgroundSize, ByRef<bool>)>(&UnityEngine::UIElements::BackgroundPropertyHelper::ResolveUnityBackgroundScaleMode)> {
  static const MethodInfo* get() {
    static auto* backgroundPositionX = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "BackgroundPosition")->byval_arg;
    static auto* backgroundPositionY = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "BackgroundPosition")->byval_arg;
    static auto* backgroundRepeat = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "BackgroundRepeat")->byval_arg;
    static auto* backgroundSize = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "BackgroundSize")->byval_arg;
    static auto* valid = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::BackgroundPropertyHelper*), "ResolveUnityBackgroundScaleMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{backgroundPositionX, backgroundPositionY, backgroundRepeat, backgroundSize, valid});
  }
};
