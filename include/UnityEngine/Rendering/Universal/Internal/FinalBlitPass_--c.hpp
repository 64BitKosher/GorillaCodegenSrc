// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.Internal.FinalBlitPass
#include "UnityEngine/Rendering/Universal/Internal/FinalBlitPass.hpp"
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
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass::$$c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass::$$c*, "UnityEngine.Rendering.Universal.Internal", "FinalBlitPass/<>c");
// Type namespace: UnityEngine.Rendering.Universal.Internal
namespace UnityEngine::Rendering::Universal::Internal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.Internal.FinalBlitPass/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class FinalBlitPass::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.Rendering.Universal.Internal.FinalBlitPass/<>c <>9
    static ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.Rendering.Universal.Internal.FinalBlitPass/<>c <>9
    static void _set_$$9(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass::$$c* value);
    // Get static field: static public UnityEngine.Experimental.Rendering.RenderGraphModule.RenderFunc`1<UnityEngine.Rendering.Universal.Internal.FinalBlitPass/PassData> <>9__12_0
    static ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass::PassData*>* _get_$$9__12_0();
    // Set static field: static public UnityEngine.Experimental.Rendering.RenderGraphModule.RenderFunc`1<UnityEngine.Rendering.Universal.Internal.FinalBlitPass/PassData> <>9__12_0
    static void _set_$$9__12_0(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass::PassData*>* value);
    // static private System.Void .cctor()
    // Offset: 0x531762C
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x5317694
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FinalBlitPass::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::Internal::FinalBlitPass::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FinalBlitPass::$$c*, creationType>()));
    }
    // System.Void <Render>b__12_0(UnityEngine.Rendering.Universal.Internal.FinalBlitPass/PassData data, UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphContext context)
    // Offset: 0x531769C
    void $Render$b__12_0(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass::PassData* data, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* context);
  }; // UnityEngine.Rendering.Universal.Internal.FinalBlitPass/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::FinalBlitPass::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Rendering::Universal::Internal::FinalBlitPass::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Internal::FinalBlitPass::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::FinalBlitPass::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Internal::FinalBlitPass::$$c::$Render$b__12_0
// Il2CppName: <Render>b__12_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::Internal::FinalBlitPass::$$c::*)(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass::PassData*, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*)>(&UnityEngine::Rendering::Universal::Internal::FinalBlitPass::$$c::$Render$b__12_0)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal.Internal", "FinalBlitPass/PassData")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering.RenderGraphModule", "RenderGraphContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::Internal::FinalBlitPass::$$c*), "<Render>b__12_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, context});
  }
};
