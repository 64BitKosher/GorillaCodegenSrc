// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Motion
#include "UnityEngine/Motion.hpp"
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
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: WrapMode
  struct WrapMode;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: Bounds
  struct Bounds;
  // Forward declaring type: AnimationEvent
  class AnimationEvent;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationClip
  class AnimationClip;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AnimationClip);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimationClip*, "UnityEngine", "AnimationClip");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AnimationClip
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeTypeAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  class AnimationClip : public ::UnityEngine::Motion {
    public:
    // static private System.Void Internal_CreateAnimationClip(UnityEngine.AnimationClip self)
    // Offset: 0x5464460
    static void Internal_CreateAnimationClip(::UnityEngine::AnimationClip* self);
    // public System.Void SampleAnimation(UnityEngine.GameObject go, System.Single time)
    // Offset: 0x546449C
    void SampleAnimation(::UnityEngine::GameObject* go, float time);
    // static System.Void SampleAnimation(UnityEngine.GameObject go, UnityEngine.AnimationClip clip, System.Single inTime, UnityEngine.WrapMode wrapMode)
    // Offset: 0x5464564
    static void SampleAnimation(::UnityEngine::GameObject* go, ::UnityEngine::AnimationClip* clip, float inTime, ::UnityEngine::WrapMode wrapMode);
    // public System.Single get_length()
    // Offset: 0x54645C8
    float get_length();
    // System.Single get_startTime()
    // Offset: 0x5464604
    float get_startTime();
    // System.Single get_stopTime()
    // Offset: 0x5464640
    float get_stopTime();
    // public System.Single get_frameRate()
    // Offset: 0x546467C
    float get_frameRate();
    // public System.Void set_frameRate(System.Single value)
    // Offset: 0x54646B8
    void set_frameRate(float value);
    // public System.Void SetCurve(System.String relativePath, System.Type type, System.String propertyName, UnityEngine.AnimationCurve curve)
    // Offset: 0x5464704
    void SetCurve(::StringW relativePath, ::System::Type* type, ::StringW propertyName, ::UnityEngine::AnimationCurve* curve);
    // public System.Void EnsureQuaternionContinuity()
    // Offset: 0x5464770
    void EnsureQuaternionContinuity();
    // public System.Void ClearCurves()
    // Offset: 0x54647AC
    void ClearCurves();
    // public UnityEngine.WrapMode get_wrapMode()
    // Offset: 0x5464528
    ::UnityEngine::WrapMode get_wrapMode();
    // public System.Void set_wrapMode(UnityEngine.WrapMode value)
    // Offset: 0x54647E8
    void set_wrapMode(::UnityEngine::WrapMode value);
    // public UnityEngine.Bounds get_localBounds()
    // Offset: 0x546482C
    ::UnityEngine::Bounds get_localBounds();
    // public System.Void set_localBounds(UnityEngine.Bounds value)
    // Offset: 0x54648D8
    void set_localBounds(::UnityEngine::Bounds value);
    // public System.Boolean get_legacy()
    // Offset: 0x5464960
    bool get_legacy();
    // public System.Void set_legacy(System.Boolean value)
    // Offset: 0x546499C
    void set_legacy(bool value);
    // public System.Boolean get_humanMotion()
    // Offset: 0x54649E0
    bool get_humanMotion();
    // public System.Boolean get_empty()
    // Offset: 0x5464A1C
    bool get_empty();
    // public System.Boolean get_hasGenericRootTransform()
    // Offset: 0x5464A58
    bool get_hasGenericRootTransform();
    // public System.Boolean get_hasMotionFloatCurves()
    // Offset: 0x5464A94
    bool get_hasMotionFloatCurves();
    // public System.Boolean get_hasMotionCurves()
    // Offset: 0x5464AD0
    bool get_hasMotionCurves();
    // public System.Boolean get_hasRootCurves()
    // Offset: 0x5464B0C
    bool get_hasRootCurves();
    // System.Boolean get_hasRootMotion()
    // Offset: 0x5464B48
    bool get_hasRootMotion();
    // public System.Void AddEvent(UnityEngine.AnimationEvent evt)
    // Offset: 0x5464B84
    void AddEvent(::UnityEngine::AnimationEvent* evt);
    // private System.Void AddEventInternal(System.Object evt)
    // Offset: 0x5464C14
    void AddEventInternal(::Il2CppObject* evt);
    // public UnityEngine.AnimationEvent[] get_events()
    // Offset: 0x5464C58
    ::ArrayW<::UnityEngine::AnimationEvent*> get_events();
    // public System.Void set_events(UnityEngine.AnimationEvent[] value)
    // Offset: 0x5464D20
    void set_events(::ArrayW<::UnityEngine::AnimationEvent*> value);
    // private System.Void SetEventsInternal(System.Array value)
    // Offset: 0x5464D64
    void SetEventsInternal(::System::Array* value);
    // private System.Array GetEventsInternal()
    // Offset: 0x5464CE4
    ::System::Array* GetEventsInternal();
    // private System.Void get_localBounds_Injected(out UnityEngine.Bounds ret)
    // Offset: 0x5464894
    void get_localBounds_Injected(ByRef<::UnityEngine::Bounds> ret);
    // private System.Void set_localBounds_Injected(ref UnityEngine.Bounds value)
    // Offset: 0x546491C
    void set_localBounds_Injected(ByRef<::UnityEngine::Bounds> value);
    // public System.Void .ctor()
    // Offset: 0x54643C8
    // Implemented from: UnityEngine.Motion
    // Base method: System.Void Motion::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnimationClip* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AnimationClip::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnimationClip*, creationType>()));
    }
  }; // UnityEngine.AnimationClip
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AnimationClip::Internal_CreateAnimationClip
// Il2CppName: Internal_CreateAnimationClip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::AnimationClip*)>(&UnityEngine::AnimationClip::Internal_CreateAnimationClip)> {
  static const MethodInfo* get() {
    static auto* self = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationClip")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationClip*), "Internal_CreateAnimationClip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{self});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationClip::SampleAnimation
