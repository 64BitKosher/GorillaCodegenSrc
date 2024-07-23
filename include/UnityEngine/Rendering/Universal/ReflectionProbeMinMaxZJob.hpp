// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Unity.Jobs.IJobFor
#include "Unity/Jobs/IJobFor.hpp"
// Including type: UnityEngine.Rendering.Universal.Fixed2`1
#include "UnityEngine/Rendering/Universal/Fixed2_1.hpp"
// Including type: Unity.Mathematics.float4x4
#include "Unity/Mathematics/float4x4.hpp"
// Including type: Unity.Collections.NativeArray`1
#include "Unity/Collections/NativeArray_1.hpp"
// Including type: UnityEngine.Rendering.VisibleReflectionProbe
#include "UnityEngine/Rendering/VisibleReflectionProbe.hpp"
// Including type: Unity.Mathematics.float2
#include "Unity/Mathematics/float2.hpp"
// Completed includes
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: ReflectionProbeMinMaxZJob
  struct ReflectionProbeMinMaxZJob;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ReflectionProbeMinMaxZJob, "UnityEngine.Rendering.Universal", "ReflectionProbeMinMaxZJob");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Rendering.Universal.ReflectionProbeMinMaxZJob
  // [TokenAttribute] Offset: FFFFFFFF
  // [BurstCompileAttribute] Offset: FFFFFFFF
  struct ReflectionProbeMinMaxZJob/*, public ::System::ValueType, public ::Unity::Jobs::IJobFor*/ {
    public:
    public:
    // public UnityEngine.Rendering.Universal.Fixed2`1<Unity.Mathematics.float4x4> worldToViews
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    ::UnityEngine::Rendering::Universal::Fixed2_1<::Unity::Mathematics::float4x4> worldToViews;
    // public Unity.Collections.NativeArray`1<UnityEngine.Rendering.VisibleReflectionProbe> reflectionProbes
    // Size: 0xFFFFFFFF
    // Offset: 0x80
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleReflectionProbe> reflectionProbes;
    // public Unity.Collections.NativeArray`1<Unity.Mathematics.float2> minMaxZs
    // Size: 0xFFFFFFFF
    // Offset: 0x90
    ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2> minMaxZs;
    public:
    // Creating value type constructor for type: ReflectionProbeMinMaxZJob
    constexpr ReflectionProbeMinMaxZJob(::UnityEngine::Rendering::Universal::Fixed2_1<::Unity::Mathematics::float4x4> worldToViews_ = {}, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleReflectionProbe> reflectionProbes_ = {}, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2> minMaxZs_ = {}) noexcept : worldToViews{worldToViews_}, reflectionProbes{reflectionProbes_}, minMaxZs{minMaxZs_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::Unity::Jobs::IJobFor
    operator ::Unity::Jobs::IJobFor() noexcept {
      return *reinterpret_cast<::Unity::Jobs::IJobFor*>(this);
    }
    // Get instance field reference: public UnityEngine.Rendering.Universal.Fixed2`1<Unity.Mathematics.float4x4> worldToViews
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::Fixed2_1<::Unity::Mathematics::float4x4>& dyn_worldToViews();
    // Get instance field reference: public Unity.Collections.NativeArray`1<UnityEngine.Rendering.VisibleReflectionProbe> reflectionProbes
    [[deprecated("Use field access instead!")]] ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleReflectionProbe>& dyn_reflectionProbes();
    // Get instance field reference: public Unity.Collections.NativeArray`1<Unity.Mathematics.float2> minMaxZs
    [[deprecated("Use field access instead!")]] ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>& dyn_minMaxZs();
    // public System.Void Execute(System.Int32 index)
    // Offset: 0x52E0908
    void Execute(int index);
  }; // UnityEngine.Rendering.Universal.ReflectionProbeMinMaxZJob
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ReflectionProbeMinMaxZJob::Execute
// Il2CppName: Execute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::ReflectionProbeMinMaxZJob::*)(int)>(&UnityEngine::Rendering::Universal::ReflectionProbeMinMaxZJob::Execute)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ReflectionProbeMinMaxZJob), "Execute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
