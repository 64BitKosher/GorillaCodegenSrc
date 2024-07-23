// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DigitalOpus.MB.Core.MB3_MeshCombinerSingle
#include "DigitalOpus/MB/Core/MB3_MeshCombinerSingle.hpp"
// Including type: DigitalOpus.MB.Core.MB2_LogLevel
#include "DigitalOpus/MB/Core/MB2_LogLevel.hpp"
// Including type: DigitalOpus.MB.Core.MB_Utility/MeshAnalysisResult
#include "DigitalOpus/MB/Core/MB_Utility_MeshAnalysisResult.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MB2_TextureBakeResults
  class MB2_TextureBakeResults;
  // Forward declaring type: MB_MaterialAndUVRect
  class MB_MaterialAndUVRect;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: GameObject
  class GameObject;
  // Skipping declaration: Rect because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Collections::Specialized
namespace System::Collections::Specialized {
  // Forward declaring type: OrderedDictionary
  class OrderedDictionary;
}
// Forward declaring namespace: DigitalOpus::MB::Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: MB_TextureTilingTreatment
  struct MB_TextureTilingTreatment;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::UVAdjuster_Atlas);
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::UVAdjuster_Atlas*, "DigitalOpus.MB.Core", "MB3_MeshCombinerSingle/UVAdjuster_Atlas");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.MB3_MeshCombinerSingle/UVAdjuster_Atlas
  // [TokenAttribute] Offset: FFFFFFFF
  class MB3_MeshCombinerSingle::UVAdjuster_Atlas : public ::Il2CppObject {
    public:
    public:
    // private MB2_TextureBakeResults textureBakeResults
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::MB2_TextureBakeResults* textureBakeResults;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MB2_TextureBakeResults*) == 0x8);
    // private DigitalOpus.MB.Core.MB2_LogLevel LOG_LEVEL
    // Size: 0x4
    // Offset: 0x18
    ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL;
    // Field size check
    static_assert(sizeof(::DigitalOpus::MB::Core::MB2_LogLevel) == 0x4);
    // Padding between fields: LOG_LEVEL and: numTimesMatAppearsInAtlas
    char __padding1[0x4] = {};
    // private System.Int32[] numTimesMatAppearsInAtlas
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<int> numTimesMatAppearsInAtlas;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // private MB_MaterialAndUVRect[] matsAndSrcUVRect
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::GlobalNamespace::MB_MaterialAndUVRect*> matsAndSrcUVRect;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::MB_MaterialAndUVRect*>) == 0x8);
    // private System.Boolean compareNamesWhenComparingMaterials
    // Size: 0x1
    // Offset: 0x30
    bool compareNamesWhenComparingMaterials;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private MB2_TextureBakeResults textureBakeResults
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MB2_TextureBakeResults*& dyn_textureBakeResults();
    // Get instance field reference: private DigitalOpus.MB.Core.MB2_LogLevel LOG_LEVEL
    [[deprecated("Use field access instead!")]] ::DigitalOpus::MB::Core::MB2_LogLevel& dyn_LOG_LEVEL();
    // Get instance field reference: private System.Int32[] numTimesMatAppearsInAtlas
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_numTimesMatAppearsInAtlas();
    // Get instance field reference: private MB_MaterialAndUVRect[] matsAndSrcUVRect
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::MB_MaterialAndUVRect*>& dyn_matsAndSrcUVRect();
    // Get instance field reference: private System.Boolean compareNamesWhenComparingMaterials
    [[deprecated("Use field access instead!")]] bool& dyn_compareNamesWhenComparingMaterials();
    // public System.Void .ctor(MB2_TextureBakeResults tbr, DigitalOpus.MB.Core.MB2_LogLevel ll)
    // Offset: 0x43CB370
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MB3_MeshCombinerSingle::UVAdjuster_Atlas* New_ctor(::GlobalNamespace::MB2_TextureBakeResults* tbr, ::DigitalOpus::MB::Core::MB2_LogLevel ll) {
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::UVAdjuster_Atlas::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MB3_MeshCombinerSingle::UVAdjuster_Atlas*, creationType>(tbr, ll)));
    }
    // public System.Boolean MapSharedMaterialsToAtlasRects(UnityEngine.Material[] sharedMaterials, System.Boolean checkTargetSubmeshIdxsFromPreviousBake, UnityEngine.Mesh m, DigitalOpus.MB.Core.MB3_MeshCombinerSingle/MeshChannelsCache meshChannelsCache, System.Collections.Generic.Dictionary`2<System.Int32,DigitalOpus.MB.Core.MB_Utility/MeshAnalysisResult[]> meshAnalysisResultsCache, System.Collections.Specialized.OrderedDictionary sourceMats2submeshIdx_map, UnityEngine.GameObject go, DigitalOpus.MB.Core.MB3_MeshCombinerSingle/MB_DynamicGameObject dgoOut)
    // Offset: 0x43CB640
    bool MapSharedMaterialsToAtlasRects(::ArrayW<::UnityEngine::Material*> sharedMaterials, bool checkTargetSubmeshIdxsFromPreviousBake, ::UnityEngine::Mesh* m, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache* meshChannelsCache, ::System::Collections::Generic::Dictionary_2<int, ::ArrayW<::DigitalOpus::MB::Core::MB_Utility::MeshAnalysisResult>>* meshAnalysisResultsCache, ::System::Collections::Specialized::OrderedDictionary* sourceMats2submeshIdx_map, ::UnityEngine::GameObject* go, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MB_DynamicGameObject* dgoOut);
    // public System.Boolean IsSameMaterialInTextureBakeResult(UnityEngine.Material a, UnityEngine.Material b)
    // Offset: 0x43CBED4
    bool IsSameMaterialInTextureBakeResult(::UnityEngine::Material* a, ::UnityEngine::Material* b);
    // public System.Void _copyAndAdjustUVsFromMesh(MB2_TextureBakeResults tbr, DigitalOpus.MB.Core.MB3_MeshCombinerSingle/MB_DynamicGameObject dgo, UnityEngine.Mesh mesh, System.Int32 uvChannel, System.Int32 vertsIdx, UnityEngine.Vector2[] uvsOut, System.Single[] uvsSliceIdx, DigitalOpus.MB.Core.MB3_MeshCombinerSingle/MeshChannelsCache meshChannelsCache)
    // Offset: 0x43CC844
    void _copyAndAdjustUVsFromMesh(::GlobalNamespace::MB2_TextureBakeResults* tbr, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MB_DynamicGameObject* dgo, ::UnityEngine::Mesh* mesh, int uvChannel, int vertsIdx, ::ArrayW<::UnityEngine::Vector2> uvsOut, ::ArrayW<float> uvsSliceIdx, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache* meshChannelsCache);
    // public System.Boolean TryMapMaterialToUVRect(UnityEngine.Material mat, UnityEngine.Mesh m, System.Int32 submeshIdx, System.Int32 idxInResultMats, DigitalOpus.MB.Core.MB3_MeshCombinerSingle/MeshChannelsCache meshChannelCache, System.Collections.Generic.Dictionary`2<System.Int32,DigitalOpus.MB.Core.MB_Utility/MeshAnalysisResult[]> meshAnalysisCache, out DigitalOpus.MB.Core.MB_TextureTilingTreatment tilingTreatment, out UnityEngine.Rect rectInAtlas, out UnityEngine.Rect encapsulatingRectOut, out UnityEngine.Rect sourceMaterialTilingOut, out System.Int32 sliceIdx, ref System.String errorMsg, DigitalOpus.MB.Core.MB2_LogLevel logLevel)
    // Offset: 0x43CBFE4
    bool TryMapMaterialToUVRect(::UnityEngine::Material* mat, ::UnityEngine::Mesh* m, int submeshIdx, int idxInResultMats, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache* meshChannelCache, ::System::Collections::Generic::Dictionary_2<int, ::ArrayW<::DigitalOpus::MB::Core::MB_Utility::MeshAnalysisResult>>* meshAnalysisCache, ByRef<::DigitalOpus::MB::Core::MB_TextureTilingTreatment> tilingTreatment, ByRef<::UnityEngine::Rect> rectInAtlas, ByRef<::UnityEngine::Rect> encapsulatingRectOut, ByRef<::UnityEngine::Rect> sourceMaterialTilingOut, ByRef<int> sliceIdx, ByRef<::StringW> errorMsg, ::DigitalOpus::MB::Core::MB2_LogLevel logLevel);
  }; // DigitalOpus.MB.Core.MB3_MeshCombinerSingle/UVAdjuster_Atlas
  #pragma pack(pop)
  static check_size<sizeof(MB3_MeshCombinerSingle::UVAdjuster_Atlas), 48 + sizeof(bool)> __DigitalOpus_MB_Core_MB3_MeshCombinerSingle_UVAdjuster_AtlasSizeCheck;
  static_assert(sizeof(MB3_MeshCombinerSingle::UVAdjuster_Atlas) == 0x31);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_MeshCombinerSingle::UVAdjuster_Atlas::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_MeshCombinerSingle::UVAdjuster_Atlas::MapSharedMaterialsToAtlasRects
