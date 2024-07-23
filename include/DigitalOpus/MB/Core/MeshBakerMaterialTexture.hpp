// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DigitalOpus.MB.Core.DRect
#include "DigitalOpus/MB/Core/DRect.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
  // Forward declaring type: Texture
  class Texture;
}
// Forward declaring namespace: DigitalOpus::MB::Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: MB_TexSet
  class MB_TexSet;
}
// Completed forward declares
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: MeshBakerMaterialTexture
  class MeshBakerMaterialTexture;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DigitalOpus::MB::Core::MeshBakerMaterialTexture);
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::MeshBakerMaterialTexture*, "DigitalOpus.MB.Core", "MeshBakerMaterialTexture");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x64
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.MeshBakerMaterialTexture
  // [TokenAttribute] Offset: FFFFFFFF
  class MeshBakerMaterialTexture : public ::Il2CppObject {
    public:
    public:
    // private UnityEngine.Texture2D _t
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Texture2D* t;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture2D*) == 0x8);
    // public System.Single texelDensity
    // Size: 0x4
    // Offset: 0x18
    float texelDensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: texelDensity and: encapsulatingSamplingRect
    char __padding1[0x4] = {};
    // private DigitalOpus.MB.Core.DRect encapsulatingSamplingRect
    // Size: 0x20
    // Offset: 0x20
    ::DigitalOpus::MB::Core::DRect encapsulatingSamplingRect;
    // Field size check
    static_assert(sizeof(::DigitalOpus::MB::Core::DRect) == 0x20);
    // private DigitalOpus.MB.Core.DRect <matTilingRect>k__BackingField
    // Size: 0x20
    // Offset: 0x40
    ::DigitalOpus::MB::Core::DRect matTilingRect;
    // Field size check
    static_assert(sizeof(::DigitalOpus::MB::Core::DRect) == 0x20);
    // private System.Int32 <isImportedAsNormalMap>k__BackingField
    // Size: 0x4
    // Offset: 0x60
    int isImportedAsNormalMap;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get static field: static System.Boolean readyToBuildAtlases
    static bool _get_readyToBuildAtlases();
    // Set static field: static System.Boolean readyToBuildAtlases
    static void _set_readyToBuildAtlases(bool value);
    // Get instance field reference: private UnityEngine.Texture2D _t
    [[deprecated("Use field access instead!")]] ::UnityEngine::Texture2D*& dyn__t();
    // Get instance field reference: public System.Single texelDensity
    [[deprecated("Use field access instead!")]] float& dyn_texelDensity();
    // Get instance field reference: private DigitalOpus.MB.Core.DRect encapsulatingSamplingRect
    [[deprecated("Use field access instead!")]] ::DigitalOpus::MB::Core::DRect& dyn_encapsulatingSamplingRect();
    // Get instance field reference: private DigitalOpus.MB.Core.DRect <matTilingRect>k__BackingField
    [[deprecated("Use field access instead!")]] ::DigitalOpus::MB::Core::DRect& dyn_$matTilingRect$k__BackingField();
    // Get instance field reference: private System.Int32 <isImportedAsNormalMap>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$isImportedAsNormalMap$k__BackingField();
    // public System.Void set_t(UnityEngine.Texture2D value)
    // Offset: 0x43E2D60
    void set_t(::UnityEngine::Texture2D* value);
    // public DigitalOpus.MB.Core.DRect get_matTilingRect()
    // Offset: 0x43E2D68
    ::DigitalOpus::MB::Core::DRect get_matTilingRect();
    // private System.Void set_matTilingRect(DigitalOpus.MB.Core.DRect value)
    // Offset: 0x43E2D74
    void set_matTilingRect(::DigitalOpus::MB::Core::DRect value);
    // public System.Int32 get_isImportedAsNormalMap()
    // Offset: 0x43E2D80
    int get_isImportedAsNormalMap();
    // private System.Void set_isImportedAsNormalMap(System.Int32 value)
    // Offset: 0x43E2D88
    void set_isImportedAsNormalMap(int value);
    // public System.Void .ctor(UnityEngine.Texture tx, UnityEngine.Vector2 matTilingOffset, UnityEngine.Vector2 matTilingScale, System.Single texelDens, System.Int32 isImportedAsNormalMap)
    // Offset: 0x43E2D90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MeshBakerMaterialTexture* New_ctor(::UnityEngine::Texture* tx, ::UnityEngine::Vector2 matTilingOffset, ::UnityEngine::Vector2 matTilingScale, float texelDens, int isImportedAsNormalMap) {
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::MeshBakerMaterialTexture::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MeshBakerMaterialTexture*, creationType>(tx, matTilingOffset, matTilingScale, texelDens, isImportedAsNormalMap)));
    }
    // public DigitalOpus.MB.Core.DRect GetEncapsulatingSamplingRect()
    // Offset: 0x43E2F44
    ::DigitalOpus::MB::Core::DRect GetEncapsulatingSamplingRect();
    // public System.Void SetEncapsulatingSamplingRect(DigitalOpus.MB.Core.MB_TexSet ts, DigitalOpus.MB.Core.DRect r)
    // Offset: 0x43E2F50
    void SetEncapsulatingSamplingRect(::DigitalOpus::MB::Core::MB_TexSet* ts, ::DigitalOpus::MB::Core::DRect r);
    // public UnityEngine.Texture2D GetTexture2D()
    // Offset: 0x43DD6A0
    ::UnityEngine::Texture2D* GetTexture2D();
    // public System.Boolean get_isNull()
    // Offset: 0x43DCC84
    bool get_isNull();
    // public System.Int32 get_width()
    // Offset: 0x43E2F5C
    int get_width();
    // public System.Int32 get_height()
    // Offset: 0x43E3020
    int get_height();
    // public System.String GetTexName()
    // Offset: 0x43E30E4
    ::StringW GetTexName();
    // public System.Boolean AreTexturesEqual(DigitalOpus.MB.Core.MeshBakerMaterialTexture b)
    // Offset: 0x43E3180
    bool AreTexturesEqual(::DigitalOpus::MB::Core::MeshBakerMaterialTexture* b);
  }; // DigitalOpus.MB.Core.MeshBakerMaterialTexture
  #pragma pack(pop)
  static check_size<sizeof(MeshBakerMaterialTexture), 96 + sizeof(int)> __DigitalOpus_MB_Core_MeshBakerMaterialTextureSizeCheck;
  static_assert(sizeof(MeshBakerMaterialTexture) == 0x64);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MeshBakerMaterialTexture::set_t
