// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: Meta.WitAi.Events
namespace Meta::WitAi::Events {
  // Forward declaring type: IWitByteDataReadyHandler
  class IWitByteDataReadyHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::Events::IWitByteDataReadyHandler);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::Events::IWitByteDataReadyHandler*, "Meta.WitAi.Events", "IWitByteDataReadyHandler");
// Type namespace: Meta.WitAi.Events
namespace Meta::WitAi::Events {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.Events.IWitByteDataReadyHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class IWitByteDataReadyHandler {
    public:
    // public System.Void OnWitDataReady(System.Byte[] data, System.Int32 offset, System.Int32 length)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnWitDataReady(::ArrayW<uint8_t> data, int offset, int length);
  }; // Meta.WitAi.Events.IWitByteDataReadyHandler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::Events::IWitByteDataReadyHandler::OnWitDataReady
// Il2CppName: OnWitDataReady
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Events::IWitByteDataReadyHandler::*)(::ArrayW<uint8_t>, int, int)>(&Meta::WitAi::Events::IWitByteDataReadyHandler::OnWitDataReady)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Events::IWitByteDataReadyHandler*), "OnWitDataReady", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, offset, length});
  }
};
