// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.LayerBatch
#include "UnityEngine/Rendering/Universal/LayerBatch.hpp"
// Including type: UnityEngine.SortingLayer
#include "UnityEngine/SortingLayer.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering::Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: ILight2DCullResult
  class ILight2DCullResult;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: LayerUtility
  class LayerUtility;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::LayerUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LayerUtility*, "UnityEngine.Rendering.Universal", "LayerUtility");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.LayerUtility
  // [TokenAttribute] Offset: FFFFFFFF
  class LayerUtility : public ::Il2CppObject {
    public:
    // Get static field: static private UnityEngine.Rendering.Universal.LayerBatch[] s_LayerBatches
    static ::ArrayW<::UnityEngine::Rendering::Universal::LayerBatch> _get_s_LayerBatches();
    // Set static field: static private UnityEngine.Rendering.Universal.LayerBatch[] s_LayerBatches
    static void _set_s_LayerBatches(::ArrayW<::UnityEngine::Rendering::Universal::LayerBatch> value);
    // Get static field: static private System.UInt32 <maxTextureCount>k__BackingField
    static uint _get_$maxTextureCount$k__BackingField();
    // Set static field: static private System.UInt32 <maxTextureCount>k__BackingField
    static void _set_$maxTextureCount$k__BackingField(uint value);
    // static public System.UInt32 get_maxTextureCount()
    // Offset: 0x5286BAC
    static uint get_maxTextureCount();
    // static private System.Void set_maxTextureCount(System.UInt32 value)
    // Offset: 0x5286BF4
    static void set_maxTextureCount(uint value);
    // static public System.Void InitializeBudget(System.UInt32 maxTextureCount)
    // Offset: 0x5285610
    static void InitializeBudget(uint maxTextureCount);
    // static private System.Boolean CanBatchLightsInLayer(System.Int32 layerIndex1, System.Int32 layerIndex2, UnityEngine.SortingLayer[] sortingLayers, UnityEngine.Rendering.Universal.ILight2DCullResult lightCullResult)
    // Offset: 0x5286C40
    static bool CanBatchLightsInLayer(int layerIndex1, int layerIndex2, ::ArrayW<::UnityEngine::SortingLayer> sortingLayers, ::UnityEngine::Rendering::Universal::ILight2DCullResult* lightCullResult);
    // static private System.Int32 FindUpperBoundInBatch(System.Int32 startLayerIndex, UnityEngine.SortingLayer[] sortingLayers, UnityEngine.Rendering.Universal.ILight2DCullResult lightCullResult)
    // Offset: 0x5287198
    static int FindUpperBoundInBatch(int startLayerIndex, ::ArrayW<::UnityEngine::SortingLayer> sortingLayers, ::UnityEngine::Rendering::Universal::ILight2DCullResult* lightCullResult);
    // static private System.Void InitializeBatchInfos(UnityEngine.SortingLayer[] cachedSortingLayers)
    // Offset: 0x5287200
    static void InitializeBatchInfos(::ArrayW<::UnityEngine::SortingLayer> cachedSortingLayers);
    // static public UnityEngine.Rendering.Universal.LayerBatch[] CalculateBatches(UnityEngine.Rendering.Universal.ILight2DCullResult lightCullResult, out System.Int32 batchCount)
    // Offset: 0x5285B98
    static ::ArrayW<::UnityEngine::Rendering::Universal::LayerBatch> CalculateBatches(::UnityEngine::Rendering::Universal::ILight2DCullResult* lightCullResult, ByRef<int> batchCount);
  }; // UnityEngine.Rendering.Universal.LayerUtility
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::LayerUtility::get_maxTextureCount
// Il2CppName: get_maxTextureCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)()>(&UnityEngine::Rendering::Universal::LayerUtility::get_maxTextureCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::LayerUtility*), "get_maxTextureCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::LayerUtility::set_maxTextureCount
// Il2CppName: set_maxTextureCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint)>(&UnityEngine::Rendering::Universal::LayerUtility::set_maxTextureCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::LayerUtility*), "set_maxTextureCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::LayerUtility::InitializeBudget
// Il2CppName: InitializeBudget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint)>(&UnityEngine::Rendering::Universal::LayerUtility::InitializeBudget)> {
  static const MethodInfo* get() {
    static auto* maxTextureCount = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::LayerUtility*), "InitializeBudget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{maxTextureCount});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::LayerUtility::CanBatchLightsInLayer
// Il2CppName: CanBatchLightsInLayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int, int, ::ArrayW<::UnityEngine::SortingLayer>, ::UnityEngine::Rendering::Universal::ILight2DCullResult*)>(&UnityEngine::Rendering::Universal::LayerUtility::CanBatchLightsInLayer)> {
  static const MethodInfo* get() {
    static auto* layerIndex1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* layerIndex2 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* sortingLayers = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "SortingLayer"), 1)->byval_arg;
    static auto* lightCullResult = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "ILight2DCullResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::LayerUtility*), "CanBatchLightsInLayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{layerIndex1, layerIndex2, sortingLayers, lightCullResult});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::LayerUtility::FindUpperBoundInBatch
// Il2CppName: FindUpperBoundInBatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, ::ArrayW<::UnityEngine::SortingLayer>, ::UnityEngine::Rendering::Universal::ILight2DCullResult*)>(&UnityEngine::Rendering::Universal::LayerUtility::FindUpperBoundInBatch)> {
  static const MethodInfo* get() {
    static auto* startLayerIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* sortingLayers = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "SortingLayer"), 1)->byval_arg;
    static auto* lightCullResult = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "ILight2DCullResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::LayerUtility*), "FindUpperBoundInBatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{startLayerIndex, sortingLayers, lightCullResult});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::LayerUtility::InitializeBatchInfos
// Il2CppName: InitializeBatchInfos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<::UnityEngine::SortingLayer>)>(&UnityEngine::Rendering::Universal::LayerUtility::InitializeBatchInfos)> {
  static const MethodInfo* get() {
    static auto* cachedSortingLayers = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "SortingLayer"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::LayerUtility*), "InitializeBatchInfos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cachedSortingLayers});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::LayerUtility::CalculateBatches
// Il2CppName: CalculateBatches
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Rendering::Universal::LayerBatch> (*)(::UnityEngine::Rendering::Universal::ILight2DCullResult*, ByRef<int>)>(&UnityEngine::Rendering::Universal::LayerUtility::CalculateBatches)> {
  static const MethodInfo* get() {
    static auto* lightCullResult = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "ILight2DCullResult")->byval_arg;
    static auto* batchCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::LayerUtility*), "CalculateBatches", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lightCullResult, batchCount});
  }
};
