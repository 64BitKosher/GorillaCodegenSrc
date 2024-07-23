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
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: StringVertex
  struct StringVertex;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StringVertex, "", "StringVertex");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: StringVertex
  // [TokenAttribute] Offset: FFFFFFFF
  struct StringVertex/*, public ::System::ValueType*/ {
    public:
    public:
    // private UnityEngine.Vector3 p
    // Size: 0xC
    // Offset: 0x0
    ::UnityEngine::Vector3 p;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 prevp
    // Size: 0xC
    // Offset: 0xC
    ::UnityEngine::Vector3 prevp;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Creating value type constructor for type: StringVertex
    constexpr StringVertex(::UnityEngine::Vector3 p_ = {}, ::UnityEngine::Vector3 prevp_ = {}) noexcept : p{p_}, prevp{prevp_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private UnityEngine.Vector3 p
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_p();
    // Get instance field reference: private UnityEngine.Vector3 prevp
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_prevp();
  }; // StringVertex
  #pragma pack(pop)
  static check_size<sizeof(StringVertex), 12 + sizeof(::UnityEngine::Vector3)> __GlobalNamespace_StringVertexSizeCheck;
  static_assert(sizeof(StringVertex) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
