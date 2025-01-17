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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: ExitGames::Client::Photon
namespace ExitGames::Client::Photon {
  // Forward declaring type: PeerBase
  class PeerBase;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: Thread
  class Thread;
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
}
// Completed forward declares
// Type namespace: ExitGames.Client.Photon
namespace ExitGames::Client::Photon {
  // Forward declaring type: NetworkSimulationSet
  class NetworkSimulationSet;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ExitGames::Client::Photon::NetworkSimulationSet);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::NetworkSimulationSet*, "ExitGames.Client.Photon", "NetworkSimulationSet");
// Type namespace: ExitGames.Client.Photon
namespace ExitGames::Client::Photon {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: ExitGames.Client.Photon.NetworkSimulationSet
  // [TokenAttribute] Offset: FFFFFFFF
  class NetworkSimulationSet : public ::Il2CppObject {
    public:
    public:
    // private System.Boolean isSimulationEnabled
    // Size: 0x1
    // Offset: 0x10
    bool isSimulationEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isSimulationEnabled and: outgoingLag
    char __padding0[0x3] = {};
    // private System.Int32 outgoingLag
    // Size: 0x4
    // Offset: 0x14
    int outgoingLag;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 outgoingJitter
    // Size: 0x4
    // Offset: 0x18
    int outgoingJitter;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 outgoingLossPercentage
    // Size: 0x4
    // Offset: 0x1C
    int outgoingLossPercentage;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 incomingLag
    // Size: 0x4
    // Offset: 0x20
    int incomingLag;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 incomingJitter
    // Size: 0x4
    // Offset: 0x24
    int incomingJitter;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 incomingLossPercentage
    // Size: 0x4
    // Offset: 0x28
    int incomingLossPercentage;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: incomingLossPercentage and: peerBase
    char __padding6[0x4] = {};
    // ExitGames.Client.Photon.PeerBase peerBase
    // Size: 0x8
    // Offset: 0x30
    ::ExitGames::Client::Photon::PeerBase* peerBase;
    // Field size check
    static_assert(sizeof(::ExitGames::Client::Photon::PeerBase*) == 0x8);
    // private System.Threading.Thread netSimThread
    // Size: 0x8
    // Offset: 0x38
    ::System::Threading::Thread* netSimThread;
    // Field size check
    static_assert(sizeof(::System::Threading::Thread*) == 0x8);
    // protected internal readonly System.Threading.ManualResetEvent NetSimManualResetEvent
    // Size: 0x8
    // Offset: 0x40
    ::System::Threading::ManualResetEvent* NetSimManualResetEvent;
    // Field size check
    static_assert(sizeof(::System::Threading::ManualResetEvent*) == 0x8);
    // private System.Int32 <LostPackagesOut>k__BackingField
    // Size: 0x4
    // Offset: 0x48
    int LostPackagesOut;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <LostPackagesIn>k__BackingField
    // Size: 0x4
    // Offset: 0x4C
    int LostPackagesIn;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Boolean isSimulationEnabled
    [[deprecated("Use field access instead!")]] bool& dyn_isSimulationEnabled();
    // Get instance field reference: private System.Int32 outgoingLag
    [[deprecated("Use field access instead!")]] int& dyn_outgoingLag();
    // Get instance field reference: private System.Int32 outgoingJitter
    [[deprecated("Use field access instead!")]] int& dyn_outgoingJitter();
    // Get instance field reference: private System.Int32 outgoingLossPercentage
    [[deprecated("Use field access instead!")]] int& dyn_outgoingLossPercentage();
    // Get instance field reference: private System.Int32 incomingLag
    [[deprecated("Use field access instead!")]] int& dyn_incomingLag();
    // Get instance field reference: private System.Int32 incomingJitter
    [[deprecated("Use field access instead!")]] int& dyn_incomingJitter();
    // Get instance field reference: private System.Int32 incomingLossPercentage
    [[deprecated("Use field access instead!")]] int& dyn_incomingLossPercentage();
    // Get instance field reference: ExitGames.Client.Photon.PeerBase peerBase
    [[deprecated("Use field access instead!")]] ::ExitGames::Client::Photon::PeerBase*& dyn_peerBase();
    // Get instance field reference: private System.Threading.Thread netSimThread
    [[deprecated("Use field access instead!")]] ::System::Threading::Thread*& dyn_netSimThread();
    // Get instance field reference: protected internal readonly System.Threading.ManualResetEvent NetSimManualResetEvent
    [[deprecated("Use field access instead!")]] ::System::Threading::ManualResetEvent*& dyn_NetSimManualResetEvent();
    // Get instance field reference: private System.Int32 <LostPackagesOut>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$LostPackagesOut$k__BackingField();
    // Get instance field reference: private System.Int32 <LostPackagesIn>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$LostPackagesIn$k__BackingField();
    // protected internal System.Boolean get_IsSimulationEnabled()
    // Offset: 0x49CC628
    bool get_IsSimulationEnabled();
    // protected internal System.Void set_IsSimulationEnabled(System.Boolean value)
    // Offset: 0x49CC630
    void set_IsSimulationEnabled(bool value);
    // public System.Int32 get_OutgoingLag()
    // Offset: 0x49D7288
    int get_OutgoingLag();
    // public System.Void set_OutgoingLag(System.Int32 value)
    // Offset: 0x49D7290
    void set_OutgoingLag(int value);
    // public System.Int32 get_OutgoingJitter()
    // Offset: 0x49D7298
    int get_OutgoingJitter();
    // public System.Void set_OutgoingJitter(System.Int32 value)
    // Offset: 0x49D72A0
    void set_OutgoingJitter(int value);
    // public System.Int32 get_OutgoingLossPercentage()
    // Offset: 0x49D72A8
    int get_OutgoingLossPercentage();
    // public System.Void set_OutgoingLossPercentage(System.Int32 value)
    // Offset: 0x49D72B0
    void set_OutgoingLossPercentage(int value);
    // public System.Int32 get_IncomingLag()
    // Offset: 0x49D72B8
    int get_IncomingLag();
    // public System.Void set_IncomingLag(System.Int32 value)
    // Offset: 0x49D72C0
    void set_IncomingLag(int value);
    // public System.Int32 get_IncomingJitter()
    // Offset: 0x49D72C8
    int get_IncomingJitter();
    // public System.Void set_IncomingJitter(System.Int32 value)
    // Offset: 0x49D72D0
    void set_IncomingJitter(int value);
    // public System.Int32 get_IncomingLossPercentage()
    // Offset: 0x49D72D8
    int get_IncomingLossPercentage();
    // public System.Void set_IncomingLossPercentage(System.Int32 value)
    // Offset: 0x49D72E0
    void set_IncomingLossPercentage(int value);
    // public System.Int32 get_LostPackagesOut()
    // Offset: 0x49D72E8
    int get_LostPackagesOut();
    // System.Void set_LostPackagesOut(System.Int32 value)
    // Offset: 0x49D72F0
    void set_LostPackagesOut(int value);
    // public System.Int32 get_LostPackagesIn()
    // Offset: 0x49D72F8
    int get_LostPackagesIn();
    // System.Void set_LostPackagesIn(System.Int32 value)
    // Offset: 0x49D7300
    void set_LostPackagesIn(int value);
    // public System.Void .ctor()
    // Offset: 0x49D75DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkSimulationSet* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::NetworkSimulationSet::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkSimulationSet*, creationType>()));
    }
    // public override System.String ToString()
    // Offset: 0x49D7308
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // ExitGames.Client.Photon.NetworkSimulationSet
  #pragma pack(pop)
  static check_size<sizeof(NetworkSimulationSet), 76 + sizeof(int)> __ExitGames_Client_Photon_NetworkSimulationSetSizeCheck;
  static_assert(sizeof(NetworkSimulationSet) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ExitGames::Client::Photon::NetworkSimulationSet::get_IsSimulationEnabled
// Il2CppName: get_IsSimulationEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (ExitGames::Client::Photon::NetworkSimulationSet::*)()>(&ExitGames::Client::Photon::NetworkSimulationSet::get_IsSimulationEnabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::NetworkSimulationSet*), "get_IsSimulationEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::NetworkSimulationSet::set_IsSimulationEnabled
// Il2CppName: set_IsSimulationEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::NetworkSimulationSet::*)(bool)>(&ExitGames::Client::Photon::NetworkSimulationSet::set_IsSimulationEnabled)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::NetworkSimulationSet*), "set_IsSimulationEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::NetworkSimulationSet::get_OutgoingLag
// Il2CppName: get_OutgoingLag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ExitGames::Client::Photon::NetworkSimulationSet::*)()>(&ExitGames::Client::Photon::NetworkSimulationSet::get_OutgoingLag)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::NetworkSimulationSet*), "get_OutgoingLag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::NetworkSimulationSet::set_OutgoingLag
// Il2CppName: set_OutgoingLag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::NetworkSimulationSet::*)(int)>(&ExitGames::Client::Photon::NetworkSimulationSet::set_OutgoingLag)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::NetworkSimulationSet*), "set_OutgoingLag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::NetworkSimulationSet::get_OutgoingJitter
// Il2CppName: get_OutgoingJitter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ExitGames::Client::Photon::NetworkSimulationSet::*)()>(&ExitGames::Client::Photon::NetworkSimulationSet::get_OutgoingJitter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::NetworkSimulationSet*), "get_OutgoingJitter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::NetworkSimulationSet::set_OutgoingJitter
// Il2CppName: set_OutgoingJitter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::NetworkSimulationSet::*)(int)>(&ExitGames::Client::Photon::NetworkSimulationSet::set_OutgoingJitter)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::NetworkSimulationSet*), "set_OutgoingJitter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::NetworkSimulationSet::get_OutgoingLossPercentage
// Il2CppName: get_OutgoingLossPercentage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ExitGames::Client::Photon::NetworkSimulationSet::*)()>(&ExitGames::Client::Photon::NetworkSimulationSet::get_OutgoingLossPercentage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::NetworkSimulationSet*), "get_OutgoingLossPercentage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::NetworkSimulationSet::set_OutgoingLossPercentage
// Il2CppName: set_OutgoingLossPercentage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::NetworkSimulationSet::*)(int)>(&ExitGames::Client::Photon::NetworkSimulationSet::set_OutgoingLossPercentage)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::NetworkSimulationSet*), "set_OutgoingLossPercentage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::NetworkSimulationSet::get_IncomingLag
// Il2CppName: get_IncomingLag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ExitGames::Client::Photon::NetworkSimulationSet::*)()>(&ExitGames::Client::Photon::NetworkSimulationSet::get_IncomingLag)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::NetworkSimulationSet*), "get_IncomingLag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::NetworkSimulationSet::set_IncomingLag
// Il2CppName: set_IncomingLag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::NetworkSimulationSet::*)(int)>(&ExitGames::Client::Photon::NetworkSimulationSet::set_IncomingLag)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::NetworkSimulationSet*), "set_IncomingLag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::NetworkSimulationSet::get_IncomingJitter
// Il2CppName: get_IncomingJitter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ExitGames::Client::Photon::NetworkSimulationSet::*)()>(&ExitGames::Client::Photon::NetworkSimulationSet::get_IncomingJitter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::NetworkSimulationSet*), "get_IncomingJitter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::NetworkSimulationSet::set_IncomingJitter
// Il2CppName: set_IncomingJitter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::NetworkSimulationSet::*)(int)>(&ExitGames::Client::Photon::NetworkSimulationSet::set_IncomingJitter)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::NetworkSimulationSet*), "set_IncomingJitter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::NetworkSimulationSet::get_IncomingLossPercentage
// Il2CppName: get_IncomingLossPercentage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ExitGames::Client::Photon::NetworkSimulationSet::*)()>(&ExitGames::Client::Photon::NetworkSimulationSet::get_IncomingLossPercentage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::NetworkSimulationSet*), "get_IncomingLossPercentage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::NetworkSimulationSet::set_IncomingLossPercentage
// Il2CppName: set_IncomingLossPercentage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::NetworkSimulationSet::*)(int)>(&ExitGames::Client::Photon::NetworkSimulationSet::set_IncomingLossPercentage)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::NetworkSimulationSet*), "set_IncomingLossPercentage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::NetworkSimulationSet::get_LostPackagesOut
// Il2CppName: get_LostPackagesOut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ExitGames::Client::Photon::NetworkSimulationSet::*)()>(&ExitGames::Client::Photon::NetworkSimulationSet::get_LostPackagesOut)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::NetworkSimulationSet*), "get_LostPackagesOut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::NetworkSimulationSet::set_LostPackagesOut
// Il2CppName: set_LostPackagesOut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::NetworkSimulationSet::*)(int)>(&ExitGames::Client::Photon::NetworkSimulationSet::set_LostPackagesOut)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::NetworkSimulationSet*), "set_LostPackagesOut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::NetworkSimulationSet::get_LostPackagesIn
// Il2CppName: get_LostPackagesIn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ExitGames::Client::Photon::NetworkSimulationSet::*)()>(&ExitGames::Client::Photon::NetworkSimulationSet::get_LostPackagesIn)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::NetworkSimulationSet*), "get_LostPackagesIn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::NetworkSimulationSet::set_LostPackagesIn
// Il2CppName: set_LostPackagesIn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::NetworkSimulationSet::*)(int)>(&ExitGames::Client::Photon::NetworkSimulationSet::set_LostPackagesIn)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::NetworkSimulationSet*), "set_LostPackagesIn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::NetworkSimulationSet::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: ExitGames::Client::Photon::NetworkSimulationSet::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (ExitGames::Client::Photon::NetworkSimulationSet::*)()>(&ExitGames::Client::Photon::NetworkSimulationSet::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::NetworkSimulationSet*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
