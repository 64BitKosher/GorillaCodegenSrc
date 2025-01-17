// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: UnityEngine.Rendering.VisibleLight
#include "UnityEngine/Rendering/VisibleLight.hpp"
// Including type: UnityEngine.Rendering.VisibleReflectionProbe
#include "UnityEngine/Rendering/VisibleReflectionProbe.hpp"
// Including type: Unity.Collections.NativeArray`1
#include "Unity/Collections/NativeArray_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: CullingAllocationInfo
  struct CullingAllocationInfo;
  // Forward declaring type: ShadowSplitData
  struct ShadowSplitData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ComputeBuffer
  class ComputeBuffer;
  // Skipping declaration: Bounds because it is already included!
  // Skipping declaration: Matrix4x4 because it is already included!
  // Forward declaring type: CubemapFace
  struct CubemapFace;
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: Unity::Collections
namespace Unity::Collections {
  // Skipping declaration: Allocator because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: CullingResults
  struct CullingResults;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CullingResults, "UnityEngine.Rendering", "CullingResults");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Rendering.CullingResults
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  struct CullingResults/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::Rendering::CullingResults>*/ {
    public:
    public:
    // System.IntPtr ptr
    // Size: 0x8
    // Offset: 0x0
    ::System::IntPtr ptr;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // private UnityEngine.Rendering.CullingAllocationInfo* m_AllocationInfo
    // Size: 0x8
    // Offset: 0x8
    ::UnityEngine::Rendering::CullingAllocationInfo* m_AllocationInfo;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::CullingAllocationInfo*) == 0x8);
    public:
    // Creating value type constructor for type: CullingResults
    constexpr CullingResults(::System::IntPtr ptr_ = {}, ::UnityEngine::Rendering::CullingAllocationInfo* m_AllocationInfo_ = {}) noexcept : ptr{ptr_}, m_AllocationInfo{m_AllocationInfo_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::Rendering::CullingResults>
    operator ::System::IEquatable_1<::UnityEngine::Rendering::CullingResults>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::Rendering::CullingResults>*>(this);
    }
    // Get instance field reference: System.IntPtr ptr
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_ptr();
    // Get instance field reference: private UnityEngine.Rendering.CullingAllocationInfo* m_AllocationInfo
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::CullingAllocationInfo*& dyn_m_AllocationInfo();
    // static private System.Int32 GetLightIndexCount(System.IntPtr cullingResultsPtr)
    // Offset: 0x54E689C
    static int GetLightIndexCount(::System::IntPtr cullingResultsPtr);
    // static private System.Int32 GetReflectionProbeIndexCount(System.IntPtr cullingResultsPtr)
    // Offset: 0x54E68D8
    static int GetReflectionProbeIndexCount(::System::IntPtr cullingResultsPtr);
    // static private System.Void FillLightAndReflectionProbeIndices(System.IntPtr cullingResultsPtr, UnityEngine.ComputeBuffer computeBuffer)
    // Offset: 0x54E6914
    static void FillLightAndReflectionProbeIndices(::System::IntPtr cullingResultsPtr, ::UnityEngine::ComputeBuffer* computeBuffer);
    // static private System.Int32 GetLightIndexMapSize(System.IntPtr cullingResultsPtr)
    // Offset: 0x54E6958
    static int GetLightIndexMapSize(::System::IntPtr cullingResultsPtr);
    // static private System.Void FillLightIndexMap(System.IntPtr cullingResultsPtr, System.IntPtr indexMapPtr, System.Int32 indexMapSize)
    // Offset: 0x54E6994
    static void FillLightIndexMap(::System::IntPtr cullingResultsPtr, ::System::IntPtr indexMapPtr, int indexMapSize);
    // static private System.Void SetLightIndexMap(System.IntPtr cullingResultsPtr, System.IntPtr indexMapPtr, System.Int32 indexMapSize)
    // Offset: 0x54E69E8
    static void SetLightIndexMap(::System::IntPtr cullingResultsPtr, ::System::IntPtr indexMapPtr, int indexMapSize);
    // static private System.Boolean GetShadowCasterBounds(System.IntPtr cullingResultsPtr, System.Int32 lightIndex, out UnityEngine.Bounds bounds)
    // Offset: 0x54E6A3C
    static bool GetShadowCasterBounds(::System::IntPtr cullingResultsPtr, int lightIndex, ByRef<::UnityEngine::Bounds> bounds);
    // static private System.Boolean ComputeSpotShadowMatricesAndCullingPrimitives(System.IntPtr cullingResultsPtr, System.Int32 activeLightIndex, out UnityEngine.Matrix4x4 viewMatrix, out UnityEngine.Matrix4x4 projMatrix, out UnityEngine.Rendering.ShadowSplitData shadowSplitData)
    // Offset: 0x54E6A90
    static bool ComputeSpotShadowMatricesAndCullingPrimitives(::System::IntPtr cullingResultsPtr, int activeLightIndex, ByRef<::UnityEngine::Matrix4x4> viewMatrix, ByRef<::UnityEngine::Matrix4x4> projMatrix, ByRef<::UnityEngine::Rendering::ShadowSplitData> shadowSplitData);
    // static private System.Boolean ComputePointShadowMatricesAndCullingPrimitives(System.IntPtr cullingResultsPtr, System.Int32 activeLightIndex, UnityEngine.CubemapFace cubemapFace, System.Single fovBias, out UnityEngine.Matrix4x4 viewMatrix, out UnityEngine.Matrix4x4 projMatrix, out UnityEngine.Rendering.ShadowSplitData shadowSplitData)
    // Offset: 0x54E6AFC
    static bool ComputePointShadowMatricesAndCullingPrimitives(::System::IntPtr cullingResultsPtr, int activeLightIndex, ::UnityEngine::CubemapFace cubemapFace, float fovBias, ByRef<::UnityEngine::Matrix4x4> viewMatrix, ByRef<::UnityEngine::Matrix4x4> projMatrix, ByRef<::UnityEngine::Rendering::ShadowSplitData> shadowSplitData);
    // static private System.Boolean ComputeDirectionalShadowMatricesAndCullingPrimitives(System.IntPtr cullingResultsPtr, System.Int32 activeLightIndex, System.Int32 splitIndex, System.Int32 splitCount, UnityEngine.Vector3 splitRatio, System.Int32 shadowResolution, System.Single shadowNearPlaneOffset, out UnityEngine.Matrix4x4 viewMatrix, out UnityEngine.Matrix4x4 projMatrix, out UnityEngine.Rendering.ShadowSplitData shadowSplitData)
    // Offset: 0x54E6B80
    static bool ComputeDirectionalShadowMatricesAndCullingPrimitives(::System::IntPtr cullingResultsPtr, int activeLightIndex, int splitIndex, int splitCount, ::UnityEngine::Vector3 splitRatio, int shadowResolution, float shadowNearPlaneOffset, ByRef<::UnityEngine::Matrix4x4> viewMatrix, ByRef<::UnityEngine::Matrix4x4> projMatrix, ByRef<::UnityEngine::Rendering::ShadowSplitData> shadowSplitData);
    // public Unity.Collections.NativeArray`1<UnityEngine.Rendering.VisibleLight> get_visibleLights()
    // Offset: 0x54E6CE4
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> get_visibleLights();
    // public Unity.Collections.NativeArray`1<UnityEngine.Rendering.VisibleReflectionProbe> get_visibleReflectionProbes()
    // Offset: 0x54E6D40
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleReflectionProbe> get_visibleReflectionProbes();
    // private Unity.Collections.NativeArray`1<T> GetNativeArray(System.Void* dataPointer, System.Int32 length)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    ::Unity::Collections::NativeArray_1<T> GetNativeArray(void* dataPointer, int length) {
      static_assert(std::is_convertible_v<T, ::System::ValueType*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::CullingResults::GetNativeArray");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "GetNativeArray", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(dataPointer), ::il2cpp_utils::ExtractType(length)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>, false>(this, ___generic__method, dataPointer, length);
    }
    // public System.Int32 get_lightAndReflectionProbeIndexCount()
    // Offset: 0x54E6D9C
    int get_lightAndReflectionProbeIndexCount();
    // public System.Void FillLightAndReflectionProbeIndices(UnityEngine.ComputeBuffer computeBuffer)
    // Offset: 0x54E6E14
    void FillLightAndReflectionProbeIndices(::UnityEngine::ComputeBuffer* computeBuffer);
    // public Unity.Collections.NativeArray`1<System.Int32> GetLightIndexMap(Unity.Collections.Allocator allocator)
    // Offset: 0x54E6E58
    ::Unity::Collections::NativeArray_1<int> GetLightIndexMap(::Unity::Collections::Allocator allocator);
    // public System.Void SetLightIndexMap(Unity.Collections.NativeArray`1<System.Int32> lightIndexMap)
    // Offset: 0x54E6F64
    void SetLightIndexMap(::Unity::Collections::NativeArray_1<int> lightIndexMap);
    // public System.Boolean GetShadowCasterBounds(System.Int32 lightIndex, out UnityEngine.Bounds outBounds)
    // Offset: 0x54E7000
    bool GetShadowCasterBounds(int lightIndex, ByRef<::UnityEngine::Bounds> outBounds);
    // public System.Boolean ComputeSpotShadowMatricesAndCullingPrimitives(System.Int32 activeLightIndex, out UnityEngine.Matrix4x4 viewMatrix, out UnityEngine.Matrix4x4 projMatrix, out UnityEngine.Rendering.ShadowSplitData shadowSplitData)
    // Offset: 0x54E7054
    bool ComputeSpotShadowMatricesAndCullingPrimitives(int activeLightIndex, ByRef<::UnityEngine::Matrix4x4> viewMatrix, ByRef<::UnityEngine::Matrix4x4> projMatrix, ByRef<::UnityEngine::Rendering::ShadowSplitData> shadowSplitData);
    // public System.Boolean ComputePointShadowMatricesAndCullingPrimitives(System.Int32 activeLightIndex, UnityEngine.CubemapFace cubemapFace, System.Single fovBias, out UnityEngine.Matrix4x4 viewMatrix, out UnityEngine.Matrix4x4 projMatrix, out UnityEngine.Rendering.ShadowSplitData shadowSplitData)
    // Offset: 0x54E70C0
    bool ComputePointShadowMatricesAndCullingPrimitives(int activeLightIndex, ::UnityEngine::CubemapFace cubemapFace, float fovBias, ByRef<::UnityEngine::Matrix4x4> viewMatrix, ByRef<::UnityEngine::Matrix4x4> projMatrix, ByRef<::UnityEngine::Rendering::ShadowSplitData> shadowSplitData);
    // public System.Boolean ComputeDirectionalShadowMatricesAndCullingPrimitives(System.Int32 activeLightIndex, System.Int32 splitIndex, System.Int32 splitCount, UnityEngine.Vector3 splitRatio, System.Int32 shadowResolution, System.Single shadowNearPlaneOffset, out UnityEngine.Matrix4x4 viewMatrix, out UnityEngine.Matrix4x4 projMatrix, out UnityEngine.Rendering.ShadowSplitData shadowSplitData)
    // Offset: 0x54E7144
    bool ComputeDirectionalShadowMatricesAndCullingPrimitives(int activeLightIndex, int splitIndex, int splitCount, ::UnityEngine::Vector3 splitRatio, int shadowResolution, float shadowNearPlaneOffset, ByRef<::UnityEngine::Matrix4x4> viewMatrix, ByRef<::UnityEngine::Matrix4x4> projMatrix, ByRef<::UnityEngine::Rendering::ShadowSplitData> shadowSplitData);
    // public System.Boolean Equals(UnityEngine.Rendering.CullingResults other)
    // Offset: 0x54E714C
    bool Equals(::UnityEngine::Rendering::CullingResults other);
    // static private System.Boolean ComputeDirectionalShadowMatricesAndCullingPrimitives_Injected(System.IntPtr cullingResultsPtr, System.Int32 activeLightIndex, System.Int32 splitIndex, System.Int32 splitCount, ref UnityEngine.Vector3 splitRatio, System.Int32 shadowResolution, System.Single shadowNearPlaneOffset, out UnityEngine.Matrix4x4 viewMatrix, out UnityEngine.Matrix4x4 projMatrix, out UnityEngine.Rendering.ShadowSplitData shadowSplitData)
    // Offset: 0x54E6C38
    static bool ComputeDirectionalShadowMatricesAndCullingPrimitives_Injected(::System::IntPtr cullingResultsPtr, int activeLightIndex, int splitIndex, int splitCount, ByRef<::UnityEngine::Vector3> splitRatio, int shadowResolution, float shadowNearPlaneOffset, ByRef<::UnityEngine::Matrix4x4> viewMatrix, ByRef<::UnityEngine::Matrix4x4> projMatrix, ByRef<::UnityEngine::Rendering::ShadowSplitData> shadowSplitData);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x54E71DC
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x54E7254
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.Rendering.CullingResults
  #pragma pack(pop)
  static check_size<sizeof(CullingResults), 8 + sizeof(::UnityEngine::Rendering::CullingAllocationInfo*)> __UnityEngine_Rendering_CullingResultsSizeCheck;
  static_assert(sizeof(CullingResults) == 0x10);
  // static public System.Boolean op_Equality(UnityEngine.Rendering.CullingResults left, UnityEngine.Rendering.CullingResults right)
  // Offset: 0x54E727C
  bool operator ==(const ::UnityEngine::Rendering::CullingResults& left, const ::UnityEngine::Rendering::CullingResults& right);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::CullingResults::GetLightIndexCount
