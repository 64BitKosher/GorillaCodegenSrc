// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.PlayFabClientAPI
#include "PlayFab/PlayFabClientAPI.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: PlayFab::ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: ExecuteCloudScriptResult
  class ExecuteCloudScriptResult;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::PlayFab::PlayFabClientAPI::$$c__DisplayClass19_0_1, "PlayFab", "PlayFabClientAPI/<>c__DisplayClass19_0`1");
// Type namespace: PlayFab
namespace PlayFab {
  // WARNING Size may be invalid!
  // Autogenerated type: PlayFab.PlayFabClientAPI/<>c__DisplayClass19_0`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename TOut>
  class PlayFabClientAPI::$$c__DisplayClass19_0_1 : public ::Il2CppObject {
    public:
    public:
    // public System.Action`1<PlayFab.ClientModels.ExecuteCloudScriptResult> resultCallback
    // Size: 0x8
    // Offset: 0x0
    ::System::Action_1<::PlayFab::ClientModels::ExecuteCloudScriptResult*>* resultCallback;
    // Field size check
    static_assert(sizeof(::System::Action_1<::PlayFab::ClientModels::ExecuteCloudScriptResult*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Action_1<::PlayFab::ClientModels::ExecuteCloudScriptResult*>*
    constexpr operator ::System::Action_1<::PlayFab::ClientModels::ExecuteCloudScriptResult*>*() const noexcept {
      return resultCallback;
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Action`1<PlayFab.ClientModels.ExecuteCloudScriptResult> resultCallback
    [[deprecated("Use field access instead!")]] ::System::Action_1<::PlayFab::ClientModels::ExecuteCloudScriptResult*>*& dyn_resultCallback() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::PlayFabClientAPI::$$c__DisplayClass19_0_1::dyn_resultCallback");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "resultCallback"))->offset;
      return *reinterpret_cast<::System::Action_1<::PlayFab::ClientModels::ExecuteCloudScriptResult*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayFabClientAPI::$$c__DisplayClass19_0_1<TOut>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::PlayFabClientAPI::$$c__DisplayClass19_0_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayFabClientAPI::$$c__DisplayClass19_0_1<TOut>*, creationType>()));
    }
    // System.Void <ExecuteCloudScript>b__0(PlayFab.ClientModels.ExecuteCloudScriptResult wrappedResult)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void $ExecuteCloudScript$b__0(::PlayFab::ClientModels::ExecuteCloudScriptResult* wrappedResult) {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::PlayFabClientAPI::$$c__DisplayClass19_0_1::<ExecuteCloudScript>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<ExecuteCloudScript>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(wrappedResult)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, wrappedResult);
    }
  }; // PlayFab.PlayFabClientAPI/<>c__DisplayClass19_0`1
  // Could not write size check! Type: PlayFab.PlayFabClientAPI/<>c__DisplayClass19_0`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
