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
// Type namespace: GorillaTag
namespace GorillaTag {
  // Forward declaring type: GTTime
  class GTTime;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaTag::GTTime);
DEFINE_IL2CPP_ARG_TYPE(::GorillaTag::GTTime*, "GorillaTag", "GTTime");
// Type namespace: GorillaTag
namespace GorillaTag {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: GorillaTag.GTTime
  // [TokenAttribute] Offset: FFFFFFFF
  class GTTime : public ::Il2CppObject {
    public:
    // Get static field: static private System.Boolean <usingServerTime>k__BackingField
    static bool _get_$usingServerTime$k__BackingField();
    // Set static field: static private System.Boolean <usingServerTime>k__BackingField
    static void _set_$usingServerTime$k__BackingField(bool value);
    // static public System.Boolean get_usingServerTime()
    // Offset: 0x2878E88
    static bool get_usingServerTime();
    // static private System.Void set_usingServerTime(System.Boolean value)
    // Offset: 0x2878ED0
    static void set_usingServerTime(bool value);
    // static private System.Int64 GetServerStartupTimeAsMilliseconds()
    // Offset: 0x2878F20
    static int64_t GetServerStartupTimeAsMilliseconds();
    // static private System.Int64 GetDeviceStartupTimeAsMilliseconds()
    // Offset: 0x2878F78
    static int64_t GetDeviceStartupTimeAsMilliseconds();
    // static public System.Int64 GetStartupTimeAsMilliseconds()
    // Offset: 0x287906C
    static int64_t GetStartupTimeAsMilliseconds();
    // static public System.Int64 TimeAsMilliseconds()
    // Offset: 0x28791AC
    static int64_t TimeAsMilliseconds();
    // static public System.Double TimeAsDouble()
    // Offset: 0x28791F4
    static double TimeAsDouble();
    // public System.Void .ctor()
    // Offset: 0x2879228
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GTTime* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaTag::GTTime::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GTTime*, creationType>()));
    }
  }; // GorillaTag.GTTime
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaTag::GTTime::get_usingServerTime
// Il2CppName: get_usingServerTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&GorillaTag::GTTime::get_usingServerTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::GTTime*), "get_usingServerTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTag::GTTime::set_usingServerTime
// Il2CppName: set_usingServerTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&GorillaTag::GTTime::set_usingServerTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::GTTime*), "set_usingServerTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GorillaTag::GTTime::GetServerStartupTimeAsMilliseconds
// Il2CppName: GetServerStartupTimeAsMilliseconds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)()>(&GorillaTag::GTTime::GetServerStartupTimeAsMilliseconds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::GTTime*), "GetServerStartupTimeAsMilliseconds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTag::GTTime::GetDeviceStartupTimeAsMilliseconds
// Il2CppName: GetDeviceStartupTimeAsMilliseconds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)()>(&GorillaTag::GTTime::GetDeviceStartupTimeAsMilliseconds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::GTTime*), "GetDeviceStartupTimeAsMilliseconds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTag::GTTime::GetStartupTimeAsMilliseconds
// Il2CppName: GetStartupTimeAsMilliseconds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)()>(&GorillaTag::GTTime::GetStartupTimeAsMilliseconds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::GTTime*), "GetStartupTimeAsMilliseconds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTag::GTTime::TimeAsMilliseconds
// Il2CppName: TimeAsMilliseconds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)()>(&GorillaTag::GTTime::TimeAsMilliseconds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::GTTime*), "TimeAsMilliseconds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTag::GTTime::TimeAsDouble
// Il2CppName: TimeAsDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)()>(&GorillaTag::GTTime::TimeAsDouble)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::GTTime*), "TimeAsDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTag::GTTime::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
