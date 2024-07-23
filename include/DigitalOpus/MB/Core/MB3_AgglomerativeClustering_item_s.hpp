// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DigitalOpus.MB.Core.MB3_AgglomerativeClustering
#include "DigitalOpus/MB/Core/MB3_AgglomerativeClustering.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering::item_s);
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::MB3_AgglomerativeClustering::item_s*, "DigitalOpus.MB.Core", "MB3_AgglomerativeClustering/item_s");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.MB3_AgglomerativeClustering/item_s
  // [TokenAttribute] Offset: FFFFFFFF
  class MB3_AgglomerativeClustering::item_s : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.GameObject go
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::GameObject* go;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.Vector3 coord
    // Size: 0xC
    // Offset: 0x18
    ::UnityEngine::Vector3 coord;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Get instance field reference: public UnityEngine.GameObject go
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_go();
    // Get instance field reference: public UnityEngine.Vector3 coord
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_coord();
    // public System.Void .ctor()
    // Offset: 0x43AE27C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MB3_AgglomerativeClustering::item_s* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::MB3_AgglomerativeClustering::item_s::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MB3_AgglomerativeClustering::item_s*, creationType>()));
    }
  }; // DigitalOpus.MB.Core.MB3_AgglomerativeClustering/item_s
  #pragma pack(pop)
  static check_size<sizeof(MB3_AgglomerativeClustering::item_s), 24 + sizeof(::UnityEngine::Vector3)> __DigitalOpus_MB_Core_MB3_AgglomerativeClustering_item_sSizeCheck;
  static_assert(sizeof(MB3_AgglomerativeClustering::item_s) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_AgglomerativeClustering::item_s::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
