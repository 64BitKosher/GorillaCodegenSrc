// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: BaseRaycaster
  class BaseRaycaster;
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: RaycastResult
  struct RaycastResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::RaycastResult, "UnityEngine.EventSystems", "RaycastResult");
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0x50
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.EventSystems.RaycastResult
  // [TokenAttribute] Offset: FFFFFFFF
  struct RaycastResult/*, public ::System::ValueType*/ {
    public:
    public:
    // private UnityEngine.GameObject m_GameObject
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::GameObject* m_GameObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.EventSystems.BaseRaycaster module
    // Size: 0x8
    // Offset: 0x8
    ::UnityEngine::EventSystems::BaseRaycaster* module;
    // Field size check
    static_assert(sizeof(::UnityEngine::EventSystems::BaseRaycaster*) == 0x8);
    // public System.Single distance
    // Size: 0x4
    // Offset: 0x10
    float distance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single index
    // Size: 0x4
    // Offset: 0x14
    float index;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 depth
    // Size: 0x4
    // Offset: 0x18
    int depth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 sortingGroupID
    // Size: 0x4
    // Offset: 0x1C
    int sortingGroupID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 sortingGroupOrder
    // Size: 0x4
    // Offset: 0x20
    int sortingGroupOrder;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 sortingLayer
    // Size: 0x4
    // Offset: 0x24
    int sortingLayer;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 sortingOrder
    // Size: 0x4
    // Offset: 0x28
    int sortingOrder;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public UnityEngine.Vector3 worldPosition
    // Size: 0xC
    // Offset: 0x2C
    ::UnityEngine::Vector3 worldPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 worldNormal
    // Size: 0xC
    // Offset: 0x38
    ::UnityEngine::Vector3 worldNormal;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector2 screenPosition
    // Size: 0x8
    // Offset: 0x44
    ::UnityEngine::Vector2 screenPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public System.Int32 displayIndex
    // Size: 0x4
    // Offset: 0x4C
    int displayIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: RaycastResult
    constexpr RaycastResult(::UnityEngine::GameObject* m_GameObject_ = {}, ::UnityEngine::EventSystems::BaseRaycaster* module_ = {}, float distance_ = {}, float index_ = {}, int depth_ = {}, int sortingGroupID_ = {}, int sortingGroupOrder_ = {}, int sortingLayer_ = {}, int sortingOrder_ = {}, ::UnityEngine::Vector3 worldPosition_ = {}, ::UnityEngine::Vector3 worldNormal_ = {}, ::UnityEngine::Vector2 screenPosition_ = {}, int displayIndex_ = {}) noexcept : m_GameObject{m_GameObject_}, module{module_}, distance{distance_}, index{index_}, depth{depth_}, sortingGroupID{sortingGroupID_}, sortingGroupOrder{sortingGroupOrder_}, sortingLayer{sortingLayer_}, sortingOrder{sortingOrder_}, worldPosition{worldPosition_}, worldNormal{worldNormal_}, screenPosition{screenPosition_}, displayIndex{displayIndex_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private UnityEngine.GameObject m_GameObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_m_GameObject();
    // Get instance field reference: public UnityEngine.EventSystems.BaseRaycaster module
    [[deprecated("Use field access instead!")]] ::UnityEngine::EventSystems::BaseRaycaster*& dyn_module();
    // Get instance field reference: public System.Single distance
    [[deprecated("Use field access instead!")]] float& dyn_distance();
    // Get instance field reference: public System.Single index
    [[deprecated("Use field access instead!")]] float& dyn_index();
    // Get instance field reference: public System.Int32 depth
    [[deprecated("Use field access instead!")]] int& dyn_depth();
    // Get instance field reference: public System.Int32 sortingGroupID
    [[deprecated("Use field access instead!")]] int& dyn_sortingGroupID();
    // Get instance field reference: public System.Int32 sortingGroupOrder
    [[deprecated("Use field access instead!")]] int& dyn_sortingGroupOrder();
    // Get instance field reference: public System.Int32 sortingLayer
    [[deprecated("Use field access instead!")]] int& dyn_sortingLayer();
    // Get instance field reference: public System.Int32 sortingOrder
    [[deprecated("Use field access instead!")]] int& dyn_sortingOrder();
    // Get instance field reference: public UnityEngine.Vector3 worldPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_worldPosition();
    // Get instance field reference: public UnityEngine.Vector3 worldNormal
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_worldNormal();
    // Get instance field reference: public UnityEngine.Vector2 screenPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_screenPosition();
    // Get instance field reference: public System.Int32 displayIndex
    [[deprecated("Use field access instead!")]] int& dyn_displayIndex();
    // public UnityEngine.GameObject get_gameObject()
    // Offset: 0x5707F8C
    ::UnityEngine::GameObject* get_gameObject();
    // public System.Void set_gameObject(UnityEngine.GameObject value)
    // Offset: 0x5707F94
    void set_gameObject(::UnityEngine::GameObject* value);
    // public System.Boolean get_isValid()
    // Offset: 0x5707F9C
    bool get_isValid();
    // public System.Void Clear()
    // Offset: 0x5708034
    void Clear();
    // public override System.String ToString()
    // Offset: 0x56FC6D4
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // UnityEngine.EventSystems.RaycastResult
  #pragma pack(pop)
  static check_size<sizeof(RaycastResult), 76 + sizeof(int)> __UnityEngine_EventSystems_RaycastResultSizeCheck;
  static_assert(sizeof(RaycastResult) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::EventSystems::RaycastResult::get_gameObject
// Il2CppName: get_gameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (UnityEngine::EventSystems::RaycastResult::*)()>(&UnityEngine::EventSystems::RaycastResult::get_gameObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::RaycastResult), "get_gameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::RaycastResult::set_gameObject
// Il2CppName: set_gameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::RaycastResult::*)(::UnityEngine::GameObject*)>(&UnityEngine::EventSystems::RaycastResult::set_gameObject)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::RaycastResult), "set_gameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::RaycastResult::get_isValid
// Il2CppName: get_isValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::EventSystems::RaycastResult::*)()>(&UnityEngine::EventSystems::RaycastResult::get_isValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::RaycastResult), "get_isValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::RaycastResult::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::RaycastResult::*)()>(&UnityEngine::EventSystems::RaycastResult::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::RaycastResult), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::RaycastResult::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::EventSystems::RaycastResult::*)()>(&UnityEngine::EventSystems::RaycastResult::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::RaycastResult), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};