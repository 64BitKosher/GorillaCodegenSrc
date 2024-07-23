// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.Protocol.Message
#include "Fusion/Protocol/Message.hpp"
// Including type: Fusion.Protocol.PeerMode
#include "Fusion/Protocol/PeerMode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion::Protocol
namespace Fusion::Protocol {
  // Forward declaring type: BitStream
  class BitStream;
}
// Completed forward declares
// Type namespace: Fusion.Protocol
namespace Fusion::Protocol {
  // Forward declaring type: HostMigration
  class HostMigration;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::Protocol::HostMigration);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Protocol::HostMigration*, "Fusion.Protocol", "HostMigration");
// Type namespace: Fusion.Protocol
namespace Fusion::Protocol {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.Protocol.HostMigration
  // [TokenAttribute] Offset: FFFFFFFF
  class HostMigration : public ::Fusion::Protocol::Message {
    public:
    public:
    // public Fusion.Protocol.PeerMode PeerMode
    // Size: 0x1
    // Offset: 0x28
    ::Fusion::Protocol::PeerMode PeerMode;
    // Field size check
    static_assert(sizeof(::Fusion::Protocol::PeerMode) == 0x1);
    public:
    // Creating conversion operator: operator ::Fusion::Protocol::PeerMode
    constexpr operator ::Fusion::Protocol::PeerMode() const noexcept {
      return PeerMode;
    }
    // Get instance field reference: public Fusion.Protocol.PeerMode PeerMode
    [[deprecated("Use field access instead!")]] ::Fusion::Protocol::PeerMode& dyn_PeerMode();
    // public System.Boolean get_WaitForSnapshot()
    // Offset: 0x2B8C9EC
    bool get_WaitForSnapshot();
    // public System.Void .ctor()
    // Offset: 0x2B8C9FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HostMigration* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::Protocol::HostMigration::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HostMigration*, creationType>()));
    }
    // protected override System.Void SerializeProtected(Fusion.Protocol.BitStream stream)
    // Offset: 0x2B8CA08
    // Implemented from: Fusion.Protocol.Message
    // Base method: System.Void Message::SerializeProtected(Fusion.Protocol.BitStream stream)
    void SerializeProtected(::Fusion::Protocol::BitStream* stream);
    // public override System.String ToString()
    // Offset: 0x2B8CA48
    // Implemented from: Fusion.Protocol.Message
    // Base method: System.String Message::ToString()
    ::StringW ToString();
  }; // Fusion.Protocol.HostMigration
  #pragma pack(pop)
  static check_size<sizeof(HostMigration), 40 + sizeof(::Fusion::Protocol::PeerMode)> __Fusion_Protocol_HostMigrationSizeCheck;
  static_assert(sizeof(HostMigration) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::Protocol::HostMigration::get_WaitForSnapshot
// Il2CppName: get_WaitForSnapshot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::Protocol::HostMigration::*)()>(&Fusion::Protocol::HostMigration::get_WaitForSnapshot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Protocol::HostMigration*), "get_WaitForSnapshot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Protocol::HostMigration::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::Protocol::HostMigration::SerializeProtected
// Il2CppName: SerializeProtected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Protocol::HostMigration::*)(::Fusion::Protocol::BitStream*)>(&Fusion::Protocol::HostMigration::SerializeProtected)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("Fusion.Protocol", "BitStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Protocol::HostMigration*), "SerializeProtected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream});
  }
};
// Writing MetadataGetter for method: Fusion::Protocol::HostMigration::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Fusion::Protocol::HostMigration::*)()>(&Fusion::Protocol::HostMigration::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Protocol::HostMigration*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
