// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.LibTessDotNet.MeshUtils
#include "UnityEngine/Rendering/Universal/LibTessDotNet/MeshUtils.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::EdgePair, "UnityEngine.Rendering.Universal.LibTessDotNet", "MeshUtils/EdgePair");
// Type namespace: UnityEngine.Rendering.Universal.LibTessDotNet
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Rendering.Universal.LibTessDotNet.MeshUtils/EdgePair
  // [TokenAttribute] Offset: FFFFFFFF
  struct MeshUtils::EdgePair/*, public ::System::ValueType*/ {
    public:
    public:
    // UnityEngine.Rendering.Universal.LibTessDotNet.MeshUtils/Edge _e
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Edge* e;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Edge*) == 0x8);
    // UnityEngine.Rendering.Universal.LibTessDotNet.MeshUtils/Edge _eSym
    // Size: 0x8
    // Offset: 0x8
    ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Edge* eSym;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Edge*) == 0x8);
    public:
    // Creating value type constructor for type: EdgePair
    constexpr EdgePair(::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Edge* e_ = {}, ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Edge* eSym_ = {}) noexcept : e{e_}, eSym{eSym_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: UnityEngine.Rendering.Universal.LibTessDotNet.MeshUtils/Edge _e
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Edge*& dyn__e();
    // Get instance field reference: UnityEngine.Rendering.Universal.LibTessDotNet.MeshUtils/Edge _eSym
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Edge*& dyn__eSym();
    // static public UnityEngine.Rendering.Universal.LibTessDotNet.MeshUtils/EdgePair Create()
    // Offset: 0x52FAF7C
    static ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::EdgePair Create();
    // public System.Void Reset()
    // Offset: 0x52FC5F0
    void Reset();
  }; // UnityEngine.Rendering.Universal.LibTessDotNet.MeshUtils/EdgePair
  #pragma pack(pop)
  static check_size<sizeof(MeshUtils::EdgePair), 8 + sizeof(::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Edge*)> __UnityEngine_Rendering_Universal_LibTessDotNet_MeshUtils_EdgePairSizeCheck;
  static_assert(sizeof(MeshUtils::EdgePair) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::EdgePair::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::EdgePair (*)()>(&UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::EdgePair::Create)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::EdgePair), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::EdgePair::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::EdgePair::*)()>(&UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::EdgePair::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::EdgePair), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
