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
// Forward declaring namespace: Fusion::Photon::Realtime
namespace Fusion::Photon::Realtime {
  // Forward declaring type: Region
  class Region;
  // Forward declaring type: RegionPinger
  class RegionPinger;
  // Forward declaring type: MonoBehaviourEmpty
  class MonoBehaviourEmpty;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: ExitGames::Client::Photon
namespace ExitGames::Client::Photon {
  // Forward declaring type: OperationResponse
  class OperationResponse;
}
// Completed forward declares
// Type namespace: Fusion.Photon.Realtime
namespace Fusion::Photon::Realtime {
  // Forward declaring type: RegionHandler
  class RegionHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::Photon::Realtime::RegionHandler);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Photon::Realtime::RegionHandler*, "Fusion.Photon.Realtime", "RegionHandler");
// Type namespace: Fusion.Photon.Realtime
namespace Fusion::Photon::Realtime {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.Photon.Realtime.RegionHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class RegionHandler : public ::Il2CppObject {
    public:
    // Nested type: ::Fusion::Photon::Realtime::RegionHandler::$$c
    class $$c;
    // Nested type: ::Fusion::Photon::Realtime::RegionHandler::$$c__DisplayClass28_0
    class $$c__DisplayClass28_0;
    public:
    // private System.Collections.Generic.List`1<Fusion.Photon.Realtime.Region> <EnabledRegions>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::Region*>* EnabledRegions;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::Region*>*) == 0x8);
    // private System.String availableRegionCodes
    // Size: 0x8
    // Offset: 0x18
    ::StringW availableRegionCodes;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private Fusion.Photon.Realtime.Region bestRegionCache
    // Size: 0x8
    // Offset: 0x20
    ::Fusion::Photon::Realtime::Region* bestRegionCache;
    // Field size check
    static_assert(sizeof(::Fusion::Photon::Realtime::Region*) == 0x8);
    // private readonly System.Collections.Generic.List`1<Fusion.Photon.Realtime.RegionPinger> pingerList
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::RegionPinger*>* pingerList;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::RegionPinger*>*) == 0x8);
    // private System.Action`1<Fusion.Photon.Realtime.RegionHandler> onCompleteCall
    // Size: 0x8
    // Offset: 0x30
    ::System::Action_1<::Fusion::Photon::Realtime::RegionHandler*>* onCompleteCall;
    // Field size check
    static_assert(sizeof(::System::Action_1<::Fusion::Photon::Realtime::RegionHandler*>*) == 0x8);
    // private System.Int32 previousPing
    // Size: 0x4
    // Offset: 0x38
    int previousPing;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: previousPing and: previousSummaryProvided
    char __padding5[0x4] = {};
    // private System.String previousSummaryProvided
    // Size: 0x8
    // Offset: 0x40
    ::StringW previousSummaryProvided;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean <IsPinging>k__BackingField
    // Size: 0x1
    // Offset: 0x48
    bool IsPinging;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <Aborted>k__BackingField
    // Size: 0x1
    // Offset: 0x49
    bool Aborted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: Aborted and: emptyMonoBehavior
    char __padding8[0x6] = {};
    // private Fusion.Photon.Realtime.MonoBehaviourEmpty emptyMonoBehavior
    // Size: 0x8
    // Offset: 0x50
    ::Fusion::Photon::Realtime::MonoBehaviourEmpty* emptyMonoBehavior;
    // Field size check
    static_assert(sizeof(::Fusion::Photon::Realtime::MonoBehaviourEmpty*) == 0x8);
    public:
    // Get static field: static public System.Type PingImplementation
    static ::System::Type* _get_PingImplementation();
    // Set static field: static public System.Type PingImplementation
    static void _set_PingImplementation(::System::Type* value);
    // Get static field: static protected internal System.UInt16 PortToPingOverride
    static uint16_t _get_PortToPingOverride();
    // Set static field: static protected internal System.UInt16 PortToPingOverride
    static void _set_PortToPingOverride(uint16_t value);
    // Get instance field reference: private System.Collections.Generic.List`1<Fusion.Photon.Realtime.Region> <EnabledRegions>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::Region*>*& dyn_$EnabledRegions$k__BackingField();
    // Get instance field reference: private System.String availableRegionCodes
    [[deprecated("Use field access instead!")]] ::StringW& dyn_availableRegionCodes();
    // Get instance field reference: private Fusion.Photon.Realtime.Region bestRegionCache
    [[deprecated("Use field access instead!")]] ::Fusion::Photon::Realtime::Region*& dyn_bestRegionCache();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<Fusion.Photon.Realtime.RegionPinger> pingerList
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::RegionPinger*>*& dyn_pingerList();
    // Get instance field reference: private System.Action`1<Fusion.Photon.Realtime.RegionHandler> onCompleteCall
    [[deprecated("Use field access instead!")]] ::System::Action_1<::Fusion::Photon::Realtime::RegionHandler*>*& dyn_onCompleteCall();
    // Get instance field reference: private System.Int32 previousPing
    [[deprecated("Use field access instead!")]] int& dyn_previousPing();
    // Get instance field reference: private System.String previousSummaryProvided
    [[deprecated("Use field access instead!")]] ::StringW& dyn_previousSummaryProvided();
    // Get instance field reference: private System.Boolean <IsPinging>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IsPinging$k__BackingField();
    // Get instance field reference: private System.Boolean <Aborted>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$Aborted$k__BackingField();
    // Get instance field reference: private Fusion.Photon.Realtime.MonoBehaviourEmpty emptyMonoBehavior
    [[deprecated("Use field access instead!")]] ::Fusion::Photon::Realtime::MonoBehaviourEmpty*& dyn_emptyMonoBehavior();
    // public System.Collections.Generic.List`1<Fusion.Photon.Realtime.Region> get_EnabledRegions()
    // Offset: 0x2AF340C
    ::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::Region*>* get_EnabledRegions();
    // protected internal System.Void set_EnabledRegions(System.Collections.Generic.List`1<Fusion.Photon.Realtime.Region> value)
    // Offset: 0x2AF3414
    void set_EnabledRegions(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::Region*>* value);
    // public Fusion.Photon.Realtime.Region get_BestRegion()
    // Offset: 0x2AF341C
    ::Fusion::Photon::Realtime::Region* get_BestRegion();
    // public System.String get_SummaryToCache()
    // Offset: 0x2AF357C
    ::StringW get_SummaryToCache();
    // public System.String GetResults()
    // Offset: 0x2AF36D4
    ::StringW GetResults();
    // public System.Void SetRegions(ExitGames.Client.Photon.OperationResponse opGetRegions)
    // Offset: 0x2AF39CC
    void SetRegions(::ExitGames::Client::Photon::OperationResponse* opGetRegions);
    // public System.Boolean get_IsPinging()
    // Offset: 0x2AF3CD0
    bool get_IsPinging();
    // private System.Void set_IsPinging(System.Boolean value)
    // Offset: 0x2AF3CD8
    void set_IsPinging(bool value);
    // public System.Boolean get_Aborted()
    // Offset: 0x2AF3CE4
    bool get_Aborted();
    // private System.Void set_Aborted(System.Boolean value)
    // Offset: 0x2AF3CEC
    void set_Aborted(bool value);
    // public System.Void .ctor(System.UInt16 masterServerPortOverride)
    // Offset: 0x2AF3CF8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegionHandler* New_ctor(uint16_t masterServerPortOverride) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::Photon::Realtime::RegionHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegionHandler*, creationType>(masterServerPortOverride)));
    }
    // public System.Boolean PingMinimumOfRegions(System.Action`1<Fusion.Photon.Realtime.RegionHandler> onCompleteCallback, System.String previousSummary)
    // Offset: 0x2AF3DB0
    bool PingMinimumOfRegions(::System::Action_1<::Fusion::Photon::Realtime::RegionHandler*>* onCompleteCallback, ::StringW previousSummary);
    // public System.Void Abort()
    // Offset: 0x2AF4B8C
    void Abort();
    // private System.Void OnPreferredRegionPinged(Fusion.Photon.Realtime.Region preferredRegion)
    // Offset: 0x2AF4E50
    void OnPreferredRegionPinged(::Fusion::Photon::Realtime::Region* preferredRegion);
    // private System.Boolean PingEnabledRegions()
    // Offset: 0x2AF4440
    bool PingEnabledRegions();
    // private System.Void OnRegionDone(Fusion.Photon.Realtime.Region region)
    // Offset: 0x2AF4EB0
    void OnRegionDone(::Fusion::Photon::Realtime::Region* region);
  }; // Fusion.Photon.Realtime.RegionHandler
  #pragma pack(pop)
  static check_size<sizeof(RegionHandler), 80 + sizeof(::Fusion::Photon::Realtime::MonoBehaviourEmpty*)> __Fusion_Photon_Realtime_RegionHandlerSizeCheck;
  static_assert(sizeof(RegionHandler) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::Photon::Realtime::RegionHandler::get_EnabledRegions
// Il2CppName: get_EnabledRegions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::Region*>* (Fusion::Photon::Realtime::RegionHandler::*)()>(&Fusion::Photon::Realtime::RegionHandler::get_EnabledRegions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::RegionHandler*), "get_EnabledRegions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::RegionHandler::set_EnabledRegions
// Il2CppName: set_EnabledRegions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Photon::Realtime::RegionHandler::*)(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::Region*>*)>(&Fusion::Photon::Realtime::RegionHandler::set_EnabledRegions)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Fusion.Photon.Realtime", "Region")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::RegionHandler*), "set_EnabledRegions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::RegionHandler::get_BestRegion
// Il2CppName: get_BestRegion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::Photon::Realtime::Region* (Fusion::Photon::Realtime::RegionHandler::*)()>(&Fusion::Photon::Realtime::RegionHandler::get_BestRegion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::RegionHandler*), "get_BestRegion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::RegionHandler::get_SummaryToCache
// Il2CppName: get_SummaryToCache
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Fusion::Photon::Realtime::RegionHandler::*)()>(&Fusion::Photon::Realtime::RegionHandler::get_SummaryToCache)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::RegionHandler*), "get_SummaryToCache", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::RegionHandler::GetResults
// Il2CppName: GetResults
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Fusion::Photon::Realtime::RegionHandler::*)()>(&Fusion::Photon::Realtime::RegionHandler::GetResults)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::RegionHandler*), "GetResults", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::RegionHandler::SetRegions
// Il2CppName: SetRegions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Photon::Realtime::RegionHandler::*)(::ExitGames::Client::Photon::OperationResponse*)>(&Fusion::Photon::Realtime::RegionHandler::SetRegions)> {
  static const MethodInfo* get() {
    static auto* opGetRegions = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "OperationResponse")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::RegionHandler*), "SetRegions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{opGetRegions});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::RegionHandler::get_IsPinging
