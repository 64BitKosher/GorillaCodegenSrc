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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LightningStrike
  class LightningStrike;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LightningGenerator
  class LightningGenerator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LightningGenerator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightningGenerator*, "", "LightningGenerator");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: LightningGenerator
  // [TokenAttribute] Offset: FFFFFFFF
  class LightningGenerator : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.UInt32 maxConcurrentStrikes
    // Size: 0x4
    // Offset: 0x20
    uint maxConcurrentStrikes;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: maxConcurrentStrikes and: prototype
    char __padding0[0x4] = {};
    // private LightningStrike prototype
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::LightningStrike* prototype;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LightningStrike*) == 0x8);
    // private LightningStrike[] strikes
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::GlobalNamespace::LightningStrike*> strikes;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::LightningStrike*>) == 0x8);
    // private System.Int32 index
    // Size: 0x4
    // Offset: 0x38
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.UInt32 maxConcurrentStrikes
    [[deprecated("Use field access instead!")]] uint& dyn_maxConcurrentStrikes();
    // Get instance field reference: private LightningStrike prototype
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LightningStrike*& dyn_prototype();
    // Get instance field reference: private LightningStrike[] strikes
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::LightningStrike*>& dyn_strikes();
    // Get instance field reference: private System.Int32 index
    [[deprecated("Use field access instead!")]] int& dyn_index();
    // private System.Void Awake()
    // Offset: 0x27A0FD8
    void Awake();
    // private System.Void OnEnable()
    // Offset: 0x27A1190
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x27A1208
    void OnDisable();
    // private LightningStrike LightningDispatcher_RequestLightningStrike(UnityEngine.Vector3 t1, UnityEngine.Vector3 t2)
    // Offset: 0x27A1280
    ::GlobalNamespace::LightningStrike* LightningDispatcher_RequestLightningStrike(::UnityEngine::Vector3 t1, ::UnityEngine::Vector3 t2);
    // public System.Void .ctor()
    // Offset: 0x27A12C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightningGenerator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightningGenerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightningGenerator*, creationType>()));
    }
  }; // LightningGenerator
  #pragma pack(pop)
  static check_size<sizeof(LightningGenerator), 56 + sizeof(int)> __GlobalNamespace_LightningGeneratorSizeCheck;
  static_assert(sizeof(LightningGenerator) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LightningGenerator::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightningGenerator::*)()>(&GlobalNamespace::LightningGenerator::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightningGenerator*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightningGenerator::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightningGenerator::*)()>(&GlobalNamespace::LightningGenerator::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightningGenerator*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightningGenerator::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightningGenerator::*)()>(&GlobalNamespace::LightningGenerator::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightningGenerator*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightningGenerator::LightningDispatcher_RequestLightningStrike
// Il2CppName: LightningDispatcher_RequestLightningStrike
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LightningStrike* (GlobalNamespace::LightningGenerator::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&GlobalNamespace::LightningGenerator::LightningDispatcher_RequestLightningStrike)> {
  static const MethodInfo* get() {
    static auto* t1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* t2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightningGenerator*), "LightningDispatcher_RequestLightningStrike", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t1, t2});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightningGenerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
