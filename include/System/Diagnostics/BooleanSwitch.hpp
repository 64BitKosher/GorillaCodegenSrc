// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Diagnostics.Switch
#include "System/Diagnostics/Switch.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: BooleanSwitch
  class BooleanSwitch;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Diagnostics::BooleanSwitch);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::BooleanSwitch*, "System.Diagnostics", "BooleanSwitch");
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.BooleanSwitch
  // [TokenAttribute] Offset: FFFFFFFF
  // [SwitchLevelAttribute] Offset: FFFFFFFF
  class BooleanSwitch : public ::System::Diagnostics::Switch {
    public:
    // public System.Void .ctor(System.String displayName, System.String description)
    // Offset: 0x4F8599C
    // Implemented from: System.Diagnostics.Switch
    // Base method: System.Void Switch::.ctor(System.String displayName, System.String description)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BooleanSwitch* New_ctor(::StringW displayName, ::StringW description) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::BooleanSwitch::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BooleanSwitch*, creationType>(displayName, description)));
    }
  }; // System.Diagnostics.BooleanSwitch
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::BooleanSwitch::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