// Il2CppName: get_IsPinging
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::Photon::Realtime::RegionHandler::*)()>(&Fusion::Photon::Realtime::RegionHandler::get_IsPinging)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::RegionHandler*), "get_IsPinging", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::RegionHandler::set_IsPinging
// Il2CppName: set_IsPinging
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Photon::Realtime::RegionHandler::*)(bool)>(&Fusion::Photon::Realtime::RegionHandler::set_IsPinging)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::RegionHandler*), "set_IsPinging", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::RegionHandler::get_Aborted
// Il2CppName: get_Aborted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::Photon::Realtime::RegionHandler::*)()>(&Fusion::Photon::Realtime::RegionHandler::get_Aborted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::RegionHandler*), "get_Aborted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::RegionHandler::set_Aborted
// Il2CppName: set_Aborted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Photon::Realtime::RegionHandler::*)(bool)>(&Fusion::Photon::Realtime::RegionHandler::set_Aborted)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::RegionHandler*), "set_Aborted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::RegionHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::Photon::Realtime::RegionHandler::PingMinimumOfRegions
// Il2CppName: PingMinimumOfRegions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::Photon::Realtime::RegionHandler::*)(::System::Action_1<::Fusion::Photon::Realtime::RegionHandler*>*, ::StringW)>(&Fusion::Photon::Realtime::RegionHandler::PingMinimumOfRegions)> {
  static const MethodInfo* get() {
    static auto* onCompleteCallback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Fusion.Photon.Realtime", "RegionHandler")})->byval_arg;
    static auto* previousSummary = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::RegionHandler*), "PingMinimumOfRegions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{onCompleteCallback, previousSummary});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::RegionHandler::Abort
