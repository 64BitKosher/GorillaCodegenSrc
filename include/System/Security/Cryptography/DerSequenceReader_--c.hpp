// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.DerSequenceReader
#include "System/Security/Cryptography/DerSequenceReader.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: DateTimeFormatInfo
  class DateTimeFormatInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::DerSequenceReader::$$c);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::DerSequenceReader::$$c*, "System.Security.Cryptography", "DerSequenceReader/<>c");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.DerSequenceReader/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class DerSequenceReader::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Security.Cryptography.DerSequenceReader/<>c <>9
    static ::System::Security::Cryptography::DerSequenceReader::$$c* _get_$$9();
    // Set static field: static public readonly System.Security.Cryptography.DerSequenceReader/<>c <>9
    static void _set_$$9(::System::Security::Cryptography::DerSequenceReader::$$c* value);
    // Get static field: static public System.Func`1<System.Text.Encoding> <>9__45_0
    static ::System::Func_1<::System::Text::Encoding*>* _get_$$9__45_0();
    // Set static field: static public System.Func`1<System.Text.Encoding> <>9__45_0
    static void _set_$$9__45_0(::System::Func_1<::System::Text::Encoding*>* value);
    // Get static field: static public System.Func`1<System.Text.Encoding> <>9__45_1
    static ::System::Func_1<::System::Text::Encoding*>* _get_$$9__45_1();
    // Set static field: static public System.Func`1<System.Text.Encoding> <>9__45_1
    static void _set_$$9__45_1(::System::Func_1<::System::Text::Encoding*>* value);
    // Get static field: static public System.Func`1<System.Globalization.DateTimeFormatInfo> <>9__51_0
    static ::System::Func_1<::System::Globalization::DateTimeFormatInfo*>* _get_$$9__51_0();
    // Set static field: static public System.Func`1<System.Globalization.DateTimeFormatInfo> <>9__51_0
    static void _set_$$9__51_0(::System::Func_1<::System::Globalization::DateTimeFormatInfo*>* value);
    // static private System.Void .cctor()
    // Offset: 0x4F91254
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x4F912BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerSequenceReader::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::DerSequenceReader::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DerSequenceReader::$$c*, creationType>()));
    }
    // System.Text.Encoding <ReadT61String>b__45_0()
    // Offset: 0x4F912C4
    ::System::Text::Encoding* $ReadT61String$b__45_0();
    // System.Text.Encoding <ReadT61String>b__45_1()
    // Offset: 0x4F91320
    ::System::Text::Encoding* $ReadT61String$b__45_1();
    // System.Globalization.DateTimeFormatInfo <ReadTime>b__51_0()
    // Offset: 0x4F91364
    ::System::Globalization::DateTimeFormatInfo* $ReadTime$b__51_0();
  }; // System.Security.Cryptography.DerSequenceReader/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::DerSequenceReader::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Security::Cryptography::DerSequenceReader::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::DerSequenceReader::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::DerSequenceReader::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::DerSequenceReader::$$c::$ReadT61String$b__45_0
// Il2CppName: <ReadT61String>b__45_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (System::Security::Cryptography::DerSequenceReader::$$c::*)()>(&System::Security::Cryptography::DerSequenceReader::$$c::$ReadT61String$b__45_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::DerSequenceReader::$$c*), "<ReadT61String>b__45_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::DerSequenceReader::$$c::$ReadT61String$b__45_1
// Il2CppName: <ReadT61String>b__45_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (System::Security::Cryptography::DerSequenceReader::$$c::*)()>(&System::Security::Cryptography::DerSequenceReader::$$c::$ReadT61String$b__45_1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::DerSequenceReader::$$c*), "<ReadT61String>b__45_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::DerSequenceReader::$$c::$ReadTime$b__51_0
// Il2CppName: <ReadTime>b__51_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::DateTimeFormatInfo* (System::Security::Cryptography::DerSequenceReader::$$c::*)()>(&System::Security::Cryptography::DerSequenceReader::$$c::$ReadTime$b__51_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::DerSequenceReader::$$c*), "<ReadTime>b__51_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};