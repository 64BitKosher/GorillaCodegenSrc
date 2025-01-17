// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.Internal.PlayFabHttp
#include "PlayFab/Internal/PlayFabHttp.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: PlayFab::SharedModels
namespace PlayFab::SharedModels {
  // Forward declaring type: PlayFabResultCommon
  class PlayFabResultCommon;
}
// Forward declaring namespace: PlayFab::Internal
namespace PlayFab::Internal {
  // Forward declaring type: CallRequestContainer
  class CallRequestContainer;
}
// Forward declaring namespace: PlayFab
namespace PlayFab {
  // Forward declaring type: ISerializerPlugin
  class ISerializerPlugin;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::PlayFab::Internal::PlayFabHttp::$$c__DisplayClass23_0_1, "PlayFab.Internal", "PlayFabHttp/<>c__DisplayClass23_0`1");
// Type namespace: PlayFab.Internal
namespace PlayFab::Internal {
  // WARNING Size may be invalid!
  // Autogenerated type: PlayFab.Internal.PlayFabHttp/<>c__DisplayClass23_0`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename TResult>
  class PlayFabHttp::$$c__DisplayClass23_0_1 : public ::Il2CppObject {
    public:
    public:
    // public PlayFab.Internal.CallRequestContainer reqContainer
    // Size: 0x8
    // Offset: 0x0
    ::PlayFab::Internal::CallRequestContainer* reqContainer;
    // Field size check
    static_assert(sizeof(::PlayFab::Internal::CallRequestContainer*) == 0x8);
    // public PlayFab.ISerializerPlugin serializer
    // Size: 0x8
    // Offset: 0x0
    ::PlayFab::ISerializerPlugin* serializer;
    // Field size check
    static_assert(sizeof(::PlayFab::ISerializerPlugin*) == 0x8);
    // public System.Action`1<TResult> resultCallback
    // Size: 0x8
    // Offset: 0x0
    ::System::Action_1<TResult>* resultCallback;
    // Field size check
    static_assert(sizeof(::System::Action_1<TResult>*) == 0x8);
    public:
    // Autogenerated instance field getter
    // Get instance field: public PlayFab.Internal.CallRequestContainer reqContainer
    [[deprecated("Use field access instead!")]] ::PlayFab::Internal::CallRequestContainer*& dyn_reqContainer() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::Internal::PlayFabHttp::$$c__DisplayClass23_0_1::dyn_reqContainer");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "reqContainer"))->offset;
      return *reinterpret_cast<::PlayFab::Internal::CallRequestContainer**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public PlayFab.ISerializerPlugin serializer
    [[deprecated("Use field access instead!")]] ::PlayFab::ISerializerPlugin*& dyn_serializer() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::Internal::PlayFabHttp::$$c__DisplayClass23_0_1::dyn_serializer");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "serializer"))->offset;
      return *reinterpret_cast<::PlayFab::ISerializerPlugin**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Action`1<TResult> resultCallback
    [[deprecated("Use field access instead!")]] ::System::Action_1<TResult>*& dyn_resultCallback() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::Internal::PlayFabHttp::$$c__DisplayClass23_0_1::dyn_resultCallback");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "resultCallback"))->offset;
      return *reinterpret_cast<::System::Action_1<TResult>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayFabHttp::$$c__DisplayClass23_0_1<TResult>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::Internal::PlayFabHttp::$$c__DisplayClass23_0_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayFabHttp::$$c__DisplayClass23_0_1<TResult>*, creationType>()));
    }
    // System.Void <_MakeApiCall>b__0()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void $_MakeApiCall$b__0() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::Internal::PlayFabHttp::$$c__DisplayClass23_0_1::<_MakeApiCall>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<_MakeApiCall>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // System.Void <_MakeApiCall>b__1()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void $_MakeApiCall$b__1() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::Internal::PlayFabHttp::$$c__DisplayClass23_0_1::<_MakeApiCall>b__1");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<_MakeApiCall>b__1", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
  }; // PlayFab.Internal.PlayFabHttp/<>c__DisplayClass23_0`1
  // Could not write size check! Type: PlayFab.Internal.PlayFabHttp/<>c__DisplayClass23_0`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
