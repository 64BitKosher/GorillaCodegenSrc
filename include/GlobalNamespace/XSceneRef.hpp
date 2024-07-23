// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: SceneIndex
#include "GlobalNamespace/SceneIndex.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: XSceneRefTarget
  class XSceneRefTarget;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Component
  class Component;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: XSceneRef
  struct XSceneRef;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::XSceneRef, "", "XSceneRef");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x11
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: XSceneRef
  // [TokenAttribute] Offset: FFFFFFFF
  struct XSceneRef/*, public ::System::ValueType*/ {
    public:
    public:
    // public SceneIndex TargetScene
    // Size: 0x4
    // Offset: 0x0
    ::GlobalNamespace::SceneIndex TargetScene;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SceneIndex) == 0x4);
    // public System.Int32 TargetID
    // Size: 0x4
    // Offset: 0x4
    int TargetID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private XSceneRefTarget cached
    // Size: 0x8
    // Offset: 0x8
    ::GlobalNamespace::XSceneRefTarget* cached;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::XSceneRefTarget*) == 0x8);
    // private System.Boolean didCache
    // Size: 0x1
    // Offset: 0x10
    bool didCache;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: XSceneRef
    constexpr XSceneRef(::GlobalNamespace::SceneIndex TargetScene_ = {}, int TargetID_ = {}, ::GlobalNamespace::XSceneRefTarget* cached_ = {}, bool didCache_ = {}) noexcept : TargetScene{TargetScene_}, TargetID{TargetID_}, cached{cached_}, didCache{didCache_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public SceneIndex TargetScene
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SceneIndex& dyn_TargetScene();
    // Get instance field reference: public System.Int32 TargetID
    [[deprecated("Use field access instead!")]] int& dyn_TargetID();
    // Get instance field reference: private XSceneRefTarget cached
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::XSceneRefTarget*& dyn_cached();
    // Get instance field reference: private System.Boolean didCache
    [[deprecated("Use field access instead!")]] bool& dyn_didCache();
    // public System.Boolean TryResolve(out XSceneRefTarget result)
    // Offset: 0x289BFA0
    bool TryResolve(ByRef<::GlobalNamespace::XSceneRefTarget*> result);
    // public System.Boolean TryResolve(out UnityEngine.GameObject result)
    // Offset: 0x289C18C
    bool TryResolve(ByRef<::UnityEngine::GameObject*> result);
    // public System.Boolean TryResolve(out T result)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    bool TryResolve(ByRef<T> result) {
      static_assert(std::is_convertible_v<T, ::UnityEngine::Component*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::XSceneRef::TryResolve");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "TryResolve", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<T&>()})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___generic__method, byref(result));
    }
    // public System.Void AddCallbackOnLoad(System.Action callback)
    // Offset: 0x289C254
    void AddCallbackOnLoad(::System::Action* callback);
    // public System.Void RemoveCallbackOnLoad(System.Action callback)
    // Offset: 0x289C25C
    void RemoveCallbackOnLoad(::System::Action* callback);
    // public System.Void AddCallbackOnUnload(System.Action callback)
    // Offset: 0x289C264
    void AddCallbackOnUnload(::System::Action* callback);
    // public System.Void RemoveCallbackOnUnload(System.Action callback)
    // Offset: 0x289C26C
    void RemoveCallbackOnUnload(::System::Action* callback);
  }; // XSceneRef
  #pragma pack(pop)
  static check_size<sizeof(XSceneRef), 16 + sizeof(bool)> __GlobalNamespace_XSceneRefSizeCheck;
  static_assert(sizeof(XSceneRef) == 0x11);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::XSceneRef::TryResolve
// Il2CppName: TryResolve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::XSceneRef::*)(ByRef<::GlobalNamespace::XSceneRefTarget*>)>(&GlobalNamespace::XSceneRef::TryResolve)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("", "XSceneRefTarget")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::XSceneRef), "TryResolve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::XSceneRef::TryResolve
// Il2CppName: TryResolve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::XSceneRef::*)(ByRef<::UnityEngine::GameObject*>)>(&GlobalNamespace::XSceneRef::TryResolve)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::XSceneRef), "TryResolve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::XSceneRef::TryResolve
// Il2CppName: TryResolve
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::XSceneRef::AddCallbackOnLoad
// Il2CppName: AddCallbackOnLoad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::XSceneRef::*)(::System::Action*)>(&GlobalNamespace::XSceneRef::AddCallbackOnLoad)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::XSceneRef), "AddCallbackOnLoad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::XSceneRef::RemoveCallbackOnLoad
// Il2CppName: RemoveCallbackOnLoad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::XSceneRef::*)(::System::Action*)>(&GlobalNamespace::XSceneRef::RemoveCallbackOnLoad)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::XSceneRef), "RemoveCallbackOnLoad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::XSceneRef::AddCallbackOnUnload
// Il2CppName: AddCallbackOnUnload
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::XSceneRef::*)(::System::Action*)>(&GlobalNamespace::XSceneRef::AddCallbackOnUnload)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::XSceneRef), "AddCallbackOnUnload", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::XSceneRef::RemoveCallbackOnUnload
// Il2CppName: RemoveCallbackOnUnload
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::XSceneRef::*)(::System::Action*)>(&GlobalNamespace::XSceneRef::RemoveCallbackOnUnload)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::XSceneRef), "RemoveCallbackOnUnload", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback});
  }
};