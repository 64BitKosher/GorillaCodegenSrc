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
// Including type: Unity.Collections.NativeArray`1
#include "Unity/Collections/NativeArray_1.hpp"
// Including type: Unity.Mathematics.float2
#include "Unity/Mathematics/float2.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: ValueTuple`2<T1, T2>
  template<typename T1, typename T2>
  struct ValueTuple_2;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: ZBinningJob
  struct ZBinningJob;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ZBinningJob, "UnityEngine.Rendering.Universal", "ZBinningJob");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Rendering.Universal.ZBinningJob
  // [TokenAttribute] Offset: FFFFFFFF
  // [BurstCompileAttribute] Offset: FFFFFFFF
  struct ZBinningJob/*, public ::System::ValueType, public ::Unity::Jobs::IJobFor*/ {
    public:
    public:
    // public Unity.Collections.NativeArray`1<System.UInt32> bins
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    ::Unity::Collections::NativeArray_1<uint> bins;
    // public Unity.Collections.NativeArray`1<Unity.Mathematics.float2> minMaxZs
    // Size: 0xFFFFFFFF
    // Offset: 0x10
    ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2> minMaxZs;
    // public System.Single zBinScale
    // Size: 0x4
    // Offset: 0x20
    float zBinScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single zBinOffset
    // Size: 0x4
    // Offset: 0x24
    float zBinOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 binCount
    // Size: 0x4
    // Offset: 0x28
    int binCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 wordsPerTile
    // Size: 0x4
    // Offset: 0x2C
    int wordsPerTile;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 lightCount
    // Size: 0x4
    // Offset: 0x30
    int lightCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 reflectionProbeCount
    // Size: 0x4
    // Offset: 0x34
    int reflectionProbeCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 batchCount
    // Size: 0x4
    // Offset: 0x38
    int batchCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 viewCount
    // Size: 0x4
    // Offset: 0x3C
    int viewCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean isOrthographic
    // Size: 0x1
    // Offset: 0x40
    bool isOrthographic;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: ZBinningJob
    constexpr ZBinningJob(::Unity::Collections::NativeArray_1<uint> bins_ = {}, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2> minMaxZs_ = {}, float zBinScale_ = {}, float zBinOffset_ = {}, int binCount_ = {}, int wordsPerTile_ = {}, int lightCount_ = {}, int reflectionProbeCount_ = {}, int batchCount_ = {}, int viewCount_ = {}, bool isOrthographic_ = {}) noexcept : bins{bins_}, minMaxZs{minMaxZs_}, zBinScale{zBinScale_}, zBinOffset{zBinOffset_}, binCount{binCount_}, wordsPerTile{wordsPerTile_}, lightCount{lightCount_}, reflectionProbeCount{reflectionProbeCount_}, batchCount{batchCount_}, viewCount{viewCount_}, isOrthographic{isOrthographic_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::Unity::Jobs::IJobFor
    operator ::Unity::Jobs::IJobFor() noexcept {
      return *reinterpret_cast<::Unity::Jobs::IJobFor*>(this);
    }
    // static field const value: static public System.Int32 batchSize
    static constexpr const int batchSize = 128;
    // Get static field: static public System.Int32 batchSize
    static int _get_batchSize();
    // Set static field: static public System.Int32 batchSize
    static void _set_batchSize(int value);
    // static field const value: static public System.Int32 headerLength
    static constexpr const int headerLength = 2;
    // Get static field: static public System.Int32 headerLength
    static int _get_headerLength();
    // Set static field: static public System.Int32 headerLength
    static void _set_headerLength(int value);
    // Get instance field reference: public Unity.Collections.NativeArray`1<System.UInt32> bins
    [[deprecated("Use field access instead!")]] ::Unity::Collections::NativeArray_1<uint>& dyn_bins();
    // Get instance field reference: public Unity.Collections.NativeArray`1<Unity.Mathematics.float2> minMaxZs
    [[deprecated("Use field access instead!")]] ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>& dyn_minMaxZs();
    // Get instance field reference: public System.Single zBinScale
    [[deprecated("Use field access instead!")]] float& dyn_zBinScale();
    // Get instance field reference: public System.Single zBinOffset
    [[deprecated("Use field access instead!")]] float& dyn_zBinOffset();
    // Get instance field reference: public System.Int32 binCount
    [[deprecated("Use field access instead!")]] int& dyn_binCount();
    // Get instance field reference: public System.Int32 wordsPerTile
    [[deprecated("Use field access instead!")]] int& dyn_wordsPerTile();
    // Get instance field reference: public System.Int32 lightCount
    [[deprecated("Use field access instead!")]] int& dyn_lightCount();
    // Get instance field reference: public System.Int32 reflectionProbeCount
    [[deprecated("Use field access instead!")]] int& dyn_reflectionProbeCount();
    // Get instance field reference: public System.Int32 batchCount
    [[deprecated("Use field access instead!")]] int& dyn_batchCount();
    // Get instance field reference: public System.Int32 viewCount
    [[deprecated("Use field access instead!")]] int& dyn_viewCount();
    // Get instance field reference: public System.Boolean isOrthographic
    [[deprecated("Use field access instead!")]] bool& dyn_isOrthographic();
    // static private System.UInt32 EncodeHeader(System.UInt32 min, System.UInt32 max)
    // Offset: 0x52E6000
    static uint EncodeHeader(uint min, uint max);
    // static private System.ValueTuple`2<System.UInt32,System.UInt32> DecodeHeader(System.UInt32 zBin)
    // Offset: 0x52E6008
    static ::System::ValueTuple_2<uint, uint> DecodeHeader(uint zBin);
    // public System.Void Execute(System.Int32 jobIndex)
    // Offset: 0x52E606C
    void Execute(int jobIndex);
    // private System.Void FillZBins(System.Int32 binStart, System.Int32 binEnd, System.Int32 itemStart, System.Int32 itemEnd, System.Int32 headerIndex, System.Int32 itemOffset, System.Int32 binOffset)
    // Offset: 0x52E6180
    void FillZBins(int binStart, int binEnd, int itemStart, int itemEnd, int headerIndex, int itemOffset, int binOffset);
  }; // UnityEngine.Rendering.Universal.ZBinningJob
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ZBinningJob::EncodeHeader
// Il2CppName: EncodeHeader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint, uint)>(&UnityEngine::Rendering::Universal::ZBinningJob::EncodeHeader)> {
  static const MethodInfo* get() {
    static auto* min = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* max = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ZBinningJob), "EncodeHeader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{min, max});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ZBinningJob::DecodeHeader
// Il2CppName: DecodeHeader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<uint, uint> (*)(uint)>(&UnityEngine::Rendering::Universal::ZBinningJob::DecodeHeader)> {
  static const MethodInfo* get() {
    static auto* zBin = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ZBinningJob), "DecodeHeader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{zBin});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ZBinningJob::Execute
// Il2CppName: Execute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::ZBinningJob::*)(int)>(&UnityEngine::Rendering::Universal::ZBinningJob::Execute)> {
  static const MethodInfo* get() {
    static auto* jobIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ZBinningJob), "Execute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{jobIndex});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::ZBinningJob::FillZBins
// Il2CppName: FillZBins
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::ZBinningJob::*)(int, int, int, int, int, int, int)>(&UnityEngine::Rendering::Universal::ZBinningJob::FillZBins)> {
  static const MethodInfo* get() {
    static auto* binStart = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* binEnd = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* itemStart = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* itemEnd = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* headerIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* itemOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* binOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::ZBinningJob), "FillZBins", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{binStart, binEnd, itemStart, itemEnd, headerIndex, itemOffset, binOffset});
  }
};
