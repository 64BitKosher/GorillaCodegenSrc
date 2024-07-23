// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DigitalOpus.MB.Core.MB2_TexturePacker
#include "DigitalOpus/MB/Core/MB2_TexturePacker.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: DigitalOpus::MB::Core
namespace DigitalOpus::MB::Core {
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
  // Forward declaring type: Texture2D
  class Texture2D;
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: MB2_TexturePackerRegular
  class MB2_TexturePackerRegular;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DigitalOpus::MB::Core::MB2_TexturePackerRegular);
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::MB2_TexturePackerRegular*, "DigitalOpus.MB.Core", "MB2_TexturePackerRegular");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.MB2_TexturePackerRegular
  // [TokenAttribute] Offset: FFFFFFFF
  class MB2_TexturePackerRegular : public ::DigitalOpus::MB::Core::MB2_TexturePacker {
    public:
    // Writing base type padding for base size: 0x15 to desired offset: 0x18
    char ___base_padding[0x3] = {};
    // Nested type: ::DigitalOpus::MB::Core::MB2_TexturePackerRegular::ProbeResult
    class ProbeResult;
    // Nested type: ::DigitalOpus::MB::Core::MB2_TexturePackerRegular::Node
    class Node;
    public:
    // private DigitalOpus.MB.Core.MB2_TexturePackerRegular/ProbeResult bestRoot
    // Size: 0x8
    // Offset: 0x18
    ::DigitalOpus::MB::Core::MB2_TexturePackerRegular::ProbeResult* bestRoot;
    // Field size check
    static_assert(sizeof(::DigitalOpus::MB::Core::MB2_TexturePackerRegular::ProbeResult*) == 0x8);
    // public System.Int32 atlasY
    // Size: 0x4
    // Offset: 0x20
    int atlasY;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private DigitalOpus.MB.Core.MB2_TexturePackerRegular/ProbeResult bestRoot
    [[deprecated("Use field access instead!")]] ::DigitalOpus::MB::Core::MB2_TexturePackerRegular::ProbeResult*& dyn_bestRoot();
    // Get instance field reference: public System.Int32 atlasY
    [[deprecated("Use field access instead!")]] int& dyn_atlasY();
    // static private System.Void printTree(DigitalOpus.MB.Core.MB2_TexturePackerRegular/Node r, System.String spc)
    // Offset: 0x43D5D58
    static void printTree(::DigitalOpus::MB::Core::MB2_TexturePackerRegular::Node* r, ::StringW spc);
    // static private System.Void flattenTree(DigitalOpus.MB.Core.MB2_TexturePackerRegular/Node r, System.Collections.Generic.List`1<DigitalOpus.MB.Core.MB2_TexturePacker/Image> putHere)
    // Offset: 0x43D5F78
    static void flattenTree(::DigitalOpus::MB::Core::MB2_TexturePackerRegular::Node* r, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB2_TexturePacker::Image*>* putHere);
    // static private System.Void drawGizmosNode(DigitalOpus.MB.Core.MB2_TexturePackerRegular/Node r)
    // Offset: 0x43D6078
    static void drawGizmosNode(::DigitalOpus::MB::Core::MB2_TexturePackerRegular::Node* r);
    // static private UnityEngine.Texture2D createFilledTex(UnityEngine.Color c, System.Int32 w, System.Int32 h)
    // Offset: 0x43D6260
    static ::UnityEngine::Texture2D* createFilledTex(::UnityEngine::Color c, int w, int h);
    // public System.Void DrawGizmos()
    // Offset: 0x43D6358
    void DrawGizmos();
    // private System.Boolean ProbeSingleAtlas(DigitalOpus.MB.Core.MB2_TexturePacker/Image[] imgsToAdd, System.Int32 idealAtlasW, System.Int32 idealAtlasH, System.Single imgArea, System.Int32 maxAtlasDimX, System.Int32 maxAtlasDimY, DigitalOpus.MB.Core.MB2_TexturePackerRegular/ProbeResult pr)
    // Offset: 0x43D63D8
    bool ProbeSingleAtlas(::ArrayW<::DigitalOpus::MB::Core::MB2_TexturePacker::Image*> imgsToAdd, int idealAtlasW, int idealAtlasH, float imgArea, int maxAtlasDimX, int maxAtlasDimY, ::DigitalOpus::MB::Core::MB2_TexturePackerRegular::ProbeResult* pr);
    // private System.Boolean ProbeMultiAtlas(DigitalOpus.MB.Core.MB2_TexturePacker/Image[] imgsToAdd, System.Int32 idealAtlasW, System.Int32 idealAtlasH, System.Single imgArea, System.Int32 maxAtlasDimX, System.Int32 maxAtlasDimY, DigitalOpus.MB.Core.MB2_TexturePackerRegular/ProbeResult pr)
    // Offset: 0x43D6F0C
    bool ProbeMultiAtlas(::ArrayW<::DigitalOpus::MB::Core::MB2_TexturePacker::Image*> imgsToAdd, int idealAtlasW, int idealAtlasH, float imgArea, int maxAtlasDimX, int maxAtlasDimY, ::DigitalOpus::MB::Core::MB2_TexturePackerRegular::ProbeResult* pr);
    // System.Void GetExtent(DigitalOpus.MB.Core.MB2_TexturePackerRegular/Node r, ref System.Int32 x, ref System.Int32 y)
    // Offset: 0x43D6DFC
    void GetExtent(::DigitalOpus::MB::Core::MB2_TexturePackerRegular::Node* r, ByRef<int> x, ByRef<int> y);
    // private System.Int32 StepWidthHeight(System.Int32 oldVal, System.Int32 step, System.Int32 maxDim)
    // Offset: 0x43D72FC
    int StepWidthHeight(int oldVal, int step, int maxDim);
    // private DigitalOpus.MB.Core.AtlasPackingResult _GetRectsSingleAtlas(System.Collections.Generic.List`1<UnityEngine.Vector2> imgWidthHeights, System.Collections.Generic.List`1<DigitalOpus.MB.Core.AtlasPadding> paddings, System.Int32 maxDimensionX, System.Int32 maxDimensionY, System.Int32 minImageSizeX, System.Int32 minImageSizeY, System.Int32 masterImageSizeX, System.Int32 masterImageSizeY, System.Int32 recursionDepth)
    // Offset: 0x43D8874
    ::DigitalOpus::MB::Core::AtlasPackingResult* _GetRectsSingleAtlas(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* imgWidthHeights, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>* paddings, int maxDimensionX, int maxDimensionY, int minImageSizeX, int minImageSizeY, int masterImageSizeX, int masterImageSizeY, int recursionDepth);
    // private DigitalOpus.MB.Core.AtlasPackingResult[] _GetRectsMultiAtlas(System.Collections.Generic.List`1<UnityEngine.Vector2> imgWidthHeights, System.Collections.Generic.List`1<DigitalOpus.MB.Core.AtlasPadding> paddings, System.Int32 maxDimensionPassedX, System.Int32 maxDimensionPassedY, System.Int32 minImageSizeX, System.Int32 minImageSizeY, System.Int32 masterImageSizeX, System.Int32 masterImageSizeY)
    // Offset: 0x43D7650
    ::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*> _GetRectsMultiAtlas(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* imgWidthHeights, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>* paddings, int maxDimensionPassedX, int maxDimensionPassedY, int minImageSizeX, int minImageSizeY, int masterImageSizeX, int masterImageSizeY);
    // public override DigitalOpus.MB.Core.AtlasPackingResult[] GetRects(System.Collections.Generic.List`1<UnityEngine.Vector2> imgWidthHeights, System.Int32 maxDimensionX, System.Int32 maxDimensionY, System.Int32 atPadding)
    // Offset: 0x43D732C
    // Implemented from: DigitalOpus.MB.Core.MB2_TexturePacker
    // Base method: DigitalOpus.MB.Core.AtlasPackingResult[] MB2_TexturePacker::GetRects(System.Collections.Generic.List`1<UnityEngine.Vector2> imgWidthHeights, System.Int32 maxDimensionX, System.Int32 maxDimensionY, System.Int32 atPadding)
    ::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*> GetRects(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* imgWidthHeights, int maxDimensionX, int maxDimensionY, int atPadding);
    // public override DigitalOpus.MB.Core.AtlasPackingResult[] GetRects(System.Collections.Generic.List`1<UnityEngine.Vector2> imgWidthHeights, System.Collections.Generic.List`1<DigitalOpus.MB.Core.AtlasPadding> paddings, System.Int32 maxDimensionX, System.Int32 maxDimensionY, System.Boolean doMultiAtlas)
    // Offset: 0x43D7484
    // Implemented from: DigitalOpus.MB.Core.MB2_TexturePacker
    // Base method: DigitalOpus.MB.Core.AtlasPackingResult[] MB2_TexturePacker::GetRects(System.Collections.Generic.List`1<UnityEngine.Vector2> imgWidthHeights, System.Collections.Generic.List`1<DigitalOpus.MB.Core.AtlasPadding> paddings, System.Int32 maxDimensionX, System.Int32 maxDimensionY, System.Boolean doMultiAtlas)
    ::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*> GetRects(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* imgWidthHeights, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>* paddings, int maxDimensionX, int maxDimensionY, bool doMultiAtlas);
    // public System.Void .ctor()
    // Offset: 0x43DA1C8
    // Implemented from: DigitalOpus.MB.Core.MB2_TexturePacker
    // Base method: System.Void MB2_TexturePacker::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MB2_TexturePackerRegular* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::MB2_TexturePackerRegular::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MB2_TexturePackerRegular*, creationType>()));
    }
  }; // DigitalOpus.MB.Core.MB2_TexturePackerRegular
  #pragma pack(pop)
  static check_size<sizeof(MB2_TexturePackerRegular), 32 + sizeof(int)> __DigitalOpus_MB_Core_MB2_TexturePackerRegularSizeCheck;
  static_assert(sizeof(MB2_TexturePackerRegular) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB2_TexturePackerRegular::printTree
// Il2CppName: printTree
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::DigitalOpus::MB::Core::MB2_TexturePackerRegular::Node*, ::StringW)>(&DigitalOpus::MB::Core::MB2_TexturePackerRegular::printTree)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB2_TexturePackerRegular/Node")->byval_arg;
    static auto* spc = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB2_TexturePackerRegular*), "printTree", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r, spc});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB2_TexturePackerRegular::flattenTree