// Il2CppName: SampleAnimation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AnimationClip::*)(::UnityEngine::GameObject*, float)>(&UnityEngine::AnimationClip::SampleAnimation)> {
  static const MethodInfo* get() {
    static auto* go = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationClip*), "SampleAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{go, time});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationClip::SampleAnimation
// Il2CppName: SampleAnimation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::GameObject*, ::UnityEngine::AnimationClip*, float, ::UnityEngine::WrapMode)>(&UnityEngine::AnimationClip::SampleAnimation)> {
  static const MethodInfo* get() {
    static auto* go = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* clip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationClip")->byval_arg;
    static auto* inTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* wrapMode = &::il2cpp_utils::GetClassFromName("UnityEngine", "WrapMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationClip*), "SampleAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{go, clip, inTime, wrapMode});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationClip::get_length
// Il2CppName: get_length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::AnimationClip::*)()>(&UnityEngine::AnimationClip::get_length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationClip*), "get_length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationClip::get_startTime
// Il2CppName: get_startTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::AnimationClip::*)()>(&UnityEngine::AnimationClip::get_startTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationClip*), "get_startTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationClip::get_stopTime
// Il2CppName: get_stopTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::AnimationClip::*)()>(&UnityEngine::AnimationClip::get_stopTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationClip*), "get_stopTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationClip::get_frameRate
// Il2CppName: get_frameRate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::AnimationClip::*)()>(&UnityEngine::AnimationClip::get_frameRate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationClip*), "get_frameRate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationClip::set_frameRate
// Il2CppName: set_frameRate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AnimationClip::*)(float)>(&UnityEngine::AnimationClip::set_frameRate)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationClip*), "set_frameRate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationClip::SetCurve
// Il2CppName: SetCurve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AnimationClip::*)(::StringW, ::System::Type*, ::StringW, ::UnityEngine::AnimationCurve*)>(&UnityEngine::AnimationClip::SetCurve)> {
  static const MethodInfo* get() {
    static auto* relativePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* propertyName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* curve = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationCurve")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationClip*), "SetCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{relativePath, type, propertyName, curve});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationClip::EnsureQuaternionContinuity
// Il2CppName: EnsureQuaternionContinuity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AnimationClip::*)()>(&UnityEngine::AnimationClip::EnsureQuaternionContinuity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationClip*), "EnsureQuaternionContinuity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationClip::ClearCurves
// Il2CppName: ClearCurves
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AnimationClip::*)()>(&UnityEngine::AnimationClip::ClearCurves)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationClip*), "ClearCurves", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationClip::get_wrapMode
// Il2CppName: get_wrapMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::WrapMode (UnityEngine::AnimationClip::*)()>(&UnityEngine::AnimationClip::get_wrapMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationClip*), "get_wrapMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationClip::set_wrapMode
// Il2CppName: set_wrapMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AnimationClip::*)(::UnityEngine::WrapMode)>(&UnityEngine::AnimationClip::set_wrapMode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "WrapMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationClip*), "set_wrapMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationClip::get_localBounds
// Il2CppName: get_localBounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Bounds (UnityEngine::AnimationClip::*)()>(&UnityEngine::AnimationClip::get_localBounds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationClip*), "get_localBounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationClip::set_localBounds
// Il2CppName: set_localBounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AnimationClip::*)(::UnityEngine::Bounds)>(&UnityEngine::AnimationClip::set_localBounds)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Bounds")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationClip*), "set_localBounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationClip::get_legacy
// Il2CppName: get_legacy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AnimationClip::*)()>(&UnityEngine::AnimationClip::get_legacy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationClip*), "get_legacy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationClip::set_legacy
// Il2CppName: set_legacy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AnimationClip::*)(bool)>(&UnityEngine::AnimationClip::set_legacy)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationClip*), "set_legacy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationClip::get_humanMotion
// Il2CppName: get_humanMotion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AnimationClip::*)()>(&UnityEngine::AnimationClip::get_humanMotion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationClip*), "get_humanMotion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationClip::get_empty
// Il2CppName: get_empty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AnimationClip::*)()>(&UnityEngine::AnimationClip::get_empty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationClip*), "get_empty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationClip::get_hasGenericRootTransform
// Il2CppName: get_hasGenericRootTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AnimationClip::*)()>(&UnityEngine::AnimationClip::get_hasGenericRootTransform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationClip*), "get_hasGenericRootTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationClip::get_hasMotionFloatCurves
// Il2CppName: get_hasMotionFloatCurves
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AnimationClip::*)()>(&UnityEngine::AnimationClip::get_hasMotionFloatCurves)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationClip*), "get_hasMotionFloatCurves", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationClip::get_hasMotionCurves
// Il2CppName: get_hasMotionCurves
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AnimationClip::*)()>(&UnityEngine::AnimationClip::get_hasMotionCurves)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationClip*), "get_hasMotionCurves", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationClip::get_hasRootCurves
// Il2CppName: get_hasRootCurves
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AnimationClip::*)()>(&UnityEngine::AnimationClip::get_hasRootCurves)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationClip*), "get_hasRootCurves", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationClip::get_hasRootMotion
// Il2CppName: get_hasRootMotion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AnimationClip::*)()>(&UnityEngine::AnimationClip::get_hasRootMotion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationClip*), "get_hasRootMotion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationClip::AddEvent
// Il2CppName: AddEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AnimationClip::*)(::UnityEngine::AnimationEvent*)>(&UnityEngine::AnimationClip::AddEvent)> {
  static const MethodInfo* get() {
    static auto* evt = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationClip*), "AddEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{evt});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationClip::AddEventInternal
