// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Experimental.Rendering.GraphicsFormat
#include "UnityEngine/Experimental/Rendering/GraphicsFormat.hpp"
// Including type: System.ValueTuple`2
#include "System/ValueTuple_2.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Including type: UnityEngine.Vector2Int
#include "UnityEngine/Vector2Int.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: UnityEngine.FilterMode
#include "UnityEngine/FilterMode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: RTHandle
  class RTHandle;
  // Forward declaring type: AtlasAllocator
  class AtlasAllocator;
  // Forward declaring type: CommandBuffer
  class CommandBuffer;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture
  class Texture;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: Texture2DAtlas
  class Texture2DAtlas;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Texture2DAtlas);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Texture2DAtlas*, "UnityEngine.Rendering", "Texture2DAtlas");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Texture2DAtlas
  // [TokenAttribute] Offset: FFFFFFFF
  class Texture2DAtlas : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::Rendering::Texture2DAtlas::BlitType
    struct BlitType;
    public:
    // UnityEngine.Rendering.RTHandle m_AtlasTexture
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Rendering::RTHandle* m_AtlasTexture;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::RTHandle*) == 0x8);
    // System.Int32 m_Width
    // Size: 0x4
    // Offset: 0x18
    int m_Width;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 m_Height
    // Size: 0x4
    // Offset: 0x1C
    int m_Height;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // UnityEngine.Experimental.Rendering.GraphicsFormat m_Format
    // Size: 0x4
    // Offset: 0x20
    ::UnityEngine::Experimental::Rendering::GraphicsFormat m_Format;
    // Field size check
    static_assert(sizeof(::UnityEngine::Experimental::Rendering::GraphicsFormat) == 0x4);
    // System.Boolean m_UseMipMaps
    // Size: 0x1
    // Offset: 0x24
    bool m_UseMipMaps;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_IsAtlasTextureOwner
    // Size: 0x1
    // Offset: 0x25
    bool m_IsAtlasTextureOwner;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_IsAtlasTextureOwner and: m_AtlasAllocator
    char __padding5[0x2] = {};
    // private UnityEngine.Rendering.AtlasAllocator m_AtlasAllocator
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Rendering::AtlasAllocator* m_AtlasAllocator;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::AtlasAllocator*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.Int32,System.ValueTuple`2<UnityEngine.Vector4,UnityEngine.Vector2Int>> m_AllocationCache
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::Dictionary_2<int, ::System::ValueTuple_2<::UnityEngine::Vector4, ::UnityEngine::Vector2Int>>* m_AllocationCache;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<int, ::System::ValueTuple_2<::UnityEngine::Vector4, ::UnityEngine::Vector2Int>>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> m_IsGPUTextureUpToDate
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::Dictionary_2<int, int>* m_IsGPUTextureUpToDate;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<int, int>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> m_TextureHashes
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::Dictionary_2<int, int>* m_TextureHashes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<int, int>*) == 0x8);
    public:
    // static field const value: static System.Int32 kGPUTexInvalid
    static constexpr const int kGPUTexInvalid = 0;
    // Get static field: static System.Int32 kGPUTexInvalid
    static int _get_kGPUTexInvalid();
    // Set static field: static System.Int32 kGPUTexInvalid
    static void _set_kGPUTexInvalid(int value);
    // static field const value: static System.Int32 kGPUTexValidMip0
    static constexpr const int kGPUTexValidMip0 = 1;
    // Get static field: static System.Int32 kGPUTexValidMip0
    static int _get_kGPUTexValidMip0();
    // Set static field: static System.Int32 kGPUTexValidMip0
    static void _set_kGPUTexValidMip0(int value);
    // static field const value: static System.Int32 kGPUTexValidMipAll
    static constexpr const int kGPUTexValidMipAll = 2;
    // Get static field: static System.Int32 kGPUTexValidMipAll
    static int _get_kGPUTexValidMipAll();
    // Set static field: static System.Int32 kGPUTexValidMipAll
    static void _set_kGPUTexValidMipAll(int value);
    // Get static field: static private readonly UnityEngine.Vector4 fullScaleOffset
    static ::UnityEngine::Vector4 _get_fullScaleOffset();
    // Set static field: static private readonly UnityEngine.Vector4 fullScaleOffset
    static void _set_fullScaleOffset(::UnityEngine::Vector4 value);
    // Get static field: static private readonly System.Int32 s_MaxMipLevelPadding
    static int _get_s_MaxMipLevelPadding();
    // Set static field: static private readonly System.Int32 s_MaxMipLevelPadding
    static void _set_s_MaxMipLevelPadding(int value);
    // Get instance field reference: UnityEngine.Rendering.RTHandle m_AtlasTexture
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::RTHandle*& dyn_m_AtlasTexture();
    // Get instance field reference: System.Int32 m_Width
    [[deprecated("Use field access instead!")]] int& dyn_m_Width();
    // Get instance field reference: System.Int32 m_Height
    [[deprecated("Use field access instead!")]] int& dyn_m_Height();
    // Get instance field reference: UnityEngine.Experimental.Rendering.GraphicsFormat m_Format
    [[deprecated("Use field access instead!")]] ::UnityEngine::Experimental::Rendering::GraphicsFormat& dyn_m_Format();
    // Get instance field reference: System.Boolean m_UseMipMaps
    [[deprecated("Use field access instead!")]] bool& dyn_m_UseMipMaps();
    // Get instance field reference: private System.Boolean m_IsAtlasTextureOwner
    [[deprecated("Use field access instead!")]] bool& dyn_m_IsAtlasTextureOwner();
    // Get instance field reference: private UnityEngine.Rendering.AtlasAllocator m_AtlasAllocator
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::AtlasAllocator*& dyn_m_AtlasAllocator();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.Int32,System.ValueTuple`2<UnityEngine.Vector4,UnityEngine.Vector2Int>> m_AllocationCache
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<int, ::System::ValueTuple_2<::UnityEngine::Vector4, ::UnityEngine::Vector2Int>>*& dyn_m_AllocationCache();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> m_IsGPUTextureUpToDate
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<int, int>*& dyn_m_IsGPUTextureUpToDate();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> m_TextureHashes
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<int, int>*& dyn_m_TextureHashes();
    // public UnityEngine.Rendering.RTHandle get_AtlasTexture()
    // Offset: 0x5256B38
    ::UnityEngine::Rendering::RTHandle* get_AtlasTexture();
    // public System.Void .ctor(System.Int32 width, System.Int32 height, UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.FilterMode filterMode, System.Boolean powerOfTwoPadding, System.String name, System.Boolean useMipMap)
    // Offset: 0x5252420
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Texture2DAtlas* New_ctor(int width, int height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::FilterMode filterMode, bool powerOfTwoPadding, ::StringW name, bool useMipMap) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Texture2DAtlas::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Texture2DAtlas*, creationType>(width, height, format, filterMode, powerOfTwoPadding, name, useMipMap)));
    }
    // public System.Void Release()
    // Offset: 0x5256B40
    void Release();
    // public System.Void ResetAllocator()
    // Offset: 0x5256BB4
    void ResetAllocator();
    // System.Int32 GetTextureMipmapCount(System.Int32 width, System.Int32 height)
    // Offset: 0x5252AD4
    int GetTextureMipmapCount(int width, int height);
    // System.Boolean Is2D(UnityEngine.Texture texture)
    // Offset: 0x5252D18
    bool Is2D(::UnityEngine::Texture* texture);
    // System.Boolean IsSingleChannelBlit(UnityEngine.Texture source, UnityEngine.Texture destination)
    // Offset: 0x5256C34
    bool IsSingleChannelBlit(::UnityEngine::Texture* source, ::UnityEngine::Texture* destination);
    // private System.Void Blit2DTexture(UnityEngine.Rendering.CommandBuffer cmd, UnityEngine.Vector4 scaleOffset, UnityEngine.Texture texture, UnityEngine.Vector4 sourceScaleOffset, System.Boolean blitMips, UnityEngine.Rendering.Texture2DAtlas/BlitType blitType)
    // Offset: 0x5256E78
    void Blit2DTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector4 scaleOffset, ::UnityEngine::Texture* texture, ::UnityEngine::Vector4 sourceScaleOffset, bool blitMips, ::UnityEngine::Rendering::Texture2DAtlas::BlitType blitType);
    // System.Void MarkGPUTextureValid(System.Int32 instanceId, System.Boolean mipAreValid)
    // Offset: 0x5252DE4
    void MarkGPUTextureValid(int instanceId, bool mipAreValid);
    // System.Void MarkGPUTextureInvalid(System.Int32 instanceId)
    // Offset: 0x5257114
    void MarkGPUTextureInvalid(int instanceId);
    // public System.Void BlitTexture(UnityEngine.Rendering.CommandBuffer cmd, UnityEngine.Vector4 scaleOffset, UnityEngine.Texture texture, UnityEngine.Vector4 sourceScaleOffset, System.Boolean blitMips, System.Int32 overrideInstanceID)
    // Offset: 0x5257170
    void BlitTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector4 scaleOffset, ::UnityEngine::Texture* texture, ::UnityEngine::Vector4 sourceScaleOffset, bool blitMips, int overrideInstanceID);
    // public System.Void BlitCubeTexture2D(UnityEngine.Rendering.CommandBuffer cmd, UnityEngine.Vector4 scaleOffset, UnityEngine.Texture texture, System.Boolean blitMips, System.Int32 overrideInstanceID)
    // Offset: 0x5257328
    void BlitCubeTexture2D(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Vector4 scaleOffset, ::UnityEngine::Texture* texture, bool blitMips, int overrideInstanceID);
    // public System.Boolean AllocateTexture(UnityEngine.Rendering.CommandBuffer cmd, ref UnityEngine.Vector4 scaleOffset, UnityEngine.Texture texture, System.Int32 width, System.Int32 height, System.Int32 overrideInstanceID)
    // Offset: 0x525309C
    bool AllocateTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Vector4> scaleOffset, ::UnityEngine::Texture* texture, int width, int height, int overrideInstanceID);
    // public System.Boolean AllocateTextureWithoutBlit(System.Int32 instanceId, System.Int32 width, System.Int32 height, ref UnityEngine.Vector4 scaleOffset)
    // Offset: 0x52574AC
    bool AllocateTextureWithoutBlit(int instanceId, int width, int height, ByRef<::UnityEngine::Vector4> scaleOffset);
    // public System.Int32 GetTextureID(UnityEngine.Texture texture)
    // Offset: 0x5257310
    int GetTextureID(::UnityEngine::Texture* texture);
    // public System.Boolean IsCached(out UnityEngine.Vector4 scaleOffset, UnityEngine.Texture texture)
    // Offset: 0x5257634
    bool IsCached(ByRef<::UnityEngine::Vector4> scaleOffset, ::UnityEngine::Texture* texture);
    // public System.Boolean IsCached(out UnityEngine.Vector4 scaleOffset, System.Int32 id)
    // Offset: 0x5257670
    bool IsCached(ByRef<::UnityEngine::Vector4> scaleOffset, int id);
    // public System.Boolean NeedsUpdate(UnityEngine.Texture texture, System.Boolean needMips)
    // Offset: 0x52576F8
    bool NeedsUpdate(::UnityEngine::Texture* texture, bool needMips);
    // public System.Boolean UpdateTexture(UnityEngine.Rendering.CommandBuffer cmd, UnityEngine.Texture oldTexture, UnityEngine.Texture newTexture, ref UnityEngine.Vector4 scaleOffset, UnityEngine.Vector4 sourceScaleOffset, System.Boolean updateIfNeeded, System.Boolean blitMips)
    // Offset: 0x5257970
    bool UpdateTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Texture* oldTexture, ::UnityEngine::Texture* newTexture, ByRef<::UnityEngine::Vector4> scaleOffset, ::UnityEngine::Vector4 sourceScaleOffset, bool updateIfNeeded, bool blitMips);
    // public System.Boolean UpdateTexture(UnityEngine.Rendering.CommandBuffer cmd, UnityEngine.Texture texture, ref UnityEngine.Vector4 scaleOffset, System.Boolean updateIfNeeded, System.Boolean blitMips)
    // Offset: 0x5257AEC
    bool UpdateTexture(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Texture* texture, ByRef<::UnityEngine::Vector4> scaleOffset, bool updateIfNeeded, bool blitMips);
    // static private System.Void .cctor()
    // Offset: 0x5257B9C
    static void _cctor();
  }; // UnityEngine.Rendering.Texture2DAtlas
  #pragma pack(pop)
  static check_size<sizeof(Texture2DAtlas), 64 + sizeof(::System::Collections::Generic::Dictionary_2<int, int>*)> __UnityEngine_Rendering_Texture2DAtlasSizeCheck;
  static_assert(sizeof(Texture2DAtlas) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Texture2DAtlas::get_AtlasTexture
// Il2CppName: get_AtlasTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RTHandle* (UnityEngine::Rendering::Texture2DAtlas::*)()>(&UnityEngine::Rendering::Texture2DAtlas::get_AtlasTexture)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Texture2DAtlas*), "get_AtlasTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Texture2DAtlas::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::Texture2DAtlas::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Texture2DAtlas::*)()>(&UnityEngine::Rendering::Texture2DAtlas::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Texture2DAtlas*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Texture2DAtlas::ResetAllocator
// Il2CppName: ResetAllocator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Texture2DAtlas::*)()>(&UnityEngine::Rendering::Texture2DAtlas::ResetAllocator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Texture2DAtlas*), "ResetAllocator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Texture2DAtlas::GetTextureMipmapCount
// Il2CppName: GetTextureMipmapCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::Texture2DAtlas::*)(int, int)>(&UnityEngine::Rendering::Texture2DAtlas::GetTextureMipmapCount)> {
  static const MethodInfo* get() {
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Texture2DAtlas*), "GetTextureMipmapCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{width, height});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Texture2DAtlas::Is2D
// Il2CppName: Is2D
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::Texture2DAtlas::*)(::UnityEngine::Texture*)>(&UnityEngine::Rendering::Texture2DAtlas::Is2D)> {
  static const MethodInfo* get() {
    static auto* texture = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Texture2DAtlas*), "Is2D", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{texture});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Texture2DAtlas::IsSingleChannelBlit
