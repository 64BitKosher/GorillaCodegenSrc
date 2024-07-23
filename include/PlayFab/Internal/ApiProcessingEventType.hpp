// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: PlayFab.Internal
namespace PlayFab::Internal {
  // Forward declaring type: ApiProcessingEventType
  struct ApiProcessingEventType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::Internal::ApiProcessingEventType, "PlayFab.Internal", "ApiProcessingEventType");
// Type namespace: PlayFab.Internal
namespace PlayFab::Internal {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.Internal.ApiProcessingEventType
  // [TokenAttribute] Offset: FFFFFFFF
  struct ApiProcessingEventType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ApiProcessingEventType
    constexpr ApiProcessingEventType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public PlayFab.Internal.ApiProcessingEventType Pre
    static constexpr const int Pre = 0;
    // Get static field: static public PlayFab.Internal.ApiProcessingEventType Pre
    static ::PlayFab::Internal::ApiProcessingEventType _get_Pre();
    // Set static field: static public PlayFab.Internal.ApiProcessingEventType Pre
    static void _set_Pre(::PlayFab::Internal::ApiProcessingEventType value);
    // static field const value: static public PlayFab.Internal.ApiProcessingEventType Post
    static constexpr const int Post = 1;
    // Get static field: static public PlayFab.Internal.ApiProcessingEventType Post
    static ::PlayFab::Internal::ApiProcessingEventType _get_Post();
    // Set static field: static public PlayFab.Internal.ApiProcessingEventType Post
    static void _set_Post(::PlayFab::Internal::ApiProcessingEventType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // PlayFab.Internal.ApiProcessingEventType
  #pragma pack(pop)
  static check_size<sizeof(ApiProcessingEventType), 0 + sizeof(int)> __PlayFab_Internal_ApiProcessingEventTypeSizeCheck;
  static_assert(sizeof(ApiProcessingEventType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"