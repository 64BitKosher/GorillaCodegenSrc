// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.XPath.XPathResultType
#include "System/Xml/XPath/XPathResultType.hpp"
// Including type: MS.Internal.Xml.XPath.Axis/AxisType
#include "MS/Internal/Xml/XPath/Axis.hpp"
// Including type: MS.Internal.Xml.XPath.XPathScanner
#include "MS/Internal/Xml/XPath/XPathScanner.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: MS::Internal::Xml::XPath
namespace MS::Internal::Xml::XPath {
  // Forward declaring type: AstNode
  class AstNode;
}
// Forward declaring namespace: System::Xml::XPath
namespace System::Xml::XPath {
  // Forward declaring type: XPathNodeType
  struct XPathNodeType;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: MS.Internal.Xml.XPath
namespace MS::Internal::Xml::XPath {
  // Forward declaring type: XPathParser
  class XPathParser;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MS::Internal::Xml::XPath::XPathParser);
DEFINE_IL2CPP_ARG_TYPE(::MS::Internal::Xml::XPath::XPathParser*, "MS.Internal.Xml.XPath", "XPathParser");
// Type namespace: MS.Internal.Xml.XPath
namespace MS::Internal::Xml::XPath {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: MS.Internal.Xml.XPath.XPathParser
  // [TokenAttribute] Offset: FFFFFFFF
  class XPathParser : public ::Il2CppObject {
    public:
    // Nested type: ::MS::Internal::Xml::XPath::XPathParser::ParamInfo
    class ParamInfo;
    public:
    // private MS.Internal.Xml.XPath.XPathScanner _scanner
    // Size: 0x8
    // Offset: 0x10
    ::MS::Internal::Xml::XPath::XPathScanner* scanner;
    // Field size check
    static_assert(sizeof(::MS::Internal::Xml::XPath::XPathScanner*) == 0x8);
    // private System.Int32 _parseDepth
    // Size: 0x4
    // Offset: 0x18
    int parseDepth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get static field: static private readonly System.Xml.XPath.XPathResultType[] s_temparray1
    static ::ArrayW<::System::Xml::XPath::XPathResultType> _get_s_temparray1();
    // Set static field: static private readonly System.Xml.XPath.XPathResultType[] s_temparray1
    static void _set_s_temparray1(::ArrayW<::System::Xml::XPath::XPathResultType> value);
    // Get static field: static private readonly System.Xml.XPath.XPathResultType[] s_temparray2
    static ::ArrayW<::System::Xml::XPath::XPathResultType> _get_s_temparray2();
    // Set static field: static private readonly System.Xml.XPath.XPathResultType[] s_temparray2
    static void _set_s_temparray2(::ArrayW<::System::Xml::XPath::XPathResultType> value);
    // Get static field: static private readonly System.Xml.XPath.XPathResultType[] s_temparray3
    static ::ArrayW<::System::Xml::XPath::XPathResultType> _get_s_temparray3();
    // Set static field: static private readonly System.Xml.XPath.XPathResultType[] s_temparray3
    static void _set_s_temparray3(::ArrayW<::System::Xml::XPath::XPathResultType> value);
    // Get static field: static private readonly System.Xml.XPath.XPathResultType[] s_temparray4
    static ::ArrayW<::System::Xml::XPath::XPathResultType> _get_s_temparray4();
    // Set static field: static private readonly System.Xml.XPath.XPathResultType[] s_temparray4
    static void _set_s_temparray4(::ArrayW<::System::Xml::XPath::XPathResultType> value);
    // Get static field: static private readonly System.Xml.XPath.XPathResultType[] s_temparray5
    static ::ArrayW<::System::Xml::XPath::XPathResultType> _get_s_temparray5();
    // Set static field: static private readonly System.Xml.XPath.XPathResultType[] s_temparray5
    static void _set_s_temparray5(::ArrayW<::System::Xml::XPath::XPathResultType> value);
    // Get static field: static private readonly System.Xml.XPath.XPathResultType[] s_temparray6
    static ::ArrayW<::System::Xml::XPath::XPathResultType> _get_s_temparray6();
    // Set static field: static private readonly System.Xml.XPath.XPathResultType[] s_temparray6
    static void _set_s_temparray6(::ArrayW<::System::Xml::XPath::XPathResultType> value);
    // Get static field: static private readonly System.Xml.XPath.XPathResultType[] s_temparray7
    static ::ArrayW<::System::Xml::XPath::XPathResultType> _get_s_temparray7();
    // Set static field: static private readonly System.Xml.XPath.XPathResultType[] s_temparray7
    static void _set_s_temparray7(::ArrayW<::System::Xml::XPath::XPathResultType> value);
    // Get static field: static private readonly System.Xml.XPath.XPathResultType[] s_temparray8
    static ::ArrayW<::System::Xml::XPath::XPathResultType> _get_s_temparray8();
    // Set static field: static private readonly System.Xml.XPath.XPathResultType[] s_temparray8
    static void _set_s_temparray8(::ArrayW<::System::Xml::XPath::XPathResultType> value);
    // Get static field: static private readonly System.Xml.XPath.XPathResultType[] s_temparray9
    static ::ArrayW<::System::Xml::XPath::XPathResultType> _get_s_temparray9();
    // Set static field: static private readonly System.Xml.XPath.XPathResultType[] s_temparray9
    static void _set_s_temparray9(::ArrayW<::System::Xml::XPath::XPathResultType> value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.String,MS.Internal.Xml.XPath.XPathParser/ParamInfo> s_functionTable
    static ::System::Collections::Generic::Dictionary_2<::StringW, ::MS::Internal::Xml::XPath::XPathParser::ParamInfo*>* _get_s_functionTable();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.String,MS.Internal.Xml.XPath.XPathParser/ParamInfo> s_functionTable
    static void _set_s_functionTable(::System::Collections::Generic::Dictionary_2<::StringW, ::MS::Internal::Xml::XPath::XPathParser::ParamInfo*>* value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.String,MS.Internal.Xml.XPath.Axis/AxisType> s_AxesTable
    static ::System::Collections::Generic::Dictionary_2<::StringW, ::MS::Internal::Xml::XPath::Axis::AxisType>* _get_s_AxesTable();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.String,MS.Internal.Xml.XPath.Axis/AxisType> s_AxesTable
    static void _set_s_AxesTable(::System::Collections::Generic::Dictionary_2<::StringW, ::MS::Internal::Xml::XPath::Axis::AxisType>* value);
    // Get instance field reference: private MS.Internal.Xml.XPath.XPathScanner _scanner
    [[deprecated("Use field access instead!")]] ::MS::Internal::Xml::XPath::XPathScanner*& dyn__scanner();
    // Get instance field reference: private System.Int32 _parseDepth
    [[deprecated("Use field access instead!")]] int& dyn__parseDepth();
    // private System.Void .ctor(MS.Internal.Xml.XPath.XPathScanner scanner)
    // Offset: 0x4DDE068
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XPathParser* New_ctor(::MS::Internal::Xml::XPath::XPathScanner* scanner) {
      static auto ___internal__logger = ::Logger::get().WithContext("::MS::Internal::Xml::XPath::XPathParser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XPathParser*, creationType>(scanner)));
    }
    // static public MS.Internal.Xml.XPath.AstNode ParseXPathExpression(System.String xpathExpression)
    // Offset: 0x4DDE098
    static ::MS::Internal::Xml::XPath::AstNode* ParseXPathExpression(::StringW xpathExpression);
    // private MS.Internal.Xml.XPath.AstNode ParseExpression(MS.Internal.Xml.XPath.AstNode qyInput)
    // Offset: 0x4DDE240
    ::MS::Internal::Xml::XPath::AstNode* ParseExpression(::MS::Internal::Xml::XPath::AstNode* qyInput);
    // private MS.Internal.Xml.XPath.AstNode ParseOrExpr(MS.Internal.Xml.XPath.AstNode qyInput)
    // Offset: 0x4DDE2A4
    ::MS::Internal::Xml::XPath::AstNode* ParseOrExpr(::MS::Internal::Xml::XPath::AstNode* qyInput);
    // private MS.Internal.Xml.XPath.AstNode ParseAndExpr(MS.Internal.Xml.XPath.AstNode qyInput)
    // Offset: 0x4DDE388
    ::MS::Internal::Xml::XPath::AstNode* ParseAndExpr(::MS::Internal::Xml::XPath::AstNode* qyInput);
    // private MS.Internal.Xml.XPath.AstNode ParseEqualityExpr(MS.Internal.Xml.XPath.AstNode qyInput)
    // Offset: 0x4DDE4D0
    ::MS::Internal::Xml::XPath::AstNode* ParseEqualityExpr(::MS::Internal::Xml::XPath::AstNode* qyInput);
    // private MS.Internal.Xml.XPath.AstNode ParseRelationalExpr(MS.Internal.Xml.XPath.AstNode qyInput)
    // Offset: 0x4DDE5A8
    ::MS::Internal::Xml::XPath::AstNode* ParseRelationalExpr(::MS::Internal::Xml::XPath::AstNode* qyInput);
    // private MS.Internal.Xml.XPath.AstNode ParseAdditiveExpr(MS.Internal.Xml.XPath.AstNode qyInput)
    // Offset: 0x4DDE6A8
    ::MS::Internal::Xml::XPath::AstNode* ParseAdditiveExpr(::MS::Internal::Xml::XPath::AstNode* qyInput);
    // private MS.Internal.Xml.XPath.AstNode ParseMultiplicativeExpr(MS.Internal.Xml.XPath.AstNode qyInput)
    // Offset: 0x4DDE780
    ::MS::Internal::Xml::XPath::AstNode* ParseMultiplicativeExpr(::MS::Internal::Xml::XPath::AstNode* qyInput);
    // private MS.Internal.Xml.XPath.AstNode ParseUnaryExpr(MS.Internal.Xml.XPath.AstNode qyInput)
    // Offset: 0x4DDE8AC
    ::MS::Internal::Xml::XPath::AstNode* ParseUnaryExpr(::MS::Internal::Xml::XPath::AstNode* qyInput);
    // private MS.Internal.Xml.XPath.AstNode ParseUnionExpr(MS.Internal.Xml.XPath.AstNode qyInput)
    // Offset: 0x4DDE97C
    ::MS::Internal::Xml::XPath::AstNode* ParseUnionExpr(::MS::Internal::Xml::XPath::AstNode* qyInput);
    // static private System.Boolean IsNodeType(MS.Internal.Xml.XPath.XPathScanner scaner)
    // Offset: 0x4DDEBF0
    static bool IsNodeType(::MS::Internal::Xml::XPath::XPathScanner* scaner);
    // private MS.Internal.Xml.XPath.AstNode ParsePathExpr(MS.Internal.Xml.XPath.AstNode qyInput)
    // Offset: 0x4DDEA7C
    ::MS::Internal::Xml::XPath::AstNode* ParsePathExpr(::MS::Internal::Xml::XPath::AstNode* qyInput);
    // private MS.Internal.Xml.XPath.AstNode ParseFilterExpr(MS.Internal.Xml.XPath.AstNode qyInput)
    // Offset: 0x4DDED94
    ::MS::Internal::Xml::XPath::AstNode* ParseFilterExpr(::MS::Internal::Xml::XPath::AstNode* qyInput);
    // private MS.Internal.Xml.XPath.AstNode ParsePredicate(MS.Internal.Xml.XPath.AstNode qyInput)
    // Offset: 0x4DDF26C
    ::MS::Internal::Xml::XPath::AstNode* ParsePredicate(::MS::Internal::Xml::XPath::AstNode* qyInput);
    // private MS.Internal.Xml.XPath.AstNode ParseLocationPath(MS.Internal.Xml.XPath.AstNode qyInput)
    // Offset: 0x4DDEF0C
    ::MS::Internal::Xml::XPath::AstNode* ParseLocationPath(::MS::Internal::Xml::XPath::AstNode* qyInput);
    // private MS.Internal.Xml.XPath.AstNode ParseRelativeLocationPath(MS.Internal.Xml.XPath.AstNode qyInput)
    // Offset: 0x4DDEE44
    ::MS::Internal::Xml::XPath::AstNode* ParseRelativeLocationPath(::MS::Internal::Xml::XPath::AstNode* qyInput);
    // static private System.Boolean IsStep(MS.Internal.Xml.XPath.XPathScanner/LexKind lexKind)
    // Offset: 0x4DDF2F8
    static bool IsStep(::MS::Internal::Xml::XPath::XPathScanner::LexKind lexKind);
    // private MS.Internal.Xml.XPath.AstNode ParseStep(MS.Internal.Xml.XPath.AstNode qyInput)
    // Offset: 0x4DDF33C
    ::MS::Internal::Xml::XPath::AstNode* ParseStep(::MS::Internal::Xml::XPath::AstNode* qyInput);
    // private MS.Internal.Xml.XPath.AstNode ParseNodeTest(MS.Internal.Xml.XPath.AstNode qyInput, MS.Internal.Xml.XPath.Axis/AxisType axisType, System.Xml.XPath.XPathNodeType nodeType)
    // Offset: 0x4DDF58C
    ::MS::Internal::Xml::XPath::AstNode* ParseNodeTest(::MS::Internal::Xml::XPath::AstNode* qyInput, ::MS::Internal::Xml::XPath::Axis::AxisType axisType, ::System::Xml::XPath::XPathNodeType nodeType);
    // static private System.Boolean IsPrimaryExpr(MS.Internal.Xml.XPath.XPathScanner scanner)
    // Offset: 0x4DDECE4
    static bool IsPrimaryExpr(::MS::Internal::Xml::XPath::XPathScanner* scanner);
    // private MS.Internal.Xml.XPath.AstNode ParsePrimaryExpr(MS.Internal.Xml.XPath.AstNode qyInput)
    // Offset: 0x4DDF04C
    ::MS::Internal::Xml::XPath::AstNode* ParsePrimaryExpr(::MS::Internal::Xml::XPath::AstNode* qyInput);
    // private MS.Internal.Xml.XPath.AstNode ParseMethod(MS.Internal.Xml.XPath.AstNode qyInput)
    // Offset: 0x4DDF8F4
    ::MS::Internal::Xml::XPath::AstNode* ParseMethod(::MS::Internal::Xml::XPath::AstNode* qyInput);
    // private System.Void CheckToken(MS.Internal.Xml.XPath.XPathScanner/LexKind t)
    // Offset: 0x4DDF890
    void CheckToken(::MS::Internal::Xml::XPath::XPathScanner::LexKind t);
    // private System.Void PassToken(MS.Internal.Xml.XPath.XPathScanner/LexKind t)
    // Offset: 0x4DDF2D8
    void PassToken(::MS::Internal::Xml::XPath::XPathScanner::LexKind t);
    // private System.Void NextLex()
    // Offset: 0x4DDE4B8
    void NextLex();
    // private System.Boolean TestOp(System.String op)
    // Offset: 0x4DDE46C
    bool TestOp(::StringW op);
    // private System.Void CheckNodeSet(System.Xml.XPath.XPathResultType t)
    // Offset: 0x4DDEB94
    void CheckNodeSet(::System::Xml::XPath::XPathResultType t);
    // static private System.Collections.Generic.Dictionary`2<System.String,MS.Internal.Xml.XPath.XPathParser/ParamInfo> CreateFunctionTable()
    // Offset: 0x4DE0254
    static ::System::Collections::Generic::Dictionary_2<::StringW, ::MS::Internal::Xml::XPath::XPathParser::ParamInfo*>* CreateFunctionTable();
    // static private System.Collections.Generic.Dictionary`2<System.String,MS.Internal.Xml.XPath.Axis/AxisType> CreateAxesTable()
    // Offset: 0x4DE0E80
    static ::System::Collections::Generic::Dictionary_2<::StringW, ::MS::Internal::Xml::XPath::Axis::AxisType>* CreateAxesTable();
    // private MS.Internal.Xml.XPath.Axis/AxisType GetAxis()
    // Offset: 0x4DDF4A4
    ::MS::Internal::Xml::XPath::Axis::AxisType GetAxis();
    // static private System.Void .cctor()
    // Offset: 0x4DE1130
    static void _cctor();
  }; // MS.Internal.Xml.XPath.XPathParser
  #pragma pack(pop)
  static check_size<sizeof(XPathParser), 24 + sizeof(int)> __MS_Internal_Xml_XPath_XPathParserSizeCheck;
  static_assert(sizeof(XPathParser) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::XPathParser::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::XPathParser::ParseXPathExpression
// Il2CppName: ParseXPathExpression
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MS::Internal::Xml::XPath::AstNode* (*)(::StringW)>(&MS::Internal::Xml::XPath::XPathParser::ParseXPathExpression)> {
  static const MethodInfo* get() {
    static auto* xpathExpression = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::XPath::XPathParser*), "ParseXPathExpression", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xpathExpression});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::XPathParser::ParseExpression
// Il2CppName: ParseExpression
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MS::Internal::Xml::XPath::AstNode* (MS::Internal::Xml::XPath::XPathParser::*)(::MS::Internal::Xml::XPath::AstNode*)>(&MS::Internal::Xml::XPath::XPathParser::ParseExpression)> {
  static const MethodInfo* get() {
    static auto* qyInput = &::il2cpp_utils::GetClassFromName("MS.Internal.Xml.XPath", "AstNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::XPath::XPathParser*), "ParseExpression", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{qyInput});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::XPathParser::ParseOrExpr
// Il2CppName: ParseOrExpr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MS::Internal::Xml::XPath::AstNode* (MS::Internal::Xml::XPath::XPathParser::*)(::MS::Internal::Xml::XPath::AstNode*)>(&MS::Internal::Xml::XPath::XPathParser::ParseOrExpr)> {
  static const MethodInfo* get() {
    static auto* qyInput = &::il2cpp_utils::GetClassFromName("MS.Internal.Xml.XPath", "AstNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::XPath::XPathParser*), "ParseOrExpr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{qyInput});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::XPathParser::ParseAndExpr
// Il2CppName: ParseAndExpr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MS::Internal::Xml::XPath::AstNode* (MS::Internal::Xml::XPath::XPathParser::*)(::MS::Internal::Xml::XPath::AstNode*)>(&MS::Internal::Xml::XPath::XPathParser::ParseAndExpr)> {
  static const MethodInfo* get() {
    static auto* qyInput = &::il2cpp_utils::GetClassFromName("MS.Internal.Xml.XPath", "AstNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::XPath::XPathParser*), "ParseAndExpr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{qyInput});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::XPathParser::ParseEqualityExpr
// Il2CppName: ParseEqualityExpr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MS::Internal::Xml::XPath::AstNode* (MS::Internal::Xml::XPath::XPathParser::*)(::MS::Internal::Xml::XPath::AstNode*)>(&MS::Internal::Xml::XPath::XPathParser::ParseEqualityExpr)> {
  static const MethodInfo* get() {
    static auto* qyInput = &::il2cpp_utils::GetClassFromName("MS.Internal.Xml.XPath", "AstNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::XPath::XPathParser*), "ParseEqualityExpr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{qyInput});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::XPathParser::ParseRelationalExpr
// Il2CppName: ParseRelationalExpr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MS::Internal::Xml::XPath::AstNode* (MS::Internal::Xml::XPath::XPathParser::*)(::MS::Internal::Xml::XPath::AstNode*)>(&MS::Internal::Xml::XPath::XPathParser::ParseRelationalExpr)> {
  static const MethodInfo* get() {
    static auto* qyInput = &::il2cpp_utils::GetClassFromName("MS.Internal.Xml.XPath", "AstNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::XPath::XPathParser*), "ParseRelationalExpr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{qyInput});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::XPathParser::ParseAdditiveExpr
// Il2CppName: ParseAdditiveExpr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MS::Internal::Xml::XPath::AstNode* (MS::Internal::Xml::XPath::XPathParser::*)(::MS::Internal::Xml::XPath::AstNode*)>(&MS::Internal::Xml::XPath::XPathParser::ParseAdditiveExpr)> {
  static const MethodInfo* get() {
    static auto* qyInput = &::il2cpp_utils::GetClassFromName("MS.Internal.Xml.XPath", "AstNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::XPath::XPathParser*), "ParseAdditiveExpr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{qyInput});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::XPathParser::ParseMultiplicativeExpr
// Il2CppName: ParseMultiplicativeExpr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MS::Internal::Xml::XPath::AstNode* (MS::Internal::Xml::XPath::XPathParser::*)(::MS::Internal::Xml::XPath::AstNode*)>(&MS::Internal::Xml::XPath::XPathParser::ParseMultiplicativeExpr)> {
  static const MethodInfo* get() {
    static auto* qyInput = &::il2cpp_utils::GetClassFromName("MS.Internal.Xml.XPath", "AstNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::XPath::XPathParser*), "ParseMultiplicativeExpr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{qyInput});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::XPathParser::ParseUnaryExpr
// Il2CppName: ParseUnaryExpr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MS::Internal::Xml::XPath::AstNode* (MS::Internal::Xml::XPath::XPathParser::*)(::MS::Internal::Xml::XPath::AstNode*)>(&MS::Internal::Xml::XPath::XPathParser::ParseUnaryExpr)> {
  static const MethodInfo* get() {
    static auto* qyInput = &::il2cpp_utils::GetClassFromName("MS.Internal.Xml.XPath", "AstNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::XPath::XPathParser*), "ParseUnaryExpr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{qyInput});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::XPathParser::ParseUnionExpr
// Il2CppName: ParseUnionExpr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MS::Internal::Xml::XPath::AstNode* (MS::Internal::Xml::XPath::XPathParser::*)(::MS::Internal::Xml::XPath::AstNode*)>(&MS::Internal::Xml::XPath::XPathParser::ParseUnionExpr)> {
  static const MethodInfo* get() {
    static auto* qyInput = &::il2cpp_utils::GetClassFromName("MS.Internal.Xml.XPath", "AstNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::XPath::XPathParser*), "ParseUnionExpr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{qyInput});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::XPathParser::IsNodeType
// Il2CppName: IsNodeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::MS::Internal::Xml::XPath::XPathScanner*)>(&MS::Internal::Xml::XPath::XPathParser::IsNodeType)> {
  static const MethodInfo* get() {
    static auto* scaner = &::il2cpp_utils::GetClassFromName("MS.Internal.Xml.XPath", "XPathScanner")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::XPath::XPathParser*), "IsNodeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scaner});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::XPathParser::ParsePathExpr
// Il2CppName: ParsePathExpr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MS::Internal::Xml::XPath::AstNode* (MS::Internal::Xml::XPath::XPathParser::*)(::MS::Internal::Xml::XPath::AstNode*)>(&MS::Internal::Xml::XPath::XPathParser::ParsePathExpr)> {
  static const MethodInfo* get() {
    static auto* qyInput = &::il2cpp_utils::GetClassFromName("MS.Internal.Xml.XPath", "AstNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::XPath::XPathParser*), "ParsePathExpr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{qyInput});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::XPathParser::ParseFilterExpr
// Il2CppName: ParseFilterExpr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MS::Internal::Xml::XPath::AstNode* (MS::Internal::Xml::XPath::XPathParser::*)(::MS::Internal::Xml::XPath::AstNode*)>(&MS::Internal::Xml::XPath::XPathParser::ParseFilterExpr)> {
  static const MethodInfo* get() {
    static auto* qyInput = &::il2cpp_utils::GetClassFromName("MS.Internal.Xml.XPath", "AstNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::XPath::XPathParser*), "ParseFilterExpr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{qyInput});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::XPathParser::ParsePredicate
// Il2CppName: ParsePredicate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MS::Internal::Xml::XPath::AstNode* (MS::Internal::Xml::XPath::XPathParser::*)(::MS::Internal::Xml::XPath::AstNode*)>(&MS::Internal::Xml::XPath::XPathParser::ParsePredicate)> {
  static const MethodInfo* get() {
    static auto* qyInput = &::il2cpp_utils::GetClassFromName("MS.Internal.Xml.XPath", "AstNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::XPath::XPathParser*), "ParsePredicate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{qyInput});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::XPathParser::ParseLocationPath
// Il2CppName: ParseLocationPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MS::Internal::Xml::XPath::AstNode* (MS::Internal::Xml::XPath::XPathParser::*)(::MS::Internal::Xml::XPath::AstNode*)>(&MS::Internal::Xml::XPath::XPathParser::ParseLocationPath)> {
  static const MethodInfo* get() {
    static auto* qyInput = &::il2cpp_utils::GetClassFromName("MS.Internal.Xml.XPath", "AstNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::XPath::XPathParser*), "ParseLocationPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{qyInput});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::XPathParser::ParseRelativeLocationPath
// Il2CppName: ParseRelativeLocationPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MS::Internal::Xml::XPath::AstNode* (MS::Internal::Xml::XPath::XPathParser::*)(::MS::Internal::Xml::XPath::AstNode*)>(&MS::Internal::Xml::XPath::XPathParser::ParseRelativeLocationPath)> {
  static const MethodInfo* get() {
    static auto* qyInput = &::il2cpp_utils::GetClassFromName("MS.Internal.Xml.XPath", "AstNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::XPath::XPathParser*), "ParseRelativeLocationPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{qyInput});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::XPathParser::IsStep
// Il2CppName: IsStep
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::MS::Internal::Xml::XPath::XPathScanner::LexKind)>(&MS::Internal::Xml::XPath::XPathParser::IsStep)> {
  static const MethodInfo* get() {
    static auto* lexKind = &::il2cpp_utils::GetClassFromName("MS.Internal.Xml.XPath", "XPathScanner/LexKind")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::XPath::XPathParser*), "IsStep", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lexKind});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::XPathParser::ParseStep
// Il2CppName: ParseStep
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MS::Internal::Xml::XPath::AstNode* (MS::Internal::Xml::XPath::XPathParser::*)(::MS::Internal::Xml::XPath::AstNode*)>(&MS::Internal::Xml::XPath::XPathParser::ParseStep)> {
  static const MethodInfo* get() {
    static auto* qyInput = &::il2cpp_utils::GetClassFromName("MS.Internal.Xml.XPath", "AstNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::XPath::XPathParser*), "ParseStep", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{qyInput});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::XPathParser::ParseNodeTest
// Il2CppName: ParseNodeTest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MS::Internal::Xml::XPath::AstNode* (MS::Internal::Xml::XPath::XPathParser::*)(::MS::Internal::Xml::XPath::AstNode*, ::MS::Internal::Xml::XPath::Axis::AxisType, ::System::Xml::XPath::XPathNodeType)>(&MS::Internal::Xml::XPath::XPathParser::ParseNodeTest)> {
  static const MethodInfo* get() {
    static auto* qyInput = &::il2cpp_utils::GetClassFromName("MS.Internal.Xml.XPath", "AstNode")->byval_arg;
    static auto* axisType = &::il2cpp_utils::GetClassFromName("MS.Internal.Xml.XPath", "Axis/AxisType")->byval_arg;
    static auto* nodeType = &::il2cpp_utils::GetClassFromName("System.Xml.XPath", "XPathNodeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::XPath::XPathParser*), "ParseNodeTest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{qyInput, axisType, nodeType});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::XPathParser::IsPrimaryExpr
// Il2CppName: IsPrimaryExpr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::MS::Internal::Xml::XPath::XPathScanner*)>(&MS::Internal::Xml::XPath::XPathParser::IsPrimaryExpr)> {
  static const MethodInfo* get() {
    static auto* scanner = &::il2cpp_utils::GetClassFromName("MS.Internal.Xml.XPath", "XPathScanner")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::XPath::XPathParser*), "IsPrimaryExpr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scanner});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::XPathParser::ParsePrimaryExpr
// Il2CppName: ParsePrimaryExpr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MS::Internal::Xml::XPath::AstNode* (MS::Internal::Xml::XPath::XPathParser::*)(::MS::Internal::Xml::XPath::AstNode*)>(&MS::Internal::Xml::XPath::XPathParser::ParsePrimaryExpr)> {
  static const MethodInfo* get() {
    static auto* qyInput = &::il2cpp_utils::GetClassFromName("MS.Internal.Xml.XPath", "AstNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::XPath::XPathParser*), "ParsePrimaryExpr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{qyInput});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::XPathParser::ParseMethod
// Il2CppName: ParseMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MS::Internal::Xml::XPath::AstNode* (MS::Internal::Xml::XPath::XPathParser::*)(::MS::Internal::Xml::XPath::AstNode*)>(&MS::Internal::Xml::XPath::XPathParser::ParseMethod)> {
  static const MethodInfo* get() {
    static auto* qyInput = &::il2cpp_utils::GetClassFromName("MS.Internal.Xml.XPath", "AstNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::XPath::XPathParser*), "ParseMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{qyInput});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::XPathParser::CheckToken
// Il2CppName: CheckToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MS::Internal::Xml::XPath::XPathParser::*)(::MS::Internal::Xml::XPath::XPathScanner::LexKind)>(&MS::Internal::Xml::XPath::XPathParser::CheckToken)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("MS.Internal.Xml.XPath", "XPathScanner/LexKind")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::XPath::XPathParser*), "CheckToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::XPathParser::PassToken
// Il2CppName: PassToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MS::Internal::Xml::XPath::XPathParser::*)(::MS::Internal::Xml::XPath::XPathScanner::LexKind)>(&MS::Internal::Xml::XPath::XPathParser::PassToken)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("MS.Internal.Xml.XPath", "XPathScanner/LexKind")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::XPath::XPathParser*), "PassToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::XPathParser::NextLex
// Il2CppName: NextLex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MS::Internal::Xml::XPath::XPathParser::*)()>(&MS::Internal::Xml::XPath::XPathParser::NextLex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::XPath::XPathParser*), "NextLex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::XPathParser::TestOp
// Il2CppName: TestOp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (MS::Internal::Xml::XPath::XPathParser::*)(::StringW)>(&MS::Internal::Xml::XPath::XPathParser::TestOp)> {
  static const MethodInfo* get() {
    static auto* op = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::XPath::XPathParser*), "TestOp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{op});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::XPathParser::CheckNodeSet
// Il2CppName: CheckNodeSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MS::Internal::Xml::XPath::XPathParser::*)(::System::Xml::XPath::XPathResultType)>(&MS::Internal::Xml::XPath::XPathParser::CheckNodeSet)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System.Xml.XPath", "XPathResultType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::XPath::XPathParser*), "CheckNodeSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::XPathParser::CreateFunctionTable
// Il2CppName: CreateFunctionTable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::MS::Internal::Xml::XPath::XPathParser::ParamInfo*>* (*)()>(&MS::Internal::Xml::XPath::XPathParser::CreateFunctionTable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::XPath::XPathParser*), "CreateFunctionTable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::XPathParser::CreateAxesTable
// Il2CppName: CreateAxesTable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::MS::Internal::Xml::XPath::Axis::AxisType>* (*)()>(&MS::Internal::Xml::XPath::XPathParser::CreateAxesTable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::XPath::XPathParser*), "CreateAxesTable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::XPathParser::GetAxis
// Il2CppName: GetAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MS::Internal::Xml::XPath::Axis::AxisType (MS::Internal::Xml::XPath::XPathParser::*)()>(&MS::Internal::Xml::XPath::XPathParser::GetAxis)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::XPath::XPathParser*), "GetAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MS::Internal::Xml::XPath::XPathParser::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&MS::Internal::Xml::XPath::XPathParser::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MS::Internal::Xml::XPath::XPathParser*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
