// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Voice.IDataReader`1
#include "Photon/Voice/IDataReader_1.hpp"
// Including type: Photon.Voice.IAudioDesc
#include "Photon/Voice/IAudioDesc.hpp"
// Completed includes
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // Forward declaring type: IAudioReader`1<T>
  template<typename T>
  class IAudioReader_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Photon::Voice::IAudioReader_1, "Photon.Voice", "IAudioReader`1");
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // WARNING Size may be invalid!
  // Autogenerated type: Photon.Voice.IAudioReader`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class IAudioReader_1/*, public ::Photon::Voice::IDataReader_1<T>, public ::Photon::Voice::IAudioDesc*/ {
    public:
    // Creating interface conversion operator: operator ::Photon::Voice::IDataReader_1<T>
    operator ::Photon::Voice::IDataReader_1<T>() noexcept {
      return *reinterpret_cast<::Photon::Voice::IDataReader_1<T>*>(this);
    }
    // Creating interface conversion operator: operator ::Photon::Voice::IAudioDesc
    operator ::Photon::Voice::IAudioDesc() noexcept {
      return *reinterpret_cast<::Photon::Voice::IAudioDesc*>(this);
    }
  }; // Photon.Voice.IAudioReader`1
  // Could not write size check! Type: Photon.Voice.IAudioReader`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
