// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DigitalOpus.MB.Core.MB_TextureArrays
#include "DigitalOpus/MB/Core/MB_TextureArrays.hpp"
// Including type: UnityEngine.TextureFormat
#include "UnityEngine/TextureFormat.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DigitalOpus::MB::Core::MB_TextureArrays::TexturePropertyData);
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::MB_TextureArrays::TexturePropertyData*, "DigitalOpus.MB.Core", "MB_TextureArrays/TexturePropertyData");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.MB_TextureArrays/TexturePropertyData
  // [TokenAttribute] Offset: FFFFFFFF
  class MB_TextureArrays::TexturePropertyData : public ::Il2CppObject {
    public:
    public:
    // public System.Boolean[] doMips
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<bool> doMips;
    // Field size check
    static_assert(sizeof(::ArrayW<bool>) == 0x8);
    // public System.Int32[] numMipMaps
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<int> numMipMaps;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // public UnityEngine.TextureFormat[] formats
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::UnityEngine::TextureFormat> formats;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::TextureFormat>) == 0x8);
    // public UnityEngine.Vector2[] sizes
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::UnityEngine::Vector2> sizes;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector2>) == 0x8);
    public:
    // Get instance field reference: public System.Boolean[] doMips
    [[deprecated("Use field access instead!")]] ::ArrayW<bool>& dyn_doMips();
    // Get instance field reference: public System.Int32[] numMipMaps
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_numMipMaps();
    // Get instance field reference: public UnityEngine.TextureFormat[] formats
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::TextureFormat>& dyn_formats();
    // Get instance field reference: public UnityEngine.Vector2[] sizes
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector2>& dyn_sizes();
    // public System.Void .ctor()
    // Offset: 0x43FDF90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MB_TextureArrays::TexturePropertyData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::MB_TextureArrays::TexturePropertyData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MB_TextureArrays::TexturePropertyData*, creationType>()));
    }
  }; // DigitalOpus.MB.Core.MB_TextureArrays/TexturePropertyData
  #pragma pack(pop)
  static check_size<sizeof(MB_TextureArrays::TexturePropertyData), 40 + sizeof(::ArrayW<::UnityEngine::Vector2>)> __DigitalOpus_MB_Core_MB_TextureArrays_TexturePropertyDataSizeCheck;
  static_assert(sizeof(MB_TextureArrays::TexturePropertyData) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB_TextureArrays::TexturePropertyData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
