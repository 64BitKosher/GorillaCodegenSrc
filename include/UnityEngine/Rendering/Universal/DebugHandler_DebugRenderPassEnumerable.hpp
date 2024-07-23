// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.DebugHandler
#include "UnityEngine/Rendering/Universal/DebugHandler.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: UnityEngine.Rendering.ScriptableRenderContext
#include "UnityEngine/Rendering/ScriptableRenderContext.hpp"
// Including type: UnityEngine.Rendering.FilteringSettings
#include "UnityEngine/Rendering/FilteringSettings.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering::Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: DebugRenderSetup
  class DebugRenderSetup;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: CommandBuffer
  class CommandBuffer;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DebugHandler::DebugRenderPassEnumerable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugHandler::DebugRenderPassEnumerable*, "UnityEngine.Rendering.Universal", "DebugHandler/DebugRenderPassEnumerable");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.DebugHandler/DebugRenderPassEnumerable
  // [TokenAttribute] Offset: FFFFFFFF
  class DebugHandler::DebugRenderPassEnumerable : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Rendering::Universal::DebugRenderSetup*>*/ {
    public:
    // Nested type: ::UnityEngine::Rendering::Universal::DebugHandler::DebugRenderPassEnumerable::Enumerator
    class Enumerator;
    public:
    // private readonly UnityEngine.Rendering.Universal.DebugHandler m_DebugHandler
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Rendering::Universal::DebugHandler* m_DebugHandler;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::DebugHandler*) == 0x8);
    // private readonly UnityEngine.Rendering.ScriptableRenderContext m_Context
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Rendering::ScriptableRenderContext m_Context;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::ScriptableRenderContext) == 0x8);
    // private readonly UnityEngine.Rendering.CommandBuffer m_CommandBuffer
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Rendering::CommandBuffer* m_CommandBuffer;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::CommandBuffer*) == 0x8);
    // private readonly UnityEngine.Rendering.FilteringSettings m_FilteringSettings
    // Size: 0x18
    // Offset: 0x28
    ::UnityEngine::Rendering::FilteringSettings m_FilteringSettings;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::FilteringSettings) == 0x18);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Rendering::Universal::DebugRenderSetup*>
    operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Rendering::Universal::DebugRenderSetup*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Rendering::Universal::DebugRenderSetup*>*>(this);
    }
    // Get instance field reference: private readonly UnityEngine.Rendering.Universal.DebugHandler m_DebugHandler
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::DebugHandler*& dyn_m_DebugHandler();
    // Get instance field reference: private readonly UnityEngine.Rendering.ScriptableRenderContext m_Context
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::ScriptableRenderContext& dyn_m_Context();
    // Get instance field reference: private readonly UnityEngine.Rendering.CommandBuffer m_CommandBuffer
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::CommandBuffer*& dyn_m_CommandBuffer();
    // Get instance field reference: private readonly UnityEngine.Rendering.FilteringSettings m_FilteringSettings
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::FilteringSettings& dyn_m_FilteringSettings();
    // public System.Void .ctor(UnityEngine.Rendering.Universal.DebugHandler debugHandler, UnityEngine.Rendering.ScriptableRenderContext context, UnityEngine.Rendering.CommandBuffer commandBuffer, UnityEngine.Rendering.FilteringSettings filteringSettings)
    // Offset: 0x529E3C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DebugHandler::DebugRenderPassEnumerable* New_ctor(::UnityEngine::Rendering::Universal::DebugHandler* debugHandler, ::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Rendering::CommandBuffer* commandBuffer, ::UnityEngine::Rendering::FilteringSettings filteringSettings) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::DebugHandler::DebugRenderPassEnumerable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DebugHandler::DebugRenderPassEnumerable*, creationType>(debugHandler, context, commandBuffer, filteringSettings)));
    }
    // public System.Collections.Generic.IEnumerator`1<UnityEngine.Rendering.Universal.DebugRenderSetup> GetEnumerator()
    // Offset: 0x529F1AC
    ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Rendering::Universal::DebugRenderSetup*>* GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x529F2E0
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // UnityEngine.Rendering.Universal.DebugHandler/DebugRenderPassEnumerable
  #pragma pack(pop)
  static check_size<sizeof(DebugHandler::DebugRenderPassEnumerable), 40 + sizeof(::UnityEngine::Rendering::FilteringSettings)> __UnityEngine_Rendering_Universal_DebugHandler_DebugRenderPassEnumerableSizeCheck;
  static_assert(sizeof(DebugHandler::DebugRenderPassEnumerable) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DebugHandler::DebugRenderPassEnumerable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DebugHandler::DebugRenderPassEnumerable::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Rendering::Universal::DebugRenderSetup*>* (UnityEngine::Rendering::Universal::DebugHandler::DebugRenderPassEnumerable::*)()>(&UnityEngine::Rendering::Universal::DebugHandler::DebugRenderPassEnumerable::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::DebugHandler::DebugRenderPassEnumerable*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DebugHandler::DebugRenderPassEnumerable::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (UnityEngine::Rendering::Universal::DebugHandler::DebugRenderPassEnumerable::*)()>(&UnityEngine::Rendering::Universal::DebugHandler::DebugRenderPassEnumerable::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::DebugHandler::DebugRenderPassEnumerable*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};