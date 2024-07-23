// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Voice.IAudioInChangeNotifier
#include "Photon/Voice/IAudioInChangeNotifier.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: Photon::Voice
namespace Photon::Voice {
  // Forward declaring type: ILogger
  class ILogger;
}
// Completed forward declares
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // Forward declaring type: AudioInChangeNotifierNotSupported
  class AudioInChangeNotifierNotSupported;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Voice::AudioInChangeNotifierNotSupported);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Voice::AudioInChangeNotifierNotSupported*, "Photon.Voice", "AudioInChangeNotifierNotSupported");
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Voice.AudioInChangeNotifierNotSupported
  // [TokenAttribute] Offset: FFFFFFFF
  class AudioInChangeNotifierNotSupported : public ::Il2CppObject/*, public ::Photon::Voice::IAudioInChangeNotifier*/ {
    public:
    // Creating interface conversion operator: operator ::Photon::Voice::IAudioInChangeNotifier
    operator ::Photon::Voice::IAudioInChangeNotifier() noexcept {
      return *reinterpret_cast<::Photon::Voice::IAudioInChangeNotifier*>(this);
    }
    // public System.Boolean get_IsSupported()
    // Offset: 0x4A62DB4
    bool get_IsSupported();
    // public System.Void .ctor(System.Action callback, Photon.Voice.ILogger logger)
    // Offset: 0x4A62DBC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioInChangeNotifierNotSupported* New_ctor(::System::Action* callback, ::Photon::Voice::ILogger* logger) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioInChangeNotifierNotSupported::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioInChangeNotifierNotSupported*, creationType>(callback, logger)));
    }
    // public System.String get_Error()
    // Offset: 0x4A62DC4
    ::StringW get_Error();
    // public System.Void Dispose()
    // Offset: 0x4A62E04
    void Dispose();
  }; // Photon.Voice.AudioInChangeNotifierNotSupported
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Voice::AudioInChangeNotifierNotSupported::get_IsSupported
// Il2CppName: get_IsSupported
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Voice::AudioInChangeNotifierNotSupported::*)()>(&Photon::Voice::AudioInChangeNotifierNotSupported::get_IsSupported)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::AudioInChangeNotifierNotSupported*), "get_IsSupported", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::AudioInChangeNotifierNotSupported::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Photon::Voice::AudioInChangeNotifierNotSupported::get_Error
// Il2CppName: get_Error
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Photon::Voice::AudioInChangeNotifierNotSupported::*)()>(&Photon::Voice::AudioInChangeNotifierNotSupported::get_Error)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::AudioInChangeNotifierNotSupported*), "get_Error", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::AudioInChangeNotifierNotSupported::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::AudioInChangeNotifierNotSupported::*)()>(&Photon::Voice::AudioInChangeNotifierNotSupported::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::AudioInChangeNotifierNotSupported*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
