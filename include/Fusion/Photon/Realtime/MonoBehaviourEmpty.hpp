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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion::Photon::Realtime
namespace Fusion::Photon::Realtime {
  // Forward declaring type: RegionHandler
  class RegionHandler;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: Fusion.Photon.Realtime
namespace Fusion::Photon::Realtime {
  // Forward declaring type: MonoBehaviourEmpty
  class MonoBehaviourEmpty;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::Photon::Realtime::MonoBehaviourEmpty);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Photon::Realtime::MonoBehaviourEmpty*, "Fusion.Photon.Realtime", "MonoBehaviourEmpty");
// Type namespace: Fusion.Photon.Realtime
namespace Fusion::Photon::Realtime {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.Photon.Realtime.MonoBehaviourEmpty
  // [TokenAttribute] Offset: FFFFFFFF
  class MonoBehaviourEmpty : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::Fusion::Photon::Realtime::MonoBehaviourEmpty::$$c__DisplayClass6_0
    class $$c__DisplayClass6_0;
    public:
    // System.Action`1<Fusion.Photon.Realtime.RegionHandler> onCompleteCall
    // Size: 0x8
    // Offset: 0x20
    ::System::Action_1<::Fusion::Photon::Realtime::RegionHandler*>* onCompleteCall;
    // Field size check
    static_assert(sizeof(::System::Action_1<::Fusion::Photon::Realtime::RegionHandler*>*) == 0x8);
    // private Fusion.Photon.Realtime.RegionHandler obj
    // Size: 0x8
    // Offset: 0x28
    ::Fusion::Photon::Realtime::RegionHandler* obj;
    // Field size check
    static_assert(sizeof(::Fusion::Photon::Realtime::RegionHandler*) == 0x8);
    public:
    // Get instance field reference: System.Action`1<Fusion.Photon.Realtime.RegionHandler> onCompleteCall
    [[deprecated("Use field access instead!")]] ::System::Action_1<::Fusion::Photon::Realtime::RegionHandler*>*& dyn_onCompleteCall();
    // Get instance field reference: private Fusion.Photon.Realtime.RegionHandler obj
    [[deprecated("Use field access instead!")]] ::Fusion::Photon::Realtime::RegionHandler*& dyn_obj();
    // static public Fusion.Photon.Realtime.MonoBehaviourEmpty BuildInstance(System.String id)
    // Offset: 0x2AF436C
    static ::Fusion::Photon::Realtime::MonoBehaviourEmpty* BuildInstance(::StringW id);
    // public System.Void SelfDestroy()
    // Offset: 0x2AF4300
    void SelfDestroy();
    // private System.Void Update()
    // Offset: 0x2AF6360
    void Update();
    // public System.Void CompleteOnMainThread(Fusion.Photon.Realtime.RegionHandler obj)
    // Offset: 0x2AF63D4
    void CompleteOnMainThread(::Fusion::Photon::Realtime::RegionHandler* obj);
    // public System.Void StartCoroutineAndDestroy(System.Collections.IEnumerator coroutine)
    // Offset: 0x2AF5770
    void StartCoroutineAndDestroy(::System::Collections::IEnumerator* coroutine);
    // public System.Void .ctor()
    // Offset: 0x2AF6450
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoBehaviourEmpty* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::Photon::Realtime::MonoBehaviourEmpty::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoBehaviourEmpty*, creationType>()));
    }
  }; // Fusion.Photon.Realtime.MonoBehaviourEmpty
  #pragma pack(pop)
  static check_size<sizeof(MonoBehaviourEmpty), 40 + sizeof(::Fusion::Photon::Realtime::RegionHandler*)> __Fusion_Photon_Realtime_MonoBehaviourEmptySizeCheck;
  static_assert(sizeof(MonoBehaviourEmpty) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::Photon::Realtime::MonoBehaviourEmpty::BuildInstance
// Il2CppName: BuildInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::Photon::Realtime::MonoBehaviourEmpty* (*)(::StringW)>(&Fusion::Photon::Realtime::MonoBehaviourEmpty::BuildInstance)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::MonoBehaviourEmpty*), "BuildInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::MonoBehaviourEmpty::SelfDestroy
// Il2CppName: SelfDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Photon::Realtime::MonoBehaviourEmpty::*)()>(&Fusion::Photon::Realtime::MonoBehaviourEmpty::SelfDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::MonoBehaviourEmpty*), "SelfDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::MonoBehaviourEmpty::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Photon::Realtime::MonoBehaviourEmpty::*)()>(&Fusion::Photon::Realtime::MonoBehaviourEmpty::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::MonoBehaviourEmpty*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::MonoBehaviourEmpty::CompleteOnMainThread
// Il2CppName: CompleteOnMainThread
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Photon::Realtime::MonoBehaviourEmpty::*)(::Fusion::Photon::Realtime::RegionHandler*)>(&Fusion::Photon::Realtime::MonoBehaviourEmpty::CompleteOnMainThread)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("Fusion.Photon.Realtime", "RegionHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::MonoBehaviourEmpty*), "CompleteOnMainThread", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::MonoBehaviourEmpty::StartCoroutineAndDestroy
// Il2CppName: StartCoroutineAndDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Photon::Realtime::MonoBehaviourEmpty::*)(::System::Collections::IEnumerator*)>(&Fusion::Photon::Realtime::MonoBehaviourEmpty::StartCoroutineAndDestroy)> {
  static const MethodInfo* get() {
    static auto* coroutine = &::il2cpp_utils::GetClassFromName("System.Collections", "IEnumerator")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::MonoBehaviourEmpty*), "StartCoroutineAndDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{coroutine});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::MonoBehaviourEmpty::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
