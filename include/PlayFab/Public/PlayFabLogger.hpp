// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.Public.PlayFabLoggerBase
#include "PlayFab/Public/PlayFabLoggerBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: PlayFab.Public
namespace PlayFab::Public {
  // Forward declaring type: PlayFabLogger
  class PlayFabLogger;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::Public::PlayFabLogger);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::Public::PlayFabLogger*, "PlayFab.Public", "PlayFabLogger");
// Type namespace: PlayFab.Public
namespace PlayFab::Public {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.Public.PlayFabLogger
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayFabLogger : public ::PlayFab::Public::PlayFabLoggerBase {
    public:
    // protected override System.Void BeginUploadLog()
    // Offset: 0x4B632E0
    // Implemented from: PlayFab.Public.PlayFabLoggerBase
    // Base method: System.Void PlayFabLoggerBase::BeginUploadLog()
    void BeginUploadLog();
    // protected override System.Void UploadLog(System.String message)
    // Offset: 0x4B632E4
    // Implemented from: PlayFab.Public.PlayFabLoggerBase
    // Base method: System.Void PlayFabLoggerBase::UploadLog(System.String message)
    void UploadLog(::StringW message);
    // protected override System.Void EndUploadLog()
    // Offset: 0x4B632E8
    // Implemented from: PlayFab.Public.PlayFabLoggerBase
    // Base method: System.Void PlayFabLoggerBase::EndUploadLog()
    void EndUploadLog();
    // public System.Void .ctor()
    // Offset: 0x4B632EC
    // Implemented from: PlayFab.Public.PlayFabLoggerBase
    // Base method: System.Void PlayFabLoggerBase::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayFabLogger* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::Public::PlayFabLogger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayFabLogger*, creationType>()));
    }
  }; // PlayFab.Public.PlayFabLogger
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::Public::PlayFabLogger::BeginUploadLog
// Il2CppName: BeginUploadLog
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlayFab::Public::PlayFabLogger::*)()>(&PlayFab::Public::PlayFabLogger::BeginUploadLog)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Public::PlayFabLogger*), "BeginUploadLog", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PlayFab::Public::PlayFabLogger::UploadLog
// Il2CppName: UploadLog
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlayFab::Public::PlayFabLogger::*)(::StringW)>(&PlayFab::Public::PlayFabLogger::UploadLog)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Public::PlayFabLogger*), "UploadLog", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: PlayFab::Public::PlayFabLogger::EndUploadLog
// Il2CppName: EndUploadLog
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlayFab::Public::PlayFabLogger::*)()>(&PlayFab::Public::PlayFabLogger::EndUploadLog)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Public::PlayFabLogger*), "EndUploadLog", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PlayFab::Public::PlayFabLogger::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
