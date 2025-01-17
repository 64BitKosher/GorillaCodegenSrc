// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Pun.PhotonAnimatorView
#include "Photon/Pun/PhotonAnimatorView.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::PhotonAnimatorView::SynchronizeType, "Photon.Pun", "PhotonAnimatorView/SynchronizeType");
// Type namespace: Photon.Pun
namespace Photon::Pun {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Pun.PhotonAnimatorView/SynchronizeType
  // [TokenAttribute] Offset: FFFFFFFF
  struct PhotonAnimatorView::SynchronizeType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SynchronizeType
    constexpr SynchronizeType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Photon.Pun.PhotonAnimatorView/SynchronizeType Disabled
    static constexpr const int Disabled = 0;
    // Get static field: static public Photon.Pun.PhotonAnimatorView/SynchronizeType Disabled
    static ::Photon::Pun::PhotonAnimatorView::SynchronizeType _get_Disabled();
    // Set static field: static public Photon.Pun.PhotonAnimatorView/SynchronizeType Disabled
    static void _set_Disabled(::Photon::Pun::PhotonAnimatorView::SynchronizeType value);
    // static field const value: static public Photon.Pun.PhotonAnimatorView/SynchronizeType Discrete
    static constexpr const int Discrete = 1;
    // Get static field: static public Photon.Pun.PhotonAnimatorView/SynchronizeType Discrete
    static ::Photon::Pun::PhotonAnimatorView::SynchronizeType _get_Discrete();
    // Set static field: static public Photon.Pun.PhotonAnimatorView/SynchronizeType Discrete
    static void _set_Discrete(::Photon::Pun::PhotonAnimatorView::SynchronizeType value);
    // static field const value: static public Photon.Pun.PhotonAnimatorView/SynchronizeType Continuous
    static constexpr const int Continuous = 2;
    // Get static field: static public Photon.Pun.PhotonAnimatorView/SynchronizeType Continuous
    static ::Photon::Pun::PhotonAnimatorView::SynchronizeType _get_Continuous();
    // Set static field: static public Photon.Pun.PhotonAnimatorView/SynchronizeType Continuous
    static void _set_Continuous(::Photon::Pun::PhotonAnimatorView::SynchronizeType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Photon.Pun.PhotonAnimatorView/SynchronizeType
  #pragma pack(pop)
  static check_size<sizeof(PhotonAnimatorView::SynchronizeType), 0 + sizeof(int)> __Photon_Pun_PhotonAnimatorView_SynchronizeTypeSizeCheck;
  static_assert(sizeof(PhotonAnimatorView::SynchronizeType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
