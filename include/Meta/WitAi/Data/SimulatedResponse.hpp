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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Meta::WitAi::Data
namespace Meta::WitAi::Data {
  // Forward declaring type: SimulatedResponseMessage
  class SimulatedResponseMessage;
}
// Completed forward declares
// Type namespace: Meta.WitAi.Data
namespace Meta::WitAi::Data {
  // Forward declaring type: SimulatedResponse
  class SimulatedResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::Data::SimulatedResponse);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::Data::SimulatedResponse*, "Meta.WitAi.Data", "SimulatedResponse");
// Type namespace: Meta.WitAi.Data
namespace Meta::WitAi::Data {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.Data.SimulatedResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class SimulatedResponse : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 code
    // Size: 0x4
    // Offset: 0x10
    int code;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: code and: messages
    char __padding0[0x4] = {};
    // public System.Collections.Generic.List`1<Meta.WitAi.Data.SimulatedResponseMessage> messages
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::Meta::WitAi::Data::SimulatedResponseMessage*>* messages;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Meta::WitAi::Data::SimulatedResponseMessage*>*) == 0x8);
    // public System.String responseDescription
    // Size: 0x8
    // Offset: 0x20
    ::StringW responseDescription;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.Int32 code
    [[deprecated("Use field access instead!")]] int& dyn_code();
    // Get instance field reference: public System.Collections.Generic.List`1<Meta.WitAi.Data.SimulatedResponseMessage> messages
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Meta::WitAi::Data::SimulatedResponseMessage*>*& dyn_messages();
    // Get instance field reference: public System.String responseDescription
    [[deprecated("Use field access instead!")]] ::StringW& dyn_responseDescription();
    // public System.Void .ctor()
    // Offset: 0x4451284
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SimulatedResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::SimulatedResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SimulatedResponse*, creationType>()));
    }
  }; // Meta.WitAi.Data.SimulatedResponse
  #pragma pack(pop)
  static check_size<sizeof(SimulatedResponse), 32 + sizeof(::StringW)> __Meta_WitAi_Data_SimulatedResponseSizeCheck;
  static_assert(sizeof(SimulatedResponse) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::Data::SimulatedResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
