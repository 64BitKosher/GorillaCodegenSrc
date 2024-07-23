// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabBaseModel
#include "PlayFab/SharedModels/PlayFabBaseModel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: LogStatement
  class LogStatement;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::ClientModels::LogStatement);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ClientModels::LogStatement*, "PlayFab.ClientModels", "LogStatement");
// Type namespace: PlayFab.ClientModels
namespace PlayFab::ClientModels {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ClientModels.LogStatement
  // [TokenAttribute] Offset: FFFFFFFF
  class LogStatement : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public System.Object Data
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* Data;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.String Level
    // Size: 0x8
    // Offset: 0x18
    ::StringW Level;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String Message
    // Size: 0x8
    // Offset: 0x20
    ::StringW Message;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.Object Data
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_Data();
    // Get instance field reference: public System.String Level
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Level();
    // Get instance field reference: public System.String Message
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Message();
    // public System.Void .ctor()
    // Offset: 0x4B6EA44
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LogStatement* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::ClientModels::LogStatement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LogStatement*, creationType>()));
    }
  }; // PlayFab.ClientModels.LogStatement
  #pragma pack(pop)
  static check_size<sizeof(LogStatement), 32 + sizeof(::StringW)> __PlayFab_ClientModels_LogStatementSizeCheck;
  static_assert(sizeof(LogStatement) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::ClientModels::LogStatement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
