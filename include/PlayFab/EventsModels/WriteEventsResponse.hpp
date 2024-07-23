// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabResultCommon
#include "PlayFab/SharedModels/PlayFabResultCommon.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: PlayFab.EventsModels
namespace PlayFab::EventsModels {
  // Forward declaring type: WriteEventsResponse
  class WriteEventsResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::EventsModels::WriteEventsResponse);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::EventsModels::WriteEventsResponse*, "PlayFab.EventsModels", "WriteEventsResponse");
// Type namespace: PlayFab.EventsModels
namespace PlayFab::EventsModels {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.EventsModels.WriteEventsResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class WriteEventsResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
    public:
    public:
    // public System.Collections.Generic.List`1<System.String> AssignedEventIds
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::StringW>* AssignedEventIds;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::List_1<::StringW>*
    constexpr operator ::System::Collections::Generic::List_1<::StringW>*() const noexcept {
      return AssignedEventIds;
    }
    // Get instance field reference: public System.Collections.Generic.List`1<System.String> AssignedEventIds
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::StringW>*& dyn_AssignedEventIds();
    // public System.Void .ctor()
    // Offset: 0x4B6145C
    // Implemented from: PlayFab.SharedModels.PlayFabResultCommon
    // Base method: System.Void PlayFabResultCommon::.ctor()
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WriteEventsResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::EventsModels::WriteEventsResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WriteEventsResponse*, creationType>()));
    }
  }; // PlayFab.EventsModels.WriteEventsResponse
  #pragma pack(pop)
  static check_size<sizeof(WriteEventsResponse), 32 + sizeof(::System::Collections::Generic::List_1<::StringW>*)> __PlayFab_EventsModels_WriteEventsResponseSizeCheck;
  static_assert(sizeof(WriteEventsResponse) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::EventsModels::WriteEventsResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!