// Il2CppName: MapSharedMaterialsToAtlasRects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::MB3_MeshCombinerSingle::UVAdjuster_Atlas::*)(::ArrayW<::UnityEngine::Material*>, bool, ::UnityEngine::Mesh*, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache*, ::System::Collections::Generic::Dictionary_2<int, ::ArrayW<::DigitalOpus::MB::Core::MB_Utility::MeshAnalysisResult>>*, ::System::Collections::Specialized::OrderedDictionary*, ::UnityEngine::GameObject*, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MB_DynamicGameObject*)>(&DigitalOpus::MB::Core::MB3_MeshCombinerSingle::UVAdjuster_Atlas::MapSharedMaterialsToAtlasRects)> {
  static const MethodInfo* get() {
    static auto* sharedMaterials = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Material"), 1)->byval_arg;
    static auto* checkTargetSubmeshIdxsFromPreviousBake = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    static auto* meshChannelsCache = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB3_MeshCombinerSingle/MeshChannelsCache")->byval_arg;
    static auto* meshAnalysisResultsCache = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB_Utility/MeshAnalysisResult"), 1)})->byval_arg;
    static auto* sourceMats2submeshIdx_map = &::il2cpp_utils::GetClassFromName("System.Collections.Specialized", "OrderedDictionary")->byval_arg;
    static auto* go = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* dgoOut = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB3_MeshCombinerSingle/MB_DynamicGameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_MeshCombinerSingle::UVAdjuster_Atlas*), "MapSharedMaterialsToAtlasRects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sharedMaterials, checkTargetSubmeshIdxsFromPreviousBake, m, meshChannelsCache, meshAnalysisResultsCache, sourceMats2submeshIdx_map, go, dgoOut});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_MeshCombinerSingle::UVAdjuster_Atlas::IsSameMaterialInTextureBakeResult
