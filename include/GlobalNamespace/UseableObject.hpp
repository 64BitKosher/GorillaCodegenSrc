// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: TransferrableObject
#include "GlobalNamespace/TransferrableObject.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: UseableObjectEvents
  class UseableObjectEvents;
  // Forward declaring type: PhotonMessageInfoWrapped
  struct PhotonMessageInfoWrapped;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityEvent
  class UnityEvent;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: UseableObject
  class UseableObject;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::UseableObject);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UseableObject*, "", "UseableObject");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: UseableObject
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: FFFFFFFF
  class UseableObject : public ::GlobalNamespace::TransferrableObject {
    public:
    public:
    // public System.Boolean disableActivation
    // Size: 0x1
    // Offset: 0x2C9
    bool disableActivation;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean disableDeactivation
    // Size: 0x1
    // Offset: 0x2CA
    bool disableDeactivation;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private UseableObjectEvents _events
    // Size: 0x8
    // Offset: 0x2D0
    ::GlobalNamespace::UseableObjectEvents* events;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::UseableObjectEvents*) == 0x8);
    // private System.Boolean _raiseActivate
    // Size: 0x1
    // Offset: 0x2D8
    bool raiseActivate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _raiseDeactivate
    // Size: 0x1
    // Offset: 0x2D9
    bool raiseDeactivate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.DateTime _lastActivate
    // Size: 0x8
    // Offset: 0x2E0
    ::System::DateTime lastActivate;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    // private System.DateTime _lastDeactivate
    // Size: 0x8
    // Offset: 0x2E8
    ::System::DateTime lastDeactivate;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    // private System.Boolean _isMidUse
    // Size: 0x1
    // Offset: 0x2F0
    bool isMidUse;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Single _useTimeElapsed
    // Size: 0x4
    // Offset: 0x2F4
    float useTimeElapsed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _justUsed
    // Size: 0x1
    // Offset: 0x2F8
    bool justUsed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Int32 tempHandPos
    // Size: 0x4
    // Offset: 0x2FC
    int tempHandPos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public UnityEngine.Events.UnityEvent onActivateLocal
    // Size: 0x8
    // Offset: 0x300
    ::UnityEngine::Events::UnityEvent* onActivateLocal;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityEvent*) == 0x8);
    // public UnityEngine.Events.UnityEvent onDeactivateLocal
    // Size: 0x8
    // Offset: 0x308
    ::UnityEngine::Events::UnityEvent* onDeactivateLocal;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityEvent*) == 0x8);
    public:
    // Get instance field reference: public System.Boolean disableActivation
    [[deprecated("Use field access instead!")]] bool& dyn_disableActivation();
    // Get instance field reference: public System.Boolean disableDeactivation
    [[deprecated("Use field access instead!")]] bool& dyn_disableDeactivation();
    // Get instance field reference: private UseableObjectEvents _events
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::UseableObjectEvents*& dyn__events();
    // Get instance field reference: private System.Boolean _raiseActivate
    [[deprecated("Use field access instead!")]] bool& dyn__raiseActivate();
    // Get instance field reference: private System.Boolean _raiseDeactivate
    [[deprecated("Use field access instead!")]] bool& dyn__raiseDeactivate();
    // Get instance field reference: private System.DateTime _lastActivate
    [[deprecated("Use field access instead!")]] ::System::DateTime& dyn__lastActivate();
    // Get instance field reference: private System.DateTime _lastDeactivate
    [[deprecated("Use field access instead!")]] ::System::DateTime& dyn__lastDeactivate();
    // Get instance field reference: private System.Boolean _isMidUse
    [[deprecated("Use field access instead!")]] bool& dyn__isMidUse();
    // Get instance field reference: private System.Single _useTimeElapsed
    [[deprecated("Use field access instead!")]] float& dyn__useTimeElapsed();
    // Get instance field reference: private System.Boolean _justUsed
    [[deprecated("Use field access instead!")]] bool& dyn__justUsed();
    // Get instance field reference: private System.Int32 tempHandPos
    [[deprecated("Use field access instead!")]] int& dyn_tempHandPos();
    // Get instance field reference: public UnityEngine.Events.UnityEvent onActivateLocal
    [[deprecated("Use field access instead!")]] ::UnityEngine::Events::UnityEvent*& dyn_onActivateLocal();
    // Get instance field reference: public UnityEngine.Events.UnityEvent onDeactivateLocal
    [[deprecated("Use field access instead!")]] ::UnityEngine::Events::UnityEvent*& dyn_onDeactivateLocal();
    // public System.Boolean get_isMidUse()
    // Offset: 0x26DC124
    bool get_isMidUse();
    // public System.Single get_useTimeElapsed()
    // Offset: 0x26DC12C
    float get_useTimeElapsed();
    // public System.Boolean get_justUsed()
    // Offset: 0x26DC134
    bool get_justUsed();
    // private System.Void OnObjectActivated(System.Int32 sender, System.Int32 target, System.Object[] args, PhotonMessageInfoWrapped info)
    // Offset: 0x26DC5D0
    void OnObjectActivated(int sender, int target, ::ArrayW<::Il2CppObject*> args, ::GlobalNamespace::PhotonMessageInfoWrapped info);
    // private System.Void OnObjectDeactivated(System.Int32 sender, System.Int32 target, System.Object[] args, PhotonMessageInfoWrapped info)
    // Offset: 0x26DC5D4
    void OnObjectDeactivated(int sender, int target, ::ArrayW<::Il2CppObject*> args, ::GlobalNamespace::PhotonMessageInfoWrapped info);
    // protected override System.Void Awake()
    // Offset: 0x26DC14C
    // Implemented from: TransferrableObject
    // Base method: System.Void TransferrableObject::Awake()
    void Awake();
    // public override System.Void OnEnable()
    // Offset: 0x26DC1B8
    // Implemented from: TransferrableObject
    // Base method: System.Void TransferrableObject::OnEnable()
    void OnEnable();
    // public override System.Void OnDisable()
    // Offset: 0x26DC568
    // Implemented from: TransferrableObject
    // Base method: System.Void TransferrableObject::OnDisable()
    void OnDisable();
    // public override System.Void LateUpdate()
    // Offset: 0x26DC5D8
    // Implemented from: TransferrableObject
    // Base method: System.Void TransferrableObject::LateUpdate()
    void LateUpdate();
    // public override System.Void OnActivate()
    // Offset: 0x26DC614
    // Implemented from: TransferrableObject
    // Base method: System.Void TransferrableObject::OnActivate()
    void OnActivate();
    // public override System.Void OnDeactivate()
    // Offset: 0x26DC710
    // Implemented from: TransferrableObject
    // Base method: System.Void TransferrableObject::OnDeactivate()
    void OnDeactivate();
    // public override System.Boolean CanActivate()
    // Offset: 0x26DC80C
    // Implemented from: TransferrableObject
    // Base method: System.Boolean TransferrableObject::CanActivate()
    bool CanActivate();
    // public override System.Boolean CanDeactivate()
    // Offset: 0x26DC81C
    // Implemented from: TransferrableObject
    // Base method: System.Boolean TransferrableObject::CanDeactivate()
    bool CanDeactivate();
    // public System.Void .ctor()
    // Offset: 0x26DC82C
    // Implemented from: TransferrableObject
    // Base method: System.Void TransferrableObject::.ctor()
    // Base method: System.Void HoldableObject::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UseableObject* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::UseableObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UseableObject*, creationType>()));
    }
  }; // UseableObject
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::UseableObject::get_isMidUse
// Il2CppName: get_isMidUse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UseableObject::*)()>(&GlobalNamespace::UseableObject::get_isMidUse)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UseableObject*), "get_isMidUse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UseableObject::get_useTimeElapsed
// Il2CppName: get_useTimeElapsed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::UseableObject::*)()>(&GlobalNamespace::UseableObject::get_useTimeElapsed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UseableObject*), "get_useTimeElapsed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UseableObject::get_justUsed
// Il2CppName: get_justUsed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UseableObject::*)()>(&GlobalNamespace::UseableObject::get_justUsed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UseableObject*), "get_justUsed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UseableObject::OnObjectActivated
// Il2CppName: OnObjectActivated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UseableObject::*)(int, int, ::ArrayW<::Il2CppObject*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&GlobalNamespace::UseableObject::OnObjectActivated)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* target = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("", "PhotonMessageInfoWrapped")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UseableObject*), "OnObjectActivated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, target, args, info});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UseableObject::OnObjectDeactivated
// Il2CppName: OnObjectDeactivated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UseableObject::*)(int, int, ::ArrayW<::Il2CppObject*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&GlobalNamespace::UseableObject::OnObjectDeactivated)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* target = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("", "PhotonMessageInfoWrapped")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UseableObject*), "OnObjectDeactivated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, target, args, info});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UseableObject::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UseableObject::*)()>(&GlobalNamespace::UseableObject::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UseableObject*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UseableObject::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UseableObject::*)()>(&GlobalNamespace::UseableObject::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UseableObject*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UseableObject::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UseableObject::*)()>(&GlobalNamespace::UseableObject::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UseableObject*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UseableObject::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UseableObject::*)()>(&GlobalNamespace::UseableObject::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UseableObject*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UseableObject::OnActivate
// Il2CppName: OnActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UseableObject::*)()>(&GlobalNamespace::UseableObject::OnActivate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UseableObject*), "OnActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UseableObject::OnDeactivate
// Il2CppName: OnDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UseableObject::*)()>(&GlobalNamespace::UseableObject::OnDeactivate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UseableObject*), "OnDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UseableObject::CanActivate
// Il2CppName: CanActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UseableObject::*)()>(&GlobalNamespace::UseableObject::CanActivate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UseableObject*), "CanActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UseableObject::CanDeactivate
// Il2CppName: CanDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UseableObject::*)()>(&GlobalNamespace::UseableObject::CanDeactivate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UseableObject*), "CanDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UseableObject::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
