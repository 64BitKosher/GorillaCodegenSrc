// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: LivestreamingStatus
  class LivestreamingStatus;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: Livestreaming
  class Livestreaming;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Livestreaming);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Livestreaming*, "Oculus.Platform", "Livestreaming");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Livestreaming
  // [TokenAttribute] Offset: FFFFFFFF
  class Livestreaming : public ::Il2CppObject {
    public:
    // static public System.Void SetStatusUpdateNotificationCallback(Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.LivestreamingStatus> callback)
    // Offset: 0x488172C
    static void SetStatusUpdateNotificationCallback(typename ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LivestreamingStatus*>::Callback* callback);
  }; // Oculus.Platform.Livestreaming
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Livestreaming::SetStatusUpdateNotificationCallback
// Il2CppName: SetStatusUpdateNotificationCallback
// Cannot write MetadataGetter for a method that has a nested type with a declaring generic type anywhere within it!
// Talk to sc2ad if this is something you want
