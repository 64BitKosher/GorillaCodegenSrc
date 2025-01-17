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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: Meta::WitAi
namespace Meta::WitAi {
  // Forward declaring type: MatchIntent
  class MatchIntent;
}
// Completed forward declares
// Type namespace: Meta.WitAi
namespace Meta::WitAi {
  // Forward declaring type: RegisteredMatchIntent
  class RegisteredMatchIntent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::RegisteredMatchIntent);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::RegisteredMatchIntent*, "Meta.WitAi", "RegisteredMatchIntent");
// Type namespace: Meta.WitAi
namespace Meta::WitAi {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.RegisteredMatchIntent
  // [TokenAttribute] Offset: FFFFFFFF
  class RegisteredMatchIntent : public ::Il2CppObject {
    public:
    public:
    // public System.Type type
    // Size: 0x8
    // Offset: 0x10
    ::System::Type* type;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // public System.Reflection.MethodInfo method
    // Size: 0x8
    // Offset: 0x18
    ::System::Reflection::MethodInfo* method;
    // Field size check
    static_assert(sizeof(::System::Reflection::MethodInfo*) == 0x8);
    // public Meta.WitAi.MatchIntent matchIntent
    // Size: 0x8
    // Offset: 0x20
    ::Meta::WitAi::MatchIntent* matchIntent;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::MatchIntent*) == 0x8);
    public:
    // Get instance field reference: public System.Type type
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_type();
    // Get instance field reference: public System.Reflection.MethodInfo method
    [[deprecated("Use field access instead!")]] ::System::Reflection::MethodInfo*& dyn_method();
    // Get instance field reference: public Meta.WitAi.MatchIntent matchIntent
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::MatchIntent*& dyn_matchIntent();
    // public System.Void .ctor()
    // Offset: 0x44258DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegisteredMatchIntent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::RegisteredMatchIntent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegisteredMatchIntent*, creationType>()));
    }
  }; // Meta.WitAi.RegisteredMatchIntent
  #pragma pack(pop)
  static check_size<sizeof(RegisteredMatchIntent), 32 + sizeof(::Meta::WitAi::MatchIntent*)> __Meta_WitAi_RegisteredMatchIntentSizeCheck;
  static_assert(sizeof(RegisteredMatchIntent) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::RegisteredMatchIntent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
