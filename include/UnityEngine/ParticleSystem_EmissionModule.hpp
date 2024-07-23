// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ParticleSystem
#include "UnityEngine/ParticleSystem.hpp"
// Including type: UnityEngine.ParticleSystem/Burst
#include "UnityEngine/ParticleSystem_Burst.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem::EmissionModule, "UnityEngine", "ParticleSystem/EmissionModule");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ParticleSystem/EmissionModule
  // [TokenAttribute] Offset: FFFFFFFF
  struct ParticleSystem::EmissionModule/*, public ::System::ValueType*/ {
    public:
    public:
    // UnityEngine.ParticleSystem m_ParticleSystem
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::ParticleSystem* m_ParticleSystem;
    // Field size check
    static_assert(sizeof(::UnityEngine::ParticleSystem*) == 0x8);
    public:
    // Creating value type constructor for type: EmissionModule
    constexpr EmissionModule(::UnityEngine::ParticleSystem* m_ParticleSystem_ = {}) noexcept : m_ParticleSystem{m_ParticleSystem_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::UnityEngine::ParticleSystem*
    constexpr operator ::UnityEngine::ParticleSystem*() const noexcept {
      return m_ParticleSystem;
    }
    // Get instance field reference: UnityEngine.ParticleSystem m_ParticleSystem
    [[deprecated("Use field access instead!")]] ::UnityEngine::ParticleSystem*& dyn_m_ParticleSystem();
    // System.Void .ctor(UnityEngine.ParticleSystem particleSystem)
    // Offset: 0x551F144
    // ABORTED: conflicts with another method.  EmissionModule(::UnityEngine::ParticleSystem* particleSystem);
    // public System.Boolean get_enabled()
    // Offset: 0x551C510
    bool get_enabled();
    // public System.Void set_enabled(System.Boolean value)
    // Offset: 0x551C5B0
    void set_enabled(bool value);
    // public UnityEngine.ParticleSystem/MinMaxCurve get_rateOverTime()
    // Offset: 0x5520084
    ::UnityEngine::ParticleSystem::MinMaxCurve get_rateOverTime();
    // public System.Void set_rateOverTime(UnityEngine.ParticleSystem/MinMaxCurve value)
    // Offset: 0x551C764
    void set_rateOverTime(::UnityEngine::ParticleSystem::MinMaxCurve value);
    // public System.Single get_rateOverTimeMultiplier()
    // Offset: 0x551C648
    float get_rateOverTimeMultiplier();
    // public System.Void set_rateOverTimeMultiplier(System.Single value)
    // Offset: 0x55201A8
    void set_rateOverTimeMultiplier(float value);
    // public System.Void SetBursts(UnityEngine.ParticleSystem/Burst[] bursts)
    // Offset: 0x5520240
    void SetBursts(::ArrayW<::UnityEngine::ParticleSystem::Burst> bursts);
    // public System.Void SetBursts(UnityEngine.ParticleSystem/Burst[] bursts, System.Int32 size)
    // Offset: 0x5520258
    void SetBursts(::ArrayW<::UnityEngine::ParticleSystem::Burst> bursts, int size);
    // public System.Void SetBurst(System.Int32 index, UnityEngine.ParticleSystem/Burst burst)
    // Offset: 0x5520388
    void SetBurst(int index, ::UnityEngine::ParticleSystem::Burst burst);
    // public UnityEngine.ParticleSystem/Burst GetBurst(System.Int32 index)
    // Offset: 0x5520430
    ::UnityEngine::ParticleSystem::Burst GetBurst(int index);
    // public System.Int32 get_burstCount()
    // Offset: 0x552050C
    int get_burstCount();
    // public System.Void set_burstCount(System.Int32 value)
    // Offset: 0x5520344
    void set_burstCount(int value);
    // static private System.Boolean get_enabled_Injected(ref UnityEngine.ParticleSystem/EmissionModule _unity_self)
    // Offset: 0x5520004
    static bool get_enabled_Injected(ByRef<::UnityEngine::ParticleSystem::EmissionModule> _unity_self);
    // static private System.Void set_enabled_Injected(ref UnityEngine.ParticleSystem/EmissionModule _unity_self, System.Boolean value)
    // Offset: 0x5520040
    static void set_enabled_Injected(ByRef<::UnityEngine::ParticleSystem::EmissionModule> _unity_self, bool value);
    // static private System.Void get_rateOverTime_Injected(ref UnityEngine.ParticleSystem/EmissionModule _unity_self, out UnityEngine.ParticleSystem/MinMaxCurve ret)
    // Offset: 0x55200E4
    static void get_rateOverTime_Injected(ByRef<::UnityEngine::ParticleSystem::EmissionModule> _unity_self, ByRef<::UnityEngine::ParticleSystem::MinMaxCurve> ret);
    // static private System.Void set_rateOverTime_Injected(ref UnityEngine.ParticleSystem/EmissionModule _unity_self, ref UnityEngine.ParticleSystem/MinMaxCurve value)
    // Offset: 0x5520128
    static void set_rateOverTime_Injected(ByRef<::UnityEngine::ParticleSystem::EmissionModule> _unity_self, ByRef<::UnityEngine::ParticleSystem::MinMaxCurve> value);
    // static private System.Single get_rateOverTimeMultiplier_Injected(ref UnityEngine.ParticleSystem/EmissionModule _unity_self)
    // Offset: 0x552016C
    static float get_rateOverTimeMultiplier_Injected(ByRef<::UnityEngine::ParticleSystem::EmissionModule> _unity_self);
    // static private System.Void set_rateOverTimeMultiplier_Injected(ref UnityEngine.ParticleSystem/EmissionModule _unity_self, System.Single value)
    // Offset: 0x55201F4
    static void set_rateOverTimeMultiplier_Injected(ByRef<::UnityEngine::ParticleSystem::EmissionModule> _unity_self, float value);
    // static private System.Void SetBurst_Injected(ref UnityEngine.ParticleSystem/EmissionModule _unity_self, System.Int32 index, ref UnityEngine.ParticleSystem/Burst burst)
    // Offset: 0x55203DC
    static void SetBurst_Injected(ByRef<::UnityEngine::ParticleSystem::EmissionModule> _unity_self, int index, ByRef<::UnityEngine::ParticleSystem::Burst> burst);
    // static private System.Void GetBurst_Injected(ref UnityEngine.ParticleSystem/EmissionModule _unity_self, System.Int32 index, out UnityEngine.ParticleSystem/Burst ret)
    // Offset: 0x55204B8
    static void GetBurst_Injected(ByRef<::UnityEngine::ParticleSystem::EmissionModule> _unity_self, int index, ByRef<::UnityEngine::ParticleSystem::Burst> ret);
    // static private System.Int32 get_burstCount_Injected(ref UnityEngine.ParticleSystem/EmissionModule _unity_self)
    // Offset: 0x5520548
    static int get_burstCount_Injected(ByRef<::UnityEngine::ParticleSystem::EmissionModule> _unity_self);
    // static private System.Void set_burstCount_Injected(ref UnityEngine.ParticleSystem/EmissionModule _unity_self, System.Int32 value)
    // Offset: 0x5520584
    static void set_burstCount_Injected(ByRef<::UnityEngine::ParticleSystem::EmissionModule> _unity_self, int value);
  }; // UnityEngine.ParticleSystem/EmissionModule
  #pragma pack(pop)
  static check_size<sizeof(ParticleSystem::EmissionModule), 0 + sizeof(::UnityEngine::ParticleSystem*)> __UnityEngine_ParticleSystem_EmissionModuleSizeCheck;
  static_assert(sizeof(ParticleSystem::EmissionModule) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::EmissionModule::EmissionModule
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::EmissionModule::get_enabled
// Il2CppName: get_enabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ParticleSystem::EmissionModule::*)()>(&UnityEngine::ParticleSystem::EmissionModule::get_enabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::EmissionModule), "get_enabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::EmissionModule::set_enabled
// Il2CppName: set_enabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::EmissionModule::*)(bool)>(&UnityEngine::ParticleSystem::EmissionModule::set_enabled)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::EmissionModule), "set_enabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::EmissionModule::get_rateOverTime
// Il2CppName: get_rateOverTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ParticleSystem::MinMaxCurve (UnityEngine::ParticleSystem::EmissionModule::*)()>(&UnityEngine::ParticleSystem::EmissionModule::get_rateOverTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::EmissionModule), "get_rateOverTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::EmissionModule::set_rateOverTime
// Il2CppName: set_rateOverTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::EmissionModule::*)(::UnityEngine::ParticleSystem::MinMaxCurve)>(&UnityEngine::ParticleSystem::EmissionModule::set_rateOverTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/MinMaxCurve")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::EmissionModule), "set_rateOverTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::EmissionModule::get_rateOverTimeMultiplier
// Il2CppName: get_rateOverTimeMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ParticleSystem::EmissionModule::*)()>(&UnityEngine::ParticleSystem::EmissionModule::get_rateOverTimeMultiplier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::EmissionModule), "get_rateOverTimeMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::EmissionModule::set_rateOverTimeMultiplier
// Il2CppName: set_rateOverTimeMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::EmissionModule::*)(float)>(&UnityEngine::ParticleSystem::EmissionModule::set_rateOverTimeMultiplier)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::EmissionModule), "set_rateOverTimeMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::EmissionModule::SetBursts
// Il2CppName: SetBursts
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::EmissionModule::*)(::ArrayW<::UnityEngine::ParticleSystem::Burst>)>(&UnityEngine::ParticleSystem::EmissionModule::SetBursts)> {
  static const MethodInfo* get() {
    static auto* bursts = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/Burst"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::EmissionModule), "SetBursts", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bursts});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::EmissionModule::SetBursts
// Il2CppName: SetBursts
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::EmissionModule::*)(::ArrayW<::UnityEngine::ParticleSystem::Burst>, int)>(&UnityEngine::ParticleSystem::EmissionModule::SetBursts)> {
  static const MethodInfo* get() {
    static auto* bursts = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/Burst"), 1)->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::EmissionModule), "SetBursts", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bursts, size});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::EmissionModule::SetBurst
// Il2CppName: SetBurst
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::EmissionModule::*)(int, ::UnityEngine::ParticleSystem::Burst)>(&UnityEngine::ParticleSystem::EmissionModule::SetBurst)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* burst = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/Burst")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::EmissionModule), "SetBurst", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, burst});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::EmissionModule::GetBurst
// Il2CppName: GetBurst
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ParticleSystem::Burst (UnityEngine::ParticleSystem::EmissionModule::*)(int)>(&UnityEngine::ParticleSystem::EmissionModule::GetBurst)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::EmissionModule), "GetBurst", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::EmissionModule::get_burstCount
// Il2CppName: get_burstCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ParticleSystem::EmissionModule::*)()>(&UnityEngine::ParticleSystem::EmissionModule::get_burstCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::EmissionModule), "get_burstCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::EmissionModule::set_burstCount
// Il2CppName: set_burstCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::EmissionModule::*)(int)>(&UnityEngine::ParticleSystem::EmissionModule::set_burstCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::EmissionModule), "set_burstCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::EmissionModule::get_enabled_Injected
// Il2CppName: get_enabled_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::UnityEngine::ParticleSystem::EmissionModule>)>(&UnityEngine::ParticleSystem::EmissionModule::get_enabled_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/EmissionModule")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::EmissionModule), "get_enabled_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::EmissionModule::set_enabled_Injected
// Il2CppName: set_enabled_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::ParticleSystem::EmissionModule>, bool)>(&UnityEngine::ParticleSystem::EmissionModule::set_enabled_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/EmissionModule")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::EmissionModule), "set_enabled_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::EmissionModule::get_rateOverTime_Injected
// Il2CppName: get_rateOverTime_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::ParticleSystem::EmissionModule>, ByRef<::UnityEngine::ParticleSystem::MinMaxCurve>)>(&UnityEngine::ParticleSystem::EmissionModule::get_rateOverTime_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/EmissionModule")->this_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/MinMaxCurve")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::EmissionModule), "get_rateOverTime_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self, ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::EmissionModule::set_rateOverTime_Injected
// Il2CppName: set_rateOverTime_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::ParticleSystem::EmissionModule>, ByRef<::UnityEngine::ParticleSystem::MinMaxCurve>)>(&UnityEngine::ParticleSystem::EmissionModule::set_rateOverTime_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/EmissionModule")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/MinMaxCurve")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::EmissionModule), "set_rateOverTime_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::EmissionModule::get_rateOverTimeMultiplier_Injected
// Il2CppName: get_rateOverTimeMultiplier_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(ByRef<::UnityEngine::ParticleSystem::EmissionModule>)>(&UnityEngine::ParticleSystem::EmissionModule::get_rateOverTimeMultiplier_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/EmissionModule")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::EmissionModule), "get_rateOverTimeMultiplier_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::EmissionModule::set_rateOverTimeMultiplier_Injected
// Il2CppName: set_rateOverTimeMultiplier_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::ParticleSystem::EmissionModule>, float)>(&UnityEngine::ParticleSystem::EmissionModule::set_rateOverTimeMultiplier_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/EmissionModule")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::EmissionModule), "set_rateOverTimeMultiplier_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::EmissionModule::SetBurst_Injected
// Il2CppName: SetBurst_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::ParticleSystem::EmissionModule>, int, ByRef<::UnityEngine::ParticleSystem::Burst>)>(&UnityEngine::ParticleSystem::EmissionModule::SetBurst_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/EmissionModule")->this_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* burst = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/Burst")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::EmissionModule), "SetBurst_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self, index, burst});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::EmissionModule::GetBurst_Injected
// Il2CppName: GetBurst_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::ParticleSystem::EmissionModule>, int, ByRef<::UnityEngine::ParticleSystem::Burst>)>(&UnityEngine::ParticleSystem::EmissionModule::GetBurst_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/EmissionModule")->this_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/Burst")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::EmissionModule), "GetBurst_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self, index, ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::EmissionModule::get_burstCount_Injected
// Il2CppName: get_burstCount_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(ByRef<::UnityEngine::ParticleSystem::EmissionModule>)>(&UnityEngine::ParticleSystem::EmissionModule::get_burstCount_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/EmissionModule")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::EmissionModule), "get_burstCount_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::EmissionModule::set_burstCount_Injected
// Il2CppName: set_burstCount_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::ParticleSystem::EmissionModule>, int)>(&UnityEngine::ParticleSystem::EmissionModule::set_burstCount_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/EmissionModule")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::EmissionModule), "set_burstCount_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self, value});
  }
};
