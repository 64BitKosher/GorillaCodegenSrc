// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: ExitGames.Client.Photon
namespace ExitGames::Client::Photon {
  // Forward declaring type: PreserveAttribute
  class PreserveAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ExitGames::Client::Photon::PreserveAttribute);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::PreserveAttribute*, "ExitGames.Client.Photon", "PreserveAttribute");
// Type namespace: ExitGames.Client.Photon
namespace ExitGames::Client::Photon {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ExitGames.Client.Photon.PreserveAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  class PreserveAttribute : public ::System::Attribute {
    public:
    // public System.Void .ctor()
    // Offset: 0x49FEF44
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PreserveAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::PreserveAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PreserveAttribute*, creationType>()));
    }
  }; // ExitGames.Client.Photon.PreserveAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ExitGames::Client::Photon::PreserveAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!