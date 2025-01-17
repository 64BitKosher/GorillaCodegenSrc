// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: MeshWriteDataInterface
  struct MeshWriteDataInterface;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MeshWriteDataInterface, "UnityEngine.UIElements", "MeshWriteDataInterface");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.UIElements.MeshWriteDataInterface
  // [TokenAttribute] Offset: FFFFFFFF
  struct MeshWriteDataInterface/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.IntPtr vertices
    // Size: 0x8
    // Offset: 0x0
    ::System::IntPtr vertices;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // public System.IntPtr indices
    // Size: 0x8
    // Offset: 0x8
    ::System::IntPtr indices;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // public System.Int32 vertexCount
    // Size: 0x4
    // Offset: 0x10
    int vertexCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 indexCount
    // Size: 0x4
    // Offset: 0x14
    int indexCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: MeshWriteDataInterface
    constexpr MeshWriteDataInterface(::System::IntPtr vertices_ = {}, ::System::IntPtr indices_ = {}, int vertexCount_ = {}, int indexCount_ = {}) noexcept : vertices{vertices_}, indices{indices_}, vertexCount{vertexCount_}, indexCount{indexCount_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.IntPtr vertices
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_vertices();
    // Get instance field reference: public System.IntPtr indices
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_indices();
    // Get instance field reference: public System.Int32 vertexCount
    [[deprecated("Use field access instead!")]] int& dyn_vertexCount();
    // Get instance field reference: public System.Int32 indexCount
    [[deprecated("Use field access instead!")]] int& dyn_indexCount();
  }; // UnityEngine.UIElements.MeshWriteDataInterface
  #pragma pack(pop)
  static check_size<sizeof(MeshWriteDataInterface), 20 + sizeof(int)> __UnityEngine_UIElements_MeshWriteDataInterfaceSizeCheck;
  static_assert(sizeof(MeshWriteDataInterface) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
