// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Realtime.EventCaching
#include "Photon/Realtime/EventCaching.hpp"
// Including type: Photon.Realtime.ReceiverGroup
#include "Photon/Realtime/ReceiverGroup.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Photon::Realtime
namespace Photon::Realtime {
  // Forward declaring type: WebFlags
  class WebFlags;
}
// Completed forward declares
// Type namespace: Photon.Realtime
namespace Photon::Realtime {
  // Forward declaring type: RaiseEventOptions
  class RaiseEventOptions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Realtime::RaiseEventOptions);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::RaiseEventOptions*, "Photon.Realtime", "RaiseEventOptions");
// Type namespace: Photon.Realtime
namespace Photon::Realtime {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Realtime.RaiseEventOptions
  // [TokenAttribute] Offset: FFFFFFFF
  class RaiseEventOptions : public ::Il2CppObject {
    public:
    public:
    // public Photon.Realtime.EventCaching CachingOption
    // Size: 0x1
    // Offset: 0x10
    ::Photon::Realtime::EventCaching CachingOption;
    // Field size check
    static_assert(sizeof(::Photon::Realtime::EventCaching) == 0x1);
    // public System.Byte InterestGroup
    // Size: 0x1
    // Offset: 0x11
    uint8_t InterestGroup;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Padding between fields: InterestGroup and: TargetActors
    char __padding1[0x6] = {};
    // public System.Int32[] TargetActors
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<int> TargetActors;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // public Photon.Realtime.ReceiverGroup Receivers
    // Size: 0x1
    // Offset: 0x20
    ::Photon::Realtime::ReceiverGroup Receivers;
    // Field size check
    static_assert(sizeof(::Photon::Realtime::ReceiverGroup) == 0x1);
    // public System.Byte SequenceChannel
    // Size: 0x1
    // Offset: 0x21
    uint8_t SequenceChannel;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Padding between fields: SequenceChannel and: Flags
    char __padding4[0x6] = {};
    // public Photon.Realtime.WebFlags Flags
    // Size: 0x8
    // Offset: 0x28
    ::Photon::Realtime::WebFlags* Flags;
    // Field size check
    static_assert(sizeof(::Photon::Realtime::WebFlags*) == 0x8);
    public:
    // Get static field: static public readonly Photon.Realtime.RaiseEventOptions Default
    static ::Photon::Realtime::RaiseEventOptions* _get_Default();
    // Set static field: static public readonly Photon.Realtime.RaiseEventOptions Default
    static void _set_Default(::Photon::Realtime::RaiseEventOptions* value);
    // Get instance field reference: public Photon.Realtime.EventCaching CachingOption
    [[deprecated("Use field access instead!")]] ::Photon::Realtime::EventCaching& dyn_CachingOption();
    // Get instance field reference: public System.Byte InterestGroup
    [[deprecated("Use field access instead!")]] uint8_t& dyn_InterestGroup();
    // Get instance field reference: public System.Int32[] TargetActors
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_TargetActors();
    // Get instance field reference: public Photon.Realtime.ReceiverGroup Receivers
    [[deprecated("Use field access instead!")]] ::Photon::Realtime::ReceiverGroup& dyn_Receivers();
    // Get instance field reference: public System.Byte SequenceChannel
    [[deprecated("Use field access instead!")]] uint8_t& dyn_SequenceChannel();
    // Get instance field reference: public Photon.Realtime.WebFlags Flags
    [[deprecated("Use field access instead!")]] ::Photon::Realtime::WebFlags*& dyn_Flags();
    // public System.Void .ctor()
    // Offset: 0x4A236DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RaiseEventOptions* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Realtime::RaiseEventOptions::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RaiseEventOptions*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x4A2374C
    static void _cctor();
  }; // Photon.Realtime.RaiseEventOptions
  #pragma pack(pop)
  static check_size<sizeof(RaiseEventOptions), 40 + sizeof(::Photon::Realtime::WebFlags*)> __Photon_Realtime_RaiseEventOptionsSizeCheck;
  static_assert(sizeof(RaiseEventOptions) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Realtime::RaiseEventOptions::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Photon::Realtime::RaiseEventOptions::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Photon::Realtime::RaiseEventOptions::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::RaiseEventOptions*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
