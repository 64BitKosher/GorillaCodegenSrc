// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
  // Forward declaring type: Rigidbody
  class Rigidbody;
  // Forward declaring type: MeshCollider
  class MeshCollider;
  // Forward declaring type: AudioSource
  class AudioSource;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SodaBubble
  class SodaBubble;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SodaBubble);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SodaBubble*, "", "SodaBubble");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: SodaBubble
  // [TokenAttribute] Offset: FFFFFFFF
  class SodaBubble : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::SodaBubble::$PopCoroutine$d__5
    class $PopCoroutine$d__5;
    public:
    // public UnityEngine.MeshRenderer bubbleMesh
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::MeshRenderer* bubbleMesh;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshRenderer*) == 0x8);
    // public UnityEngine.Rigidbody body
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Rigidbody* body;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rigidbody*) == 0x8);
    // public UnityEngine.MeshCollider bubbleCollider
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::MeshCollider* bubbleCollider;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshCollider*) == 0x8);
    // public UnityEngine.AudioSource audioSource
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.MeshRenderer bubbleMesh
    [[deprecated("Use field access instead!")]] ::UnityEngine::MeshRenderer*& dyn_bubbleMesh();
    // Get instance field reference: public UnityEngine.Rigidbody body
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rigidbody*& dyn_body();
    // Get instance field reference: public UnityEngine.MeshCollider bubbleCollider
    [[deprecated("Use field access instead!")]] ::UnityEngine::MeshCollider*& dyn_bubbleCollider();
    // Get instance field reference: public UnityEngine.AudioSource audioSource
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioSource*& dyn_audioSource();
    // public System.Void Pop()
    // Offset: 0x272FB80
    void Pop();
    // private System.Collections.IEnumerator PopCoroutine()
    // Offset: 0x272FBA0
    ::System::Collections::IEnumerator* PopCoroutine();
    // public System.Void .ctor()
    // Offset: 0x272FC34
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SodaBubble* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SodaBubble::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SodaBubble*, creationType>()));
    }
  }; // SodaBubble
  #pragma pack(pop)
  static check_size<sizeof(SodaBubble), 56 + sizeof(::UnityEngine::AudioSource*)> __GlobalNamespace_SodaBubbleSizeCheck;
  static_assert(sizeof(SodaBubble) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SodaBubble::Pop
// Il2CppName: Pop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SodaBubble::*)()>(&GlobalNamespace::SodaBubble::Pop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SodaBubble*), "Pop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SodaBubble::PopCoroutine
// Il2CppName: PopCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::SodaBubble::*)()>(&GlobalNamespace::SodaBubble::PopCoroutine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SodaBubble*), "PopCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SodaBubble::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
