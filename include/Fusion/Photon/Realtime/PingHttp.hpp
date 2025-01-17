// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.Photon.Realtime.PhotonPing
#include "Fusion/Photon/Realtime/PhotonPing.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequest
  class UnityWebRequest;
}
// Completed forward declares
// Type namespace: Fusion.Photon.Realtime
namespace Fusion::Photon::Realtime {
  // Forward declaring type: PingHttp
  class PingHttp;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::Photon::Realtime::PingHttp);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Photon::Realtime::PingHttp*, "Fusion.Photon.Realtime", "PingHttp");
// Type namespace: Fusion.Photon.Realtime
namespace Fusion::Photon::Realtime {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.Photon.Realtime.PingHttp
  // [TokenAttribute] Offset: FFFFFFFF
  class PingHttp : public ::Fusion::Photon::Realtime::PhotonPing {
    public:
    // Writing base type padding for base size: 0x29 to desired offset: 0x30
    char ___base_padding[0x7] = {};
    public:
    // private UnityEngine.Networking.UnityWebRequest webRequest
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Networking::UnityWebRequest* webRequest;
    // Field size check
    static_assert(sizeof(::UnityEngine::Networking::UnityWebRequest*) == 0x8);
    public:
    // Creating conversion operator: operator ::UnityEngine::Networking::UnityWebRequest*
    constexpr operator ::UnityEngine::Networking::UnityWebRequest*() const noexcept {
      return webRequest;
    }
    // Get instance field reference: private UnityEngine.Networking.UnityWebRequest webRequest
    [[deprecated("Use field access instead!")]] ::UnityEngine::Networking::UnityWebRequest*& dyn_webRequest();
    // public override System.Boolean StartPing(System.String address)
    // Offset: 0x2AF2354
    // Implemented from: Fusion.Photon.Realtime.PhotonPing
    // Base method: System.Boolean PhotonPing::StartPing(System.String address)
    bool StartPing(::StringW address);
    // public override System.Boolean Done()
    // Offset: 0x2AF2430
    // Implemented from: Fusion.Photon.Realtime.PhotonPing
    // Base method: System.Boolean PhotonPing::Done()
    bool Done();
    // public override System.Void Dispose()
    // Offset: 0x2AF2464
    // Implemented from: Fusion.Photon.Realtime.PhotonPing
    // Base method: System.Void PhotonPing::Dispose()
    void Dispose();
    // public System.Void .ctor()
    // Offset: 0x2AF2480
    // Implemented from: Fusion.Photon.Realtime.PhotonPing
    // Base method: System.Void PhotonPing::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PingHttp* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::Photon::Realtime::PingHttp::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PingHttp*, creationType>()));
    }
  }; // Fusion.Photon.Realtime.PingHttp
  #pragma pack(pop)
  static check_size<sizeof(PingHttp), 48 + sizeof(::UnityEngine::Networking::UnityWebRequest*)> __Fusion_Photon_Realtime_PingHttpSizeCheck;
  static_assert(sizeof(PingHttp) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::Photon::Realtime::PingHttp::StartPing
// Il2CppName: StartPing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::Photon::Realtime::PingHttp::*)(::StringW)>(&Fusion::Photon::Realtime::PingHttp::StartPing)> {
  static const MethodInfo* get() {
    static auto* address = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::PingHttp*), "StartPing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{address});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::PingHttp::Done
// Il2CppName: Done
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::Photon::Realtime::PingHttp::*)()>(&Fusion::Photon::Realtime::PingHttp::Done)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::PingHttp*), "Done", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::PingHttp::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Photon::Realtime::PingHttp::*)()>(&Fusion::Photon::Realtime::PingHttp::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::PingHttp*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::PingHttp::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
