// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.ISpanFormattable
#include "System/ISpanFormattable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Span`1<T>
  template<typename T>
  struct Span_1;
  // Forward declaring type: ReadOnlySpan`1<T>
  template<typename T>
  struct ReadOnlySpan_1;
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Version);
DEFINE_IL2CPP_ARG_TYPE(::System::Version*, "System", "Version");
// Type namespace: System
namespace System {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Version
  // [TokenAttribute] Offset: FFFFFFFF
  class Version : public ::Il2CppObject/*, public ::System::ICloneable, public ::System::IComparable, public ::System::IComparable_1<::System::Version*>, public ::System::IEquatable_1<::System::Version*>, public ::System::ISpanFormattable*/ {
    public:
    public:
    // private readonly System.Int32 _Major
    // Size: 0x4
    // Offset: 0x10
    int Major;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Int32 _Minor
    // Size: 0x4
    // Offset: 0x14
    int Minor;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Int32 _Build
    // Size: 0x4
    // Offset: 0x18
    int Build;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Int32 _Revision
    // Size: 0x4
    // Offset: 0x1C
    int Revision;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::ICloneable
    operator ::System::ICloneable() noexcept {
      return *reinterpret_cast<::System::ICloneable*>(this);
    }
    // Creating interface conversion operator: operator ::System::IComparable
    operator ::System::IComparable() noexcept {
      return *reinterpret_cast<::System::IComparable*>(this);
    }
    // Creating interface conversion operator: operator ::System::IComparable_1<::System::Version*>
    operator ::System::IComparable_1<::System::Version*>() noexcept {
      return *reinterpret_cast<::System::IComparable_1<::System::Version*>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::System::Version*>
    operator ::System::IEquatable_1<::System::Version*>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::System::Version*>*>(this);
    }
    // Creating interface conversion operator: operator ::System::ISpanFormattable
    operator ::System::ISpanFormattable() noexcept {
      return *reinterpret_cast<::System::ISpanFormattable*>(this);
    }
    // Get instance field reference: private readonly System.Int32 _Major
    [[deprecated("Use field access instead!")]] int& dyn__Major();
    // Get instance field reference: private readonly System.Int32 _Minor
    [[deprecated("Use field access instead!")]] int& dyn__Minor();
    // Get instance field reference: private readonly System.Int32 _Build
    [[deprecated("Use field access instead!")]] int& dyn__Build();
    // Get instance field reference: private readonly System.Int32 _Revision
    [[deprecated("Use field access instead!")]] int& dyn__Revision();
    // public System.Void .ctor(System.Int32 major, System.Int32 minor, System.Int32 build, System.Int32 revision)
    // Offset: 0x467B594
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Version* New_ctor(int major, int minor, int build, int revision) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Version::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Version*, creationType>(major, minor, build, revision)));
    }
    // public System.Void .ctor(System.Int32 major, System.Int32 minor, System.Int32 build)
    // Offset: 0x467B6A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Version* New_ctor(int major, int minor, int build) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Version::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Version*, creationType>(major, minor, build)));
    }
    // public System.Void .ctor(System.Int32 major, System.Int32 minor)
    // Offset: 0x467B794
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Version* New_ctor(int major, int minor) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Version::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Version*, creationType>(major, minor)));
    }
    // public System.Void .ctor(System.String version)
    // Offset: 0x467B84C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Version* New_ctor(::StringW version) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Version::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Version*, creationType>(version)));
    }
    // private System.Void .ctor(System.Version version)
    // Offset: 0x467B94C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Version* New_ctor(::System::Version* version) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Version::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Version*, creationType>(version)));
    }
    // public System.Object Clone()
    // Offset: 0x467B988
    ::Il2CppObject* Clone();
    // public System.Int32 get_Major()
    // Offset: 0x467B9E0
    int get_Major();
    // public System.Int32 get_Minor()
    // Offset: 0x467B9E8
    int get_Minor();
    // public System.Int32 get_Build()
    // Offset: 0x467B9F0
    int get_Build();
    // public System.Int32 get_Revision()
    // Offset: 0x467B9F8
    int get_Revision();
    // public System.Int32 CompareTo(System.Object version)
    // Offset: 0x467BA00
    int CompareTo(::Il2CppObject* version);
    // public System.Int32 CompareTo(System.Version value)
    // Offset: 0x467BACC
    int CompareTo(::System::Version* value);
    // public System.Boolean Equals(System.Version obj)
    // Offset: 0x467BB98
    bool Equals(::System::Version* obj);
    // public System.String ToString(System.Int32 fieldCount)
    // Offset: 0x467BC64
    ::StringW ToString(int fieldCount);
    // public System.Boolean TryFormat(System.Span`1<System.Char> destination, out System.Int32 charsWritten)
    // Offset: 0x467BF38
    bool TryFormat(::System::Span_1<::Il2CppChar> destination, ByRef<int> charsWritten);
    // public System.Boolean TryFormat(System.Span`1<System.Char> destination, System.Int32 fieldCount, out System.Int32 charsWritten)
    // Offset: 0x467BF64
    bool TryFormat(::System::Span_1<::Il2CppChar> destination, int fieldCount, ByRef<int> charsWritten);
    // private System.Boolean System.ISpanFormattable.TryFormat(System.Span`1<System.Char> destination, out System.Int32 charsWritten, System.ReadOnlySpan`1<System.Char> format, System.IFormatProvider provider)
    // Offset: 0x467C08C
    bool System_ISpanFormattable_TryFormat(::System::Span_1<::Il2CppChar> destination, ByRef<int> charsWritten, ::System::ReadOnlySpan_1<::Il2CppChar> format, ::System::IFormatProvider* provider);
    // private System.Int32 get_DefaultFormatFieldCount()
    // Offset: 0x467BC3C
    int get_DefaultFormatFieldCount();
    // private System.Text.StringBuilder ToCachedStringBuilder(System.Int32 fieldCount)
    // Offset: 0x467BCF0
    ::System::Text::StringBuilder* ToCachedStringBuilder(int fieldCount);
    // static public System.Version Parse(System.String input)
    // Offset: 0x467B890
    static ::System::Version* Parse(::StringW input);
    // static public System.Boolean TryParse(System.String input, out System.Version result)
    // Offset: 0x467C504
    static bool TryParse(::StringW input, ByRef<::System::Version*> result);
    // static private System.Version ParseVersion(System.ReadOnlySpan`1<System.Char> input, System.Boolean throwOnFailure)
    // Offset: 0x467C0B8
    static ::System::Version* ParseVersion(::System::ReadOnlySpan_1<::Il2CppChar> input, bool throwOnFailure);
    // static private System.Boolean TryParseComponent(System.ReadOnlySpan`1<System.Char> component, System.String componentName, System.Boolean throwOnFailure, out System.Int32 parsedComponent)
    // Offset: 0x467C5B8
    static bool TryParseComponent(::System::ReadOnlySpan_1<::Il2CppChar> component, ::StringW componentName, bool throwOnFailure, ByRef<int> parsedComponent);
    // public System.Void .ctor()
    // Offset: 0x467B928
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Version* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Version::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Version*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x467BB34
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x467BBF8
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x467BC14
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.Version
  #pragma pack(pop)
  static check_size<sizeof(Version), 28 + sizeof(int)> __System_VersionSizeCheck;
  static_assert(sizeof(Version) == 0x20);
  // static public System.Boolean op_Equality(System.Version v1, System.Version v2)
  // Offset: 0x467BAB8
  bool operator ==(::System::Version* v1, ::System::Version& v2);
  // static public System.Boolean op_Inequality(System.Version v1, System.Version v2)
  // Offset: 0x467C590
  bool operator !=(::System::Version* v1, ::System::Version& v2);
  // static public System.Boolean op_LessThan(System.Version v1, System.Version v2)
  // Offset: 0x467C6CC
  bool operator <(::System::Version* v1, ::System::Version& v2);
  // static public System.Boolean op_LessThanOrEqual(System.Version v1, System.Version v2)
  // Offset: 0x467C72C
  bool operator <=(::System::Version* v1, ::System::Version& v2);
  // static public System.Boolean op_GreaterThan(System.Version v1, System.Version v2)
  // Offset: 0x467C790
  bool operator >(::System::Version* v1, ::System::Version& v2);
  // static public System.Boolean op_GreaterThanOrEqual(System.Version v1, System.Version v2)
  // Offset: 0x467C7A0
  bool operator >=(::System::Version* v1, ::System::Version& v2);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Version::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Version::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Version::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Version::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Version::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Version::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Version::*)()>(&System::Version::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Version*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Version::get_Major
// Il2CppName: get_Major
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Version::*)()>(&System::Version::get_Major)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Version*), "get_Major", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Version::get_Minor
// Il2CppName: get_Minor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Version::*)()>(&System::Version::get_Minor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Version*), "get_Minor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Version::get_Build
// Il2CppName: get_Build
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Version::*)()>(&System::Version::get_Build)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Version*), "get_Build", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Version::get_Revision
// Il2CppName: get_Revision
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Version::*)()>(&System::Version::get_Revision)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Version*), "get_Revision", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Version::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Version::*)(::Il2CppObject*)>(&System::Version::CompareTo)> {
  static const MethodInfo* get() {
    static auto* version = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Version*), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{version});
  }
};
// Writing MetadataGetter for method: System::Version::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Version::*)(::System::Version*)>(&System::Version::CompareTo)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Version")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Version*), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Version::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Version::*)(::System::Version*)>(&System::Version::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Version")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Version*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Version::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Version::*)(int)>(&System::Version::ToString)> {
  static const MethodInfo* get() {
    static auto* fieldCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Version*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fieldCount});
  }
};
// Writing MetadataGetter for method: System::Version::TryFormat
// Il2CppName: TryFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Version::*)(::System::Span_1<::Il2CppChar>, ByRef<int>)>(&System::Version::TryFormat)> {
  static const MethodInfo* get() {
    static auto* destination = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Span`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    static auto* charsWritten = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Version*), "TryFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{destination, charsWritten});
  }
};
// Writing MetadataGetter for method: System::Version::TryFormat
// Il2CppName: TryFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Version::*)(::System::Span_1<::Il2CppChar>, int, ByRef<int>)>(&System::Version::TryFormat)> {
  static const MethodInfo* get() {
    static auto* destination = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Span`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    static auto* fieldCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* charsWritten = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Version*), "TryFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{destination, fieldCount, charsWritten});
  }
};
// Writing MetadataGetter for method: System::Version::System_ISpanFormattable_TryFormat
// Il2CppName: System.ISpanFormattable.TryFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Version::*)(::System::Span_1<::Il2CppChar>, ByRef<int>, ::System::ReadOnlySpan_1<::Il2CppChar>, ::System::IFormatProvider*)>(&System::Version::System_ISpanFormattable_TryFormat)> {
  static const MethodInfo* get() {
    static auto* destination = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Span`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    static auto* charsWritten = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* format = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Version*), "System.ISpanFormattable.TryFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{destination, charsWritten, format, provider});
  }
};
// Writing MetadataGetter for method: System::Version::get_DefaultFormatFieldCount
// Il2CppName: get_DefaultFormatFieldCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Version::*)()>(&System::Version::get_DefaultFormatFieldCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Version*), "get_DefaultFormatFieldCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Version::ToCachedStringBuilder
// Il2CppName: ToCachedStringBuilder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::StringBuilder* (System::Version::*)(int)>(&System::Version::ToCachedStringBuilder)> {
  static const MethodInfo* get() {
    static auto* fieldCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Version*), "ToCachedStringBuilder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fieldCount});
  }
};
// Writing MetadataGetter for method: System::Version::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Version* (*)(::StringW)>(&System::Version::Parse)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Version*), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: System::Version::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::System::Version*>)>(&System::Version::TryParse)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "Version")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Version*), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, result});
  }
};
// Writing MetadataGetter for method: System::Version::ParseVersion
// Il2CppName: ParseVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Version* (*)(::System::ReadOnlySpan_1<::Il2CppChar>, bool)>(&System::Version::ParseVersion)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    static auto* throwOnFailure = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Version*), "ParseVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, throwOnFailure});
  }
};
// Writing MetadataGetter for method: System::Version::TryParseComponent
// Il2CppName: TryParseComponent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ReadOnlySpan_1<::Il2CppChar>, ::StringW, bool, ByRef<int>)>(&System::Version::TryParseComponent)> {
  static const MethodInfo* get() {
    static auto* component = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ReadOnlySpan`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Char")})->byval_arg;
    static auto* componentName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* throwOnFailure = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parsedComponent = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Version*), "TryParseComponent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{component, componentName, throwOnFailure, parsedComponent});
  }
};
// Writing MetadataGetter for method: System::Version::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Version::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Version::*)(::Il2CppObject*)>(&System::Version::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Version*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Version::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Version::*)()>(&System::Version::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Version*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Version::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Version::*)()>(&System::Version::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Version*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Version::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Version::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Version::operator <
// Il2CppName: op_LessThan
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Version::operator <=
// Il2CppName: op_LessThanOrEqual
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Version::operator >
// Il2CppName: op_GreaterThan
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Version::operator >=
// Il2CppName: op_GreaterThanOrEqual
// Cannot perform method pointer template specialization from operators!
