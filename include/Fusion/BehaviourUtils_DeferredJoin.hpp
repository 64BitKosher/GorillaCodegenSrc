// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.BehaviourUtils
#include "Fusion/BehaviourUtils.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerable
  class IEnumerable;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::BehaviourUtils::DeferredJoin, "Fusion", "BehaviourUtils/DeferredJoin");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Fusion.BehaviourUtils/DeferredJoin
  // [TokenAttribute] Offset: FFFFFFFF
  struct BehaviourUtils::DeferredJoin/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Collections.IEnumerable _enumerable
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::IEnumerable* enumerable;
    // Field size check
    static_assert(sizeof(::System::Collections::IEnumerable*) == 0x8);
    public:
    // Creating value type constructor for type: DeferredJoin
    constexpr DeferredJoin(::System::Collections::IEnumerable* enumerable_ = {}) noexcept : enumerable{enumerable_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::System::Collections::IEnumerable*
    constexpr operator ::System::Collections::IEnumerable*() const noexcept {
      return enumerable;
    }
    // Get instance field reference: public System.Collections.IEnumerable _enumerable
    [[deprecated("Use field access instead!")]] ::System::Collections::IEnumerable*& dyn__enumerable();
    // public override System.String ToString()
    // Offset: 0x2B46470
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // Fusion.BehaviourUtils/DeferredJoin
  #pragma pack(pop)
  static check_size<sizeof(BehaviourUtils::DeferredJoin), 0 + sizeof(::System::Collections::IEnumerable*)> __Fusion_BehaviourUtils_DeferredJoinSizeCheck;
  static_assert(sizeof(BehaviourUtils::DeferredJoin) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::BehaviourUtils::DeferredJoin::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Fusion::BehaviourUtils::DeferredJoin::*)()>(&Fusion::BehaviourUtils::DeferredJoin::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::BehaviourUtils::DeferredJoin), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