// Il2CppName: flattenTree
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::DigitalOpus::MB::Core::MB2_TexturePackerRegular::Node*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB2_TexturePacker::Image*>*)>(&DigitalOpus::MB::Core::MB2_TexturePackerRegular::flattenTree)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB2_TexturePackerRegular/Node")->byval_arg;
    static auto* putHere = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB2_TexturePacker/Image")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB2_TexturePackerRegular*), "flattenTree", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r, putHere});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB2_TexturePackerRegular::drawGizmosNode
// Il2CppName: drawGizmosNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::DigitalOpus::MB::Core::MB2_TexturePackerRegular::Node*)>(&DigitalOpus::MB::Core::MB2_TexturePackerRegular::drawGizmosNode)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB2_TexturePackerRegular/Node")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB2_TexturePackerRegular*), "drawGizmosNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB2_TexturePackerRegular::createFilledTex
// Il2CppName: createFilledTex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Texture2D* (*)(::UnityEngine::Color, int, int)>(&DigitalOpus::MB::Core::MB2_TexturePackerRegular::createFilledTex)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* w = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB2_TexturePackerRegular*), "createFilledTex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c, w, h});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB2_TexturePackerRegular::DrawGizmos
// Il2CppName: DrawGizmos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MB2_TexturePackerRegular::*)()>(&DigitalOpus::MB::Core::MB2_TexturePackerRegular::DrawGizmos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB2_TexturePackerRegular*), "DrawGizmos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB2_TexturePackerRegular::ProbeSingleAtlas
// Il2CppName: ProbeSingleAtlas
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::MB2_TexturePackerRegular::*)(::ArrayW<::DigitalOpus::MB::Core::MB2_TexturePacker::Image*>, int, int, float, int, int, ::DigitalOpus::MB::Core::MB2_TexturePackerRegular::ProbeResult*)>(&DigitalOpus::MB::Core::MB2_TexturePackerRegular::ProbeSingleAtlas)> {
  static const MethodInfo* get() {
    static auto* imgsToAdd = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB2_TexturePacker/Image"), 1)->byval_arg;
    static auto* idealAtlasW = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* idealAtlasH = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* imgArea = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* maxAtlasDimX = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* maxAtlasDimY = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* pr = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB2_TexturePackerRegular/ProbeResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB2_TexturePackerRegular*), "ProbeSingleAtlas", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{imgsToAdd, idealAtlasW, idealAtlasH, imgArea, maxAtlasDimX, maxAtlasDimY, pr});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB2_TexturePackerRegular::ProbeMultiAtlas