// Il2CppName: GetLightIndexCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::IntPtr)>(&UnityEngine::Rendering::CullingResults::GetLightIndexCount)> {
  static const MethodInfo* get() {
    static auto* cullingResultsPtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CullingResults), "GetLightIndexCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cullingResultsPtr});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CullingResults::GetReflectionProbeIndexCount
// Il2CppName: GetReflectionProbeIndexCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::IntPtr)>(&UnityEngine::Rendering::CullingResults::GetReflectionProbeIndexCount)> {
  static const MethodInfo* get() {
    static auto* cullingResultsPtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CullingResults), "GetReflectionProbeIndexCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cullingResultsPtr});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CullingResults::FillLightAndReflectionProbeIndices
// Il2CppName: FillLightAndReflectionProbeIndices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::ComputeBuffer*)>(&UnityEngine::Rendering::CullingResults::FillLightAndReflectionProbeIndices)> {
  static const MethodInfo* get() {
    static auto* cullingResultsPtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* computeBuffer = &::il2cpp_utils::GetClassFromName("UnityEngine", "ComputeBuffer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CullingResults), "FillLightAndReflectionProbeIndices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cullingResultsPtr, computeBuffer});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CullingResults::GetLightIndexMapSize
// Il2CppName: GetLightIndexMapSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::IntPtr)>(&UnityEngine::Rendering::CullingResults::GetLightIndexMapSize)> {
  static const MethodInfo* get() {
    static auto* cullingResultsPtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CullingResults), "GetLightIndexMapSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cullingResultsPtr});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CullingResults::FillLightIndexMap
