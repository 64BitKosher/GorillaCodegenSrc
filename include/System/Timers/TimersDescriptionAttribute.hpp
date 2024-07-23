// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.DescriptionAttribute
#include "System/ComponentModel/DescriptionAttribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Timers
namespace System::Timers {
  // Forward declaring type: TimersDescriptionAttribute
  class TimersDescriptionAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Timers::TimersDescriptionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Timers::TimersDescriptionAttribute*, "System.Timers", "TimersDescriptionAttribute");
// Type namespace: System.Timers
namespace System::Timers {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: System.Timers.TimersDescriptionAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  class TimersDescriptionAttribute : public ::System::ComponentModel::DescriptionAttribute {
    public:
    public:
    // private System.Boolean replaced
    // Size: 0x1
    // Offset: 0x18
    bool replaced;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept = delete;
    // Get instance field reference: private System.Boolean replaced
    [[deprecated("Use field access instead!")]] bool& dyn_replaced();
    // public System.Void .ctor(System.String description)
    // Offset: 0x4F68878
    // Implemented from: System.ComponentModel.DescriptionAttribute
    // Base method: System.Void DescriptionAttribute::.ctor(System.String description)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimersDescriptionAttribute* New_ctor(::StringW description) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Timers::TimersDescriptionAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimersDescriptionAttribute*, creationType>(description)));
    }
    // public override System.String get_Description()
    // Offset: 0x4F688E0
    // Implemented from: System.ComponentModel.DescriptionAttribute
    // Base method: System.String DescriptionAttribute::get_Description()
    ::StringW get_Description();
  }; // System.Timers.TimersDescriptionAttribute
  #pragma pack(pop)
  static check_size<sizeof(TimersDescriptionAttribute), 24 + sizeof(bool)> __System_Timers_TimersDescriptionAttributeSizeCheck;
  static_assert(sizeof(TimersDescriptionAttribute) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Timers::TimersDescriptionAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Timers::TimersDescriptionAttribute::get_Description
// Il2CppName: get_Description
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Timers::TimersDescriptionAttribute::*)()>(&System::Timers::TimersDescriptionAttribute::get_Description)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Timers::TimersDescriptionAttribute*), "get_Description", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
