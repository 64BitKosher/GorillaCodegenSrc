// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: CallLimitType`1
#include "GlobalNamespace/CallLimitType_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: CallLimiterWithCooldown
  class CallLimiterWithCooldown;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CooldownType
  class CooldownType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CooldownType);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CooldownType*, "", "CooldownType");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: CooldownType
  // [TokenAttribute] Offset: FFFFFFFF
  class CooldownType : public ::GlobalNamespace::CallLimitType_1<::GlobalNamespace::CallLimiterWithCooldown*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x2765AB4
    // Implemented from: CallLimitType`1
    // Base method: System.Void CallLimitType_1::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CooldownType* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CooldownType::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CooldownType*, creationType>()));
    }
  }; // CooldownType
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CooldownType::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
