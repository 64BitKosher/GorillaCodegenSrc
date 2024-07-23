// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPAddress
  class IPAddress;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: ReadOnlySpan`1<T>
  template<typename T>
  struct ReadOnlySpan_1;
  // Forward declaring type: Span`1<T>
  template<typename T>
  struct Span_1;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: IPAddressParser
  class IPAddressParser;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::IPAddressParser);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::IPAddressParser*, "System.Net", "IPAddressParser");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.IPAddressParser
  // [TokenAttribute] Offset: FFFFFFFF
  class IPAddressParser : public ::Il2CppObject {
    public:
    // static field const value: static private System.Int32 MaxIPv4StringLength
    static constexpr const int MaxIPv4StringLength = 15;
    // Get static field: static private System.Int32 MaxIPv4StringLength
    static int _get_MaxIPv4StringLength();
    // Set static field: static private System.Int32 MaxIPv4StringLength
    static void _set_MaxIPv4StringLength(int value);
    // static System.Net.IPAddress Parse(System.ReadOnlySpan`1<System.Char> ipSpan, System.Boolean tryParse)
    // Offset: 0x4FAD7CC
    static ::System::Net::IPAddress* Parse(::System::ReadOnlySpan_1<::Il2CppChar> ipSpan, bool tryParse);
    // static System.String IPv4AddressToString(System.UInt32 address)
    // Offset: 0x4FADF6C
    static ::StringW IPv4AddressToString(uint address);
    // static System.Void IPv4AddressToString(System.UInt32 address, System.Text.StringBuilder destination)
    // Offset: 0x4FAF154
    static void IPv4AddressToString(uint address, ::System::Text::StringBuilder* destination);
    // static System.Boolean IPv4AddressToString(System.UInt32 address, System.Span`1<System.Char> formatted, out System.Int32 charsWritten)
    // Offset: 0x4FAE0E4
    static bool IPv4AddressToString(uint address, ::System::Span_1<::Il2CppChar> formatted, ByRef<int> charsWritten);
    // static private System.Int32 IPv4AddressToStringHelper(System.UInt32 address, System.Char* addressString)
    // Offset: 0x4FAF0B8
    static int IPv4AddressToStringHelper(uint address, ::Il2CppChar* addressString);
    // static System.String IPv6AddressToString(System.UInt16[] address, System.UInt32 scopeId)
    // Offset: 0x4FADF58
    static ::StringW IPv6AddressToString(::ArrayW<uint16_t> address, uint scopeId);
    // static System.Boolean IPv6AddressToString(System.UInt16[] address, System.UInt32 scopeId, System.Span`1<System.Char> destination, out System.Int32 charsWritten)
    // Offset: 0x4FAE000
    static bool IPv6AddressToString(::ArrayW<uint16_t> address, uint scopeId, ::System::Span_1<::Il2CppChar> destination, ByRef<int> charsWritten);
    // static System.Text.StringBuilder IPv6AddressToStringHelper(System.UInt16[] address, System.UInt32 scopeId)
    // Offset: 0x4FAF27C
    static ::System::Text::StringBuilder* IPv6AddressToStringHelper(::ArrayW<uint16_t> address, uint scopeId);
    // static private System.Void FormatIPv4AddressNumber(System.Int32 number, System.Char* addressString, ref System.Int32 offset)
    // Offset: 0x4FAF1C4
    static void FormatIPv4AddressNumber(int number, ::Il2CppChar* addressString, ByRef<int> offset);
    // static public System.Boolean Ipv4StringToAddress(System.ReadOnlySpan`1<System.Char> ipSpan, out System.Int64 address)
    // Offset: 0x4FAF008
    static bool Ipv4StringToAddress(::System::ReadOnlySpan_1<::Il2CppChar> ipSpan, ByRef<int64_t> address);
    // static public System.Boolean Ipv6StringToAddress(System.ReadOnlySpan`1<System.Char> ipSpan, System.UInt16* numbers, System.Int32 numbersLength, out System.UInt32 scope)
    // Offset: 0x4FAEE94
    static bool Ipv6StringToAddress(::System::ReadOnlySpan_1<::Il2CppChar> ipSpan, uint16_t* numbers, int numbersLength, ByRef<uint> scope);
    // static private System.Void AppendSections(System.UInt16[] address, System.Int32 fromInclusive, System.Int32 toExclusive, System.Text.StringBuilder buffer)
    // Offset: 0x4FAF39C
    static void AppendSections(::ArrayW<uint16_t> address, int fromInclusive, int toExclusive, ::System::Text::StringBuilder* buffer);
    // static private System.Void AppendHex(System.UInt16 value, System.Text.StringBuilder buffer)
    // Offset: 0x4FAF584
    static void AppendHex(uint16_t value, ::System::Text::StringBuilder* buffer);
    // static private System.UInt32 ExtractIPv4Address(System.UInt16[] address)
    // Offset: 0x4FAF550
    static uint ExtractIPv4Address(::ArrayW<uint16_t> address);
    // static private System.UInt16 Reverse(System.UInt16 number)
    // Offset: 0x4FAF5EC
    static uint16_t Reverse(uint16_t number);
    // public System.Void .ctor()
    // Offset: 0x4FAF5F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IPAddressParser* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::IPAddressParser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IPAddressParser*, creationType>()));
    }
  }; // System.Net.IPAddressParser
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::IPAddressParser::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPAddress* (*)(::System::ReadOnlySpan_1<::Il2CppChar>, bool)>(&System::Net::IPAddressParser::Parse)> {
  static const MethodInfo* get() {
    static auto* ipSpan = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    static auto* tryParse = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPAddressParser*), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ipSpan, tryParse});
  }
};
// Writing MetadataGetter for method: System::Net::IPAddressParser::IPv4AddressToString
// Il2CppName: IPv4AddressToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(uint)>(&System::Net::IPAddressParser::IPv4AddressToString)> {
  static const MethodInfo* get() {
    static auto* address = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPAddressParser*), "IPv4AddressToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{address});
  }
};
// Writing MetadataGetter for method: System::Net::IPAddressParser::IPv4AddressToString
// Il2CppName: IPv4AddressToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint, ::System::Text::StringBuilder*)>(&System::Net::IPAddressParser::IPv4AddressToString)> {
  static const MethodInfo* get() {
    static auto* address = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* destination = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPAddressParser*), "IPv4AddressToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{address, destination});
  }
};
// Writing MetadataGetter for method: System::Net::IPAddressParser::IPv4AddressToString
// Il2CppName: IPv4AddressToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint, ::System::Span_1<::Il2CppChar>, ByRef<int>)>(&System::Net::IPAddressParser::IPv4AddressToString)> {
  static const MethodInfo* get() {
    static auto* address = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* formatted = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Span`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    static auto* charsWritten = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPAddressParser*), "IPv4AddressToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{address, formatted, charsWritten});
  }
};
// Writing MetadataGetter for method: System::Net::IPAddressParser::IPv4AddressToStringHelper
// Il2CppName: IPv4AddressToStringHelper
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(uint, ::Il2CppChar*)>(&System::Net::IPAddressParser::IPv4AddressToStringHelper)> {
  static const MethodInfo* get() {
    static auto* address = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* addressString = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPAddressParser*), "IPv4AddressToStringHelper", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{address, addressString});
  }
};
// Writing MetadataGetter for method: System::Net::IPAddressParser::IPv6AddressToString
// Il2CppName: IPv6AddressToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<uint16_t>, uint)>(&System::Net::IPAddressParser::IPv6AddressToString)> {
  static const MethodInfo* get() {
    static auto* address = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt16"), 1)->byval_arg;
    static auto* scopeId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPAddressParser*), "IPv6AddressToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{address, scopeId});
  }
};
// Writing MetadataGetter for method: System::Net::IPAddressParser::IPv6AddressToString
// Il2CppName: IPv6AddressToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint16_t>, uint, ::System::Span_1<::Il2CppChar>, ByRef<int>)>(&System::Net::IPAddressParser::IPv6AddressToString)> {
  static const MethodInfo* get() {
    static auto* address = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt16"), 1)->byval_arg;
    static auto* scopeId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* destination = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Span`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    static auto* charsWritten = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPAddressParser*), "IPv6AddressToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{address, scopeId, destination, charsWritten});
  }
};
// Writing MetadataGetter for method: System::Net::IPAddressParser::IPv6AddressToStringHelper
// Il2CppName: IPv6AddressToStringHelper
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::StringBuilder* (*)(::ArrayW<uint16_t>, uint)>(&System::Net::IPAddressParser::IPv6AddressToStringHelper)> {
  static const MethodInfo* get() {
    static auto* address = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt16"), 1)->byval_arg;
    static auto* scopeId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPAddressParser*), "IPv6AddressToStringHelper", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{address, scopeId});
  }
};
// Writing MetadataGetter for method: System::Net::IPAddressParser::FormatIPv4AddressNumber
// Il2CppName: FormatIPv4AddressNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::Il2CppChar*, ByRef<int>)>(&System::Net::IPAddressParser::FormatIPv4AddressNumber)> {
  static const MethodInfo* get() {
    static auto* number = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* addressString = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPAddressParser*), "FormatIPv4AddressNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{number, addressString, offset});
  }
};
// Writing MetadataGetter for method: System::Net::IPAddressParser::Ipv4StringToAddress
// Il2CppName: Ipv4StringToAddress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ReadOnlySpan_1<::Il2CppChar>, ByRef<int64_t>)>(&System::Net::IPAddressParser::Ipv4StringToAddress)> {
  static const MethodInfo* get() {
    static auto* ipSpan = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    static auto* address = &::il2cpp_utils::GetClassFromName("System", "Int64")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPAddressParser*), "Ipv4StringToAddress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ipSpan, address});
  }
};
// Writing MetadataGetter for method: System::Net::IPAddressParser::Ipv6StringToAddress
// Il2CppName: Ipv6StringToAddress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ReadOnlySpan_1<::Il2CppChar>, uint16_t*, int, ByRef<uint>)>(&System::Net::IPAddressParser::Ipv6StringToAddress)> {
  static const MethodInfo* get() {
    static auto* ipSpan = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    static auto* numbers = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "UInt16"))->byval_arg;
    static auto* numbersLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* scope = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPAddressParser*), "Ipv6StringToAddress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ipSpan, numbers, numbersLength, scope});
  }
};
// Writing MetadataGetter for method: System::Net::IPAddressParser::AppendSections
// Il2CppName: AppendSections
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint16_t>, int, int, ::System::Text::StringBuilder*)>(&System::Net::IPAddressParser::AppendSections)> {
  static const MethodInfo* get() {
    static auto* address = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt16"), 1)->byval_arg;
    static auto* fromInclusive = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* toExclusive = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* buffer = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPAddressParser*), "AppendSections", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{address, fromInclusive, toExclusive, buffer});
  }
};
// Writing MetadataGetter for method: System::Net::IPAddressParser::AppendHex
// Il2CppName: AppendHex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint16_t, ::System::Text::StringBuilder*)>(&System::Net::IPAddressParser::AppendHex)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    static auto* buffer = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPAddressParser*), "AppendHex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, buffer});
  }
};
// Writing MetadataGetter for method: System::Net::IPAddressParser::ExtractIPv4Address
// Il2CppName: ExtractIPv4Address
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::ArrayW<uint16_t>)>(&System::Net::IPAddressParser::ExtractIPv4Address)> {
  static const MethodInfo* get() {
    static auto* address = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt16"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPAddressParser*), "ExtractIPv4Address", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{address});
  }
};
// Writing MetadataGetter for method: System::Net::IPAddressParser::Reverse
// Il2CppName: Reverse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (*)(uint16_t)>(&System::Net::IPAddressParser::Reverse)> {
  static const MethodInfo* get() {
    static auto* number = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::IPAddressParser*), "Reverse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{number});
  }
};
// Writing MetadataGetter for method: System::Net::IPAddressParser::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
