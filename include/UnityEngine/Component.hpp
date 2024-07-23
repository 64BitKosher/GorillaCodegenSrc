// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: SendMessageOptions
  struct SendMessageOptions;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Skipping declaration: IntPtr because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Component
  class Component;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Component);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Component*, "UnityEngine", "Component");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Component
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [NativeClassAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: FFFFFFFF
  class Component : public ::UnityEngine::Object {
    public:
    // public UnityEngine.Transform get_transform()
    // Offset: 0x54C2C98
    ::UnityEngine::Transform* get_transform();
    // public UnityEngine.GameObject get_gameObject()
    // Offset: 0x54C2CD4
    ::UnityEngine::GameObject* get_gameObject();
    // public UnityEngine.Component GetComponent(System.Type type)
    // Offset: 0x54C2D10
    ::UnityEngine::Component* GetComponent(::System::Type* type);
    // System.Void GetComponentFastPath(System.Type type, System.IntPtr oneFurtherThanResultValue)
    // Offset: 0x54C2DCC
    void GetComponentFastPath(::System::Type* type, ::System::IntPtr oneFurtherThanResultValue);
    // public T GetComponent()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    T GetComponent() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Component::GetComponent");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetComponent", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___generic__method);
    }
    // public System.Boolean TryGetComponent(System.Type type, out UnityEngine.Component component)
    // Offset: 0x54C2E20
    bool TryGetComponent(::System::Type* type, ByRef<::UnityEngine::Component*> component);
    // public System.Boolean TryGetComponent(out T component)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    bool TryGetComponent(ByRef<T> component) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Component::TryGetComponent");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "TryGetComponent", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<T&>()})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___generic__method, byref(component));
    }
    // public UnityEngine.Component GetComponentInChildren(System.Type t, System.Boolean includeInactive)
    // Offset: 0x54C2F28
    ::UnityEngine::Component* GetComponentInChildren(::System::Type* t, bool includeInactive);
    // public T GetComponentInChildren(System.Boolean includeInactive)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    T GetComponentInChildren(bool includeInactive) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Component::GetComponentInChildren");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetComponentInChildren", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(includeInactive)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___generic__method, includeInactive);
    }
    // public T GetComponentInChildren()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    T GetComponentInChildren() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Component::GetComponentInChildren");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetComponentInChildren", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___generic__method);
    }
    // public UnityEngine.Component[] GetComponentsInChildren(System.Type t, System.Boolean includeInactive)
    // Offset: 0x54C3004
    ::ArrayW<::UnityEngine::Component*> GetComponentsInChildren(::System::Type* t, bool includeInactive);
    // public T[] GetComponentsInChildren(System.Boolean includeInactive)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    ::ArrayW<T> GetComponentsInChildren(bool includeInactive) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Component::GetComponentsInChildren");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetComponentsInChildren", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(includeInactive)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::ArrayW<T>, false>(this, ___generic__method, includeInactive);
    }
    // public System.Void GetComponentsInChildren(System.Boolean includeInactive, System.Collections.Generic.List`1<T> result)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    void GetComponentsInChildren(bool includeInactive, ::System::Collections::Generic::List_1<T>* result) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Component::GetComponentsInChildren");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetComponentsInChildren", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(includeInactive), ::il2cpp_utils::ExtractType(result)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method, includeInactive, result);
    }
    // public T[] GetComponentsInChildren()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    ::ArrayW<T> GetComponentsInChildren() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Component::GetComponentsInChildren");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetComponentsInChildren", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::ArrayW<T>, false>(this, ___generic__method);
    }
    // public System.Void GetComponentsInChildren(System.Collections.Generic.List`1<T> results)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    void GetComponentsInChildren(::System::Collections::Generic::List_1<T>* results) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Component::GetComponentsInChildren");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetComponentsInChildren", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(results)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method, results);
    }
    // public UnityEngine.Component GetComponentInParent(System.Type t, System.Boolean includeInactive)
    // Offset: 0x54C3118
    ::UnityEngine::Component* GetComponentInParent(::System::Type* t, bool includeInactive);
    // public T GetComponentInParent(System.Boolean includeInactive)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    T GetComponentInParent(bool includeInactive) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Component::GetComponentInParent");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetComponentInParent", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(includeInactive)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___generic__method, includeInactive);
    }
    // public T GetComponentInParent()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    T GetComponentInParent() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Component::GetComponentInParent");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetComponentInParent", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___generic__method);
    }
    // public T[] GetComponentsInParent(System.Boolean includeInactive)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    ::ArrayW<T> GetComponentsInParent(bool includeInactive) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Component::GetComponentsInParent");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetComponentsInParent", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(includeInactive)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::ArrayW<T>, false>(this, ___generic__method, includeInactive);
    }
    // public System.Void GetComponentsInParent(System.Boolean includeInactive, System.Collections.Generic.List`1<T> results)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    void GetComponentsInParent(bool includeInactive, ::System::Collections::Generic::List_1<T>* results) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Component::GetComponentsInParent");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetComponentsInParent", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(includeInactive), ::il2cpp_utils::ExtractType(results)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method, includeInactive, results);
    }
    // public T[] GetComponentsInParent()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    ::ArrayW<T> GetComponentsInParent() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Component::GetComponentsInParent");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetComponentsInParent", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::ArrayW<T>, false>(this, ___generic__method);
    }
    // public UnityEngine.Component[] GetComponents(System.Type type)
    // Offset: 0x54C31F4
    ::ArrayW<::UnityEngine::Component*> GetComponents(::System::Type* type);
    // private System.Void GetComponentsForListInternal(System.Type searchType, System.Object resultList)
    // Offset: 0x54C32EC
    void GetComponentsForListInternal(::System::Type* searchType, ::Il2CppObject* resultList);
    // public System.Void GetComponents(System.Type type, System.Collections.Generic.List`1<UnityEngine.Component> results)
    // Offset: 0x54C3340
    void GetComponents(::System::Type* type, ::System::Collections::Generic::List_1<::UnityEngine::Component*>* results);
    // public System.Void GetComponents(System.Collections.Generic.List`1<T> results)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    void GetComponents(::System::Collections::Generic::List_1<T>* results) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Component::GetComponents");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetComponents", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(results)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method, results);
    }
    // public System.String get_tag()
    // Offset: 0x54C3394
    ::StringW get_tag();
    // public System.Void set_tag(System.String value)
    // Offset: 0x54C3440
    void set_tag(::StringW value);
    // public T[] GetComponents()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    ::ArrayW<T> GetComponents() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Component::GetComponents");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetComponents", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::ArrayW<T>, false>(this, ___generic__method);
    }
    // public System.Boolean CompareTag(System.String tag)
    // Offset: 0x54C34FC
    bool CompareTag(::StringW tag);
    // public System.Void SendMessage(System.String methodName, System.Object value, UnityEngine.SendMessageOptions options)
    // Offset: 0x54C35B8
    void SendMessage(::StringW methodName, ::Il2CppObject* value, ::UnityEngine::SendMessageOptions options);
    // public System.Void BroadcastMessage(System.String methodName, System.Object parameter, UnityEngine.SendMessageOptions options)
    // Offset: 0x54C3614
    void BroadcastMessage(::StringW methodName, ::Il2CppObject* parameter, ::UnityEngine::SendMessageOptions options);
    // public System.Void .ctor()
    // Offset: 0x54C2228
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Component* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Component::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Component*, creationType>()));
    }
  }; // UnityEngine.Component
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Component::get_transform
// Il2CppName: get_transform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (UnityEngine::Component::*)()>(&UnityEngine::Component::get_transform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Component*), "get_transform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Component::get_gameObject
// Il2CppName: get_gameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (UnityEngine::Component::*)()>(&UnityEngine::Component::get_gameObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Component*), "get_gameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Component::GetComponent
// Il2CppName: GetComponent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Component* (UnityEngine::Component::*)(::System::Type*)>(&UnityEngine::Component::GetComponent)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Component*), "GetComponent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: UnityEngine::Component::GetComponentFastPath
// Il2CppName: GetComponentFastPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Component::*)(::System::Type*, ::System::IntPtr)>(&UnityEngine::Component::GetComponentFastPath)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* oneFurtherThanResultValue = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Component*), "GetComponentFastPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, oneFurtherThanResultValue});
  }
};
// Writing MetadataGetter for method: UnityEngine::Component::GetComponent
// Il2CppName: GetComponent
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Component::TryGetComponent
// Il2CppName: TryGetComponent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Component::*)(::System::Type*, ByRef<::UnityEngine::Component*>)>(&UnityEngine::Component::TryGetComponent)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* component = &::il2cpp_utils::GetClassFromName("UnityEngine", "Component")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Component*), "TryGetComponent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, component});
  }
};
// Writing MetadataGetter for method: UnityEngine::Component::TryGetComponent
// Il2CppName: TryGetComponent
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Component::GetComponentInChildren
// Il2CppName: GetComponentInChildren
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Component* (UnityEngine::Component::*)(::System::Type*, bool)>(&UnityEngine::Component::GetComponentInChildren)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* includeInactive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Component*), "GetComponentInChildren", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, includeInactive});
  }
};
// Writing MetadataGetter for method: UnityEngine::Component::GetComponentInChildren
// Il2CppName: GetComponentInChildren
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Component::GetComponentInChildren
// Il2CppName: GetComponentInChildren
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Component::GetComponentsInChildren
// Il2CppName: GetComponentsInChildren
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Component*> (UnityEngine::Component::*)(::System::Type*, bool)>(&UnityEngine::Component::GetComponentsInChildren)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* includeInactive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Component*), "GetComponentsInChildren", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, includeInactive});
  }
};
// Writing MetadataGetter for method: UnityEngine::Component::GetComponentsInChildren
// Il2CppName: GetComponentsInChildren
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Component::GetComponentsInChildren
// Il2CppName: GetComponentsInChildren
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Component::GetComponentsInChildren
// Il2CppName: GetComponentsInChildren
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Component::GetComponentsInChildren
// Il2CppName: GetComponentsInChildren
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Component::GetComponentInParent
// Il2CppName: GetComponentInParent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Component* (UnityEngine::Component::*)(::System::Type*, bool)>(&UnityEngine::Component::GetComponentInParent)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* includeInactive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Component*), "GetComponentInParent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, includeInactive});
  }
};
// Writing MetadataGetter for method: UnityEngine::Component::GetComponentInParent
// Il2CppName: GetComponentInParent
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Component::GetComponentInParent
// Il2CppName: GetComponentInParent
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Component::GetComponentsInParent
// Il2CppName: GetComponentsInParent
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Component::GetComponentsInParent
// Il2CppName: GetComponentsInParent
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Component::GetComponentsInParent
// Il2CppName: GetComponentsInParent
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Component::GetComponents
// Il2CppName: GetComponents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Component*> (UnityEngine::Component::*)(::System::Type*)>(&UnityEngine::Component::GetComponents)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Component*), "GetComponents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: UnityEngine::Component::GetComponentsForListInternal
// Il2CppName: GetComponentsForListInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Component::*)(::System::Type*, ::Il2CppObject*)>(&UnityEngine::Component::GetComponentsForListInternal)> {
  static const MethodInfo* get() {
    static auto* searchType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* resultList = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Component*), "GetComponentsForListInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{searchType, resultList});
  }
};
// Writing MetadataGetter for method: UnityEngine::Component::GetComponents
// Il2CppName: GetComponents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Component::*)(::System::Type*, ::System::Collections::Generic::List_1<::UnityEngine::Component*>*)>(&UnityEngine::Component::GetComponents)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* results = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Component")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Component*), "GetComponents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, results});
  }
};
// Writing MetadataGetter for method: UnityEngine::Component::GetComponents
// Il2CppName: GetComponents
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Component::get_tag
// Il2CppName: get_tag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Component::*)()>(&UnityEngine::Component::get_tag)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Component*), "get_tag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Component::set_tag
// Il2CppName: set_tag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Component::*)(::StringW)>(&UnityEngine::Component::set_tag)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Component*), "set_tag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Component::GetComponents
// Il2CppName: GetComponents
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Component::CompareTag
// Il2CppName: CompareTag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Component::*)(::StringW)>(&UnityEngine::Component::CompareTag)> {
  static const MethodInfo* get() {
    static auto* tag = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Component*), "CompareTag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tag});
  }
};
// Writing MetadataGetter for method: UnityEngine::Component::SendMessage
// Il2CppName: SendMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Component::*)(::StringW, ::Il2CppObject*, ::UnityEngine::SendMessageOptions)>(&UnityEngine::Component::SendMessage)> {
  static const MethodInfo* get() {
    static auto* methodName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* options = &::il2cpp_utils::GetClassFromName("UnityEngine", "SendMessageOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Component*), "SendMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{methodName, value, options});
  }
};
// Writing MetadataGetter for method: UnityEngine::Component::BroadcastMessage
// Il2CppName: BroadcastMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Component::*)(::StringW, ::Il2CppObject*, ::UnityEngine::SendMessageOptions)>(&UnityEngine::Component::BroadcastMessage)> {
  static const MethodInfo* get() {
    static auto* methodName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* parameter = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* options = &::il2cpp_utils::GetClassFromName("UnityEngine", "SendMessageOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Component*), "BroadcastMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{methodName, parameter, options});
  }
};
// Writing MetadataGetter for method: UnityEngine::Component::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