// Il2CppName: IsSingleChannelBlit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::Texture2DAtlas::*)(::UnityEngine::Texture*, ::UnityEngine::Texture*)>(&UnityEngine::Rendering::Texture2DAtlas::IsSingleChannelBlit)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture")->byval_arg;
    static auto* destination = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Texture2DAtlas*), "IsSingleChannelBlit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source, destination});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Texture2DAtlas::Blit2DTexture
// Il2CppName: Blit2DTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Texture2DAtlas::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector4, ::UnityEngine::Texture*, ::UnityEngine::Vector4, bool, ::UnityEngine::Rendering::Texture2DAtlas::BlitType)>(&UnityEngine::Rendering::Texture2DAtlas::Blit2DTexture)> {
  static const MethodInfo* get() {
    static auto* cmd = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "CommandBuffer")->byval_arg;
    static auto* scaleOffset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    static auto* texture = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture")->byval_arg;
    static auto* sourceScaleOffset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    static auto* blitMips = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* blitType = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "Texture2DAtlas/BlitType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Texture2DAtlas*), "Blit2DTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cmd, scaleOffset, texture, sourceScaleOffset, blitMips, blitType});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Texture2DAtlas::MarkGPUTextureValid
// Il2CppName: MarkGPUTextureValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Texture2DAtlas::*)(int, bool)>(&UnityEngine::Rendering::Texture2DAtlas::MarkGPUTextureValid)> {
  static const MethodInfo* get() {
    static auto* instanceId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* mipAreValid = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Texture2DAtlas*), "MarkGPUTextureValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instanceId, mipAreValid});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Texture2DAtlas::MarkGPUTextureInvalid
