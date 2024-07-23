// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: Stack`1<T>
  template<typename T>
  class Stack_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Component
  class Component;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ICollection
  class ICollection;
}
// Completed forward declares
// Type namespace: Photon.Pun
namespace Photon::Pun {
  // Forward declaring type: NestedComponentUtilities
  class NestedComponentUtilities;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Pun::NestedComponentUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::NestedComponentUtilities*, "Photon.Pun", "NestedComponentUtilities");
// Type namespace: Photon.Pun
namespace Photon::Pun {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Pun.NestedComponentUtilities
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class NestedComponentUtilities : public ::Il2CppObject {
    public:
    // Get static field: static private System.Collections.Generic.Queue`1<UnityEngine.Transform> nodesQueue
    static ::System::Collections::Generic::Queue_1<::UnityEngine::Transform*>* _get_nodesQueue();
    // Set static field: static private System.Collections.Generic.Queue`1<UnityEngine.Transform> nodesQueue
    static void _set_nodesQueue(::System::Collections::Generic::Queue_1<::UnityEngine::Transform*>* value);
    // Get static field: static public System.Collections.Generic.Dictionary`2<System.Type,System.Collections.ICollection> searchLists
    static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::ICollection*>* _get_searchLists();
    // Set static field: static public System.Collections.Generic.Dictionary`2<System.Type,System.Collections.ICollection> searchLists
    static void _set_searchLists(::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::ICollection*>* value);
    // Get static field: static private System.Collections.Generic.Stack`1<UnityEngine.Transform> nodeStack
    static ::System::Collections::Generic::Stack_1<::UnityEngine::Transform*>* _get_nodeStack();
    // Set static field: static private System.Collections.Generic.Stack`1<UnityEngine.Transform> nodeStack
    static void _set_nodeStack(::System::Collections::Generic::Stack_1<::UnityEngine::Transform*>* value);
    // static public T EnsureRootComponentExists(UnityEngine.Transform transform)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T, class NestedT>
    static T EnsureRootComponentExists(::UnityEngine::Transform* transform) {
      static_assert(std::is_convertible_v<T, ::UnityEngine::Component*>);
      static_assert(std::is_convertible_v<NestedT, ::UnityEngine::Component*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Pun::NestedComponentUtilities::EnsureRootComponentExists");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Photon.Pun", "NestedComponentUtilities", "EnsureRootComponentExists", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<NestedT>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(transform)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<NestedT>::get()})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, transform);
    }
    // static public T GetParentComponent(UnityEngine.Transform t)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static T GetParentComponent(::UnityEngine::Transform* t) {
      static_assert(std::is_convertible_v<T, ::UnityEngine::Component*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Pun::NestedComponentUtilities::GetParentComponent");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Photon.Pun", "NestedComponentUtilities", "GetParentComponent", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(t)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, t);
    }
    // static public System.Void GetNestedComponentsInParents(UnityEngine.Transform t, System.Collections.Generic.List`1<T> list)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static void GetNestedComponentsInParents(::UnityEngine::Transform* t, ::System::Collections::Generic::List_1<T>* list) {
      static_assert(std::is_convertible_v<T, ::UnityEngine::Component*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Pun::NestedComponentUtilities::GetNestedComponentsInParents");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Photon.Pun", "NestedComponentUtilities", "GetNestedComponentsInParents", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(t), ::il2cpp_utils::ExtractType(list)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, t, list);
    }
    // static public T GetNestedComponentInChildren(UnityEngine.Transform t, System.Boolean includeInactive)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T, class NestedT>
    static T GetNestedComponentInChildren(::UnityEngine::Transform* t, bool includeInactive) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Pun::NestedComponentUtilities::GetNestedComponentInChildren");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Photon.Pun", "NestedComponentUtilities", "GetNestedComponentInChildren", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<NestedT>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(t), ::il2cpp_utils::ExtractType(includeInactive)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<NestedT>::get()})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, t, includeInactive);
    }
    // static public T GetNestedComponentInParent(UnityEngine.Transform t)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T, class NestedT>
    static T GetNestedComponentInParent(::UnityEngine::Transform* t) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Pun::NestedComponentUtilities::GetNestedComponentInParent");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Photon.Pun", "NestedComponentUtilities", "GetNestedComponentInParent", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<NestedT>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(t)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<NestedT>::get()})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, t);
    }
    // static public T GetNestedComponentInParents(UnityEngine.Transform t)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T, class NestedT>
    static T GetNestedComponentInParents(::UnityEngine::Transform* t) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Pun::NestedComponentUtilities::GetNestedComponentInParents");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Photon.Pun", "NestedComponentUtilities", "GetNestedComponentInParents", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<NestedT>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(t)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<NestedT>::get()})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, t);
    }
    // static public System.Void GetNestedComponentsInParents(UnityEngine.Transform t, System.Collections.Generic.List`1<T> list)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T, class NestedT>
    static void GetNestedComponentsInParents(::UnityEngine::Transform* t, ::System::Collections::Generic::List_1<T>* list) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Pun::NestedComponentUtilities::GetNestedComponentsInParents");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Photon.Pun", "NestedComponentUtilities", "GetNestedComponentsInParents", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<NestedT>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(t), ::il2cpp_utils::ExtractType(list)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<NestedT>::get()})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, t, list);
    }
    // static public System.Collections.Generic.List`1<T> GetNestedComponentsInChildren(UnityEngine.Transform t, System.Collections.Generic.List`1<T> list, System.Boolean includeInactive)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T, class NestedT>
    static ::System::Collections::Generic::List_1<T>* GetNestedComponentsInChildren(::UnityEngine::Transform* t, ::System::Collections::Generic::List_1<T>* list, bool includeInactive) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Pun::NestedComponentUtilities::GetNestedComponentsInChildren");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Photon.Pun", "NestedComponentUtilities", "GetNestedComponentsInChildren", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<NestedT>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(t), ::il2cpp_utils::ExtractType(list), ::il2cpp_utils::ExtractType(includeInactive)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<NestedT>::get()})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::List_1<T>*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, t, list, includeInactive);
    }
    // static public System.Collections.Generic.List`1<T> GetNestedComponentsInChildren(UnityEngine.Transform t, System.Collections.Generic.List`1<T> list, System.Boolean includeInactive, params System.Type[] stopOn)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::System::Collections::Generic::List_1<T>* GetNestedComponentsInChildren(::UnityEngine::Transform* t, ::System::Collections::Generic::List_1<T>* list, bool includeInactive, ::ArrayW<::System::Type*> stopOn) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Pun::NestedComponentUtilities::GetNestedComponentsInChildren");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Photon.Pun", "NestedComponentUtilities", "GetNestedComponentsInChildren", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(t), ::il2cpp_utils::ExtractType(list), ::il2cpp_utils::ExtractType(includeInactive), ::il2cpp_utils::ExtractType(stopOn)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::List_1<T>*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, t, list, includeInactive, stopOn);
    }
    // static public System.Void GetNestedComponentsInChildren(UnityEngine.Transform t, System.Boolean includeInactive, System.Collections.Generic.List`1<T> list)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T, class SearchT, class NestedT>
    static void GetNestedComponentsInChildren(::UnityEngine::Transform* t, bool includeInactive, ::System::Collections::Generic::List_1<T>* list) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Pun::NestedComponentUtilities::GetNestedComponentsInChildren");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Photon.Pun", "NestedComponentUtilities", "GetNestedComponentsInChildren", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<SearchT>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<NestedT>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(t), ::il2cpp_utils::ExtractType(includeInactive), ::il2cpp_utils::ExtractType(list)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<SearchT>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<NestedT>::get()})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, t, includeInactive, list);
    }
    // static private System.Void .cctor()
    // Offset: 0x4A592C8
    static void _cctor();
  }; // Photon.Pun.NestedComponentUtilities
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Pun::NestedComponentUtilities::EnsureRootComponentExists
// Il2CppName: EnsureRootComponentExists
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Photon::Pun::NestedComponentUtilities::GetParentComponent
// Il2CppName: GetParentComponent
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Photon::Pun::NestedComponentUtilities::GetNestedComponentsInParents
// Il2CppName: GetNestedComponentsInParents
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Photon::Pun::NestedComponentUtilities::GetNestedComponentInChildren
// Il2CppName: GetNestedComponentInChildren
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Photon::Pun::NestedComponentUtilities::GetNestedComponentInParent
// Il2CppName: GetNestedComponentInParent
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Photon::Pun::NestedComponentUtilities::GetNestedComponentInParents
// Il2CppName: GetNestedComponentInParents
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Photon::Pun::NestedComponentUtilities::GetNestedComponentsInParents
// Il2CppName: GetNestedComponentsInParents
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Photon::Pun::NestedComponentUtilities::GetNestedComponentsInChildren
// Il2CppName: GetNestedComponentsInChildren
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Photon::Pun::NestedComponentUtilities::GetNestedComponentsInChildren
// Il2CppName: GetNestedComponentsInChildren
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Photon::Pun::NestedComponentUtilities::GetNestedComponentsInChildren
// Il2CppName: GetNestedComponentsInChildren
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Photon::Pun::NestedComponentUtilities::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Photon::Pun::NestedComponentUtilities::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::NestedComponentUtilities*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
