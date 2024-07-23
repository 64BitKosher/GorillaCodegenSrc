// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ThrowableBugBeacon
#include "GlobalNamespace/ThrowableBugBeacon.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
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
NEED_NO_BOX(::GlobalNamespace::ThrowableBugBeacon::ThrowableBugBeaconFloatEvent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ThrowableBugBeacon::ThrowableBugBeaconFloatEvent*, "", "ThrowableBugBeacon/ThrowableBugBeaconFloatEvent");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: ThrowableBugBeacon/ThrowableBugBeaconFloatEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class ThrowableBugBeacon::ThrowableBugBeaconFloatEvent : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x27A2B50
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ThrowableBugBeacon::ThrowableBugBeaconFloatEvent* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ThrowableBugBeacon::ThrowableBugBeaconFloatEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ThrowableBugBeacon::ThrowableBugBeaconFloatEvent*, creationType>(object, method)));
    }
    // public System.Void Invoke(ThrowableBugBeacon tbb, System.Single f)
    // Offset: 0x27A5130
    void Invoke(::GlobalNamespace::ThrowableBugBeacon* tbb, float f);
    // public System.IAsyncResult BeginInvoke(ThrowableBugBeacon tbb, System.Single f, System.AsyncCallback callback, System.Object object)
    // Offset: 0x27A5144
    ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::ThrowableBugBeacon* tbb, float f, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x27A51D8
    void EndInvoke(::System::IAsyncResult* result);
  }; // ThrowableBugBeacon/ThrowableBugBeaconFloatEvent
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ThrowableBugBeacon::ThrowableBugBeaconFloatEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ThrowableBugBeacon::ThrowableBugBeaconFloatEvent::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ThrowableBugBeacon::ThrowableBugBeaconFloatEvent::*)(::GlobalNamespace::ThrowableBugBeacon*, float)>(&GlobalNamespace::ThrowableBugBeacon::ThrowableBugBeaconFloatEvent::Invoke)> {
  static const MethodInfo* get() {
    static auto* tbb = &::il2cpp_utils::GetClassFromName("", "ThrowableBugBeacon")->byval_arg;
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ThrowableBugBeacon::ThrowableBugBeaconFloatEvent*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tbb, f});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ThrowableBugBeacon::ThrowableBugBeaconFloatEvent::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (GlobalNamespace::ThrowableBugBeacon::ThrowableBugBeaconFloatEvent::*)(::GlobalNamespace::ThrowableBugBeacon*, float, ::System::AsyncCallback*, ::Il2CppObject*)>(&GlobalNamespace::ThrowableBugBeacon::ThrowableBugBeaconFloatEvent::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* tbb = &::il2cpp_utils::GetClassFromName("", "ThrowableBugBeacon")->byval_arg;
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ThrowableBugBeacon::ThrowableBugBeaconFloatEvent*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tbb, f, callback, object});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ThrowableBugBeacon::ThrowableBugBeaconFloatEvent::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ThrowableBugBeacon::ThrowableBugBeaconFloatEvent::*)(::System::IAsyncResult*)>(&GlobalNamespace::ThrowableBugBeacon::ThrowableBugBeaconFloatEvent::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ThrowableBugBeacon::ThrowableBugBeaconFloatEvent*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};