// Il2CppName: FillLightIndexMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, int)>(&UnityEngine::Rendering::CullingResults::FillLightIndexMap)> {
  static const MethodInfo* get() {
    static auto* cullingResultsPtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* indexMapPtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* indexMapSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CullingResults), "FillLightIndexMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cullingResultsPtr, indexMapPtr, indexMapSize});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CullingResults::SetLightIndexMap
// Il2CppName: SetLightIndexMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, int)>(&UnityEngine::Rendering::CullingResults::SetLightIndexMap)> {
  static const MethodInfo* get() {
    static auto* cullingResultsPtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* indexMapPtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* indexMapSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CullingResults), "SetLightIndexMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cullingResultsPtr, indexMapPtr, indexMapSize});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CullingResults::GetShadowCasterBounds
// Il2CppName: GetShadowCasterBounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, int, ByRef<::UnityEngine::Bounds>)>(&UnityEngine::Rendering::CullingResults::GetShadowCasterBounds)> {
  static const MethodInfo* get() {
    static auto* cullingResultsPtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* lightIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* bounds = &::il2cpp_utils::GetClassFromName("UnityEngine", "Bounds")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CullingResults), "GetShadowCasterBounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cullingResultsPtr, lightIndex, bounds});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CullingResults::ComputeSpotShadowMatricesAndCullingPrimitives
