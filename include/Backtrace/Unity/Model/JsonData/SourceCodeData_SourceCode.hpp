// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Backtrace.Unity.Model.JsonData.SourceCodeData
#include "Backtrace/Unity/Model/JsonData/SourceCodeData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Backtrace::Unity::Model
namespace Backtrace::Unity::Model {
  // Forward declaring type: BacktraceStackFrame
  class BacktraceStackFrame;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Backtrace::Unity::Model::JsonData::SourceCodeData::SourceCode);
DEFINE_IL2CPP_ARG_TYPE(::Backtrace::Unity::Model::JsonData::SourceCodeData::SourceCode*, "Backtrace.Unity.Model.JsonData", "SourceCodeData/SourceCode");
// Type namespace: Backtrace.Unity.Model.JsonData
namespace Backtrace::Unity::Model::JsonData {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Backtrace.Unity.Model.JsonData.SourceCodeData/SourceCode
  // [TokenAttribute] Offset: FFFFFFFF
  class SourceCodeData::SourceCode : public ::Il2CppObject {
    public:
    public:
    // private System.Int32 <StartLine>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    int StartLine;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <StartColumn>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    int StartColumn;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.String <_sourceCodeFullPath>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::StringW sourceCodeFullPath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.Int32 <StartLine>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$StartLine$k__BackingField();
    // Get instance field reference: private System.Int32 <StartColumn>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$StartColumn$k__BackingField();
    // Get instance field reference: private System.String <_sourceCodeFullPath>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$_sourceCodeFullPath$k__BackingField();
    // public System.Int32 get_StartLine()
    // Offset: 0x2A6C5C8
    int get_StartLine();
    // public System.Void set_StartLine(System.Int32 value)
    // Offset: 0x2A6C5D0
    void set_StartLine(int value);
    // public System.Int32 get_StartColumn()
    // Offset: 0x2A6C5D8
    int get_StartColumn();
    // public System.Void set_StartColumn(System.Int32 value)
    // Offset: 0x2A6C5E0
    void set_StartColumn(int value);
    // private System.String get__sourceCodeFullPath()
    // Offset: 0x2A6C5E8
    ::StringW get__sourceCodeFullPath();
    // private System.Void set__sourceCodeFullPath(System.String value)
    // Offset: 0x2A6C5F0
    void set__sourceCodeFullPath(::StringW value);
    // public System.String get_SourceCodeFullPath()
    // Offset: 0x2A6C5F8
    ::StringW get_SourceCodeFullPath();
    // public System.Void set_SourceCodeFullPath(System.String value)
    // Offset: 0x2A6C690
    void set_SourceCodeFullPath(::StringW value);
    // static public Backtrace.Unity.Model.JsonData.SourceCodeData/SourceCode FromExceptionStack(Backtrace.Unity.Model.BacktraceStackFrame stackFrame)
    // Offset: 0x2A6C544
    static ::Backtrace::Unity::Model::JsonData::SourceCodeData::SourceCode* FromExceptionStack(::Backtrace::Unity::Model::BacktraceStackFrame* stackFrame);
    // public System.Void .ctor()
    // Offset: 0x2A6C698
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SourceCodeData::SourceCode* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Backtrace::Unity::Model::JsonData::SourceCodeData::SourceCode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SourceCodeData::SourceCode*, creationType>()));
    }
  }; // Backtrace.Unity.Model.JsonData.SourceCodeData/SourceCode
  #pragma pack(pop)
  static check_size<sizeof(SourceCodeData::SourceCode), 24 + sizeof(::StringW)> __Backtrace_Unity_Model_JsonData_SourceCodeData_SourceCodeSizeCheck;
  static_assert(sizeof(SourceCodeData::SourceCode) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Backtrace::Unity::Model::JsonData::SourceCodeData::SourceCode::get_StartLine
// Il2CppName: get_StartLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Backtrace::Unity::Model::JsonData::SourceCodeData::SourceCode::*)()>(&Backtrace::Unity::Model::JsonData::SourceCodeData::SourceCode::get_StartLine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::JsonData::SourceCodeData::SourceCode*), "get_StartLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::JsonData::SourceCodeData::SourceCode::set_StartLine
// Il2CppName: set_StartLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Model::JsonData::SourceCodeData::SourceCode::*)(int)>(&Backtrace::Unity::Model::JsonData::SourceCodeData::SourceCode::set_StartLine)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::JsonData::SourceCodeData::SourceCode*), "set_StartLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::JsonData::SourceCodeData::SourceCode::get_StartColumn
// Il2CppName: get_StartColumn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Backtrace::Unity::Model::JsonData::SourceCodeData::SourceCode::*)()>(&Backtrace::Unity::Model::JsonData::SourceCodeData::SourceCode::get_StartColumn)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::JsonData::SourceCodeData::SourceCode*), "get_StartColumn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::JsonData::SourceCodeData::SourceCode::set_StartColumn
// Il2CppName: set_StartColumn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Model::JsonData::SourceCodeData::SourceCode::*)(int)>(&Backtrace::Unity::Model::JsonData::SourceCodeData::SourceCode::set_StartColumn)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::JsonData::SourceCodeData::SourceCode*), "set_StartColumn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::JsonData::SourceCodeData::SourceCode::get__sourceCodeFullPath
// Il2CppName: get__sourceCodeFullPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Backtrace::Unity::Model::JsonData::SourceCodeData::SourceCode::*)()>(&Backtrace::Unity::Model::JsonData::SourceCodeData::SourceCode::get__sourceCodeFullPath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::JsonData::SourceCodeData::SourceCode*), "get__sourceCodeFullPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::JsonData::SourceCodeData::SourceCode::set__sourceCodeFullPath
// Il2CppName: set__sourceCodeFullPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Model::JsonData::SourceCodeData::SourceCode::*)(::StringW)>(&Backtrace::Unity::Model::JsonData::SourceCodeData::SourceCode::set__sourceCodeFullPath)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::JsonData::SourceCodeData::SourceCode*), "set__sourceCodeFullPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::JsonData::SourceCodeData::SourceCode::get_SourceCodeFullPath
// Il2CppName: get_SourceCodeFullPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Backtrace::Unity::Model::JsonData::SourceCodeData::SourceCode::*)()>(&Backtrace::Unity::Model::JsonData::SourceCodeData::SourceCode::get_SourceCodeFullPath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::JsonData::SourceCodeData::SourceCode*), "get_SourceCodeFullPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::JsonData::SourceCodeData::SourceCode::set_SourceCodeFullPath
// Il2CppName: set_SourceCodeFullPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Model::JsonData::SourceCodeData::SourceCode::*)(::StringW)>(&Backtrace::Unity::Model::JsonData::SourceCodeData::SourceCode::set_SourceCodeFullPath)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::JsonData::SourceCodeData::SourceCode*), "set_SourceCodeFullPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::JsonData::SourceCodeData::SourceCode::FromExceptionStack
// Il2CppName: FromExceptionStack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Backtrace::Unity::Model::JsonData::SourceCodeData::SourceCode* (*)(::Backtrace::Unity::Model::BacktraceStackFrame*)>(&Backtrace::Unity::Model::JsonData::SourceCodeData::SourceCode::FromExceptionStack)> {
  static const MethodInfo* get() {
    static auto* stackFrame = &::il2cpp_utils::GetClassFromName("Backtrace.Unity.Model", "BacktraceStackFrame")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::JsonData::SourceCodeData::SourceCode*), "FromExceptionStack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stackFrame});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::JsonData::SourceCodeData::SourceCode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!