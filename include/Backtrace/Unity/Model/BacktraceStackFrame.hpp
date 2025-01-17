// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Backtrace.Unity.Types.BacktraceStackFrameType
#include "Backtrace/Unity/Types/BacktraceStackFrameType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Backtrace::Unity::Json
namespace Backtrace::Unity::Json {
  // Forward declaring type: BacktraceJObject
  class BacktraceJObject;
}
// Forward declaring namespace: System::Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: StackFrame
  class StackFrame;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodBase
  class MethodBase;
}
// Completed forward declares
// Type namespace: Backtrace.Unity.Model
namespace Backtrace::Unity::Model {
  // Forward declaring type: BacktraceStackFrame
  class BacktraceStackFrame;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Backtrace::Unity::Model::BacktraceStackFrame);
DEFINE_IL2CPP_ARG_TYPE(::Backtrace::Unity::Model::BacktraceStackFrame*, "Backtrace.Unity.Model", "BacktraceStackFrame");
// Type namespace: Backtrace.Unity.Model
namespace Backtrace::Unity::Model {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: Backtrace.Unity.Model.BacktraceStackFrame
  // [TokenAttribute] Offset: FFFFFFFF
  class BacktraceStackFrame : public ::Il2CppObject {
    public:
    public:
    // public System.String FunctionName
    // Size: 0x8
    // Offset: 0x10
    ::StringW FunctionName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // Backtrace.Unity.Types.BacktraceStackFrameType StackFrameType
    // Size: 0x4
    // Offset: 0x18
    ::Backtrace::Unity::Types::BacktraceStackFrameType StackFrameType;
    // Field size check
    static_assert(sizeof(::Backtrace::Unity::Types::BacktraceStackFrameType) == 0x4);
    // public System.Int32 Line
    // Size: 0x4
    // Offset: 0x1C
    int Line;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.String MemberInfo
    // Size: 0x8
    // Offset: 0x20
    ::StringW MemberInfo;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String SourceCodeFullPath
    // Size: 0x8
    // Offset: 0x28
    ::StringW SourceCodeFullPath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 Column
    // Size: 0x4
    // Offset: 0x30
    int Column;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 ILOffset
    // Size: 0x4
    // Offset: 0x34
    int ILOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.String SourceCode
    // Size: 0x8
    // Offset: 0x38
    ::StringW SourceCode;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String Address
    // Size: 0x8
    // Offset: 0x40
    ::StringW Address;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String Assembly
    // Size: 0x8
    // Offset: 0x48
    ::StringW Assembly;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean <InvalidFrame>k__BackingField
    // Size: 0x1
    // Offset: 0x50
    bool InvalidFrame;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: InvalidFrame and: Library
    char __padding10[0x7] = {};
    // public System.String Library
    // Size: 0x8
    // Offset: 0x58
    ::StringW Library;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get static field: static private System.String[] _frameSeparators
    static ::ArrayW<::StringW> _get__frameSeparators();
    // Set static field: static private System.String[] _frameSeparators
    static void _set__frameSeparators(::ArrayW<::StringW> value);
    // Get instance field reference: public System.String FunctionName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_FunctionName();
    // Get instance field reference: Backtrace.Unity.Types.BacktraceStackFrameType StackFrameType
    [[deprecated("Use field access instead!")]] ::Backtrace::Unity::Types::BacktraceStackFrameType& dyn_StackFrameType();
    // Get instance field reference: public System.Int32 Line
    [[deprecated("Use field access instead!")]] int& dyn_Line();
    // Get instance field reference: public System.String MemberInfo
    [[deprecated("Use field access instead!")]] ::StringW& dyn_MemberInfo();
    // Get instance field reference: public System.String SourceCodeFullPath
    [[deprecated("Use field access instead!")]] ::StringW& dyn_SourceCodeFullPath();
    // Get instance field reference: public System.Int32 Column
    [[deprecated("Use field access instead!")]] int& dyn_Column();
    // Get instance field reference: public System.Int32 ILOffset
    [[deprecated("Use field access instead!")]] int& dyn_ILOffset();
    // Get instance field reference: public System.String SourceCode
    [[deprecated("Use field access instead!")]] ::StringW& dyn_SourceCode();
    // Get instance field reference: public System.String Address
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Address();
    // Get instance field reference: public System.String Assembly
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Assembly();
    // Get instance field reference: private System.Boolean <InvalidFrame>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$InvalidFrame$k__BackingField();
    // Get instance field reference: public System.String Library
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Library();
    // public System.String get_FileName()
    // Offset: 0x2A63F28
    ::StringW get_FileName();
    // public System.Boolean get_InvalidFrame()
    // Offset: 0x2A643F8
    bool get_InvalidFrame();
    // public System.Void set_InvalidFrame(System.Boolean value)
    // Offset: 0x2A64400
    void set_InvalidFrame(bool value);
    // public Backtrace.Unity.Json.BacktraceJObject ToJson()
    // Offset: 0x2A6440C
    ::Backtrace::Unity::Json::BacktraceJObject* ToJson();
    // public System.Void .ctor()
    // Offset: 0x2A646C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BacktraceStackFrame* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Backtrace::Unity::Model::BacktraceStackFrame::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BacktraceStackFrame*, creationType>()));
    }
    // public System.Void .ctor(System.Diagnostics.StackFrame frame, System.Boolean generatedByException)
    // Offset: 0x2A646CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BacktraceStackFrame* New_ctor(::System::Diagnostics::StackFrame* frame, bool generatedByException) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Backtrace::Unity::Model::BacktraceStackFrame::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BacktraceStackFrame*, creationType>(frame, generatedByException)));
    }
    // private System.String GetMethodName(System.Reflection.MethodBase method)
    // Offset: 0x2A649E0
    ::StringW GetMethodName(::System::Reflection::MethodBase* method);
    // private System.String GetFileNameFromLibraryName()
    // Offset: 0x2A642C0
    ::StringW GetFileNameFromLibraryName();
    // private System.String GetFileNameFromFunctionName()
    // Offset: 0x2A63FF4
    ::StringW GetFileNameFromFunctionName();
    // static private System.Void .cctor()
    // Offset: 0x2A64BE4
    static void _cctor();
    // public override System.String ToString()
    // Offset: 0x2A64B3C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // Backtrace.Unity.Model.BacktraceStackFrame
  #pragma pack(pop)
  static check_size<sizeof(BacktraceStackFrame), 88 + sizeof(::StringW)> __Backtrace_Unity_Model_BacktraceStackFrameSizeCheck;
  static_assert(sizeof(BacktraceStackFrame) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Backtrace::Unity::Model::BacktraceStackFrame::get_FileName
// Il2CppName: get_FileName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Backtrace::Unity::Model::BacktraceStackFrame::*)()>(&Backtrace::Unity::Model::BacktraceStackFrame::get_FileName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::BacktraceStackFrame*), "get_FileName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::BacktraceStackFrame::get_InvalidFrame
// Il2CppName: get_InvalidFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Backtrace::Unity::Model::BacktraceStackFrame::*)()>(&Backtrace::Unity::Model::BacktraceStackFrame::get_InvalidFrame)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::BacktraceStackFrame*), "get_InvalidFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::BacktraceStackFrame::set_InvalidFrame
// Il2CppName: set_InvalidFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Model::BacktraceStackFrame::*)(bool)>(&Backtrace::Unity::Model::BacktraceStackFrame::set_InvalidFrame)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::BacktraceStackFrame*), "set_InvalidFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::BacktraceStackFrame::ToJson
// Il2CppName: ToJson
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Backtrace::Unity::Json::BacktraceJObject* (Backtrace::Unity::Model::BacktraceStackFrame::*)()>(&Backtrace::Unity::Model::BacktraceStackFrame::ToJson)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::BacktraceStackFrame*), "ToJson", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::BacktraceStackFrame::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Backtrace::Unity::Model::BacktraceStackFrame::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Backtrace::Unity::Model::BacktraceStackFrame::GetMethodName
// Il2CppName: GetMethodName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Backtrace::Unity::Model::BacktraceStackFrame::*)(::System::Reflection::MethodBase*)>(&Backtrace::Unity::Model::BacktraceStackFrame::GetMethodName)> {
  static const MethodInfo* get() {
    static auto* method = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodBase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::BacktraceStackFrame*), "GetMethodName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{method});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::BacktraceStackFrame::GetFileNameFromLibraryName
// Il2CppName: GetFileNameFromLibraryName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Backtrace::Unity::Model::BacktraceStackFrame::*)()>(&Backtrace::Unity::Model::BacktraceStackFrame::GetFileNameFromLibraryName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::BacktraceStackFrame*), "GetFileNameFromLibraryName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::BacktraceStackFrame::GetFileNameFromFunctionName
// Il2CppName: GetFileNameFromFunctionName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Backtrace::Unity::Model::BacktraceStackFrame::*)()>(&Backtrace::Unity::Model::BacktraceStackFrame::GetFileNameFromFunctionName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::BacktraceStackFrame*), "GetFileNameFromFunctionName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::BacktraceStackFrame::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Backtrace::Unity::Model::BacktraceStackFrame::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::BacktraceStackFrame*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::BacktraceStackFrame::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Backtrace::Unity::Model::BacktraceStackFrame::*)()>(&Backtrace::Unity::Model::BacktraceStackFrame::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::BacktraceStackFrame*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
