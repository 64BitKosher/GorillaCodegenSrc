// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DigitalOpus.MB.Core.MB3_TextureCombinerPackerMeshBakerHorizontalVertical
#include "DigitalOpus/MB/Core/MB3_TextureCombinerPackerMeshBakerHorizontalVertical.hpp"
// Including type: DigitalOpus.MB.Core.MB3_TextureCombinerPackerMeshBakerHorizontalVertical/IPipeline
#include "DigitalOpus/MB/Core/MB3_TextureCombinerPackerMeshBakerHorizontalVertical_IPipeline.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: DigitalOpus::MB::Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: MB2_PackingAlgorithmEnum
  struct MB2_PackingAlgorithmEnum;
  // Forward declaring type: MB_TexSet
  class MB_TexSet;
  // Forward declaring type: MB_TextureTilingTreatment
  struct MB_TextureTilingTreatment;
  // Forward declaring type: AtlasPadding
  struct AtlasPadding;
  // Forward declaring type: AtlasPackingResult
  class AtlasPackingResult;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rect
  struct Rect;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical::HorizontalPipeline);
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical::HorizontalPipeline*, "DigitalOpus.MB.Core", "MB3_TextureCombinerPackerMeshBakerHorizontalVertical/HorizontalPipeline");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.MB3_TextureCombinerPackerMeshBakerHorizontalVertical/HorizontalPipeline
  // [TokenAttribute] Offset: FFFFFFFF
  class MB3_TextureCombinerPackerMeshBakerHorizontalVertical::HorizontalPipeline : public ::Il2CppObject/*, public ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical::IPipeline*/ {
    public:
    // Creating interface conversion operator: operator ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical::IPipeline
    operator ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical::IPipeline() noexcept {
      return *reinterpret_cast<::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical::IPipeline*>(this);
    }
    // public DigitalOpus.MB.Core.MB2_PackingAlgorithmEnum GetPackingAlg()
    // Offset: 0x43F1F80
    ::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum GetPackingAlg();
    // public System.Void SortTexSetIntoBins(DigitalOpus.MB.Core.MB_TexSet texSet, System.Collections.Generic.List`1<DigitalOpus.MB.Core.MB_TexSet> horizontalVert, System.Collections.Generic.List`1<DigitalOpus.MB.Core.MB_TexSet> regular, System.Int32 maxAtlasWidth, System.Int32 maxAtlasHeight)
    // Offset: 0x43F1F88
    void SortTexSetIntoBins(::DigitalOpus::MB::Core::MB_TexSet* texSet, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>* horizontalVert, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>* regular, int maxAtlasWidth, int maxAtlasHeight);
    // public DigitalOpus.MB.Core.MB_TextureTilingTreatment GetEdge2EdgeTreatment()
    // Offset: 0x43F20C8
    ::DigitalOpus::MB::Core::MB_TextureTilingTreatment GetEdge2EdgeTreatment();
    // public System.Void InitializeAtlasPadding(ref DigitalOpus.MB.Core.AtlasPadding padding, System.Int32 paddingValue)
    // Offset: 0x43F20D0
    void InitializeAtlasPadding(ByRef<::DigitalOpus::MB::Core::AtlasPadding> padding, int paddingValue);
    // public System.Void MergeAtlasPackingResultStackBonAInternal(DigitalOpus.MB.Core.AtlasPackingResult a, DigitalOpus.MB.Core.AtlasPackingResult b, out UnityEngine.Rect AatlasToFinal, out UnityEngine.Rect BatlasToFinal, System.Boolean stretchBToAtlasWidth, System.Int32 maxWidthDim, System.Int32 maxHeightDim, out System.Int32 atlasX, out System.Int32 atlasY)
    // Offset: 0x43F20D8
    void MergeAtlasPackingResultStackBonAInternal(::DigitalOpus::MB::Core::AtlasPackingResult* a, ::DigitalOpus::MB::Core::AtlasPackingResult* b, ByRef<::UnityEngine::Rect> AatlasToFinal, ByRef<::UnityEngine::Rect> BatlasToFinal, bool stretchBToAtlasWidth, int maxWidthDim, int maxHeightDim, ByRef<int> atlasX, ByRef<int> atlasY);
    // public System.Void GetExtraRoomForRegularAtlas(System.Int32 usedHorizontalVertWidth, System.Int32 usedHorizontalVertHeight, System.Int32 maxAtlasWidth, System.Int32 maxAtlasHeight, out System.Int32 atlasRegularMaxWidth, out System.Int32 atlasRegularMaxHeight)
    // Offset: 0x43F2278
    void GetExtraRoomForRegularAtlas(int usedHorizontalVertWidth, int usedHorizontalVertHeight, int maxAtlasWidth, int maxAtlasHeight, ByRef<int> atlasRegularMaxWidth, ByRef<int> atlasRegularMaxHeight);
    // public System.Void .ctor()
    // Offset: 0x43F2288
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MB3_TextureCombinerPackerMeshBakerHorizontalVertical::HorizontalPipeline* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical::HorizontalPipeline::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MB3_TextureCombinerPackerMeshBakerHorizontalVertical::HorizontalPipeline*, creationType>()));
    }
  }; // DigitalOpus.MB.Core.MB3_TextureCombinerPackerMeshBakerHorizontalVertical/HorizontalPipeline
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical::HorizontalPipeline::GetPackingAlg
// Il2CppName: GetPackingAlg
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum (DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical::HorizontalPipeline::*)()>(&DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical::HorizontalPipeline::GetPackingAlg)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical::HorizontalPipeline*), "GetPackingAlg", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical::HorizontalPipeline::SortTexSetIntoBins
// Il2CppName: SortTexSetIntoBins
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical::HorizontalPipeline::*)(::DigitalOpus::MB::Core::MB_TexSet*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>*, int, int)>(&DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical::HorizontalPipeline::SortTexSetIntoBins)> {
  static const MethodInfo* get() {
    static auto* texSet = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB_TexSet")->byval_arg;
    static auto* horizontalVert = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB_TexSet")})->byval_arg;
    static auto* regular = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB_TexSet")})->byval_arg;
    static auto* maxAtlasWidth = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* maxAtlasHeight = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical::HorizontalPipeline*), "SortTexSetIntoBins", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{texSet, horizontalVert, regular, maxAtlasWidth, maxAtlasHeight});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical::HorizontalPipeline::GetEdge2EdgeTreatment
