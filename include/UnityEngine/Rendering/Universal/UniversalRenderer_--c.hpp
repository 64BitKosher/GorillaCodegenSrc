// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.UniversalRenderer
#include "UnityEngine/Rendering/Universal/UniversalRenderer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Predicate`1<T>
  template<typename T>
  class Predicate_1;
}
// Forward declaring namespace: UnityEngine::Rendering::Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: ScriptableRenderPass
  class ScriptableRenderPass;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::UniversalRenderer::$$c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UniversalRenderer::$$c*, "UnityEngine.Rendering.Universal", "UniversalRenderer/<>c");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.UniversalRenderer/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class UniversalRenderer::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.Rendering.Universal.UniversalRenderer/<>c <>9
    static ::UnityEngine::Rendering::Universal::UniversalRenderer::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.Rendering.Universal.UniversalRenderer/<>c <>9
    static void _set_$$9(::UnityEngine::Rendering::Universal::UniversalRenderer::$$c* value);
    // Get static field: static public System.Predicate`1<UnityEngine.Rendering.Universal.ScriptableRenderPass> <>9__87_0
    static ::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* _get_$$9__87_0();
    // Set static field: static public System.Predicate`1<UnityEngine.Rendering.Universal.ScriptableRenderPass> <>9__87_0
    static void _set_$$9__87_0(::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* value);
    // Get static field: static public System.Predicate`1<UnityEngine.Rendering.Universal.ScriptableRenderPass> <>9__87_1
    static ::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* _get_$$9__87_1();
    // Set static field: static public System.Predicate`1<UnityEngine.Rendering.Universal.ScriptableRenderPass> <>9__87_1
    static void _set_$$9__87_1(::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* value);
    // static private System.Void .cctor()
    // Offset: 0x52EE938
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x52EE9A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UniversalRenderer::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::UniversalRenderer::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UniversalRenderer::$$c*, creationType>()));
    }
    // System.Boolean <Setup>b__87_0(UnityEngine.Rendering.Universal.ScriptableRenderPass x)
    // Offset: 0x52EE9A8
    bool $Setup$b__87_0(::UnityEngine::Rendering::Universal::ScriptableRenderPass* x);
    // System.Boolean <Setup>b__87_1(UnityEngine.Rendering.Universal.ScriptableRenderPass x)
    // Offset: 0x52EE9C8
    bool $Setup$b__87_1(::UnityEngine::Rendering::Universal::ScriptableRenderPass* x);
  }; // UnityEngine.Rendering.Universal.UniversalRenderer/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalRenderer::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Rendering::Universal::UniversalRenderer::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UniversalRenderer::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalRenderer::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalRenderer::$$c::$Setup$b__87_0
// Il2CppName: <Setup>b__87_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::Universal::UniversalRenderer::$$c::*)(::UnityEngine::Rendering::Universal::ScriptableRenderPass*)>(&UnityEngine::Rendering::Universal::UniversalRenderer::$$c::$Setup$b__87_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "ScriptableRenderPass")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UniversalRenderer::$$c*), "<Setup>b__87_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::UniversalRenderer::$$c::$Setup$b__87_1
// Il2CppName: <Setup>b__87_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::Universal::UniversalRenderer::$$c::*)(::UnityEngine::Rendering::Universal::ScriptableRenderPass*)>(&UnityEngine::Rendering::Universal::UniversalRenderer::$$c::$Setup$b__87_1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "ScriptableRenderPass")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::UniversalRenderer::$$c*), "<Setup>b__87_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};