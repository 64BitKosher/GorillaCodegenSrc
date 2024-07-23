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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: NetworkRpcStaticWeavedInvokerAttribute
  class NetworkRpcStaticWeavedInvokerAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::NetworkRpcStaticWeavedInvokerAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkRpcStaticWeavedInvokerAttribute*, "Fusion", "NetworkRpcStaticWeavedInvokerAttribute");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.NetworkRpcStaticWeavedInvokerAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  class NetworkRpcStaticWeavedInvokerAttribute : public ::System::Attribute {
    public:
    public:
    // private readonly System.String <Key>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW Key;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return Key;
    }
    // Get instance field reference: private readonly System.String <Key>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Key$k__BackingField();
    // public System.String get_Key()
    // Offset: 0x2AFF274
    ::StringW get_Key();
    // public System.Void .ctor(System.String key)
    // Offset: 0x2AFF27C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkRpcStaticWeavedInvokerAttribute* New_ctor(::StringW key) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkRpcStaticWeavedInvokerAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkRpcStaticWeavedInvokerAttribute*, creationType>(key)));
    }
  }; // Fusion.NetworkRpcStaticWeavedInvokerAttribute
  #pragma pack(pop)
  static check_size<sizeof(NetworkRpcStaticWeavedInvokerAttribute), 16 + sizeof(::StringW)> __Fusion_NetworkRpcStaticWeavedInvokerAttributeSizeCheck;
  static_assert(sizeof(NetworkRpcStaticWeavedInvokerAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::NetworkRpcStaticWeavedInvokerAttribute::get_Key
// Il2CppName: get_Key
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Fusion::NetworkRpcStaticWeavedInvokerAttribute::*)()>(&Fusion::NetworkRpcStaticWeavedInvokerAttribute::get_Key)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkRpcStaticWeavedInvokerAttribute*), "get_Key", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkRpcStaticWeavedInvokerAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
