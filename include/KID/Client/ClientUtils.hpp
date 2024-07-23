// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: Regex
  class Regex;
}
// Forward declaring namespace: KID::Client
namespace KID::Client {
  // Forward declaring type: Multimap`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Multimap_2;
  // Forward declaring type: IReadableConfiguration
  class IReadableConfiguration;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Type namespace: KID.Client
namespace KID::Client {
  // Forward declaring type: ClientUtils
  class ClientUtils;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::KID::Client::ClientUtils);
DEFINE_IL2CPP_ARG_TYPE(::KID::Client::ClientUtils*, "KID.Client", "ClientUtils");
// Type namespace: KID.Client
namespace KID::Client {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: KID.Client.ClientUtils
  // [TokenAttribute] Offset: FFFFFFFF
  class ClientUtils : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Text.RegularExpressions.Regex JsonRegex
    static ::System::Text::RegularExpressions::Regex* _get_JsonRegex();
    // Set static field: static public readonly System.Text.RegularExpressions.Regex JsonRegex
    static void _set_JsonRegex(::System::Text::RegularExpressions::Regex* value);
    // static public System.String SanitizeFilename(System.String filename)
    // Offset: 0x4382C68
    static ::StringW SanitizeFilename(::StringW filename);
    // static public KID.Client.Multimap`2<System.String,System.String> ParameterToMultiMap(System.String collectionFormat, System.String name, System.Object value)
    // Offset: 0x4382D2C
    static ::KID::Client::Multimap_2<::StringW, ::StringW>* ParameterToMultiMap(::StringW collectionFormat, ::StringW name, ::Il2CppObject* value);
    // static public System.String ParameterToString(System.Object obj, KID.Client.IReadableConfiguration configuration)
    // Offset: 0x4383850
    static ::StringW ParameterToString(::Il2CppObject* obj, ::KID::Client::IReadableConfiguration* configuration);
    // static public System.String Serialize(System.Object obj)
    // Offset: 0x43842AC
    static ::StringW Serialize(::Il2CppObject* obj);
    // static public System.String Base64Encode(System.String text)
    // Offset: 0x4384318
    static ::StringW Base64Encode(::StringW text);
    // static public System.Byte[] ReadAsBytes(System.IO.Stream inputStream)
    // Offset: 0x438439C
    static ::ArrayW<uint8_t> ReadAsBytes(::System::IO::Stream* inputStream);
    // static public System.String SelectHeaderContentType(System.String[] contentTypes)
    // Offset: 0x4384560
    static ::StringW SelectHeaderContentType(::ArrayW<::StringW> contentTypes);
    // static public System.String SelectHeaderAccept(System.String[] accepts)
    // Offset: 0x43846D8
    static ::StringW SelectHeaderAccept(::ArrayW<::StringW> accepts);
    // static public System.Boolean IsJsonMime(System.String mime)
    // Offset: 0x4384618
    static bool IsJsonMime(::StringW mime);
    // static private System.Boolean HasEnumMemberAttrValue(System.Object enumVal)
    // Offset: 0x438400C
    static bool HasEnumMemberAttrValue(::Il2CppObject* enumVal);
    // static private System.String GetEnumMemberAttrValue(System.Object enumVal)
    // Offset: 0x4384160
    static ::StringW GetEnumMemberAttrValue(::Il2CppObject* enumVal);
    // static private System.Void .cctor()
    // Offset: 0x43847F4
    static void _cctor();
  }; // KID.Client.ClientUtils
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: KID::Client::ClientUtils::SanitizeFilename
// Il2CppName: SanitizeFilename
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&KID::Client::ClientUtils::SanitizeFilename)> {
  static const MethodInfo* get() {
    static auto* filename = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Client::ClientUtils*), "SanitizeFilename", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{filename});
  }
};
// Writing MetadataGetter for method: KID::Client::ClientUtils::ParameterToMultiMap
// Il2CppName: ParameterToMultiMap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::KID::Client::Multimap_2<::StringW, ::StringW>* (*)(::StringW, ::StringW, ::Il2CppObject*)>(&KID::Client::ClientUtils::ParameterToMultiMap)> {
  static const MethodInfo* get() {
    static auto* collectionFormat = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Client::ClientUtils*), "ParameterToMultiMap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{collectionFormat, name, value});
  }
};
// Writing MetadataGetter for method: KID::Client::ClientUtils::ParameterToString
// Il2CppName: ParameterToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Il2CppObject*, ::KID::Client::IReadableConfiguration*)>(&KID::Client::ClientUtils::ParameterToString)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* configuration = &::il2cpp_utils::GetClassFromName("KID.Client", "IReadableConfiguration")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Client::ClientUtils*), "ParameterToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, configuration});
  }
};
// Writing MetadataGetter for method: KID::Client::ClientUtils::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Il2CppObject*)>(&KID::Client::ClientUtils::Serialize)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Client::ClientUtils*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: KID::Client::ClientUtils::Base64Encode
// Il2CppName: Base64Encode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&KID::Client::ClientUtils::Base64Encode)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Client::ClientUtils*), "Base64Encode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: KID::Client::ClientUtils::ReadAsBytes
// Il2CppName: ReadAsBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::System::IO::Stream*)>(&KID::Client::ClientUtils::ReadAsBytes)> {
  static const MethodInfo* get() {
    static auto* inputStream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Client::ClientUtils*), "ReadAsBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputStream});
  }
};
// Writing MetadataGetter for method: KID::Client::ClientUtils::SelectHeaderContentType
// Il2CppName: SelectHeaderContentType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<::StringW>)>(&KID::Client::ClientUtils::SelectHeaderContentType)> {
  static const MethodInfo* get() {
    static auto* contentTypes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Client::ClientUtils*), "SelectHeaderContentType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{contentTypes});
  }
};
// Writing MetadataGetter for method: KID::Client::ClientUtils::SelectHeaderAccept
// Il2CppName: SelectHeaderAccept
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<::StringW>)>(&KID::Client::ClientUtils::SelectHeaderAccept)> {
  static const MethodInfo* get() {
    static auto* accepts = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Client::ClientUtils*), "SelectHeaderAccept", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{accepts});
  }
};
// Writing MetadataGetter for method: KID::Client::ClientUtils::IsJsonMime
// Il2CppName: IsJsonMime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&KID::Client::ClientUtils::IsJsonMime)> {
  static const MethodInfo* get() {
    static auto* mime = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Client::ClientUtils*), "IsJsonMime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mime});
  }
};
// Writing MetadataGetter for method: KID::Client::ClientUtils::HasEnumMemberAttrValue
// Il2CppName: HasEnumMemberAttrValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppObject*)>(&KID::Client::ClientUtils::HasEnumMemberAttrValue)> {
  static const MethodInfo* get() {
    static auto* enumVal = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Client::ClientUtils*), "HasEnumMemberAttrValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enumVal});
  }
};
// Writing MetadataGetter for method: KID::Client::ClientUtils::GetEnumMemberAttrValue
// Il2CppName: GetEnumMemberAttrValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Il2CppObject*)>(&KID::Client::ClientUtils::GetEnumMemberAttrValue)> {
  static const MethodInfo* get() {
    static auto* enumVal = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(KID::Client::ClientUtils*), "GetEnumMemberAttrValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enumVal});
  }
};
// Writing MetadataGetter for method: KID::Client::ClientUtils::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&KID::Client::ClientUtils::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(KID::Client::ClientUtils*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