// Il2CppName: ProbeMultiAtlas
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::MB2_TexturePackerRegular::*)(::ArrayW<::DigitalOpus::MB::Core::MB2_TexturePacker::Image*>, int, int, float, int, int, ::DigitalOpus::MB::Core::MB2_TexturePackerRegular::ProbeResult*)>(&DigitalOpus::MB::Core::MB2_TexturePackerRegular::ProbeMultiAtlas)> {
  static const MethodInfo* get() {
    static auto* imgsToAdd = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB2_TexturePacker/Image"), 1)->byval_arg;
    static auto* idealAtlasW = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* idealAtlasH = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* imgArea = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* maxAtlasDimX = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* maxAtlasDimY = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* pr = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB2_TexturePackerRegular/ProbeResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB2_TexturePackerRegular*), "ProbeMultiAtlas", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{imgsToAdd, idealAtlasW, idealAtlasH, imgArea, maxAtlasDimX, maxAtlasDimY, pr});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB2_TexturePackerRegular::GetExtent
// Il2CppName: GetExtent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MB2_TexturePackerRegular::*)(::DigitalOpus::MB::Core::MB2_TexturePackerRegular::Node*, ByRef<int>, ByRef<int>)>(&DigitalOpus::MB::Core::MB2_TexturePackerRegular::GetExtent)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB2_TexturePackerRegular/Node")->byval_arg;
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB2_TexturePackerRegular*), "GetExtent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r, x, y});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB2_TexturePackerRegular::StepWidthHeight
// Il2CppName: StepWidthHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (DigitalOpus::MB::Core::MB2_TexturePackerRegular::*)(int, int, int)>(&DigitalOpus::MB::Core::MB2_TexturePackerRegular::StepWidthHeight)> {
  static const MethodInfo* get() {
    static auto* oldVal = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* step = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* maxDim = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB2_TexturePackerRegular*), "StepWidthHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{oldVal, step, maxDim});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB2_TexturePackerRegular::_GetRectsSingleAtlas