// Il2CppName: MarkGPUTextureInvalid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Texture2DAtlas::*)(int)>(&UnityEngine::Rendering::Texture2DAtlas::MarkGPUTextureInvalid)> {
  static const MethodInfo* get() {
    static auto* instanceId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Texture2DAtlas*), "MarkGPUTextureInvalid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instanceId});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Texture2DAtlas::BlitTexture
// Il2CppName: BlitTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Texture2DAtlas::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector4, ::UnityEngine::Texture*, ::UnityEngine::Vector4, bool, int)>(&UnityEngine::Rendering::Texture2DAtlas::BlitTexture)> {
  static const MethodInfo* get() {
    static auto* cmd = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "CommandBuffer")->byval_arg;
    static auto* scaleOffset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    static auto* texture = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture")->byval_arg;
    static auto* sourceScaleOffset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    static auto* blitMips = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* overrideInstanceID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Texture2DAtlas*), "BlitTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cmd, scaleOffset, texture, sourceScaleOffset, blitMips, overrideInstanceID});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Texture2DAtlas::BlitCubeTexture2D
// Il2CppName: BlitCubeTexture2D
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Texture2DAtlas::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector4, ::UnityEngine::Texture*, bool, int)>(&UnityEngine::Rendering::Texture2DAtlas::BlitCubeTexture2D)> {
  static const MethodInfo* get() {
    static auto* cmd = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "CommandBuffer")->byval_arg;
    static auto* scaleOffset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    static auto* texture = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture")->byval_arg;
    static auto* blitMips = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* overrideInstanceID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Texture2DAtlas*), "BlitCubeTexture2D", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cmd, scaleOffset, texture, blitMips, overrideInstanceID});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Texture2DAtlas::AllocateTexture
