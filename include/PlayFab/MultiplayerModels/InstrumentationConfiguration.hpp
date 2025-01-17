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
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Forward declaring type: InstrumentationConfiguration
  class InstrumentationConfiguration;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::MultiplayerModels::InstrumentationConfiguration);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::MultiplayerModels::InstrumentationConfiguration*, "PlayFab.MultiplayerModels", "InstrumentationConfiguration");
// Type namespace: PlayFab.MultiplayerModels
namespace PlayFab::MultiplayerModels {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.MultiplayerModels.InstrumentationConfiguration
  // [TokenAttribute] Offset: FFFFFFFF
  class InstrumentationConfiguration : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public System.Collections.Generic.List`1<System.String> ProcessesToMonitor
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::StringW>* ProcessesToMonitor;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::List_1<::StringW>*
    constexpr operator ::System::Collections::Generic::List_1<::StringW>*() const noexcept {
      return ProcessesToMonitor;
    }
    // Get instance field reference: public System.Collections.Generic.List`1<System.String> ProcessesToMonitor
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::StringW>*& dyn_ProcessesToMonitor();
    // public System.Void .ctor()
    // Offset: 0x4B60F5C
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InstrumentationConfiguration* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::MultiplayerModels::InstrumentationConfiguration::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InstrumentationConfiguration*, creationType>()));
    }
  }; // PlayFab.MultiplayerModels.InstrumentationConfiguration
  #pragma pack(pop)
  static check_size<sizeof(InstrumentationConfiguration), 16 + sizeof(::System::Collections::Generic::List_1<::StringW>*)> __PlayFab_MultiplayerModels_InstrumentationConfigurationSizeCheck;
  static_assert(sizeof(InstrumentationConfiguration) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::MultiplayerModels::InstrumentationConfiguration::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
