// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: BehaviourActionAttribute
  class BehaviourActionAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::BehaviourActionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::BehaviourActionAttribute*, "Fusion", "BehaviourActionAttribute");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.BehaviourActionAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  class BehaviourActionAttribute : public ::System::Attribute {
    public:
    // Nested type: ::Fusion::BehaviourActionAttribute::ActionFlags
    struct ActionFlags;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: Fusion.BehaviourActionAttribute/ActionFlags
    // [TokenAttribute] Offset: FFFFFFFF
    // [FlagsAttribute] Offset: FFFFFFFF
    struct ActionFlags/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: ActionFlags
      constexpr ActionFlags(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Fusion.BehaviourActionAttribute/ActionFlags ShowAtRuntime
      static constexpr const int ShowAtRuntime = 1;
      // Get static field: static public Fusion.BehaviourActionAttribute/ActionFlags ShowAtRuntime
      static ::Fusion::BehaviourActionAttribute::ActionFlags _get_ShowAtRuntime();
      // Set static field: static public Fusion.BehaviourActionAttribute/ActionFlags ShowAtRuntime
      static void _set_ShowAtRuntime(::Fusion::BehaviourActionAttribute::ActionFlags value);
      // static field const value: static public Fusion.BehaviourActionAttribute/ActionFlags ShowAtNotRuntime
      static constexpr const int ShowAtNotRuntime = 2;
      // Get static field: static public Fusion.BehaviourActionAttribute/ActionFlags ShowAtNotRuntime
      static ::Fusion::BehaviourActionAttribute::ActionFlags _get_ShowAtNotRuntime();
      // Set static field: static public Fusion.BehaviourActionAttribute/ActionFlags ShowAtNotRuntime
      static void _set_ShowAtNotRuntime(::Fusion::BehaviourActionAttribute::ActionFlags value);
      // static field const value: static public Fusion.BehaviourActionAttribute/ActionFlags AlwaysShow
      static constexpr const int AlwaysShow = 3;
      // Get static field: static public Fusion.BehaviourActionAttribute/ActionFlags AlwaysShow
      static ::Fusion::BehaviourActionAttribute::ActionFlags _get_AlwaysShow();
      // Set static field: static public Fusion.BehaviourActionAttribute/ActionFlags AlwaysShow
      static void _set_AlwaysShow(::Fusion::BehaviourActionAttribute::ActionFlags value);
      // static field const value: static public Fusion.BehaviourActionAttribute/ActionFlags DirtyAfterButton
      static constexpr const int DirtyAfterButton = 4;
      // Get static field: static public Fusion.BehaviourActionAttribute/ActionFlags DirtyAfterButton
      static ::Fusion::BehaviourActionAttribute::ActionFlags _get_DirtyAfterButton();
      // Set static field: static public Fusion.BehaviourActionAttribute/ActionFlags DirtyAfterButton
      static void _set_DirtyAfterButton(::Fusion::BehaviourActionAttribute::ActionFlags value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // Fusion.BehaviourActionAttribute/ActionFlags
    #pragma pack(pop)
    static check_size<sizeof(BehaviourActionAttribute::ActionFlags), 0 + sizeof(int)> __Fusion_BehaviourActionAttribute_ActionFlagsSizeCheck;
    static_assert(sizeof(BehaviourActionAttribute::ActionFlags) == 0x4);
    public:
    // public Fusion.BehaviourActionAttribute/ActionFlags ConditionFlags
    // Size: 0x4
    // Offset: 0x10
    ::Fusion::BehaviourActionAttribute::ActionFlags ConditionFlags;
    // Field size check
    static_assert(sizeof(::Fusion::BehaviourActionAttribute::ActionFlags) == 0x4);
    // Padding between fields: ConditionFlags and: ExecuteMethod
    char __padding0[0x4] = {};
    // public System.String ExecuteMethod
    // Size: 0x8
    // Offset: 0x18
    ::StringW ExecuteMethod;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String ConditionMember
    // Size: 0x8
    // Offset: 0x20
    ::StringW ConditionMember;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public Fusion.BehaviourActionAttribute/ActionFlags ConditionFlags
    [[deprecated("Use field access instead!")]] ::Fusion::BehaviourActionAttribute::ActionFlags& dyn_ConditionFlags();
    // Get instance field reference: public System.String ExecuteMethod
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ExecuteMethod();
    // Get instance field reference: public System.String ConditionMember
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ConditionMember();
    // protected System.Void .ctor(System.String executeMethod, System.String conditionMember, Fusion.BehaviourActionAttribute/ActionFlags flags)
    // Offset: 0x2AFEAEC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BehaviourActionAttribute* New_ctor(::StringW executeMethod, ::StringW conditionMember, ::Fusion::BehaviourActionAttribute::ActionFlags flags) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::BehaviourActionAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BehaviourActionAttribute*, creationType>(executeMethod, conditionMember, flags)));
    }
    // public System.Void .ctor(System.String conditionMember, Fusion.BehaviourActionAttribute/ActionFlags flags)
    // Offset: 0x2AFEB44
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BehaviourActionAttribute* New_ctor(::StringW conditionMember, ::Fusion::BehaviourActionAttribute::ActionFlags flags) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::BehaviourActionAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BehaviourActionAttribute*, creationType>(conditionMember, flags)));
    }
  }; // Fusion.BehaviourActionAttribute
  #pragma pack(pop)
  static check_size<sizeof(BehaviourActionAttribute), 32 + sizeof(::StringW)> __Fusion_BehaviourActionAttributeSizeCheck;
  static_assert(sizeof(BehaviourActionAttribute) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::BehaviourActionAttribute::ActionFlags, "Fusion", "BehaviourActionAttribute/ActionFlags");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::BehaviourActionAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::BehaviourActionAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!