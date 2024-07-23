// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SceneManagerHelper
#include "GlobalNamespace/SceneManagerHelper.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SceneManagerHelper::$$c__DisplayClass11_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SceneManagerHelper::$$c__DisplayClass11_0*, "", "SceneManagerHelper/<>c__DisplayClass11_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: SceneManagerHelper/<>c__DisplayClass11_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SceneManagerHelper::$$c__DisplayClass11_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Boolean waiting
    // Size: 0x1
    // Offset: 0x10
    bool waiting;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: waiting and: onCaptured
    char __padding0[0x7] = {};
    // public System.Action`2<System.UInt64,System.Boolean> onCaptured
    // Size: 0x8
    // Offset: 0x18
    ::System::Action_2<uint64_t, bool>* onCaptured;
    // Field size check
    static_assert(sizeof(::System::Action_2<uint64_t, bool>*) == 0x8);
    public:
    // Get instance field reference: public System.Boolean waiting
    [[deprecated("Use field access instead!")]] bool& dyn_waiting();
    // Get instance field reference: public System.Action`2<System.UInt64,System.Boolean> onCaptured
    [[deprecated("Use field access instead!")]] ::System::Action_2<uint64_t, bool>*& dyn_onCaptured();
    // public System.Void .ctor()
    // Offset: 0x2944450
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneManagerHelper::$$c__DisplayClass11_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SceneManagerHelper::$$c__DisplayClass11_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneManagerHelper::$$c__DisplayClass11_0*, creationType>()));
    }
    // System.Void <RequestSceneCapture>b__0(System.UInt64 id, System.Boolean success)
    // Offset: 0x2944458
    void $RequestSceneCapture$b__0(uint64_t id, bool success);
    // System.Boolean <RequestSceneCapture>b__1()
    // Offset: 0x2944460
    bool $RequestSceneCapture$b__1();
  }; // SceneManagerHelper/<>c__DisplayClass11_0
  #pragma pack(pop)
  static check_size<sizeof(SceneManagerHelper::$$c__DisplayClass11_0), 24 + sizeof(::System::Action_2<uint64_t, bool>*)> __GlobalNamespace_SceneManagerHelper_$$c__DisplayClass11_0SizeCheck;
  static_assert(sizeof(SceneManagerHelper::$$c__DisplayClass11_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SceneManagerHelper::$$c__DisplayClass11_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SceneManagerHelper::$$c__DisplayClass11_0::$RequestSceneCapture$b__0
// Il2CppName: <RequestSceneCapture>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SceneManagerHelper::$$c__DisplayClass11_0::*)(uint64_t, bool)>(&GlobalNamespace::SceneManagerHelper::$$c__DisplayClass11_0::$RequestSceneCapture$b__0)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* success = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SceneManagerHelper::$$c__DisplayClass11_0*), "<RequestSceneCapture>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id, success});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SceneManagerHelper::$$c__DisplayClass11_0::$RequestSceneCapture$b__1
// Il2CppName: <RequestSceneCapture>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SceneManagerHelper::$$c__DisplayClass11_0::*)()>(&GlobalNamespace::SceneManagerHelper::$$c__DisplayClass11_0::$RequestSceneCapture$b__1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SceneManagerHelper::$$c__DisplayClass11_0*), "<RequestSceneCapture>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};