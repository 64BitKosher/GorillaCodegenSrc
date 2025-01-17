// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rect
#include "UnityEngine/Rect.hpp"
// Including type: DigitalOpus.MB.Core.MB_TextureTilingTreatment
#include "DigitalOpus/MB/Core/MB_TextureTilingTreatment.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MB_MaterialAndUVRect
  class MB_MaterialAndUVRect;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MB_MaterialAndUVRect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MB_MaterialAndUVRect*, "", "MB_MaterialAndUVRect");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x74
  #pragma pack(push, 1)
  // Autogenerated type: MB_MaterialAndUVRect
  // [TokenAttribute] Offset: FFFFFFFF
  class MB_MaterialAndUVRect : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Material material
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Material* material;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // public UnityEngine.Rect atlasRect
    // Size: 0x10
    // Offset: 0x18
    ::UnityEngine::Rect atlasRect;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rect) == 0x10);
    // public System.String srcObjName
    // Size: 0x8
    // Offset: 0x28
    ::StringW srcObjName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 textureArraySliceIdx
    // Size: 0x4
    // Offset: 0x30
    int textureArraySliceIdx;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean allPropsUseSameTiling
    // Size: 0x1
    // Offset: 0x34
    bool allPropsUseSameTiling;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: allPropsUseSameTiling and: allPropsUseSameTiling_sourceMaterialTiling
    char __padding4[0x3] = {};
    // public UnityEngine.Rect allPropsUseSameTiling_sourceMaterialTiling
    // Size: 0x10
    // Offset: 0x38
    ::UnityEngine::Rect allPropsUseSameTiling_sourceMaterialTiling;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rect) == 0x10);
    // public UnityEngine.Rect allPropsUseSameTiling_samplingEncapsulatinRect
    // Size: 0x10
    // Offset: 0x48
    ::UnityEngine::Rect allPropsUseSameTiling_samplingEncapsulatinRect;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rect) == 0x10);
    // public UnityEngine.Rect propsUseDifferntTiling_srcUVsamplingRect
    // Size: 0x10
    // Offset: 0x58
    ::UnityEngine::Rect propsUseDifferntTiling_srcUVsamplingRect;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rect) == 0x10);
    // public System.Collections.Generic.List`1<UnityEngine.GameObject> objectsThatUse
    // Size: 0x8
    // Offset: 0x68
    ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* objectsThatUse;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*) == 0x8);
    // public DigitalOpus.MB.Core.MB_TextureTilingTreatment tilingTreatment
    // Size: 0x4
    // Offset: 0x70
    ::DigitalOpus::MB::Core::MB_TextureTilingTreatment tilingTreatment;
    // Field size check
    static_assert(sizeof(::DigitalOpus::MB::Core::MB_TextureTilingTreatment) == 0x4);
    public:
    // Get instance field reference: public UnityEngine.Material material
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_material();
    // Get instance field reference: public UnityEngine.Rect atlasRect
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rect& dyn_atlasRect();
    // Get instance field reference: public System.String srcObjName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_srcObjName();
    // Get instance field reference: public System.Int32 textureArraySliceIdx
    [[deprecated("Use field access instead!")]] int& dyn_textureArraySliceIdx();
    // Get instance field reference: public System.Boolean allPropsUseSameTiling
    [[deprecated("Use field access instead!")]] bool& dyn_allPropsUseSameTiling();
    // Get instance field reference: public UnityEngine.Rect allPropsUseSameTiling_sourceMaterialTiling
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rect& dyn_allPropsUseSameTiling_sourceMaterialTiling();
    // Get instance field reference: public UnityEngine.Rect allPropsUseSameTiling_samplingEncapsulatinRect
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rect& dyn_allPropsUseSameTiling_samplingEncapsulatinRect();
    // Get instance field reference: public UnityEngine.Rect propsUseDifferntTiling_srcUVsamplingRect
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rect& dyn_propsUseDifferntTiling_srcUVsamplingRect();
    // Get instance field reference: public System.Collections.Generic.List`1<UnityEngine.GameObject> objectsThatUse
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*& dyn_objectsThatUse();
    // Get instance field reference: public DigitalOpus.MB.Core.MB_TextureTilingTreatment tilingTreatment
    [[deprecated("Use field access instead!")]] ::DigitalOpus::MB::Core::MB_TextureTilingTreatment& dyn_tilingTreatment();
    // public System.Void .ctor(UnityEngine.Material mat, UnityEngine.Rect destRect, System.Boolean allPropsUseSameTiling, UnityEngine.Rect sourceMaterialTiling, UnityEngine.Rect samplingEncapsulatingRect, UnityEngine.Rect srcUVsamplingRect, DigitalOpus.MB.Core.MB_TextureTilingTreatment treatment, System.String objName)
    // Offset: 0x439CCE8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MB_MaterialAndUVRect* New_ctor(::UnityEngine::Material* mat, ::UnityEngine::Rect destRect, bool allPropsUseSameTiling, ::UnityEngine::Rect sourceMaterialTiling, ::UnityEngine::Rect samplingEncapsulatingRect, ::UnityEngine::Rect srcUVsamplingRect, ::DigitalOpus::MB::Core::MB_TextureTilingTreatment treatment, ::StringW objName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MB_MaterialAndUVRect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MB_MaterialAndUVRect*, creationType>(mat, destRect, allPropsUseSameTiling, sourceMaterialTiling, samplingEncapsulatingRect, srcUVsamplingRect, treatment, objName)));
    }
    // public UnityEngine.Rect GetEncapsulatingRect()
    // Offset: 0x439CFC4
    ::UnityEngine::Rect GetEncapsulatingRect();
    // public UnityEngine.Rect GetMaterialTilingRect()
    // Offset: 0x439D004
    ::UnityEngine::Rect GetMaterialTilingRect();
    // public override System.Int32 GetHashCode()
    // Offset: 0x439CDD4
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x439CE28
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
  }; // MB_MaterialAndUVRect
  #pragma pack(pop)
  static check_size<sizeof(MB_MaterialAndUVRect), 112 + sizeof(::DigitalOpus::MB::Core::MB_TextureTilingTreatment)> __GlobalNamespace_MB_MaterialAndUVRectSizeCheck;
  static_assert(sizeof(MB_MaterialAndUVRect) == 0x74);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MB_MaterialAndUVRect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MB_MaterialAndUVRect::GetEncapsulatingRect
// Il2CppName: GetEncapsulatingRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (GlobalNamespace::MB_MaterialAndUVRect::*)()>(&GlobalNamespace::MB_MaterialAndUVRect::GetEncapsulatingRect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MB_MaterialAndUVRect*), "GetEncapsulatingRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MB_MaterialAndUVRect::GetMaterialTilingRect
// Il2CppName: GetMaterialTilingRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (GlobalNamespace::MB_MaterialAndUVRect::*)()>(&GlobalNamespace::MB_MaterialAndUVRect::GetMaterialTilingRect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MB_MaterialAndUVRect*), "GetMaterialTilingRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MB_MaterialAndUVRect::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::MB_MaterialAndUVRect::*)()>(&GlobalNamespace::MB_MaterialAndUVRect::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MB_MaterialAndUVRect*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MB_MaterialAndUVRect::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MB_MaterialAndUVRect::*)(::Il2CppObject*)>(&GlobalNamespace::MB_MaterialAndUVRect::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MB_MaterialAndUVRect*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