// Il2CppName: _GetRectsSingleAtlas
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DigitalOpus::MB::Core::AtlasPackingResult* (DigitalOpus::MB::Core::MB2_TexturePackerRegular::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>*, int, int, int, int, int, int, int)>(&DigitalOpus::MB::Core::MB2_TexturePackerRegular::_GetRectsSingleAtlas)> {
  static const MethodInfo* get() {
    static auto* imgWidthHeights = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")})->byval_arg;
    static auto* paddings = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "AtlasPadding")})->byval_arg;
    static auto* maxDimensionX = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* maxDimensionY = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* minImageSizeX = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* minImageSizeY = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* masterImageSizeX = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* masterImageSizeY = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* recursionDepth = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB2_TexturePackerRegular*), "_GetRectsSingleAtlas", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{imgWidthHeights, paddings, maxDimensionX, maxDimensionY, minImageSizeX, minImageSizeY, masterImageSizeX, masterImageSizeY, recursionDepth});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB2_TexturePackerRegular::_GetRectsMultiAtlas
// Il2CppName: _GetRectsMultiAtlas
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*> (DigitalOpus::MB::Core::MB2_TexturePackerRegular::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>*, int, int, int, int, int, int)>(&DigitalOpus::MB::Core::MB2_TexturePackerRegular::_GetRectsMultiAtlas)> {
  static const MethodInfo* get() {
    static auto* imgWidthHeights = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")})->byval_arg;
    static auto* paddings = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "AtlasPadding")})->byval_arg;
    static auto* maxDimensionPassedX = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* maxDimensionPassedY = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* minImageSizeX = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* minImageSizeY = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* masterImageSizeX = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* masterImageSizeY = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB2_TexturePackerRegular*), "_GetRectsMultiAtlas", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{imgWidthHeights, paddings, maxDimensionPassedX, maxDimensionPassedY, minImageSizeX, minImageSizeY, masterImageSizeX, masterImageSizeY});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB2_TexturePackerRegular::GetRects
// Il2CppName: GetRects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*> (DigitalOpus::MB::Core::MB2_TexturePackerRegular::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, int, int, int)>(&DigitalOpus::MB::Core::MB2_TexturePackerRegular::GetRects)> {
  static const MethodInfo* get() {
    static auto* imgWidthHeights = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")})->byval_arg;
    static auto* maxDimensionX = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* maxDimensionY = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* atPadding = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB2_TexturePackerRegular*), "GetRects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{imgWidthHeights, maxDimensionX, maxDimensionY, atPadding});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB2_TexturePackerRegular::GetRects
// Il2CppName: GetRects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*> (DigitalOpus::MB::Core::MB2_TexturePackerRegular::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::AtlasPadding>*, int, int, bool)>(&DigitalOpus::MB::Core::MB2_TexturePackerRegular::GetRects)> {
  static const MethodInfo* get() {
    static auto* imgWidthHeights = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")})->byval_arg;
    static auto* paddings = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "AtlasPadding")})->byval_arg;
    static auto* maxDimensionX = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* maxDimensionY = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* doMultiAtlas = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB2_TexturePackerRegular*), "GetRects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{imgWidthHeights, paddings, maxDimensionX, maxDimensionY, doMultiAtlas});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB2_TexturePackerRegular::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!