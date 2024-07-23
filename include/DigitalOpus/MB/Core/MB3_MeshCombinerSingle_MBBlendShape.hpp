// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DigitalOpus.MB.Core.MB3_MeshCombinerSingle
#include "DigitalOpus/MB/Core/MB3_MeshCombinerSingle.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MBBlendShape);
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MBBlendShape*, "DigitalOpus.MB.Core", "MB3_MeshCombinerSingle/MBBlendShape");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.MB3_MeshCombinerSingle/MBBlendShape
  // [TokenAttribute] Offset: FFFFFFFF
  class MB3_MeshCombinerSingle::MBBlendShape : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 gameObjectID
    // Size: 0x4
    // Offset: 0x10
    int gameObjectID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: gameObjectID and: gameObject
    char __padding0[0x4] = {};
    // public UnityEngine.GameObject gameObject
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::GameObject* gameObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public System.String name
    // Size: 0x8
    // Offset: 0x20
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 indexInSource
    // Size: 0x4
    // Offset: 0x28
    int indexInSource;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: indexInSource and: frames
    char __padding3[0x4] = {};
    // public DigitalOpus.MB.Core.MB3_MeshCombinerSingle/MBBlendShapeFrame[] frames
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MBBlendShapeFrame*> frames;
    // Field size check
    static_assert(sizeof(::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MBBlendShapeFrame*>) == 0x8);
    public:
    // Get instance field reference: public System.Int32 gameObjectID
    [[deprecated("Use field access instead!")]] int& dyn_gameObjectID();
    // Get instance field reference: public UnityEngine.GameObject gameObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_gameObject();
    // Get instance field reference: public System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
    // Get instance field reference: public System.Int32 indexInSource
    [[deprecated("Use field access instead!")]] int& dyn_indexInSource();
    // Get instance field reference: public DigitalOpus.MB.Core.MB3_MeshCombinerSingle/MBBlendShapeFrame[] frames
    [[deprecated("Use field access instead!")]] ::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MBBlendShapeFrame*>& dyn_frames();
    // public System.Void .ctor()
    // Offset: 0x43C8B90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MB3_MeshCombinerSingle::MBBlendShape* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MBBlendShape::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MB3_MeshCombinerSingle::MBBlendShape*, creationType>()));
    }
  }; // DigitalOpus.MB.Core.MB3_MeshCombinerSingle/MBBlendShape
  #pragma pack(pop)
  static check_size<sizeof(MB3_MeshCombinerSingle::MBBlendShape), 48 + sizeof(::ArrayW<::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MBBlendShapeFrame*>)> __DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MBBlendShapeSizeCheck;
  static_assert(sizeof(MB3_MeshCombinerSingle::MBBlendShape) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_MeshCombinerSingle::MBBlendShape::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
