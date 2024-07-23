// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: BlendShape
  struct BlendShape;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::BlendShape, "UnityEngine", "BlendShape");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0xA
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.BlendShape
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: FFFFFFFF
  struct BlendShape/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.UInt32 m_FirstVertex
    // Size: 0x4
    // Offset: 0x0
    uint m_FirstVertex;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 m_VertexCount
    // Size: 0x4
    // Offset: 0x4
    uint m_VertexCount;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.Boolean m_HasNormals
    // Size: 0x1
    // Offset: 0x8
    bool m_HasNormals;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_HasTangents
    // Size: 0x1
    // Offset: 0x9
    bool m_HasTangents;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: BlendShape
    constexpr BlendShape(uint m_FirstVertex_ = {}, uint m_VertexCount_ = {}, bool m_HasNormals_ = {}, bool m_HasTangents_ = {}) noexcept : m_FirstVertex{m_FirstVertex_}, m_VertexCount{m_VertexCount_}, m_HasNormals{m_HasNormals_}, m_HasTangents{m_HasTangents_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.UInt32 m_FirstVertex
    [[deprecated("Use field access instead!")]] uint& dyn_m_FirstVertex();
    // Get instance field reference: private System.UInt32 m_VertexCount
    [[deprecated("Use field access instead!")]] uint& dyn_m_VertexCount();
    // Get instance field reference: private System.Boolean m_HasNormals
    [[deprecated("Use field access instead!")]] bool& dyn_m_HasNormals();
    // Get instance field reference: private System.Boolean m_HasTangents
    [[deprecated("Use field access instead!")]] bool& dyn_m_HasTangents();
    // public System.UInt32 get_firstVertex()
    // Offset: 0x54A5310
    uint get_firstVertex();
    // public System.UInt32 get_vertexCount()
    // Offset: 0x54A5320
    uint get_vertexCount();
  }; // UnityEngine.BlendShape
  #pragma pack(pop)
  static check_size<sizeof(BlendShape), 9 + sizeof(bool)> __UnityEngine_BlendShapeSizeCheck;
  static_assert(sizeof(BlendShape) == 0xA);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::BlendShape::get_firstVertex
// Il2CppName: get_firstVertex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (UnityEngine::BlendShape::*)()>(&UnityEngine::BlendShape::get_firstVertex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BlendShape), "get_firstVertex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::BlendShape::get_vertexCount
// Il2CppName: get_vertexCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (UnityEngine::BlendShape::*)()>(&UnityEngine::BlendShape::get_vertexCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BlendShape), "get_vertexCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};