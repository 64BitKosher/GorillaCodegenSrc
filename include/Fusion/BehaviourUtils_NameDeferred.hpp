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
// Forward declaring namespace: Fusion
namespace Fusion {
  // Forward declaring type: Behaviour
  class Behaviour;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::BehaviourUtils::NameDeferred, "Fusion", "BehaviourUtils/NameDeferred");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Fusion.BehaviourUtils/NameDeferred
  // [TokenAttribute] Offset: FFFFFFFF
  struct BehaviourUtils::NameDeferred/*, public ::System::ValueType*/ {
    public:
    public:
    // private Fusion.Behaviour _behaviour
    // Size: 0x8
    // Offset: 0x0
    ::Fusion::Behaviour* behaviour;
    // Field size check
    static_assert(sizeof(::Fusion::Behaviour*) == 0x8);
    public:
    // Creating value type constructor for type: NameDeferred
    constexpr NameDeferred(::Fusion::Behaviour* behaviour_ = {}) noexcept : behaviour{behaviour_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::Fusion::Behaviour*
    constexpr operator ::Fusion::Behaviour*() const noexcept {
      return behaviour;
    }
    // Get instance field reference: private Fusion.Behaviour _behaviour
    [[deprecated("Use field access instead!")]] ::Fusion::Behaviour*& dyn__behaviour();
    // public System.Void .ctor(Fusion.Behaviour behaviour)
    // Offset: 0x2B464FC
    // ABORTED: conflicts with another method.  NameDeferred(::Fusion::Behaviour* behaviour);
    // static public Fusion.BehaviourUtils/NameDeferred op_Explicit(Fusion.Behaviour behaviour)
    // Offset: 0x2B46504
    // ABORTED: conflicts with another method.  explicit NameDeferred(::Fusion::Behaviour* behaviour);
    // public override System.String ToString()
    // Offset: 0x2B4653C
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // Fusion.BehaviourUtils/NameDeferred
  #pragma pack(pop)
  static check_size<sizeof(BehaviourUtils::NameDeferred), 0 + sizeof(::Fusion::Behaviour*)> __Fusion_BehaviourUtils_NameDeferredSizeCheck;
  static_assert(sizeof(BehaviourUtils::NameDeferred) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::BehaviourUtils::NameDeferred::NameDeferred
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::BehaviourUtils::NameDeferred::NameDeferred
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Fusion::BehaviourUtils::NameDeferred::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Fusion::BehaviourUtils::NameDeferred::*)()>(&Fusion::BehaviourUtils::NameDeferred::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::BehaviourUtils::NameDeferred), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
