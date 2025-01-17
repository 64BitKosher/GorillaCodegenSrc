// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityEvent
  class UnityEvent;
  // Forward declaring type: UnityEvent`1<T0>
  template<typename T0>
  class UnityEvent_1;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.Samples
namespace Oculus::Interaction::Samples {
  // Forward declaring type: CountdownTimer
  class CountdownTimer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::Samples::CountdownTimer);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Samples::CountdownTimer*, "Oculus.Interaction.Samples", "CountdownTimer");
// Type namespace: Oculus.Interaction.Samples
namespace Oculus::Interaction::Samples {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.Samples.CountdownTimer
  // [TokenAttribute] Offset: FFFFFFFF
  class CountdownTimer : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Single _countdownTime
    // Size: 0x4
    // Offset: 0x20
    float countdownTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _countdownOn
    // Size: 0x1
    // Offset: 0x24
    bool countdownOn;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: countdownOn and: callback
    char __padding1[0x3] = {};
    // private UnityEngine.Events.UnityEvent _callback
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Events::UnityEvent* callback;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityEvent*) == 0x8);
    // private UnityEngine.Events.UnityEvent`1<System.Single> _progressCallback
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Events::UnityEvent_1<float>* progressCallback;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityEvent_1<float>*) == 0x8);
    // private System.Single _countdownTimer
    // Size: 0x4
    // Offset: 0x38
    float countdownTimer;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private System.Single _countdownTime
    [[deprecated("Use field access instead!")]] float& dyn__countdownTime();
    // Get instance field reference: private System.Boolean _countdownOn
    [[deprecated("Use field access instead!")]] bool& dyn__countdownOn();
    // Get instance field reference: private UnityEngine.Events.UnityEvent _callback
    [[deprecated("Use field access instead!")]] ::UnityEngine::Events::UnityEvent*& dyn__callback();
    // Get instance field reference: private UnityEngine.Events.UnityEvent`1<System.Single> _progressCallback
    [[deprecated("Use field access instead!")]] ::UnityEngine::Events::UnityEvent_1<float>*& dyn__progressCallback();
    // Get instance field reference: private System.Single _countdownTimer
    [[deprecated("Use field access instead!")]] float& dyn__countdownTimer();
    // public System.Boolean get_CountdownOn()
    // Offset: 0x479E778
    bool get_CountdownOn();
    // public System.Void set_CountdownOn(System.Boolean value)
    // Offset: 0x479E780
    void set_CountdownOn(bool value);
    // private System.Void Awake()
    // Offset: 0x479E7A0
    void Awake();
    // private System.Void Update()
    // Offset: 0x479E7A4
    void Update();
    // public System.Void .ctor()
    // Offset: 0x479E878
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CountdownTimer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Samples::CountdownTimer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CountdownTimer*, creationType>()));
    }
  }; // Oculus.Interaction.Samples.CountdownTimer
  #pragma pack(pop)
  static check_size<sizeof(CountdownTimer), 56 + sizeof(float)> __Oculus_Interaction_Samples_CountdownTimerSizeCheck;
  static_assert(sizeof(CountdownTimer) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::Samples::CountdownTimer::get_CountdownOn
// Il2CppName: get_CountdownOn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::Samples::CountdownTimer::*)()>(&Oculus::Interaction::Samples::CountdownTimer::get_CountdownOn)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Samples::CountdownTimer*), "get_CountdownOn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Samples::CountdownTimer::set_CountdownOn
// Il2CppName: set_CountdownOn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Samples::CountdownTimer::*)(bool)>(&Oculus::Interaction::Samples::CountdownTimer::set_CountdownOn)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Samples::CountdownTimer*), "set_CountdownOn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Samples::CountdownTimer::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Samples::CountdownTimer::*)()>(&Oculus::Interaction::Samples::CountdownTimer::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Samples::CountdownTimer*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Samples::CountdownTimer::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Samples::CountdownTimer::*)()>(&Oculus::Interaction::Samples::CountdownTimer::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Samples::CountdownTimer*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Samples::CountdownTimer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
