// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Pun.PhotonAnimatorView
#include "Photon/Pun/PhotonAnimatorView.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Pun::PhotonAnimatorView::$$c__DisplayClass24_0);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::PhotonAnimatorView::$$c__DisplayClass24_0*, "Photon.Pun", "PhotonAnimatorView/<>c__DisplayClass24_0");
// Type namespace: Photon.Pun
namespace Photon::Pun {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Pun.PhotonAnimatorView/<>c__DisplayClass24_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class PhotonAnimatorView::$$c__DisplayClass24_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 layerIndex
    // Size: 0x4
    // Offset: 0x10
    int layerIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return layerIndex;
    }
    // Get instance field reference: public System.Int32 layerIndex
    [[deprecated("Use field access instead!")]] int& dyn_layerIndex();
    // public System.Void .ctor()
    // Offset: 0x4A5A384
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PhotonAnimatorView::$$c__DisplayClass24_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Pun::PhotonAnimatorView::$$c__DisplayClass24_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PhotonAnimatorView::$$c__DisplayClass24_0*, creationType>()));
    }
    // System.Boolean <SetLayerSynchronized>b__0(Photon.Pun.PhotonAnimatorView/SynchronizedLayer item)
    // Offset: 0x4A5B344
    bool $SetLayerSynchronized$b__0(::Photon::Pun::PhotonAnimatorView::SynchronizedLayer* item);
  }; // Photon.Pun.PhotonAnimatorView/<>c__DisplayClass24_0
  #pragma pack(pop)
  static check_size<sizeof(PhotonAnimatorView::$$c__DisplayClass24_0), 16 + sizeof(int)> __Photon_Pun_PhotonAnimatorView_$$c__DisplayClass24_0SizeCheck;
  static_assert(sizeof(PhotonAnimatorView::$$c__DisplayClass24_0) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Pun::PhotonAnimatorView::$$c__DisplayClass24_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Photon::Pun::PhotonAnimatorView::$$c__DisplayClass24_0::$SetLayerSynchronized$b__0
// Il2CppName: <SetLayerSynchronized>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Pun::PhotonAnimatorView::$$c__DisplayClass24_0::*)(::Photon::Pun::PhotonAnimatorView::SynchronizedLayer*)>(&Photon::Pun::PhotonAnimatorView::$$c__DisplayClass24_0::$SetLayerSynchronized$b__0)> {
  static const MethodInfo* get() {
    static auto* item = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonAnimatorView/SynchronizedLayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonAnimatorView::$$c__DisplayClass24_0*), "<SetLayerSynchronized>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
