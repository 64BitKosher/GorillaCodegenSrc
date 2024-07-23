// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.ISerializationCallbackReceiver
#include "UnityEngine/ISerializationCallbackReceiver.hpp"
// Including type: Pathfinding.IVersionedMonoBehaviourInternal
#include "Pathfinding/IVersionedMonoBehaviourInternal.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: VersionedMonoBehaviour
  class VersionedMonoBehaviour;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::VersionedMonoBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::VersionedMonoBehaviour*, "Pathfinding", "VersionedMonoBehaviour");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.VersionedMonoBehaviour
  // [TokenAttribute] Offset: FFFFFFFF
  class VersionedMonoBehaviour : public ::UnityEngine::MonoBehaviour/*, public ::UnityEngine::ISerializationCallbackReceiver, public ::Pathfinding::IVersionedMonoBehaviourInternal*/ {
    public:
    public:
    // private System.Int32 version
    // Size: 0x4
    // Offset: 0x20
    int version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::ISerializationCallbackReceiver
    operator ::UnityEngine::ISerializationCallbackReceiver() noexcept {
      return *reinterpret_cast<::UnityEngine::ISerializationCallbackReceiver*>(this);
    }
    // Creating interface conversion operator: operator ::Pathfinding::IVersionedMonoBehaviourInternal
    operator ::Pathfinding::IVersionedMonoBehaviourInternal() noexcept {
      return *reinterpret_cast<::Pathfinding::IVersionedMonoBehaviourInternal*>(this);
    }
    // Get instance field reference: private System.Int32 version
    [[deprecated("Use field access instead!")]] int& dyn_version();
    // protected System.Void Awake()
    // Offset: 0x29F8328
    void Awake();
    // protected System.Void Reset()
    // Offset: 0x29FCE98
    void Reset();
    // private System.Void UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
    // Offset: 0x29FCEC0
    void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize();
    // private System.Void UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
    // Offset: 0x29FCEC4
    void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize();
    // protected System.Int32 OnUpgradeSerializedData(System.Int32 version, System.Boolean unityThread)
    // Offset: 0x29FCEF0
    int OnUpgradeSerializedData(int version, bool unityThread);
    // private System.Void Pathfinding.IVersionedMonoBehaviourInternal.UpgradeFromUnityThread()
    // Offset: 0x29FCEF8
    void Pathfinding_IVersionedMonoBehaviourInternal_UpgradeFromUnityThread();
    // protected System.Void .ctor()
    // Offset: 0x29EE730
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VersionedMonoBehaviour* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::VersionedMonoBehaviour::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VersionedMonoBehaviour*, creationType>()));
    }
  }; // Pathfinding.VersionedMonoBehaviour
  #pragma pack(pop)
  static check_size<sizeof(VersionedMonoBehaviour), 32 + sizeof(int)> __Pathfinding_VersionedMonoBehaviourSizeCheck;
  static_assert(sizeof(VersionedMonoBehaviour) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::VersionedMonoBehaviour::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::VersionedMonoBehaviour::*)()>(&Pathfinding::VersionedMonoBehaviour::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::VersionedMonoBehaviour*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::VersionedMonoBehaviour::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::VersionedMonoBehaviour::*)()>(&Pathfinding::VersionedMonoBehaviour::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::VersionedMonoBehaviour*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::VersionedMonoBehaviour::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
// Il2CppName: UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::VersionedMonoBehaviour::*)()>(&Pathfinding::VersionedMonoBehaviour::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::VersionedMonoBehaviour*), "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::VersionedMonoBehaviour::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
// Il2CppName: UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::VersionedMonoBehaviour::*)()>(&Pathfinding::VersionedMonoBehaviour::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::VersionedMonoBehaviour*), "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::VersionedMonoBehaviour::OnUpgradeSerializedData
// Il2CppName: OnUpgradeSerializedData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Pathfinding::VersionedMonoBehaviour::*)(int, bool)>(&Pathfinding::VersionedMonoBehaviour::OnUpgradeSerializedData)> {
  static const MethodInfo* get() {
    static auto* version = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* unityThread = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::VersionedMonoBehaviour*), "OnUpgradeSerializedData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{version, unityThread});
  }
};
// Writing MetadataGetter for method: Pathfinding::VersionedMonoBehaviour::Pathfinding_IVersionedMonoBehaviourInternal_UpgradeFromUnityThread
// Il2CppName: Pathfinding.IVersionedMonoBehaviourInternal.UpgradeFromUnityThread
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::VersionedMonoBehaviour::*)()>(&Pathfinding::VersionedMonoBehaviour::Pathfinding_IVersionedMonoBehaviourInternal_UpgradeFromUnityThread)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::VersionedMonoBehaviour*), "Pathfinding.IVersionedMonoBehaviourInternal.UpgradeFromUnityThread", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::VersionedMonoBehaviour::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
