// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Photon.Pun
namespace Photon::Pun {
  // Forward declaring type: PhotonTransformViewRotationModel
  class PhotonTransformViewRotationModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Pun::PhotonTransformViewRotationModel);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::PhotonTransformViewRotationModel*, "Photon.Pun", "PhotonTransformViewRotationModel");
// Type namespace: Photon.Pun
namespace Photon::Pun {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Pun.PhotonTransformViewRotationModel
  // [TokenAttribute] Offset: FFFFFFFF
  class PhotonTransformViewRotationModel : public ::Il2CppObject {
    public:
    // Nested type: ::Photon::Pun::PhotonTransformViewRotationModel::InterpolateOptions
    struct InterpolateOptions;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: Photon.Pun.PhotonTransformViewRotationModel/InterpolateOptions
    // [TokenAttribute] Offset: FFFFFFFF
    struct InterpolateOptions/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: InterpolateOptions
      constexpr InterpolateOptions(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Photon.Pun.PhotonTransformViewRotationModel/InterpolateOptions Disabled
      static constexpr const int Disabled = 0;
      // Get static field: static public Photon.Pun.PhotonTransformViewRotationModel/InterpolateOptions Disabled
      static ::Photon::Pun::PhotonTransformViewRotationModel::InterpolateOptions _get_Disabled();
      // Set static field: static public Photon.Pun.PhotonTransformViewRotationModel/InterpolateOptions Disabled
      static void _set_Disabled(::Photon::Pun::PhotonTransformViewRotationModel::InterpolateOptions value);
      // static field const value: static public Photon.Pun.PhotonTransformViewRotationModel/InterpolateOptions RotateTowards
      static constexpr const int RotateTowards = 1;
      // Get static field: static public Photon.Pun.PhotonTransformViewRotationModel/InterpolateOptions RotateTowards
      static ::Photon::Pun::PhotonTransformViewRotationModel::InterpolateOptions _get_RotateTowards();
      // Set static field: static public Photon.Pun.PhotonTransformViewRotationModel/InterpolateOptions RotateTowards
      static void _set_RotateTowards(::Photon::Pun::PhotonTransformViewRotationModel::InterpolateOptions value);
      // static field const value: static public Photon.Pun.PhotonTransformViewRotationModel/InterpolateOptions Lerp
      static constexpr const int Lerp = 2;
      // Get static field: static public Photon.Pun.PhotonTransformViewRotationModel/InterpolateOptions Lerp
      static ::Photon::Pun::PhotonTransformViewRotationModel::InterpolateOptions _get_Lerp();
      // Set static field: static public Photon.Pun.PhotonTransformViewRotationModel/InterpolateOptions Lerp
      static void _set_Lerp(::Photon::Pun::PhotonTransformViewRotationModel::InterpolateOptions value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // Photon.Pun.PhotonTransformViewRotationModel/InterpolateOptions
    #pragma pack(pop)
    static check_size<sizeof(PhotonTransformViewRotationModel::InterpolateOptions), 0 + sizeof(int)> __Photon_Pun_PhotonTransformViewRotationModel_InterpolateOptionsSizeCheck;
    static_assert(sizeof(PhotonTransformViewRotationModel::InterpolateOptions) == 0x4);
    public:
    // public System.Boolean SynchronizeEnabled
    // Size: 0x1
    // Offset: 0x10
    bool SynchronizeEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: SynchronizeEnabled and: InterpolateOption
    char __padding0[0x3] = {};
    // public Photon.Pun.PhotonTransformViewRotationModel/InterpolateOptions InterpolateOption
    // Size: 0x4
    // Offset: 0x14
    ::Photon::Pun::PhotonTransformViewRotationModel::InterpolateOptions InterpolateOption;
    // Field size check
    static_assert(sizeof(::Photon::Pun::PhotonTransformViewRotationModel::InterpolateOptions) == 0x4);
    // public System.Single InterpolateRotateTowardsSpeed
    // Size: 0x4
    // Offset: 0x18
    float InterpolateRotateTowardsSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single InterpolateLerpSpeed
    // Size: 0x4
    // Offset: 0x1C
    float InterpolateLerpSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.Boolean SynchronizeEnabled
    [[deprecated("Use field access instead!")]] bool& dyn_SynchronizeEnabled();
    // Get instance field reference: public Photon.Pun.PhotonTransformViewRotationModel/InterpolateOptions InterpolateOption
    [[deprecated("Use field access instead!")]] ::Photon::Pun::PhotonTransformViewRotationModel::InterpolateOptions& dyn_InterpolateOption();
    // Get instance field reference: public System.Single InterpolateRotateTowardsSpeed
    [[deprecated("Use field access instead!")]] float& dyn_InterpolateRotateTowardsSpeed();
    // Get instance field reference: public System.Single InterpolateLerpSpeed
    [[deprecated("Use field access instead!")]] float& dyn_InterpolateLerpSpeed();
    // public System.Void .ctor()
    // Offset: 0x4A5E4E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PhotonTransformViewRotationModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Pun::PhotonTransformViewRotationModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PhotonTransformViewRotationModel*, creationType>()));
    }
  }; // Photon.Pun.PhotonTransformViewRotationModel
  #pragma pack(pop)
  static check_size<sizeof(PhotonTransformViewRotationModel), 28 + sizeof(float)> __Photon_Pun_PhotonTransformViewRotationModelSizeCheck;
  static_assert(sizeof(PhotonTransformViewRotationModel) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::PhotonTransformViewRotationModel::InterpolateOptions, "Photon.Pun", "PhotonTransformViewRotationModel/InterpolateOptions");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Pun::PhotonTransformViewRotationModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
