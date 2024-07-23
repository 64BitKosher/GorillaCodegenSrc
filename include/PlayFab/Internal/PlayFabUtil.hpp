// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: System.Globalization.DateTimeStyles
#include "System/Globalization/DateTimeStyles.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: PlayFab.Internal
namespace PlayFab::Internal {
  // Forward declaring type: PlayFabUtil
  class PlayFabUtil;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::Internal::PlayFabUtil);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::Internal::PlayFabUtil*, "PlayFab.Internal", "PlayFabUtil");
// Type namespace: PlayFab.Internal
namespace PlayFab::Internal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.Internal.PlayFabUtil
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayFabUtil : public ::Il2CppObject {
    public:
    // Get static field: static private System.String _localSettingsFileName
    static ::StringW _get__localSettingsFileName();
    // Set static field: static private System.String _localSettingsFileName
    static void _set__localSettingsFileName(::StringW value);
    // Get static field: static public readonly System.String[] _defaultDateTimeFormats
    static ::ArrayW<::StringW> _get__defaultDateTimeFormats();
    // Set static field: static public readonly System.String[] _defaultDateTimeFormats
    static void _set__defaultDateTimeFormats(::ArrayW<::StringW> value);
    // static field const value: static public System.Int32 DEFAULT_UTC_OUTPUT_INDEX
    static constexpr const int DEFAULT_UTC_OUTPUT_INDEX = 2;
    // Get static field: static public System.Int32 DEFAULT_UTC_OUTPUT_INDEX
    static int _get_DEFAULT_UTC_OUTPUT_INDEX();
    // Set static field: static public System.Int32 DEFAULT_UTC_OUTPUT_INDEX
    static void _set_DEFAULT_UTC_OUTPUT_INDEX(int value);
    // static field const value: static public System.Int32 DEFAULT_LOCAL_OUTPUT_INDEX
    static constexpr const int DEFAULT_LOCAL_OUTPUT_INDEX = 9;
    // Get static field: static public System.Int32 DEFAULT_LOCAL_OUTPUT_INDEX
    static int _get_DEFAULT_LOCAL_OUTPUT_INDEX();
    // Set static field: static public System.Int32 DEFAULT_LOCAL_OUTPUT_INDEX
    static void _set_DEFAULT_LOCAL_OUTPUT_INDEX(int value);
    // Get static field: static public System.Globalization.DateTimeStyles DateTimeStyles
    static ::System::Globalization::DateTimeStyles _get_DateTimeStyles();
    // Set static field: static public System.Globalization.DateTimeStyles DateTimeStyles
    static void _set_DateTimeStyles(::System::Globalization::DateTimeStyles value);
    // Get static field: static private System.Text.StringBuilder _sb
    static ::System::Text::StringBuilder* _get__sb();
    // Set static field: static private System.Text.StringBuilder _sb
    static void _set__sb(::System::Text::StringBuilder* value);
    // static private System.Void .cctor()
    // Offset: 0x4B6D6A8
    static void _cctor();
    // static public System.String get_timeStamp()
    // Offset: 0x4B642F0
    static ::StringW get_timeStamp();
    // static public System.String get_utcTimeStamp()
    // Offset: 0x4B6DA78
    static ::StringW get_utcTimeStamp();
    // static public System.String Format(System.String text, params System.Object[] args)
    // Offset: 0x4B643A4
    static ::StringW Format(::StringW text, ::ArrayW<::Il2CppObject*> args);
    // static public System.String ReadAllFileText(System.String filename)
    // Offset: 0x4B6DB2C
    static ::StringW ReadAllFileText(::StringW filename);
    // static public T TryEnumParse(System.String value, T defaultValue)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static T TryEnumParse(::StringW value, T defaultValue) {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::Internal::PlayFabUtil::TryEnumParse");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("PlayFab.Internal", "PlayFabUtil", "TryEnumParse", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value), ::il2cpp_utils::ExtractType(defaultValue)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, value, defaultValue);
    }
    // static System.String GetLocalSettingsFileProperty(System.String propertyKey)
    // Offset: 0x4B6E048
    static ::StringW GetLocalSettingsFileProperty(::StringW propertyKey);
  }; // PlayFab.Internal.PlayFabUtil
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::Internal::PlayFabUtil::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&PlayFab::Internal::PlayFabUtil::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Internal::PlayFabUtil*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PlayFab::Internal::PlayFabUtil::get_timeStamp
// Il2CppName: get_timeStamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&PlayFab::Internal::PlayFabUtil::get_timeStamp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Internal::PlayFabUtil*), "get_timeStamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PlayFab::Internal::PlayFabUtil::get_utcTimeStamp
// Il2CppName: get_utcTimeStamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&PlayFab::Internal::PlayFabUtil::get_utcTimeStamp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Internal::PlayFabUtil*), "get_utcTimeStamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PlayFab::Internal::PlayFabUtil::Format
// Il2CppName: Format
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::ArrayW<::Il2CppObject*>)>(&PlayFab::Internal::PlayFabUtil::Format)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Internal::PlayFabUtil*), "Format", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, args});
  }
};
// Writing MetadataGetter for method: PlayFab::Internal::PlayFabUtil::ReadAllFileText
// Il2CppName: ReadAllFileText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&PlayFab::Internal::PlayFabUtil::ReadAllFileText)> {
  static const MethodInfo* get() {
    static auto* filename = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Internal::PlayFabUtil*), "ReadAllFileText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{filename});
  }
};
// Writing MetadataGetter for method: PlayFab::Internal::PlayFabUtil::TryEnumParse
// Il2CppName: TryEnumParse
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: PlayFab::Internal::PlayFabUtil::GetLocalSettingsFileProperty
// Il2CppName: GetLocalSettingsFileProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&PlayFab::Internal::PlayFabUtil::GetLocalSettingsFileProperty)> {
  static const MethodInfo* get() {
    static auto* propertyKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Internal::PlayFabUtil*), "GetLocalSettingsFileProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{propertyKey});
  }
};
