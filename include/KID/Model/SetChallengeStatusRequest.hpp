// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: KID::Model
namespace KID::Model {
  // Skipping declaration: StatusEnum because it is already included!
}
// Completed forward declares
// Type namespace: KID.Model
namespace KID::Model {
  // Forward declaring type: SetChallengeStatusRequest
  class SetChallengeStatusRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::KID::Model::SetChallengeStatusRequest);
DEFINE_IL2CPP_ARG_TYPE(::KID::Model::SetChallengeStatusRequest*, "KID.Model", "SetChallengeStatusRequest");
// Type namespace: KID.Model
namespace KID::Model {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: KID.Model.SetChallengeStatusRequest
  // [TokenAttribute] Offset: FFFFFFFF
  // [DataContractAttribute] Offset: FFFFFFFF
  class SetChallengeStatusRequest : public ::Il2CppObject {
    public:
    // Nested type: ::KID::Model::SetChallengeStatusRequest::StatusEnum
    struct StatusEnum;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: KID.Model.SetChallengeStatusRequest/StatusEnum
    // [TokenAttribute] Offset: FFFFFFFF
    // [JsonConverterAttribute] Offset: FFFFFFFF
    struct StatusEnum/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: StatusEnum
      constexpr StatusEnum(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public KID.Model.SetChallengeStatusRequest/StatusEnum PASS
      static constexpr const int PASS = 1;
      // Get static field: static public KID.Model.SetChallengeStatusRequest/StatusEnum PASS
      static ::KID::Model::SetChallengeStatusRequest::StatusEnum _get_PASS();
      // Set static field: static public KID.Model.SetChallengeStatusRequest/StatusEnum PASS
      static void _set_PASS(::KID::Model::SetChallengeStatusRequest::StatusEnum value);
      // static field const value: static public KID.Model.SetChallengeStatusRequest/StatusEnum FAIL
      static constexpr const int FAIL = 2;
      // Get static field: static public KID.Model.SetChallengeStatusRequest/StatusEnum FAIL
      static ::KID::Model::SetChallengeStatusRequest::StatusEnum _get_FAIL();
      // Set static field: static public KID.Model.SetChallengeStatusRequest/StatusEnum FAIL
      static void _set_FAIL(::KID::Model::SetChallengeStatusRequest::StatusEnum value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // KID.Model.SetChallengeStatusRequest/StatusEnum
    #pragma pack(pop)
    static check_size<sizeof(SetChallengeStatusRequest::StatusEnum), 0 + sizeof(int)> __KID_Model_SetChallengeStatusRequest_StatusEnumSizeCheck;
    static_assert(sizeof(SetChallengeStatusRequest::StatusEnum) == 0x4);
    public:
    // private KID.Model.SetChallengeStatusRequest/StatusEnum <Status>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    ::KID::Model::SetChallengeStatusRequest::StatusEnum Status;
    // Field size check
    static_assert(sizeof(::KID::Model::SetChallengeStatusRequest::StatusEnum) == 0x4);
    // private System.Guid <ChallengeId>k__BackingField
    // Size: 0x10
    // Offset: 0x14
    ::System::Guid ChallengeId;
    // Field size check
    static_assert(sizeof(::System::Guid) == 0x10);
    // private System.Int32 <Age>k__BackingField
    // Size: 0x4
    // Offset: 0x24
    int Age;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.String <Jurisdiction>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::StringW Jurisdiction;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private KID.Model.SetChallengeStatusRequest/StatusEnum <Status>k__BackingField
    [[deprecated("Use field access instead!")]] ::KID::Model::SetChallengeStatusRequest::StatusEnum& dyn_$Status$k__BackingField();
    // Get instance field reference: private System.Guid <ChallengeId>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Guid& dyn_$ChallengeId$k__BackingField();
    // Get instance field reference: private System.Int32 <Age>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$Age$k__BackingField();
    // Get instance field reference: private System.String <Jurisdiction>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Jurisdiction$k__BackingField();
    // public KID.Model.SetChallengeStatusRequest/StatusEnum get_Status()
    // Offset: 0x438164C
    ::KID::Model::SetChallengeStatusRequest::StatusEnum get_Status();
    // public System.Void set_Status(KID.Model.SetChallengeStatusRequest/StatusEnum value)
    // Offset: 0x4381654
    void set_Status(::KID::Model::SetChallengeStatusRequest::StatusEnum value);
    // protected System.Void .ctor()
    // Offset: 0x438165C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SetChallengeStatusRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::KID::Model::SetChallengeStatusRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SetChallengeStatusRequest*, creationType>()));
    }
    // public System.Void .ctor(System.Guid challengeId, KID.Model.SetChallengeStatusRequest/StatusEnum status, System.Int32 age, System.String jurisdiction)
    // Offset: 0x4381664
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SetChallengeStatusRequest* New_ctor(::System::Guid challengeId, ::KID::Model::SetChallengeStatusRequest::StatusEnum status, int age, ::StringW jurisdiction) {
      static auto ___internal__logger = ::Logger::get().WithContext("::KID::Model::SetChallengeStatusRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SetChallengeStatusRequest*, creationType>(challengeId, status, age, jurisdiction)));
    }
    // public System.Guid get_ChallengeId()
    // Offset: 0x4381710
    ::System::Guid get_ChallengeId();
    // public System.Void set_ChallengeId(System.Guid value)
    // Offset: 0x4381720
    void set_ChallengeId(::System::Guid value);
    // public System.Int32 get_Age()
    // Offset: 0x438172C
    int get_Age();
    // public System.Void set_Age(System.Int32 value)
    // Offset: 0x4381734
    void set_Age(int value);
    // public System.String get_Jurisdiction()
    // Offset: 0x438173C
    ::StringW get_Jurisdiction();
    // public System.Void set_Jurisdiction(System.String value)
    // Offset: 0x4381744
    void set_Jurisdiction(::StringW value);
    // public System.String ToJson()
    // Offset: 0x4381998
    ::StringW ToJson();
    // public override System.String ToString()
    // Offset: 0x438174C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // KID.Model.SetChallengeStatusRequest
  #pragma pack(pop)
  static check_size<sizeof(SetChallengeStatusRequest), 40 + sizeof(::StringW)> __KID_Model_SetChallengeStatusRequestSizeCheck;
  static_assert(sizeof(SetChallengeStatusRequest) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::KID::Model::SetChallengeStatusRequest::StatusEnum, "KID.Model", "SetChallengeStatusRequest/StatusEnum");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: KID::Model::SetChallengeStatusRequest::get_Status
// Il2CppName: get_Status
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::KID::Model::SetChallengeStatusRequest::StatusEnum (KID::Model::SetChallengeStatusRequest::*)()>(&KID::Model::SetChallengeStatusRequest::get_Status)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Model::SetChallengeStatusRequest*), "get_Status", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Model::SetChallengeStatusRequest::set_Status
// Il2CppName: set_Status
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (KID::Model::SetChallengeStatusRequest::*)(::KID::Model::SetChallengeStatusRequest::StatusEnum)>(&KID::Model::SetChallengeStatusRequest::set_Status)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("KID.Model", "SetChallengeStatusRequest/StatusEnum")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Model::SetChallengeStatusRequest*), "set_Status", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: KID::Model::SetChallengeStatusRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: KID::Model::SetChallengeStatusRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: KID::Model::SetChallengeStatusRequest::get_ChallengeId
// Il2CppName: get_ChallengeId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (KID::Model::SetChallengeStatusRequest::*)()>(&KID::Model::SetChallengeStatusRequest::get_ChallengeId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Model::SetChallengeStatusRequest*), "get_ChallengeId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Model::SetChallengeStatusRequest::set_ChallengeId
// Il2CppName: set_ChallengeId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (KID::Model::SetChallengeStatusRequest::*)(::System::Guid)>(&KID::Model::SetChallengeStatusRequest::set_ChallengeId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Guid")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Model::SetChallengeStatusRequest*), "set_ChallengeId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: KID::Model::SetChallengeStatusRequest::get_Age
// Il2CppName: get_Age
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (KID::Model::SetChallengeStatusRequest::*)()>(&KID::Model::SetChallengeStatusRequest::get_Age)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Model::SetChallengeStatusRequest*), "get_Age", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Model::SetChallengeStatusRequest::set_Age
// Il2CppName: set_Age
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (KID::Model::SetChallengeStatusRequest::*)(int)>(&KID::Model::SetChallengeStatusRequest::set_Age)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Model::SetChallengeStatusRequest*), "set_Age", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: KID::Model::SetChallengeStatusRequest::get_Jurisdiction
// Il2CppName: get_Jurisdiction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (KID::Model::SetChallengeStatusRequest::*)()>(&KID::Model::SetChallengeStatusRequest::get_Jurisdiction)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Model::SetChallengeStatusRequest*), "get_Jurisdiction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Model::SetChallengeStatusRequest::set_Jurisdiction
// Il2CppName: set_Jurisdiction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (KID::Model::SetChallengeStatusRequest::*)(::StringW)>(&KID::Model::SetChallengeStatusRequest::set_Jurisdiction)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Model::SetChallengeStatusRequest*), "set_Jurisdiction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: KID::Model::SetChallengeStatusRequest::ToJson
// Il2CppName: ToJson
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (KID::Model::SetChallengeStatusRequest::*)()>(&KID::Model::SetChallengeStatusRequest::ToJson)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Model::SetChallengeStatusRequest*), "ToJson", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: KID::Model::SetChallengeStatusRequest::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (KID::Model::SetChallengeStatusRequest::*)()>(&KID::Model::SetChallengeStatusRequest::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Model::SetChallengeStatusRequest*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
