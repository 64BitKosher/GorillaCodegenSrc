// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabRequestCommon
#include "PlayFab/SharedModels/PlayFabRequestCommon.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: PlayFab::EventsModels
namespace PlayFab::EventsModels {
  // Forward declaring type: EventContents
  class EventContents;
}
// Completed forward declares
// Type namespace: PlayFab.EventsModels
namespace PlayFab::EventsModels {
  // Forward declaring type: WriteEventsRequest
  class WriteEventsRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::EventsModels::WriteEventsRequest);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::EventsModels::WriteEventsRequest*, "PlayFab.EventsModels", "WriteEventsRequest");
// Type namespace: PlayFab.EventsModels
namespace PlayFab::EventsModels {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.EventsModels.WriteEventsRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class WriteEventsRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
    public:
    public:
    // public System.Collections.Generic.List`1<PlayFab.EventsModels.EventContents> Events
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::PlayFab::EventsModels::EventContents*>* Events;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::PlayFab::EventsModels::EventContents*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::PlayFab::PlayFabAuthenticationContext*
    constexpr operator ::PlayFab::PlayFabAuthenticationContext*() const noexcept = delete;
    // Get instance field reference: public System.Collections.Generic.List`1<PlayFab.EventsModels.EventContents> Events
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::PlayFab::EventsModels::EventContents*>*& dyn_Events();
    // public System.Void .ctor()
    // Offset: 0x4B61454
    // Implemented from: PlayFab.SharedModels.PlayFabRequestCommon
    // Base method: System.Void PlayFabRequestCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WriteEventsRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::EventsModels::WriteEventsRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WriteEventsRequest*, creationType>()));
    }
  }; // PlayFab.EventsModels.WriteEventsRequest
  #pragma pack(pop)
  static check_size<sizeof(WriteEventsRequest), 24 + sizeof(::System::Collections::Generic::List_1<::PlayFab::EventsModels::EventContents*>*)> __PlayFab_EventsModels_WriteEventsRequestSizeCheck;
  static_assert(sizeof(WriteEventsRequest) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::EventsModels::WriteEventsRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
