// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.TemporalAA
#include "UnityEngine/Rendering/Universal/TemporalAA.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Experimental::Rendering::RenderGraphModule
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
  // Forward declaring type: RenderGraphContext
  class RenderGraphContext;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::TemporalAA::$$c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::TemporalAA::$$c__DisplayClass10_0*, "UnityEngine.Rendering.Universal", "TemporalAA/<>c__DisplayClass10_0");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.TemporalAA/<>c__DisplayClass10_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class TemporalAA::$$c__DisplayClass10_0 : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Rendering.Universal.TemporalAA/TaaPassData passData
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Rendering::Universal::TemporalAA::TaaPassData* passData;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::TemporalAA::TaaPassData*) == 0x8);
    public:
    // Creating conversion operator: operator ::UnityEngine::Rendering::Universal::TemporalAA::TaaPassData*
    constexpr operator ::UnityEngine::Rendering::Universal::TemporalAA::TaaPassData*() const noexcept {
      return passData;
    }
    // Get instance field reference: public UnityEngine.Rendering.Universal.TemporalAA/TaaPassData passData
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::TemporalAA::TaaPassData*& dyn_passData();
    // public System.Void .ctor()
    // Offset: 0x52DFB1C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TemporalAA::$$c__DisplayClass10_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::TemporalAA::$$c__DisplayClass10_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TemporalAA::$$c__DisplayClass10_0*, creationType>()));
    }
    // System.Void <Render>b__0(UnityEngine.Rendering.Universal.TemporalAA/TaaPassData data, UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphContext context)
    // Offset: 0x52DFF38
    void $Render$b__0(::UnityEngine::Rendering::Universal::TemporalAA::TaaPassData* data, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* context);
  }; // UnityEngine.Rendering.Universal.TemporalAA/<>c__DisplayClass10_0
  #pragma pack(pop)
  static check_size<sizeof(TemporalAA::$$c__DisplayClass10_0), 16 + sizeof(::UnityEngine::Rendering::Universal::TemporalAA::TaaPassData*)> __UnityEngine_Rendering_Universal_TemporalAA_$$c__DisplayClass10_0SizeCheck;
  static_assert(sizeof(TemporalAA::$$c__DisplayClass10_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::TemporalAA::$$c__DisplayClass10_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::TemporalAA::$$c__DisplayClass10_0::$Render$b__0
// Il2CppName: <Render>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::TemporalAA::$$c__DisplayClass10_0::*)(::UnityEngine::Rendering::Universal::TemporalAA::TaaPassData*, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*)>(&UnityEngine::Rendering::Universal::TemporalAA::$$c__DisplayClass10_0::$Render$b__0)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "TemporalAA/TaaPassData")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering.RenderGraphModule", "RenderGraphContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::TemporalAA::$$c__DisplayClass10_0*), "<Render>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, context});
  }
};