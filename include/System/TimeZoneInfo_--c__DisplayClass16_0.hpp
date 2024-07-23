// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.TimeZoneInfo
#include "System/TimeZoneInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::TimeZoneInfo::$$c__DisplayClass16_0);
DEFINE_IL2CPP_ARG_TYPE(::System::TimeZoneInfo::$$c__DisplayClass16_0*, "System", "TimeZoneInfo/<>c__DisplayClass16_0");
// Type namespace: System
namespace System {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.TimeZoneInfo/<>c__DisplayClass16_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class TimeZoneInfo::$$c__DisplayClass16_0 : public ::Il2CppObject {
    public:
    public:
    // public System.String localtimeFilePath
    // Size: 0x8
    // Offset: 0x10
    ::StringW localtimeFilePath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String posixrulesFilePath
    // Size: 0x8
    // Offset: 0x18
    ::StringW posixrulesFilePath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Byte[] buffer
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<uint8_t> buffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.Byte[] rawData
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint8_t> rawData;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.String id
    // Size: 0x8
    // Offset: 0x30
    ::StringW id;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String timeZoneDirectory
    // Size: 0x8
    // Offset: 0x38
    ::StringW timeZoneDirectory;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.String localtimeFilePath
    [[deprecated("Use field access instead!")]] ::StringW& dyn_localtimeFilePath();
    // Get instance field reference: public System.String posixrulesFilePath
    [[deprecated("Use field access instead!")]] ::StringW& dyn_posixrulesFilePath();
    // Get instance field reference: public System.Byte[] buffer
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_buffer();
    // Get instance field reference: public System.Byte[] rawData
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_rawData();
    // Get instance field reference: public System.String id
    [[deprecated("Use field access instead!")]] ::StringW& dyn_id();
    // Get instance field reference: public System.String timeZoneDirectory
    [[deprecated("Use field access instead!")]] ::StringW& dyn_timeZoneDirectory();
    // System.Boolean <FindTimeZoneId>b__0(System.String filePath)
    // Offset: 0x45B8000
    bool $FindTimeZoneId$b__0(::StringW filePath);
    // public System.Void .ctor()
    // Offset: 0x45ADF70
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimeZoneInfo::$$c__DisplayClass16_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::TimeZoneInfo::$$c__DisplayClass16_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimeZoneInfo::$$c__DisplayClass16_0*, creationType>()));
    }
  }; // System.TimeZoneInfo/<>c__DisplayClass16_0
  #pragma pack(pop)
  static check_size<sizeof(TimeZoneInfo::$$c__DisplayClass16_0), 56 + sizeof(::StringW)> __System_TimeZoneInfo_$$c__DisplayClass16_0SizeCheck;
  static_assert(sizeof(TimeZoneInfo::$$c__DisplayClass16_0) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::TimeZoneInfo::$$c__DisplayClass16_0::$FindTimeZoneId$b__0
// Il2CppName: <FindTimeZoneId>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::TimeZoneInfo::$$c__DisplayClass16_0::*)(::StringW)>(&System::TimeZoneInfo::$$c__DisplayClass16_0::$FindTimeZoneId$b__0)> {
  static const MethodInfo* get() {
    static auto* filePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TimeZoneInfo::$$c__DisplayClass16_0*), "<FindTimeZoneId>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{filePath});
  }
};
// Writing MetadataGetter for method: System::TimeZoneInfo::$$c__DisplayClass16_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