// Il2CppName: IsSameMaterialInTextureBakeResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::MB3_MeshCombinerSingle::UVAdjuster_Atlas::*)(::UnityEngine::Material*, ::UnityEngine::Material*)>(&DigitalOpus::MB::Core::MB3_MeshCombinerSingle::UVAdjuster_Atlas::IsSameMaterialInTextureBakeResult)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_MeshCombinerSingle::UVAdjuster_Atlas*), "IsSameMaterialInTextureBakeResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_MeshCombinerSingle::UVAdjuster_Atlas::_copyAndAdjustUVsFromMesh
// Il2CppName: _copyAndAdjustUVsFromMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MB3_MeshCombinerSingle::UVAdjuster_Atlas::*)(::GlobalNamespace::MB2_TextureBakeResults*, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MB_DynamicGameObject*, ::UnityEngine::Mesh*, int, int, ::ArrayW<::UnityEngine::Vector2>, ::ArrayW<float>, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache*)>(&DigitalOpus::MB::Core::MB3_MeshCombinerSingle::UVAdjuster_Atlas::_copyAndAdjustUVsFromMesh)> {
  static const MethodInfo* get() {
    static auto* tbr = &::il2cpp_utils::GetClassFromName("", "MB2_TextureBakeResults")->byval_arg;
    static auto* dgo = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB3_MeshCombinerSingle/MB_DynamicGameObject")->byval_arg;
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    static auto* uvChannel = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* vertsIdx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* uvsOut = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2"), 1)->byval_arg;
    static auto* uvsSliceIdx = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* meshChannelsCache = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB3_MeshCombinerSingle/MeshChannelsCache")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_MeshCombinerSingle::UVAdjuster_Atlas*), "_copyAndAdjustUVsFromMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tbr, dgo, mesh, uvChannel, vertsIdx, uvsOut, uvsSliceIdx, meshChannelsCache});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_MeshCombinerSingle::UVAdjuster_Atlas::TryMapMaterialToUVRect
// Il2CppName: TryMapMaterialToUVRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::MB3_MeshCombinerSingle::UVAdjuster_Atlas::*)(::UnityEngine::Material*, ::UnityEngine::Mesh*, int, int, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MeshChannelsCache*, ::System::Collections::Generic::Dictionary_2<int, ::ArrayW<::DigitalOpus::MB::Core::MB_Utility::MeshAnalysisResult>>*, ByRef<::DigitalOpus::MB::Core::MB_TextureTilingTreatment>, ByRef<::UnityEngine::Rect>, ByRef<::UnityEngine::Rect>, ByRef<::UnityEngine::Rect>, ByRef<int>, ByRef<::StringW>, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&DigitalOpus::MB::Core::MB3_MeshCombinerSingle::UVAdjuster_Atlas::TryMapMaterialToUVRect)> {
  static const MethodInfo* get() {
    static auto* mat = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    static auto* submeshIdx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* idxInResultMats = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* meshChannelCache = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB3_MeshCombinerSingle/MeshChannelsCache")->byval_arg;
    static auto* meshAnalysisCache = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB_Utility/MeshAnalysisResult"), 1)})->byval_arg;
    static auto* tilingTreatment = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB_TextureTilingTreatment")->this_arg;
    static auto* rectInAtlas = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->this_arg;
    static auto* encapsulatingRectOut = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->this_arg;
    static auto* sourceMaterialTilingOut = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->this_arg;
    static auto* sliceIdx = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* errorMsg = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    static auto* logLevel = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB2_LogLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_MeshCombinerSingle::UVAdjuster_Atlas*), "TryMapMaterialToUVRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mat, m, submeshIdx, idxInResultMats, meshChannelCache, meshAnalysisCache, tilingTreatment, rectInAtlas, encapsulatingRectOut, sourceMaterialTilingOut, sliceIdx, errorMsg, logLevel});
  }
};