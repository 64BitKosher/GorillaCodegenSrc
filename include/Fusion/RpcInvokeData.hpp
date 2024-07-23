// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion
namespace Fusion {
  // Forward declaring type: RpcInvokeDelegate
  class RpcInvokeDelegate;
}
// Completed forward declares
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: RpcInvokeData
  struct RpcInvokeData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::RpcInvokeData, "Fusion", "RpcInvokeData");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Fusion.RpcInvokeData
  // [TokenAttribute] Offset: FFFFFFFF
  struct RpcInvokeData/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int32 Key
    // Size: 0x4
    // Offset: 0x0
    int Key;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 Sources
    // Size: 0x4
    // Offset: 0x4
    int Sources;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 Targets
    // Size: 0x4
    // Offset: 0x8
    int Targets;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: Targets and: Delegate
    char __padding2[0x4] = {};
    // public Fusion.RpcInvokeDelegate Delegate
    // Size: 0x8
    // Offset: 0x10
    ::Fusion::RpcInvokeDelegate* Delegate;
    // Field size check
    static_assert(sizeof(::Fusion::RpcInvokeDelegate*) == 0x8);
    public:
    // Creating value type constructor for type: RpcInvokeData
    constexpr RpcInvokeData(int Key_ = {}, int Sources_ = {}, int Targets_ = {}, ::Fusion::RpcInvokeDelegate* Delegate_ = {}) noexcept : Key{Key_}, Sources{Sources_}, Targets{Targets_}, Delegate{Delegate_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 Key
    [[deprecated("Use field access instead!")]] int& dyn_Key();
    // Get instance field reference: public System.Int32 Sources
    [[deprecated("Use field access instead!")]] int& dyn_Sources();
    // Get instance field reference: public System.Int32 Targets
    [[deprecated("Use field access instead!")]] int& dyn_Targets();
    // Get instance field reference: public Fusion.RpcInvokeDelegate Delegate
    [[deprecated("Use field access instead!")]] ::Fusion::RpcInvokeDelegate*& dyn_Delegate();
    // public override System.String ToString()
    // Offset: 0x2B50DAC
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // Fusion.RpcInvokeData
  #pragma pack(pop)
  static check_size<sizeof(RpcInvokeData), 16 + sizeof(::Fusion::RpcInvokeDelegate*)> __Fusion_RpcInvokeDataSizeCheck;
  static_assert(sizeof(RpcInvokeData) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::RpcInvokeData::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Fusion::RpcInvokeData::*)()>(&Fusion::RpcInvokeData::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::RpcInvokeData), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
