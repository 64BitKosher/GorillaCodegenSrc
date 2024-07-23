// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Photon::Voice
namespace Photon::Voice {
}
// Completed forward declares
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // Forward declaring type: RawCodec
  class RawCodec;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Voice::RawCodec);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Voice::RawCodec*, "Photon.Voice", "RawCodec");
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Voice.RawCodec
  // [TokenAttribute] Offset: FFFFFFFF
  class RawCodec : public ::Il2CppObject {
    public:
    // Nested type: ::Photon::Voice::RawCodec::Encoder_1<T>
    template<typename T>
    class Encoder_1;
    // Nested type: ::Photon::Voice::RawCodec::Decoder_1<T>
    template<typename T>
    class Decoder_1;
    // Nested type: ::Photon::Voice::RawCodec::ShortToFloat
    class ShortToFloat;
    // public System.Void .ctor()
    // Offset: 0x4A64980
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RawCodec* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::RawCodec::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RawCodec*, creationType>()));
    }
  }; // Photon.Voice.RawCodec
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Voice::RawCodec::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