// Il2CppName: AllocateTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::Texture2DAtlas::*)(::UnityEngine::Rendering::CommandBuffer*, ByRef<::UnityEngine::Vector4>, ::UnityEngine::Texture*, int, int, int)>(&UnityEngine::Rendering::Texture2DAtlas::AllocateTexture)> {
  static const MethodInfo* get() {
    static auto* cmd = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "CommandBuffer")->byval_arg;
    static auto* scaleOffset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->this_arg;
    static auto* texture = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture")->byval_arg;
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* overrideInstanceID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Texture2DAtlas*), "AllocateTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cmd, scaleOffset, texture, width, height, overrideInstanceID});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Texture2DAtlas::AllocateTextureWithoutBlit
// Il2CppName: AllocateTextureWithoutBlit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::Texture2DAtlas::*)(int, int, int, ByRef<::UnityEngine::Vector4>)>(&UnityEngine::Rendering::Texture2DAtlas::AllocateTextureWithoutBlit)> {
  static const MethodInfo* get() {
    static auto* instanceId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* scaleOffset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Texture2DAtlas*), "AllocateTextureWithoutBlit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instanceId, width, height, scaleOffset});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Texture2DAtlas::GetTextureID
// Il2CppName: GetTextureID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::Texture2DAtlas::*)(::UnityEngine::Texture*)>(&UnityEngine::Rendering::Texture2DAtlas::GetTextureID)> {
  static const MethodInfo* get() {
    static auto* texture = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Texture2DAtlas*), "GetTextureID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{texture});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Texture2DAtlas::IsCached
