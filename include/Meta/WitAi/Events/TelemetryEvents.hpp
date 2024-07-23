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
// Completed includes
// Begin forward declares
// Forward declaring namespace: Meta::WitAi::Events
namespace Meta::WitAi::Events {
  // Forward declaring type: AudioDurationTrackerFinishedEvent
  class AudioDurationTrackerFinishedEvent;
}
// Completed forward declares
// Type namespace: Meta.WitAi.Events
namespace Meta::WitAi::Events {
  // Forward declaring type: TelemetryEvents
  class TelemetryEvents;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::Events::TelemetryEvents);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::Events::TelemetryEvents*, "Meta.WitAi.Events", "TelemetryEvents");
// Type namespace: Meta.WitAi.Events
namespace Meta::WitAi::Events {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.Events.TelemetryEvents
  // [TokenAttribute] Offset: FFFFFFFF
  class TelemetryEvents : public ::Il2CppObject {
    public:
    public:
    // public Meta.WitAi.Events.AudioDurationTrackerFinishedEvent OnAudioTrackerFinished
    // Size: 0x8
    // Offset: 0x10
    ::Meta::WitAi::Events::AudioDurationTrackerFinishedEvent* OnAudioTrackerFinished;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::Events::AudioDurationTrackerFinishedEvent*) == 0x8);
    public:
    // Creating conversion operator: operator ::Meta::WitAi::Events::AudioDurationTrackerFinishedEvent*
    constexpr operator ::Meta::WitAi::Events::AudioDurationTrackerFinishedEvent*() const noexcept {
      return OnAudioTrackerFinished;
    }
    // Get instance field reference: public Meta.WitAi.Events.AudioDurationTrackerFinishedEvent OnAudioTrackerFinished
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::Events::AudioDurationTrackerFinishedEvent*& dyn_OnAudioTrackerFinished();
    // public System.Void .ctor()
    // Offset: 0x4426B54
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TelemetryEvents* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Events::TelemetryEvents::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TelemetryEvents*, creationType>()));
    }
  }; // Meta.WitAi.Events.TelemetryEvents
  #pragma pack(pop)
  static check_size<sizeof(TelemetryEvents), 16 + sizeof(::Meta::WitAi::Events::AudioDurationTrackerFinishedEvent*)> __Meta_WitAi_Events_TelemetryEventsSizeCheck;
  static_assert(sizeof(TelemetryEvents) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::Events::TelemetryEvents::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!