// Il2CppName: ComputeSpotShadowMatricesAndCullingPrimitives
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, int, ByRef<::UnityEngine::Matrix4x4>, ByRef<::UnityEngine::Matrix4x4>, ByRef<::UnityEngine::Rendering::ShadowSplitData>)>(&UnityEngine::Rendering::CullingResults::ComputeSpotShadowMatricesAndCullingPrimitives)> {
  static const MethodInfo* get() {
    static auto* cullingResultsPtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* activeLightIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* viewMatrix = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->this_arg;
    static auto* projMatrix = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->this_arg;
    static auto* shadowSplitData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ShadowSplitData")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CullingResults), "ComputeSpotShadowMatricesAndCullingPrimitives", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cullingResultsPtr, activeLightIndex, viewMatrix, projMatrix, shadowSplitData});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CullingResults::ComputePointShadowMatricesAndCullingPrimitives
// Il2CppName: ComputePointShadowMatricesAndCullingPrimitives
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, int, ::UnityEngine::CubemapFace, float, ByRef<::UnityEngine::Matrix4x4>, ByRef<::UnityEngine::Matrix4x4>, ByRef<::UnityEngine::Rendering::ShadowSplitData>)>(&UnityEngine::Rendering::CullingResults::ComputePointShadowMatricesAndCullingPrimitives)> {
  static const MethodInfo* get() {
    static auto* cullingResultsPtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* activeLightIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cubemapFace = &::il2cpp_utils::GetClassFromName("UnityEngine", "CubemapFace")->byval_arg;
    static auto* fovBias = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* viewMatrix = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->this_arg;
    static auto* projMatrix = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->this_arg;
    static auto* shadowSplitData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ShadowSplitData")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CullingResults), "ComputePointShadowMatricesAndCullingPrimitives", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cullingResultsPtr, activeLightIndex, cubemapFace, fovBias, viewMatrix, projMatrix, shadowSplitData});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CullingResults::ComputeDirectionalShadowMatricesAndCullingPrimitives
// Il2CppName: ComputeDirectionalShadowMatricesAndCullingPrimitives
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, int, int, int, ::UnityEngine::Vector3, int, float, ByRef<::UnityEngine::Matrix4x4>, ByRef<::UnityEngine::Matrix4x4>, ByRef<::UnityEngine::Rendering::ShadowSplitData>)>(&UnityEngine::Rendering::CullingResults::ComputeDirectionalShadowMatricesAndCullingPrimitives)> {
  static const MethodInfo* get() {
    static auto* cullingResultsPtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* activeLightIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* splitIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* splitCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* splitRatio = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* shadowResolution = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* shadowNearPlaneOffset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* viewMatrix = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->this_arg;
    static auto* projMatrix = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->this_arg;
    static auto* shadowSplitData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ShadowSplitData")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CullingResults), "ComputeDirectionalShadowMatricesAndCullingPrimitives", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cullingResultsPtr, activeLightIndex, splitIndex, splitCount, splitRatio, shadowResolution, shadowNearPlaneOffset, viewMatrix, projMatrix, shadowSplitData});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CullingResults::get_visibleLights
// Il2CppName: get_visibleLights
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> (UnityEngine::Rendering::CullingResults::*)()>(&UnityEngine::Rendering::CullingResults::get_visibleLights)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CullingResults), "get_visibleLights", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CullingResults::get_visibleReflectionProbes
// Il2CppName: get_visibleReflectionProbes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleReflectionProbe> (UnityEngine::Rendering::CullingResults::*)()>(&UnityEngine::Rendering::CullingResults::get_visibleReflectionProbes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CullingResults), "get_visibleReflectionProbes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CullingResults::GetNativeArray
// Il2CppName: GetNativeArray
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Rendering::CullingResults::get_lightAndReflectionProbeIndexCount
// Il2CppName: get_lightAndReflectionProbeIndexCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::CullingResults::*)()>(&UnityEngine::Rendering::CullingResults::get_lightAndReflectionProbeIndexCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CullingResults), "get_lightAndReflectionProbeIndexCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CullingResults::FillLightAndReflectionProbeIndices
// Il2CppName: FillLightAndReflectionProbeIndices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::CullingResults::*)(::UnityEngine::ComputeBuffer*)>(&UnityEngine::Rendering::CullingResults::FillLightAndReflectionProbeIndices)> {
  static const MethodInfo* get() {
    static auto* computeBuffer = &::il2cpp_utils::GetClassFromName("UnityEngine", "ComputeBuffer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CullingResults), "FillLightAndReflectionProbeIndices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{computeBuffer});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CullingResults::GetLightIndexMap
// Il2CppName: GetLightIndexMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeArray_1<int> (UnityEngine::Rendering::CullingResults::*)(::Unity::Collections::Allocator)>(&UnityEngine::Rendering::CullingResults::GetLightIndexMap)> {
  static const MethodInfo* get() {
    static auto* allocator = &::il2cpp_utils::GetClassFromName("Unity.Collections", "Allocator")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CullingResults), "GetLightIndexMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{allocator});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CullingResults::SetLightIndexMap
// Il2CppName: SetLightIndexMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::CullingResults::*)(::Unity::Collections::NativeArray_1<int>)>(&UnityEngine::Rendering::CullingResults::SetLightIndexMap)> {
  static const MethodInfo* get() {
    static auto* lightIndexMap = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CullingResults), "SetLightIndexMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lightIndexMap});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CullingResults::GetShadowCasterBounds
// Il2CppName: GetShadowCasterBounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::CullingResults::*)(int, ByRef<::UnityEngine::Bounds>)>(&UnityEngine::Rendering::CullingResults::GetShadowCasterBounds)> {
  static const MethodInfo* get() {
    static auto* lightIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outBounds = &::il2cpp_utils::GetClassFromName("UnityEngine", "Bounds")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CullingResults), "GetShadowCasterBounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lightIndex, outBounds});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CullingResults::ComputeSpotShadowMatricesAndCullingPrimitives
// Il2CppName: ComputeSpotShadowMatricesAndCullingPrimitives
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::CullingResults::*)(int, ByRef<::UnityEngine::Matrix4x4>, ByRef<::UnityEngine::Matrix4x4>, ByRef<::UnityEngine::Rendering::ShadowSplitData>)>(&UnityEngine::Rendering::CullingResults::ComputeSpotShadowMatricesAndCullingPrimitives)> {
  static const MethodInfo* get() {
    static auto* activeLightIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* viewMatrix = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->this_arg;
    static auto* projMatrix = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->this_arg;
    static auto* shadowSplitData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ShadowSplitData")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CullingResults), "ComputeSpotShadowMatricesAndCullingPrimitives", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{activeLightIndex, viewMatrix, projMatrix, shadowSplitData});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CullingResults::ComputePointShadowMatricesAndCullingPrimitives
// Il2CppName: ComputePointShadowMatricesAndCullingPrimitives
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::CullingResults::*)(int, ::UnityEngine::CubemapFace, float, ByRef<::UnityEngine::Matrix4x4>, ByRef<::UnityEngine::Matrix4x4>, ByRef<::UnityEngine::Rendering::ShadowSplitData>)>(&UnityEngine::Rendering::CullingResults::ComputePointShadowMatricesAndCullingPrimitives)> {
  static const MethodInfo* get() {
    static auto* activeLightIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cubemapFace = &::il2cpp_utils::GetClassFromName("UnityEngine", "CubemapFace")->byval_arg;
    static auto* fovBias = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* viewMatrix = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->this_arg;
    static auto* projMatrix = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->this_arg;
    static auto* shadowSplitData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ShadowSplitData")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CullingResults), "ComputePointShadowMatricesAndCullingPrimitives", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{activeLightIndex, cubemapFace, fovBias, viewMatrix, projMatrix, shadowSplitData});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CullingResults::ComputeDirectionalShadowMatricesAndCullingPrimitives
// Il2CppName: ComputeDirectionalShadowMatricesAndCullingPrimitives
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::CullingResults::*)(int, int, int, ::UnityEngine::Vector3, int, float, ByRef<::UnityEngine::Matrix4x4>, ByRef<::UnityEngine::Matrix4x4>, ByRef<::UnityEngine::Rendering::ShadowSplitData>)>(&UnityEngine::Rendering::CullingResults::ComputeDirectionalShadowMatricesAndCullingPrimitives)> {
  static const MethodInfo* get() {
    static auto* activeLightIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* splitIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* splitCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* splitRatio = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* shadowResolution = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* shadowNearPlaneOffset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* viewMatrix = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->this_arg;
    static auto* projMatrix = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->this_arg;
    static auto* shadowSplitData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ShadowSplitData")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CullingResults), "ComputeDirectionalShadowMatricesAndCullingPrimitives", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{activeLightIndex, splitIndex, splitCount, splitRatio, shadowResolution, shadowNearPlaneOffset, viewMatrix, projMatrix, shadowSplitData});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CullingResults::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::CullingResults::*)(::UnityEngine::Rendering::CullingResults)>(&UnityEngine::Rendering::CullingResults::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "CullingResults")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CullingResults), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CullingResults::ComputeDirectionalShadowMatricesAndCullingPrimitives_Injected
// Il2CppName: ComputeDirectionalShadowMatricesAndCullingPrimitives_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, int, int, int, ByRef<::UnityEngine::Vector3>, int, float, ByRef<::UnityEngine::Matrix4x4>, ByRef<::UnityEngine::Matrix4x4>, ByRef<::UnityEngine::Rendering::ShadowSplitData>)>(&UnityEngine::Rendering::CullingResults::ComputeDirectionalShadowMatricesAndCullingPrimitives_Injected)> {
  static const MethodInfo* get() {
    static auto* cullingResultsPtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* activeLightIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* splitIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* splitCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* splitRatio = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* shadowResolution = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* shadowNearPlaneOffset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* viewMatrix = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->this_arg;
    static auto* projMatrix = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->this_arg;
    static auto* shadowSplitData = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ShadowSplitData")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CullingResults), "ComputeDirectionalShadowMatricesAndCullingPrimitives_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cullingResultsPtr, activeLightIndex, splitIndex, splitCount, splitRatio, shadowResolution, shadowNearPlaneOffset, viewMatrix, projMatrix, shadowSplitData});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CullingResults::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::CullingResults::*)(::Il2CppObject*)>(&UnityEngine::Rendering::CullingResults::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CullingResults), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CullingResults::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::CullingResults::*)()>(&UnityEngine::Rendering::CullingResults::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::CullingResults), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::CullingResults::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
