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
// Forward declaring namespace: ExitGames::Client::Photon
namespace ExitGames::Client::Photon {
  // Forward declaring type: ParameterDictionary
  class ParameterDictionary;
}
// Completed forward declares
// Type namespace: ExitGames.Client.Photon
namespace ExitGames::Client::Photon {
  // Forward declaring type: OperationResponse
  class OperationResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ExitGames::Client::Photon::OperationResponse);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::OperationResponse*, "ExitGames.Client.Photon", "OperationResponse");
// Type namespace: ExitGames.Client.Photon
namespace ExitGames::Client::Photon {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: ExitGames.Client.Photon.OperationResponse
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: FFFFFFFF
  class OperationResponse : public ::Il2CppObject {
    public:
    public:
    // public System.Byte OperationCode
    // Size: 0x1
    // Offset: 0x10
    uint8_t OperationCode;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Padding between fields: OperationCode and: ReturnCode
    char __padding0[0x1] = {};
    // public System.Int16 ReturnCode
    // Size: 0x2
    // Offset: 0x12
    int16_t ReturnCode;
    // Field size check
    static_assert(sizeof(int16_t) == 0x2);
    // Padding between fields: ReturnCode and: DebugMessage
    char __padding1[0x4] = {};
    // public System.String DebugMessage
    // Size: 0x8
    // Offset: 0x18
    ::StringW DebugMessage;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public ExitGames.Client.Photon.ParameterDictionary Parameters
    // Size: 0x8
    // Offset: 0x20
    ::ExitGames::Client::Photon::ParameterDictionary* Parameters;
    // Field size check
    static_assert(sizeof(::ExitGames::Client::Photon::ParameterDictionary*) == 0x8);
    public:
    // Get instance field reference: public System.Byte OperationCode
    [[deprecated("Use field access instead!")]] uint8_t& dyn_OperationCode();
    // Get instance field reference: public System.Int16 ReturnCode
    [[deprecated("Use field access instead!")]] int16_t& dyn_ReturnCode();
    // Get instance field reference: public System.String DebugMessage
    [[deprecated("Use field access instead!")]] ::StringW& dyn_DebugMessage();
    // Get instance field reference: public ExitGames.Client.Photon.ParameterDictionary Parameters
    [[deprecated("Use field access instead!")]] ::ExitGames::Client::Photon::ParameterDictionary*& dyn_Parameters();
    // public System.Object get_Item(System.Byte parameterCode)
    // Offset: 0x49E183C
    ::Il2CppObject* get_Item(uint8_t parameterCode);
    // public System.Void set_Item(System.Byte parameterCode, System.Object value)
    // Offset: 0x49E1868
    void set_Item(uint8_t parameterCode, ::Il2CppObject* value);
    // public System.String ToStringFull()
    // Offset: 0x49E1940
    ::StringW ToStringFull();
    // public System.Void .ctor()
    // Offset: 0x49E1B48
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OperationResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::OperationResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OperationResponse*, creationType>()));
    }
    // public override System.String ToString()
    // Offset: 0x49E1884
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // ExitGames.Client.Photon.OperationResponse
  #pragma pack(pop)
  static check_size<sizeof(OperationResponse), 32 + sizeof(::ExitGames::Client::Photon::ParameterDictionary*)> __ExitGames_Client_Photon_OperationResponseSizeCheck;
  static_assert(sizeof(OperationResponse) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ExitGames::Client::Photon::OperationResponse::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (ExitGames::Client::Photon::OperationResponse::*)(uint8_t)>(&ExitGames::Client::Photon::OperationResponse::get_Item)> {
  static const MethodInfo* get() {
    static auto* parameterCode = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::OperationResponse*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parameterCode});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::OperationResponse::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::OperationResponse::*)(uint8_t, ::Il2CppObject*)>(&ExitGames::Client::Photon::OperationResponse::set_Item)> {
  static const MethodInfo* get() {
    static auto* parameterCode = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::OperationResponse*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parameterCode, value});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::OperationResponse::ToStringFull
// Il2CppName: ToStringFull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (ExitGames::Client::Photon::OperationResponse::*)()>(&ExitGames::Client::Photon::OperationResponse::ToStringFull)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::OperationResponse*), "ToStringFull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::OperationResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: ExitGames::Client::Photon::OperationResponse::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (ExitGames::Client::Photon::OperationResponse::*)()>(&ExitGames::Client::Photon::OperationResponse::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::OperationResponse*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