// Il2CppName: AddEventInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AnimationClip::*)(::Il2CppObject*)>(&UnityEngine::AnimationClip::AddEventInternal)> {
  static const MethodInfo* get() {
    static auto* evt = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationClip*), "AddEventInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{evt});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationClip::get_events
// Il2CppName: get_events
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::AnimationEvent*> (UnityEngine::AnimationClip::*)()>(&UnityEngine::AnimationClip::get_events)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationClip*), "get_events", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationClip::set_events
// Il2CppName: set_events
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AnimationClip::*)(::ArrayW<::UnityEngine::AnimationEvent*>)>(&UnityEngine::AnimationClip::set_events)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationEvent"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationClip*), "set_events", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationClip::SetEventsInternal
// Il2CppName: SetEventsInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AnimationClip::*)(::System::Array*)>(&UnityEngine::AnimationClip::SetEventsInternal)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationClip*), "SetEventsInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationClip::GetEventsInternal
// Il2CppName: GetEventsInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Array* (UnityEngine::AnimationClip::*)()>(&UnityEngine::AnimationClip::GetEventsInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationClip*), "GetEventsInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationClip::get_localBounds_Injected
// Il2CppName: get_localBounds_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AnimationClip::*)(ByRef<::UnityEngine::Bounds>)>(&UnityEngine::AnimationClip::get_localBounds_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Bounds")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationClip*), "get_localBounds_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationClip::set_localBounds_Injected
// Il2CppName: set_localBounds_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AnimationClip::*)(ByRef<::UnityEngine::Bounds>)>(&UnityEngine::AnimationClip::set_localBounds_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Bounds")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimationClip*), "set_localBounds_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimationClip::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!