// Il2CppName: IsCached
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::Texture2DAtlas::*)(ByRef<::UnityEngine::Vector4>, ::UnityEngine::Texture*)>(&UnityEngine::Rendering::Texture2DAtlas::IsCached)> {
  static const MethodInfo* get() {
    static auto* scaleOffset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->this_arg;
    static auto* texture = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Texture2DAtlas*), "IsCached", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scaleOffset, texture});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Texture2DAtlas::IsCached
// Il2CppName: IsCached
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::Texture2DAtlas::*)(ByRef<::UnityEngine::Vector4>, int)>(&UnityEngine::Rendering::Texture2DAtlas::IsCached)> {
  static const MethodInfo* get() {
    static auto* scaleOffset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->this_arg;
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Texture2DAtlas*), "IsCached", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scaleOffset, id});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Texture2DAtlas::NeedsUpdate
// Il2CppName: NeedsUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::Texture2DAtlas::*)(::UnityEngine::Texture*, bool)>(&UnityEngine::Rendering::Texture2DAtlas::NeedsUpdate)> {
  static const MethodInfo* get() {
    static auto* texture = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture")->byval_arg;
    static auto* needMips = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Texture2DAtlas*), "NeedsUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{texture, needMips});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Texture2DAtlas::UpdateTexture
// Il2CppName: UpdateTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::Texture2DAtlas::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Texture*, ::UnityEngine::Texture*, ByRef<::UnityEngine::Vector4>, ::UnityEngine::Vector4, bool, bool)>(&UnityEngine::Rendering::Texture2DAtlas::UpdateTexture)> {
  static const MethodInfo* get() {
    static auto* cmd = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "CommandBuffer")->byval_arg;
    static auto* oldTexture = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture")->byval_arg;
    static auto* newTexture = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture")->byval_arg;
    static auto* scaleOffset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->this_arg;
    static auto* sourceScaleOffset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    static auto* updateIfNeeded = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* blitMips = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Texture2DAtlas*), "UpdateTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cmd, oldTexture, newTexture, scaleOffset, sourceScaleOffset, updateIfNeeded, blitMips});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Texture2DAtlas::UpdateTexture
// Il2CppName: UpdateTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::Texture2DAtlas::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Texture*, ByRef<::UnityEngine::Vector4>, bool, bool)>(&UnityEngine::Rendering::Texture2DAtlas::UpdateTexture)> {
  static const MethodInfo* get() {
    static auto* cmd = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "CommandBuffer")->byval_arg;
    static auto* texture = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture")->byval_arg;
    static auto* scaleOffset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->this_arg;
    static auto* updateIfNeeded = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* blitMips = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Texture2DAtlas*), "UpdateTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cmd, texture, scaleOffset, updateIfNeeded, blitMips});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Texture2DAtlas::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Rendering::Texture2DAtlas::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Texture2DAtlas*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
