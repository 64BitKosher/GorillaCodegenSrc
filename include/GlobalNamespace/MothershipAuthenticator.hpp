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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MetaAuthenticator
  class MetaAuthenticator;
}
// Forward declaring namespace: GorillaNetworking
namespace GorillaNetworking {
  // Forward declaring type: GorillaComputer
  class GorillaComputer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MothershipAuthenticator
  class MothershipAuthenticator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MothershipAuthenticator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MothershipAuthenticator*, "", "MothershipAuthenticator");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: MothershipAuthenticator
  // [TokenAttribute] Offset: FFFFFFFF
  class MothershipAuthenticator : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::MothershipAuthenticator::$$c
    class $$c;
    public:
    // public MetaAuthenticator MetaAuthenticator
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::MetaAuthenticator* MetaAuthenticator;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MetaAuthenticator*) == 0x8);
    // public System.String TestNickname
    // Size: 0x8
    // Offset: 0x28
    ::StringW TestNickname;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String TestAccountId
    // Size: 0x8
    // Offset: 0x30
    ::StringW TestAccountId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String loggedInUserId
    // Size: 0x8
    // Offset: 0x38
    ::StringW loggedInUserId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get static field: static public MothershipAuthenticator Instance
    static ::GlobalNamespace::MothershipAuthenticator* _get_Instance();
    // Set static field: static public MothershipAuthenticator Instance
    static void _set_Instance(::GlobalNamespace::MothershipAuthenticator* value);
    // Get instance field reference: public MetaAuthenticator MetaAuthenticator
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MetaAuthenticator*& dyn_MetaAuthenticator();
    // Get instance field reference: public System.String TestNickname
    [[deprecated("Use field access instead!")]] ::StringW& dyn_TestNickname();
    // Get instance field reference: public System.String TestAccountId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_TestAccountId();
    // Get instance field reference: private System.String loggedInUserId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_loggedInUserId();
    // public GorillaNetworking.GorillaComputer get_gorillaComputer()
    // Offset: 0x275AA6C
    ::GorillaNetworking::GorillaComputer* get_gorillaComputer();
    // public System.Void Awake()
    // Offset: 0x275AABC
    void Awake();
    // private System.Void BeginLoginFlow()
    // Offset: 0x275AD78
    void BeginLoginFlow();
    // private System.Void LoginWithInsecure()
    // Offset: 0x275ADF4
    void LoginWithInsecure();
    // private System.Void Update()
    // Offset: 0x275AFA0
    void Update();
    // private System.Void LogInWithSteam()
    // Offset: 0x275B068
    void LogInWithSteam();
    // public System.Void .ctor()
    // Offset: 0x275B06C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MothershipAuthenticator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MothershipAuthenticator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MothershipAuthenticator*, creationType>()));
    }
    // private System.Void <Awake>b__7_0(System.String id)
    // Offset: 0x275B0F0
    void $Awake$b__7_0(::StringW id);
  }; // MothershipAuthenticator
  #pragma pack(pop)
  static check_size<sizeof(MothershipAuthenticator), 56 + sizeof(::StringW)> __GlobalNamespace_MothershipAuthenticatorSizeCheck;
  static_assert(sizeof(MothershipAuthenticator) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MothershipAuthenticator::get_gorillaComputer
// Il2CppName: get_gorillaComputer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GorillaNetworking::GorillaComputer* (GlobalNamespace::MothershipAuthenticator::*)()>(&GlobalNamespace::MothershipAuthenticator::get_gorillaComputer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MothershipAuthenticator*), "get_gorillaComputer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MothershipAuthenticator::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MothershipAuthenticator::*)()>(&GlobalNamespace::MothershipAuthenticator::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MothershipAuthenticator*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MothershipAuthenticator::BeginLoginFlow
// Il2CppName: BeginLoginFlow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MothershipAuthenticator::*)()>(&GlobalNamespace::MothershipAuthenticator::BeginLoginFlow)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MothershipAuthenticator*), "BeginLoginFlow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MothershipAuthenticator::LoginWithInsecure
// Il2CppName: LoginWithInsecure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MothershipAuthenticator::*)()>(&GlobalNamespace::MothershipAuthenticator::LoginWithInsecure)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MothershipAuthenticator*), "LoginWithInsecure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MothershipAuthenticator::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MothershipAuthenticator::*)()>(&GlobalNamespace::MothershipAuthenticator::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MothershipAuthenticator*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MothershipAuthenticator::LogInWithSteam
// Il2CppName: LogInWithSteam
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MothershipAuthenticator::*)()>(&GlobalNamespace::MothershipAuthenticator::LogInWithSteam)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MothershipAuthenticator*), "LogInWithSteam", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MothershipAuthenticator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MothershipAuthenticator::$Awake$b__7_0
// Il2CppName: <Awake>b__7_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MothershipAuthenticator::*)(::StringW)>(&GlobalNamespace::MothershipAuthenticator::$Awake$b__7_0)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MothershipAuthenticator*), "<Awake>b__7_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id});
  }
};