// Il2CppName: set_t
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MeshBakerMaterialTexture::*)(::UnityEngine::Texture2D*)>(&DigitalOpus::MB::Core::MeshBakerMaterialTexture::set_t)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MeshBakerMaterialTexture*), "set_t", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MeshBakerMaterialTexture::get_matTilingRect
// Il2CppName: get_matTilingRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DigitalOpus::MB::Core::DRect (DigitalOpus::MB::Core::MeshBakerMaterialTexture::*)()>(&DigitalOpus::MB::Core::MeshBakerMaterialTexture::get_matTilingRect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MeshBakerMaterialTexture*), "get_matTilingRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MeshBakerMaterialTexture::set_matTilingRect
// Il2CppName: set_matTilingRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MeshBakerMaterialTexture::*)(::DigitalOpus::MB::Core::DRect)>(&DigitalOpus::MB::Core::MeshBakerMaterialTexture::set_matTilingRect)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "DRect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MeshBakerMaterialTexture*), "set_matTilingRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MeshBakerMaterialTexture::get_isImportedAsNormalMap
// Il2CppName: get_isImportedAsNormalMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (DigitalOpus::MB::Core::MeshBakerMaterialTexture::*)()>(&DigitalOpus::MB::Core::MeshBakerMaterialTexture::get_isImportedAsNormalMap)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MeshBakerMaterialTexture*), "get_isImportedAsNormalMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MeshBakerMaterialTexture::set_isImportedAsNormalMap
// Il2CppName: set_isImportedAsNormalMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MeshBakerMaterialTexture::*)(int)>(&DigitalOpus::MB::Core::MeshBakerMaterialTexture::set_isImportedAsNormalMap)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MeshBakerMaterialTexture*), "set_isImportedAsNormalMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MeshBakerMaterialTexture::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MeshBakerMaterialTexture::GetEncapsulatingSamplingRect
// Il2CppName: GetEncapsulatingSamplingRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DigitalOpus::MB::Core::DRect (DigitalOpus::MB::Core::MeshBakerMaterialTexture::*)()>(&DigitalOpus::MB::Core::MeshBakerMaterialTexture::GetEncapsulatingSamplingRect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MeshBakerMaterialTexture*), "GetEncapsulatingSamplingRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MeshBakerMaterialTexture::SetEncapsulatingSamplingRect
// Il2CppName: SetEncapsulatingSamplingRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MeshBakerMaterialTexture::*)(::DigitalOpus::MB::Core::MB_TexSet*, ::DigitalOpus::MB::Core::DRect)>(&DigitalOpus::MB::Core::MeshBakerMaterialTexture::SetEncapsulatingSamplingRect)> {
  static const MethodInfo* get() {
    static auto* ts = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB_TexSet")->byval_arg;
    static auto* r = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "DRect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MeshBakerMaterialTexture*), "SetEncapsulatingSamplingRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ts, r});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MeshBakerMaterialTexture::GetTexture2D
// Il2CppName: GetTexture2D
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Texture2D* (DigitalOpus::MB::Core::MeshBakerMaterialTexture::*)()>(&DigitalOpus::MB::Core::MeshBakerMaterialTexture::GetTexture2D)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MeshBakerMaterialTexture*), "GetTexture2D", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MeshBakerMaterialTexture::get_isNull
// Il2CppName: get_isNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::MeshBakerMaterialTexture::*)()>(&DigitalOpus::MB::Core::MeshBakerMaterialTexture::get_isNull)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MeshBakerMaterialTexture*), "get_isNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MeshBakerMaterialTexture::get_width
// Il2CppName: get_width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (DigitalOpus::MB::Core::MeshBakerMaterialTexture::*)()>(&DigitalOpus::MB::Core::MeshBakerMaterialTexture::get_width)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MeshBakerMaterialTexture*), "get_width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MeshBakerMaterialTexture::get_height
// Il2CppName: get_height
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (DigitalOpus::MB::Core::MeshBakerMaterialTexture::*)()>(&DigitalOpus::MB::Core::MeshBakerMaterialTexture::get_height)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MeshBakerMaterialTexture*), "get_height", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MeshBakerMaterialTexture::GetTexName
// Il2CppName: GetTexName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (DigitalOpus::MB::Core::MeshBakerMaterialTexture::*)()>(&DigitalOpus::MB::Core::MeshBakerMaterialTexture::GetTexName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MeshBakerMaterialTexture*), "GetTexName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MeshBakerMaterialTexture::AreTexturesEqual
// Il2CppName: AreTexturesEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::MeshBakerMaterialTexture::*)(::DigitalOpus::MB::Core::MeshBakerMaterialTexture*)>(&DigitalOpus::MB::Core::MeshBakerMaterialTexture::AreTexturesEqual)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MeshBakerMaterialTexture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MeshBakerMaterialTexture*), "AreTexturesEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
