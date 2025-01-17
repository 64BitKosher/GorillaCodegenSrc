// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.WitAi.Events.AudioBufferEvents
#include "Meta/WitAi/Events/AudioBufferEvents.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Meta.WitAi.Data.RingBuffer`1
#include "Meta/WitAi/Data/RingBuffer_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::Events::AudioBufferEvents::OnSampleReadyEvent);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::Events::AudioBufferEvents::OnSampleReadyEvent*, "Meta.WitAi.Events", "AudioBufferEvents/OnSampleReadyEvent");
// Type namespace: Meta.WitAi.Events
namespace Meta::WitAi::Events {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.Events.AudioBufferEvents/OnSampleReadyEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class AudioBufferEvents::OnSampleReadyEvent : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x4433E78
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioBufferEvents::OnSampleReadyEvent* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Events::AudioBufferEvents::OnSampleReadyEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioBufferEvents::OnSampleReadyEvent*, creationType>(object, method)));
    }
    // public System.Void Invoke(Meta.WitAi.Data.RingBuffer`1/Marker<System.Byte> marker, System.Single levelMax)
    // Offset: 0x443A1CC
    void Invoke(typename ::Meta::WitAi::Data::RingBuffer_1<uint8_t>::Marker* marker, float levelMax);
    // public System.IAsyncResult BeginInvoke(Meta.WitAi.Data.RingBuffer`1/Marker<System.Byte> marker, System.Single levelMax, System.AsyncCallback callback, System.Object object)
    // Offset: 0x443A1E0
    ::System::IAsyncResult* BeginInvoke(typename ::Meta::WitAi::Data::RingBuffer_1<uint8_t>::Marker* marker, float levelMax, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x443A274
    void EndInvoke(::System::IAsyncResult* result);
  }; // Meta.WitAi.Events.AudioBufferEvents/OnSampleReadyEvent
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::Events::AudioBufferEvents::OnSampleReadyEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Meta::WitAi::Events::AudioBufferEvents::OnSampleReadyEvent::Invoke
// Il2CppName: Invoke
// Cannot write MetadataGetter for a method that has a nested type with a declaring generic type anywhere within it!
// Talk to sc2ad if this is something you want
// Writing MetadataGetter for method: Meta::WitAi::Events::AudioBufferEvents::OnSampleReadyEvent::BeginInvoke
// Il2CppName: BeginInvoke
// Cannot write MetadataGetter for a method that has a nested type with a declaring generic type anywhere within it!
// Talk to sc2ad if this is something you want
// Writing MetadataGetter for method: Meta::WitAi::Events::AudioBufferEvents::OnSampleReadyEvent::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Events::AudioBufferEvents::OnSampleReadyEvent::*)(::System::IAsyncResult*)>(&Meta::WitAi::Events::AudioBufferEvents::OnSampleReadyEvent::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Events::AudioBufferEvents::OnSampleReadyEvent*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
