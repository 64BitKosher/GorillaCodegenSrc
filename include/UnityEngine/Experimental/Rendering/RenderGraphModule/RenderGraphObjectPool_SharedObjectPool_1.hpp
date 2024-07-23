// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/RenderGraphObjectPool.hpp"
// Including type: UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool/SharedObjectPoolBase
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/RenderGraphObjectPool_SharedObjectPoolBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Stack`1<T>
  template<typename T>
  class Stack_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Lazy`1<T>
  template<typename T>
  class Lazy_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::SharedObjectPool_1, "UnityEngine.Experimental.Rendering.RenderGraphModule", "RenderGraphObjectPool/SharedObjectPool`1");
// Type namespace: UnityEngine.Experimental.Rendering.RenderGraphModule
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool/SharedObjectPool`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class RenderGraphObjectPool::SharedObjectPool_1 : public ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::SharedObjectPoolBase {
    public:
    public:
    // private System.Collections.Generic.Stack`1<T> m_Pool
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::Stack_1<T>* m_Pool;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Stack_1<T>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::Stack_1<T>*
    constexpr operator ::System::Collections::Generic::Stack_1<T>*() const noexcept {
      return m_Pool;
    }
    // Autogenerated static field getter
    // Get static field: static private readonly System.Lazy`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool/SharedObjectPool`1<T>> s_Instance
    static ::System::Lazy_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::SharedObjectPool_1<T>*>* _get_s_Instance() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::SharedObjectPool_1::_get_s_Instance");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<::System::Lazy_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::SharedObjectPool_1<T>*>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RenderGraphObjectPool::SharedObjectPool_1<T>*>::get(), "s_Instance"));
    }
    // Autogenerated static field setter
    // Set static field: static private readonly System.Lazy`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool/SharedObjectPool`1<T>> s_Instance
    static void _set_s_Instance(::System::Lazy_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::SharedObjectPool_1<T>*>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::SharedObjectPool_1::_set_s_Instance");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RenderGraphObjectPool::SharedObjectPool_1<T>*>::get(), "s_Instance", value));
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.Stack`1<T> m_Pool
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Stack_1<T>*& dyn_m_Pool() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::SharedObjectPool_1::dyn_m_Pool");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_Pool"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::Stack_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public T Get()
    // Offset: 0xFFFFFFFFFFFFFFFF
    T Get() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::SharedObjectPool_1::Get");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Get", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
    }
    // public System.Void Release(T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Release(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::SharedObjectPool_1::Release");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Release", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // static private UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool/SharedObjectPool`1<T> AllocatePool()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::SharedObjectPool_1<T>* AllocatePool() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::SharedObjectPool_1::AllocatePool");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RenderGraphObjectPool::SharedObjectPool_1<T>*>::get(), "AllocatePool", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::SharedObjectPool_1<T>*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
    // static public UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool/SharedObjectPool`1<T> get_sharedPool()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::SharedObjectPool_1<T>* get_sharedPool() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::SharedObjectPool_1::get_sharedPool");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RenderGraphObjectPool::SharedObjectPool_1<T>*>::get(), "get_sharedPool", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::SharedObjectPool_1<T>*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
    // protected override System.Void Clear()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool/SharedObjectPoolBase
    // Base method: System.Void SharedObjectPoolBase::Clear()
    void Clear() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::SharedObjectPool_1::Clear");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::SharedObjectPoolBase*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool/SharedObjectPoolBase
    // Base method: System.Void SharedObjectPoolBase::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RenderGraphObjectPool::SharedObjectPool_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::SharedObjectPool_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RenderGraphObjectPool::SharedObjectPool_1<T>*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool/SharedObjectPoolBase
    // Base method: System.Void SharedObjectPoolBase::.cctor()
    static void _cctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool::SharedObjectPool_1::.cctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RenderGraphObjectPool::SharedObjectPool_1<T>*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
  }; // UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool/SharedObjectPool`1
  // Could not write size check! Type: UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphObjectPool/SharedObjectPool`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