// Il2CppName: Abort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Photon::Realtime::RegionHandler::*)()>(&Fusion::Photon::Realtime::RegionHandler::Abort)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::RegionHandler*), "Abort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::RegionHandler::OnPreferredRegionPinged
// Il2CppName: OnPreferredRegionPinged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Photon::Realtime::RegionHandler::*)(::Fusion::Photon::Realtime::Region*)>(&Fusion::Photon::Realtime::RegionHandler::OnPreferredRegionPinged)> {
  static const MethodInfo* get() {
    static auto* preferredRegion = &::il2cpp_utils::GetClassFromName("Fusion.Photon.Realtime", "Region")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::RegionHandler*), "OnPreferredRegionPinged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{preferredRegion});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::RegionHandler::PingEnabledRegions
// Il2CppName: PingEnabledRegions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::Photon::Realtime::RegionHandler::*)()>(&Fusion::Photon::Realtime::RegionHandler::PingEnabledRegions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::RegionHandler*), "PingEnabledRegions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::RegionHandler::OnRegionDone
// Il2CppName: OnRegionDone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Photon::Realtime::RegionHandler::*)(::Fusion::Photon::Realtime::Region*)>(&Fusion::Photon::Realtime::RegionHandler::OnRegionDone)> {
  static const MethodInfo* get() {
    static auto* region = &::il2cpp_utils::GetClassFromName("Fusion.Photon.Realtime", "Region")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::RegionHandler*), "OnRegionDone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{region});
  }
};
