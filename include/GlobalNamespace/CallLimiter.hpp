// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CallLimiter
  class CallLimiter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CallLimiter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CallLimiter*, "", "CallLimiter");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: CallLimiter
  // [TokenAttribute] Offset: FFFFFFFF
  class CallLimiter : public ::Il2CppObject {
    public:
    public:
    // protected System.Single[] callTimeHistory
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<float> callTimeHistory;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // protected System.Int32 callHistoryLength
    // Size: 0x4
    // Offset: 0x18
    int callHistoryLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected System.Single timeCooldown
    // Size: 0x4
    // Offset: 0x1C
    float timeCooldown;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // protected System.Single maxLatency
    // Size: 0x4
    // Offset: 0x20
    float maxLatency;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 oldTimeIndex
    // Size: 0x4
    // Offset: 0x24
    int oldTimeIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected System.Boolean blockCall
    // Size: 0x1
    // Offset: 0x28
    bool blockCall;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: blockCall and: blockStartTime
    char __padding5[0x3] = {};
    // protected System.Single blockStartTime
    // Size: 0x4
    // Offset: 0x2C
    float blockStartTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: protected System.Single[] callTimeHistory
    [[deprecated("Use field access instead!")]] ::ArrayW<float>& dyn_callTimeHistory();
    // Get instance field reference: protected System.Int32 callHistoryLength
    [[deprecated("Use field access instead!")]] int& dyn_callHistoryLength();
    // Get instance field reference: protected System.Single timeCooldown
    [[deprecated("Use field access instead!")]] float& dyn_timeCooldown();
    // Get instance field reference: protected System.Single maxLatency
    [[deprecated("Use field access instead!")]] float& dyn_maxLatency();
    // Get instance field reference: private System.Int32 oldTimeIndex
    [[deprecated("Use field access instead!")]] int& dyn_oldTimeIndex();
    // Get instance field reference: protected System.Boolean blockCall
    [[deprecated("Use field access instead!")]] bool& dyn_blockCall();
    // Get instance field reference: protected System.Single blockStartTime
    [[deprecated("Use field access instead!")]] float& dyn_blockStartTime();
    // public System.Void .ctor()
    // Offset: 0x27654C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CallLimiter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CallLimiter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CallLimiter*, creationType>()));
    }
    // public System.Void .ctor(System.Int32 historyLength, System.Single coolDown, System.Single latencyMax)
    // Offset: 0x27654CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CallLimiter* New_ctor(int historyLength, float coolDown, float latencyMax) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CallLimiter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CallLimiter*, creationType>(historyLength, coolDown, latencyMax)));
    }
    // public System.Boolean CheckCallServerTime(System.Double time)
    // Offset: 0x27655A0
    bool CheckCallServerTime(double time);
    // public System.Boolean CheckCallTime(System.Single time)
    // Offset: 0x2765640
    bool CheckCallTime(float time);
    // public System.Void Reset()
    // Offset: 0x27656BC
    void Reset();
  }; // CallLimiter
  #pragma pack(pop)
  static check_size<sizeof(CallLimiter), 44 + sizeof(float)> __GlobalNamespace_CallLimiterSizeCheck;
  static_assert(sizeof(CallLimiter) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CallLimiter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::CallLimiter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::CallLimiter::CheckCallServerTime
// Il2CppName: CheckCallServerTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::CallLimiter::*)(double)>(&GlobalNamespace::CallLimiter::CheckCallServerTime)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CallLimiter*), "CheckCallServerTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CallLimiter::CheckCallTime
// Il2CppName: CheckCallTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::CallLimiter::*)(float)>(&GlobalNamespace::CallLimiter::CheckCallTime)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CallLimiter*), "CheckCallTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CallLimiter::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CallLimiter::*)()>(&GlobalNamespace::CallLimiter::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CallLimiter*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
