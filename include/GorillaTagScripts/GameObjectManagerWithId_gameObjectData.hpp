// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GorillaTagScripts.GameObjectManagerWithId
#include "GorillaTagScripts/GameObjectManagerWithId.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaTagScripts::GameObjectManagerWithId::gameObjectData);
DEFINE_IL2CPP_ARG_TYPE(::GorillaTagScripts::GameObjectManagerWithId::gameObjectData*, "GorillaTagScripts", "GameObjectManagerWithId/gameObjectData");
// Type namespace: GorillaTagScripts
namespace GorillaTagScripts {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: GorillaTagScripts.GameObjectManagerWithId/gameObjectData
  // [TokenAttribute] Offset: FFFFFFFF
  class GameObjectManagerWithId::gameObjectData : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Transform transform
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform followTransform
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Transform* followTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public System.String id
    // Size: 0x8
    // Offset: 0x20
    ::StringW id;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean isMatched
    // Size: 0x1
    // Offset: 0x28
    bool isMatched;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public UnityEngine.Transform transform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_transform();
    // Get instance field reference: public UnityEngine.Transform followTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_followTransform();
    // Get instance field reference: public System.String id
    [[deprecated("Use field access instead!")]] ::StringW& dyn_id();
    // Get instance field reference: public System.Boolean isMatched
    [[deprecated("Use field access instead!")]] bool& dyn_isMatched();
    // public System.Void .ctor()
    // Offset: 0x280C980
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameObjectManagerWithId::gameObjectData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaTagScripts::GameObjectManagerWithId::gameObjectData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameObjectManagerWithId::gameObjectData*, creationType>()));
    }
  }; // GorillaTagScripts.GameObjectManagerWithId/gameObjectData
  #pragma pack(pop)
  static check_size<sizeof(GameObjectManagerWithId::gameObjectData), 40 + sizeof(bool)> __GorillaTagScripts_GameObjectManagerWithId_gameObjectDataSizeCheck;
  static_assert(sizeof(GameObjectManagerWithId::gameObjectData) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaTagScripts::GameObjectManagerWithId::gameObjectData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
