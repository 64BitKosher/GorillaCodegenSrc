// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.Utilities.BaseRegistrationList`1
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/BaseRegistrationList_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit.Utilities
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
  // Forward declaring type: SmallRegistrationList`1<T>
  template<typename T>
  class SmallRegistrationList_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1, "UnityEngine.XR.Interaction.Toolkit.Utilities", "SmallRegistrationList`1");
// Type namespace: UnityEngine.XR.Interaction.Toolkit.Utilities
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.Utilities.SmallRegistrationList`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class SmallRegistrationList_1 : public ::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T> {
    public:
    public:
    // private System.Boolean m_BufferChanges
    // Size: 0x1
    // Offset: 0x0
    bool m_BufferChanges;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return m_BufferChanges;
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Boolean m_BufferChanges
    [[deprecated("Use field access instead!")]] bool& dyn_m_BufferChanges() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1::dyn_m_BufferChanges");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_BufferChanges"))->offset;
      return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Boolean get_bufferChanges()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_bufferChanges() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1::get_bufferChanges");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_bufferChanges", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // public System.Void set_bufferChanges(System.Boolean value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_bufferChanges(bool value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1::set_bufferChanges");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_bufferChanges", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public override System.Boolean IsRegistered(T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.Utilities.BaseRegistrationList`1
    // Base method: System.Boolean BaseRegistrationList_1::IsRegistered(T item)
    bool IsRegistered(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1::IsRegistered");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, item);
    }
    // public override System.Boolean IsStillRegistered(T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.Utilities.BaseRegistrationList`1
    // Base method: System.Boolean BaseRegistrationList_1::IsStillRegistered(T item)
    bool IsStillRegistered(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1::IsStillRegistered");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, item);
    }
    // public override System.Boolean Register(T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.Utilities.BaseRegistrationList`1
    // Base method: System.Boolean BaseRegistrationList_1::Register(T item)
    bool Register(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1::Register");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, item);
    }
    // public override System.Boolean Unregister(T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.Utilities.BaseRegistrationList`1
    // Base method: System.Boolean BaseRegistrationList_1::Unregister(T item)
    bool Unregister(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1::Unregister");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, item);
    }
    // public override System.Void Flush()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.Utilities.BaseRegistrationList`1
    // Base method: System.Void BaseRegistrationList_1::Flush()
    void Flush() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1::Flush");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public override System.Void GetRegisteredItems(System.Collections.Generic.List`1<T> results)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.Utilities.BaseRegistrationList`1
    // Base method: System.Void BaseRegistrationList_1::GetRegisteredItems(System.Collections.Generic.List`1<T> results)
    void GetRegisteredItems(::System::Collections::Generic::List_1<T>* results) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1::GetRegisteredItems");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, results);
    }
    // public override T GetRegisteredItemAt(System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.Utilities.BaseRegistrationList`1
    // Base method: T BaseRegistrationList_1::GetRegisteredItemAt(System.Int32 index)
    T GetRegisteredItemAt(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1::GetRegisteredItemAt");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method, index);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.Utilities.BaseRegistrationList`1
    // Base method: System.Void BaseRegistrationList_1::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SmallRegistrationList_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SmallRegistrationList_1<T>*, creationType>()));
    }
  }; // UnityEngine.XR.Interaction.Toolkit.Utilities.SmallRegistrationList`1
  // Could not write size check! Type: UnityEngine.XR.Interaction.Toolkit.Utilities.SmallRegistrationList`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
