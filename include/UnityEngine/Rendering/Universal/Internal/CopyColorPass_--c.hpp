// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.Internal.CopyColorPass
#include "UnityEngine/Rendering/Universal/Internal/CopyColorPass.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Experimental::Rendering::RenderGraphModule
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
  // Forward declaring type: RenderFunc`1<PassData>
  template<typename PassData>
  class RenderFunc_1;
  // Forward declaring type: RenderGraphContext
  class RenderGraphContext;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::CopyColorPass::$$c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::CopyColorPass::$$c*, "UnityEngine.Rendering.Universal.Internal", "CopyColorPass/<>c");
// Type namespace: UnityEngine.Rendering.Universal.Internal
namespace UnityEngine::Rendering::Universal::Internal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.Internal.CopyColorPass/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class CopyColorPass::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.Rendering.Universal.Internal.CopyColorPass/<>c <>9
    static ::UnityEngine::Rendering::Universal::Internal::CopyColorPass::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.Rendering.Universal.Internal.CopyColorPass/<>c <>9
    static void _set_$$9(::UnityEngine::Rendering::Universal::Internal::CopyColorPass::$$c* value);
    // Get static field: static public UnityEngine.Experimental.Rendering.RenderGraphModule.RenderFunc`1<UnityEngine.Rendering.Universal.Internal.CopyColorPass/PassData> <>9__25_0
    static ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<::UnityEngine::Rendering::Universal::Internal::CopyColorPass::PassData*>* _get_$$9__25_0();
    // Set static field: static public UnityEngine.Experimental.Rendering.RenderGraphModule.RenderFunc`1<UnityEngine.Rendering.Universal.Internal.CopyColorPass/PassData> <>9__25_0
    static void _set_$$9__25_0(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<::UnityEngine::Rendering::Universal::Internal::CopyColorPass::PassData*>* value);
    // Get static field: static public UnityEngine.Experimental.Rendering.RenderGraphModule.RenderFunc`1<UnityEngine.Rendering.Universal.Internal.CopyColorPass/PassData> <>9__25_1
    static ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<::UnityEngine::Rendering::Universal::Internal::CopyColorPass::PassData*>* _get_$$9__25_1();
    // Set static field: static public UnityEngine.Experimental.Rendering.RenderGraphModule.RenderFunc`1<UnityEngine.Rendering.Universal.Internal.CopyColorPass/PassData> <>9__25_1
    static void _set_$$9__25_1(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<::UnityEngine::Rendering::Universal::Internal::CopyColorPass::PassData*>* value);
    // static private System.Void .cctor()
    // Offset: 0x5311820
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x5311888
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CopyColorPass::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::Internal::CopyColorPass::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CopyColorPass::$$c*, creationType>()));
    }
    // System.Void <Render>b__25_0(UnityEngine.Rendering.Universal.Internal.CopyColorPass/PassData data, UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphContext context)
    // Offset: 0x5311890
    void $Render$b__25_0(::UnityEngine::Rendering::Universal::Internal::CopyColorPass::PassData* data, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* context);
    // System.Void <Render>b__25_1(UnityEngine.Rendering.Universal.Internal.CopyColorPass/PassData data, UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphContext context)
    // Offset: 0x53118E8
    void $Render$b__25_1(::UnityEngine::Rendering::Universal::Internal::CopyColorPass::PassData* data, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* context);
  }; // UnityEngine.Rendering.Universal.Internal.CopyColorPass/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::CopyColorPass::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Rendering::Universal::Internal::CopyColorPass::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Internal::CopyColorPass::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::CopyColorPass::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::CopyColorPass::$$c::$Render$b__25_0
// Il2CppName: <Render>b__25_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::Internal::CopyColorPass::$$c::*)(::UnityEngine::Rendering::Universal::Internal::CopyColorPass::PassData*, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*)>(&UnityEngine::Rendering::Universal::Internal::CopyColorPass::$$c::$Render$b__25_0)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.Internal", "CopyColorPass/PassData")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering.RenderGraphModule", "RenderGraphContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Internal::CopyColorPass::$$c*), "<Render>b__25_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, context});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::CopyColorPass::$$c::$Render$b__25_1
// Il2CppName: <Render>b__25_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::Internal::CopyColorPass::$$c::*)(::UnityEngine::Rendering::Universal::Internal::CopyColorPass::PassData*, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*)>(&UnityEngine::Rendering::Universal::Internal::CopyColorPass::$$c::$Render$b__25_1)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.Internal", "CopyColorPass/PassData")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering.RenderGraphModule", "RenderGraphContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Internal::CopyColorPass::$$c*), "<Render>b__25_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, context});
  }
};