// Il2CppName: GetEdge2EdgeTreatment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DigitalOpus::MB::Core::MB_TextureTilingTreatment (DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical::HorizontalPipeline::*)()>(&DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical::HorizontalPipeline::GetEdge2EdgeTreatment)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical::HorizontalPipeline*), "GetEdge2EdgeTreatment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical::HorizontalPipeline::InitializeAtlasPadding
// Il2CppName: InitializeAtlasPadding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical::HorizontalPipeline::*)(ByRef<::DigitalOpus::MB::Core::AtlasPadding>, int)>(&DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical::HorizontalPipeline::InitializeAtlasPadding)> {
  static const MethodInfo* get() {
    static auto* padding = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "AtlasPadding")->this_arg;
    static auto* paddingValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical::HorizontalPipeline*), "InitializeAtlasPadding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{padding, paddingValue});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical::HorizontalPipeline::MergeAtlasPackingResultStackBonAInternal
// Il2CppName: MergeAtlasPackingResultStackBonAInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical::HorizontalPipeline::*)(::DigitalOpus::MB::Core::AtlasPackingResult*, ::DigitalOpus::MB::Core::AtlasPackingResult*, ByRef<::UnityEngine::Rect>, ByRef<::UnityEngine::Rect>, bool, int, int, ByRef<int>, ByRef<int>)>(&DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical::HorizontalPipeline::MergeAtlasPackingResultStackBonAInternal)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "AtlasPackingResult")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "AtlasPackingResult")->byval_arg;
    static auto* AatlasToFinal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->this_arg;
    static auto* BatlasToFinal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->this_arg;
    static auto* stretchBToAtlasWidth = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* maxWidthDim = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* maxHeightDim = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* atlasX = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* atlasY = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical::HorizontalPipeline*), "MergeAtlasPackingResultStackBonAInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, AatlasToFinal, BatlasToFinal, stretchBToAtlasWidth, maxWidthDim, maxHeightDim, atlasX, atlasY});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical::HorizontalPipeline::GetExtraRoomForRegularAtlas
// Il2CppName: GetExtraRoomForRegularAtlas
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical::HorizontalPipeline::*)(int, int, int, int, ByRef<int>, ByRef<int>)>(&DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical::HorizontalPipeline::GetExtraRoomForRegularAtlas)> {
  static const MethodInfo* get() {
    static auto* usedHorizontalVertWidth = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* usedHorizontalVertHeight = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* maxAtlasWidth = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* maxAtlasHeight = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* atlasRegularMaxWidth = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* atlasRegularMaxHeight = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical::HorizontalPipeline*), "GetExtraRoomForRegularAtlas", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{usedHorizontalVertWidth, usedHorizontalVertHeight, maxAtlasWidth, maxAtlasHeight, atlasRegularMaxWidth, atlasRegularMaxHeight});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerHorizontalVertical::HorizontalPipeline::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
