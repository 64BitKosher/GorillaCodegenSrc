// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Single
#include "System/Single.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion::Protocol
namespace Fusion::Protocol {
  // Forward declaring type: ReflexiveInfo
  class ReflexiveInfo;
}
// Completed forward declares
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: PeerPing
  class PeerPing;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::PeerPing);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::PeerPing*, "Fusion", "PeerPing");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.PeerPing
  // [TokenAttribute] Offset: FFFFFFFF
  class PeerPing : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 AttemptCount
    // Size: 0x4
    // Offset: 0x10
    int AttemptCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single NextAttemptCountDown
    // Size: 0x4
    // Offset: 0x14
    float NextAttemptCountDown;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public Fusion.Protocol.ReflexiveInfo ReflexiveInfo
    // Size: 0x8
    // Offset: 0x18
    ::Fusion::Protocol::ReflexiveInfo* ReflexiveInfo;
    // Field size check
    static_assert(sizeof(::Fusion::Protocol::ReflexiveInfo*) == 0x8);
    public:
    // static field const value: static public System.Single PING_DELAY
    static constexpr const float PING_DELAY = 0.1;
    // Get static field: static public System.Single PING_DELAY
    static float _get_PING_DELAY();
    // Set static field: static public System.Single PING_DELAY
    static void _set_PING_DELAY(float value);
    // Get instance field reference: public System.Int32 AttemptCount
    [[deprecated("Use field access instead!")]] int& dyn_AttemptCount();
    // Get instance field reference: public System.Single NextAttemptCountDown
    [[deprecated("Use field access instead!")]] float& dyn_NextAttemptCountDown();
    // Get instance field reference: public Fusion.Protocol.ReflexiveInfo ReflexiveInfo
    [[deprecated("Use field access instead!")]] ::Fusion::Protocol::ReflexiveInfo*& dyn_ReflexiveInfo();
    // public System.Void .ctor(Fusion.Protocol.ReflexiveInfo reflexiveInfo)
    // Offset: 0x2B062C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PeerPing* New_ctor(::Fusion::Protocol::ReflexiveInfo* reflexiveInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::PeerPing::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PeerPing*, creationType>(reflexiveInfo)));
    }
    // public override System.String ToString()
    // Offset: 0x2B06308
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // Fusion.PeerPing
  #pragma pack(pop)
  static check_size<sizeof(PeerPing), 24 + sizeof(::Fusion::Protocol::ReflexiveInfo*)> __Fusion_PeerPingSizeCheck;
  static_assert(sizeof(PeerPing) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::PeerPing::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::PeerPing::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Fusion::PeerPing::*)()>(&Fusion::PeerPing::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::PeerPing*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
