// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Data.Tokens
#include "System/Data/Tokens.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Data
namespace System::Data {
  // Forward declaring type: FunctionId
  struct FunctionId;
  // Forward declaring type: OperatorInfo
  class OperatorInfo;
  // Forward declaring type: DataTable
  class DataTable;
  // Forward declaring type: ExpressionNode
  class ExpressionNode;
}
// Completed forward declares
// Type namespace: System.Data
namespace System::Data {
  // Forward declaring type: ExpressionParser
  class ExpressionParser;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Data::ExpressionParser);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::ExpressionParser*, "System.Data", "ExpressionParser");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.ExpressionParser
  // [TokenAttribute] Offset: FFFFFFFF
  class ExpressionParser : public ::Il2CppObject {
    public:
    // Nested type: ::System::Data::ExpressionParser::ReservedWords
    struct ReservedWords;
    // Size: 0x10
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: System.Data.ExpressionParser/ReservedWords
    // [TokenAttribute] Offset: FFFFFFFF
    // [IsReadOnlyAttribute] Offset: FFFFFFFF
    struct ReservedWords/*, public ::System::ValueType*/ {
      public:
      public:
      // readonly System.String _word
      // Size: 0x8
      // Offset: 0x0
      ::StringW word;
      // Field size check
      static_assert(sizeof(::StringW) == 0x8);
      // readonly System.Data.Tokens _token
      // Size: 0x4
      // Offset: 0x8
      ::System::Data::Tokens token;
      // Field size check
      static_assert(sizeof(::System::Data::Tokens) == 0x4);
      // readonly System.Int32 _op
      // Size: 0x4
      // Offset: 0xC
      int op;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: ReservedWords
      constexpr ReservedWords(::StringW word_ = {}, ::System::Data::Tokens token_ = {}, int op_ = {}) noexcept : word{word_}, token{token_}, op{op_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: readonly System.String _word
      [[deprecated("Use field access instead!")]] ::StringW& dyn__word();
      // Get instance field reference: readonly System.Data.Tokens _token
      [[deprecated("Use field access instead!")]] ::System::Data::Tokens& dyn__token();
      // Get instance field reference: readonly System.Int32 _op
      [[deprecated("Use field access instead!")]] int& dyn__op();
      // System.Void .ctor(System.String word, System.Data.Tokens token, System.Int32 op)
      // Offset: 0x4C63248
      // ABORTED: conflicts with another method.  ReservedWords(::StringW word, ::System::Data::Tokens token, int op);
    }; // System.Data.ExpressionParser/ReservedWords
    #pragma pack(pop)
    static check_size<sizeof(ExpressionParser::ReservedWords), 12 + sizeof(int)> __System_Data_ExpressionParser_ReservedWordsSizeCheck;
    static_assert(sizeof(ExpressionParser::ReservedWords) == 0x10);
    public:
    // private System.Char _escape
    // Size: 0x2
    // Offset: 0x10
    ::Il2CppChar escape;
    // Field size check
    static_assert(sizeof(::Il2CppChar) == 0x2);
    // private System.Char _decimalSeparator
    // Size: 0x2
    // Offset: 0x12
    ::Il2CppChar decimalSeparator;
    // Field size check
    static_assert(sizeof(::Il2CppChar) == 0x2);
    // private System.Char _listSeparator
    // Size: 0x2
    // Offset: 0x14
    ::Il2CppChar listSeparator;
    // Field size check
    static_assert(sizeof(::Il2CppChar) == 0x2);
    // private System.Char _exponentL
    // Size: 0x2
    // Offset: 0x16
    ::Il2CppChar exponentL;
    // Field size check
    static_assert(sizeof(::Il2CppChar) == 0x2);
    // private System.Char _exponentU
    // Size: 0x2
    // Offset: 0x18
    ::Il2CppChar exponentU;
    // Field size check
    static_assert(sizeof(::Il2CppChar) == 0x2);
    // Padding between fields: exponentU and: text
    char __padding4[0x6] = {};
    // System.Char[] _text
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::Il2CppChar> text;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppChar>) == 0x8);
    // System.Int32 _pos
    // Size: 0x4
    // Offset: 0x28
    int pos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 _start
    // Size: 0x4
    // Offset: 0x2C
    int start;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Data.Tokens _token
    // Size: 0x4
    // Offset: 0x30
    ::System::Data::Tokens token;
    // Field size check
    static_assert(sizeof(::System::Data::Tokens) == 0x4);
    // System.Int32 _op
    // Size: 0x4
    // Offset: 0x34
    int op;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Data.OperatorInfo[] _ops
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::System::Data::OperatorInfo*> ops;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Data::OperatorInfo*>) == 0x8);
    // System.Int32 _topOperator
    // Size: 0x4
    // Offset: 0x40
    int topOperator;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 _topNode
    // Size: 0x4
    // Offset: 0x44
    int topNode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Data.DataTable _table
    // Size: 0x8
    // Offset: 0x48
    ::System::Data::DataTable* table;
    // Field size check
    static_assert(sizeof(::System::Data::DataTable*) == 0x8);
    // System.Data.ExpressionNode[] _nodeStack
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<::System::Data::ExpressionNode*> nodeStack;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Data::ExpressionNode*>) == 0x8);
    // System.Int32 _prevOperand
    // Size: 0x4
    // Offset: 0x58
    int prevOperand;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: prevOperand and: expression
    char __padding15[0x4] = {};
    // System.Data.ExpressionNode _expression
    // Size: 0x8
    // Offset: 0x60
    ::System::Data::ExpressionNode* expression;
    // Field size check
    static_assert(sizeof(::System::Data::ExpressionNode*) == 0x8);
    public:
    // Get static field: static private readonly System.Data.ExpressionParser/ReservedWords[] s_reservedwords
    static ::ArrayW<::System::Data::ExpressionParser::ReservedWords> _get_s_reservedwords();
    // Set static field: static private readonly System.Data.ExpressionParser/ReservedWords[] s_reservedwords
    static void _set_s_reservedwords(::ArrayW<::System::Data::ExpressionParser::ReservedWords> value);
    // Get instance field reference: private System.Char _escape
    [[deprecated("Use field access instead!")]] ::Il2CppChar& dyn__escape();
    // Get instance field reference: private System.Char _decimalSeparator
    [[deprecated("Use field access instead!")]] ::Il2CppChar& dyn__decimalSeparator();
    // Get instance field reference: private System.Char _listSeparator
    [[deprecated("Use field access instead!")]] ::Il2CppChar& dyn__listSeparator();
    // Get instance field reference: private System.Char _exponentL
    [[deprecated("Use field access instead!")]] ::Il2CppChar& dyn__exponentL();
    // Get instance field reference: private System.Char _exponentU
    [[deprecated("Use field access instead!")]] ::Il2CppChar& dyn__exponentU();
    // Get instance field reference: System.Char[] _text
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppChar>& dyn__text();
    // Get instance field reference: System.Int32 _pos
    [[deprecated("Use field access instead!")]] int& dyn__pos();
    // Get instance field reference: System.Int32 _start
    [[deprecated("Use field access instead!")]] int& dyn__start();
    // Get instance field reference: System.Data.Tokens _token
    [[deprecated("Use field access instead!")]] ::System::Data::Tokens& dyn__token();
    // Get instance field reference: System.Int32 _op
    [[deprecated("Use field access instead!")]] int& dyn__op();
    // Get instance field reference: System.Data.OperatorInfo[] _ops
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Data::OperatorInfo*>& dyn__ops();
    // Get instance field reference: System.Int32 _topOperator
    [[deprecated("Use field access instead!")]] int& dyn__topOperator();
    // Get instance field reference: System.Int32 _topNode
    [[deprecated("Use field access instead!")]] int& dyn__topNode();
    // Get instance field reference: private readonly System.Data.DataTable _table
    [[deprecated("Use field access instead!")]] ::System::Data::DataTable*& dyn__table();
    // Get instance field reference: System.Data.ExpressionNode[] _nodeStack
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Data::ExpressionNode*>& dyn__nodeStack();
    // Get instance field reference: System.Int32 _prevOperand
    [[deprecated("Use field access instead!")]] int& dyn__prevOperand();
    // Get instance field reference: System.Data.ExpressionNode _expression
    [[deprecated("Use field access instead!")]] ::System::Data::ExpressionNode*& dyn__expression();
    // System.Void .ctor(System.Data.DataTable table)
    // Offset: 0x4C5FBCC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExpressionParser* New_ctor(::System::Data::DataTable* table) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::ExpressionParser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExpressionParser*, creationType>(table)));
    }
    // System.Void LoadExpression(System.String data)
    // Offset: 0x4C5FC90
    void LoadExpression(::StringW data);
    // System.Void StartScan()
    // Offset: 0x4C61170
    void StartScan();
    // System.Data.ExpressionNode Parse()
    // Offset: 0x4C5FE04
    ::System::Data::ExpressionNode* Parse();
    // private System.Data.ExpressionNode ParseAggregateArgument(System.Data.FunctionId aggregate)
    // Offset: 0x4C61D08
    ::System::Data::ExpressionNode* ParseAggregateArgument(::System::Data::FunctionId aggregate);
    // private System.Data.ExpressionNode NodePop()
    // Offset: 0x4C61C30
    ::System::Data::ExpressionNode* NodePop();
    // private System.Data.ExpressionNode NodePeek()
    // Offset: 0x4C61BAC
    ::System::Data::ExpressionNode* NodePeek();
    // private System.Void NodePush(System.Data.ExpressionNode node)
    // Offset: 0x4C619CC
    void NodePush(::System::Data::ExpressionNode* node);
    // private System.Void BuildExpression(System.Int32 pri)
    // Offset: 0x4C61674
    void BuildExpression(int pri);
    // System.Void CheckToken(System.Data.Tokens token)
    // Offset: 0x4C61948
    void CheckToken(::System::Data::Tokens token);
    // System.Data.Tokens Scan()
    // Offset: 0x4C61244
    ::System::Data::Tokens Scan();
    // private System.Void ScanNumeric()
    // Offset: 0x4C628DC
    void ScanNumeric();
    // private System.Void ScanName()
    // Offset: 0x4C62C3C
    void ScanName();
    // private System.Void ScanName(System.Char chEnd, System.Char esc, System.String charsToEscape)
    // Offset: 0x4C627D0
    void ScanName(::Il2CppChar chEnd, ::Il2CppChar esc, ::StringW charsToEscape);
    // private System.Void ScanDate()
    // Offset: 0x4C62660
    void ScanDate();
    // private System.Void ScanBinaryConstant()
    // Offset: 0x4C62A08
    void ScanBinaryConstant();
    // private System.Void ScanReserved()
    // Offset: 0x4C62A20
    void ScanReserved();
    // private System.Void ScanString(System.Char escape)
    // Offset: 0x4C62700
    void ScanString(::Il2CppChar escape);
    // System.Void ScanToken(System.Data.Tokens token)
    // Offset: 0x4C61920
    void ScanToken(::System::Data::Tokens token);
    // private System.Void ScanWhite()
    // Offset: 0x4C62608
    void ScanWhite();
    // private System.Boolean IsWhiteSpace(System.Char ch)
    // Offset: 0x4C62DC0
    bool IsWhiteSpace(::Il2CppChar ch);
    // private System.Boolean IsAlphaNumeric(System.Char ch)
    // Offset: 0x4C62C00
    bool IsAlphaNumeric(::Il2CppChar ch);
    // private System.Boolean IsDigit(System.Char ch)
    // Offset: 0x4C62A0C
    bool IsDigit(::Il2CppChar ch);
    // private System.Boolean IsAlpha(System.Char ch)
    // Offset: 0x4C62D44
    bool IsAlpha(::Il2CppChar ch);
    // static private System.Void .cctor()
    // Offset: 0x4C62DD4
    static void _cctor();
  }; // System.Data.ExpressionParser
  #pragma pack(pop)
  static check_size<sizeof(ExpressionParser), 96 + sizeof(::System::Data::ExpressionNode*)> __System_Data_ExpressionParserSizeCheck;
  static_assert(sizeof(ExpressionParser) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Data::ExpressionParser::ReservedWords, "System.Data", "ExpressionParser/ReservedWords");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::ExpressionParser::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::ExpressionParser::LoadExpression
// Il2CppName: LoadExpression
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::ExpressionParser::*)(::StringW)>(&System::Data::ExpressionParser::LoadExpression)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ExpressionParser*), "LoadExpression", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: System::Data::ExpressionParser::StartScan
// Il2CppName: StartScan
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::ExpressionParser::*)()>(&System::Data::ExpressionParser::StartScan)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::ExpressionParser*), "StartScan", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::ExpressionParser::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::ExpressionNode* (System::Data::ExpressionParser::*)()>(&System::Data::ExpressionParser::Parse)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::ExpressionParser*), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::ExpressionParser::ParseAggregateArgument
// Il2CppName: ParseAggregateArgument
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::ExpressionNode* (System::Data::ExpressionParser::*)(::System::Data::FunctionId)>(&System::Data::ExpressionParser::ParseAggregateArgument)> {
  static const MethodInfo* get() {
    static auto* aggregate = &::il2cpp_utils::GetClassFromName("System.Data", "FunctionId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ExpressionParser*), "ParseAggregateArgument", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aggregate});
  }
};
// Writing MetadataGetter for method: System::Data::ExpressionParser::NodePop
// Il2CppName: NodePop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::ExpressionNode* (System::Data::ExpressionParser::*)()>(&System::Data::ExpressionParser::NodePop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::ExpressionParser*), "NodePop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::ExpressionParser::NodePeek
// Il2CppName: NodePeek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::ExpressionNode* (System::Data::ExpressionParser::*)()>(&System::Data::ExpressionParser::NodePeek)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::ExpressionParser*), "NodePeek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::ExpressionParser::NodePush
// Il2CppName: NodePush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::ExpressionParser::*)(::System::Data::ExpressionNode*)>(&System::Data::ExpressionParser::NodePush)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Data", "ExpressionNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ExpressionParser*), "NodePush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: System::Data::ExpressionParser::BuildExpression
// Il2CppName: BuildExpression
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::ExpressionParser::*)(int)>(&System::Data::ExpressionParser::BuildExpression)> {
  static const MethodInfo* get() {
    static auto* pri = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ExpressionParser*), "BuildExpression", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pri});
  }
};
// Writing MetadataGetter for method: System::Data::ExpressionParser::CheckToken
// Il2CppName: CheckToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::ExpressionParser::*)(::System::Data::Tokens)>(&System::Data::ExpressionParser::CheckToken)> {
  static const MethodInfo* get() {
    static auto* token = &::il2cpp_utils::GetClassFromName("System.Data", "Tokens")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ExpressionParser*), "CheckToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{token});
  }
};
// Writing MetadataGetter for method: System::Data::ExpressionParser::Scan
// Il2CppName: Scan
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::Tokens (System::Data::ExpressionParser::*)()>(&System::Data::ExpressionParser::Scan)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::ExpressionParser*), "Scan", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::ExpressionParser::ScanNumeric
// Il2CppName: ScanNumeric
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::ExpressionParser::*)()>(&System::Data::ExpressionParser::ScanNumeric)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::ExpressionParser*), "ScanNumeric", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::ExpressionParser::ScanName
// Il2CppName: ScanName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::ExpressionParser::*)()>(&System::Data::ExpressionParser::ScanName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::ExpressionParser*), "ScanName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::ExpressionParser::ScanName
// Il2CppName: ScanName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::ExpressionParser::*)(::Il2CppChar, ::Il2CppChar, ::StringW)>(&System::Data::ExpressionParser::ScanName)> {
  static const MethodInfo* get() {
    static auto* chEnd = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* esc = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* charsToEscape = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ExpressionParser*), "ScanName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chEnd, esc, charsToEscape});
  }
};
// Writing MetadataGetter for method: System::Data::ExpressionParser::ScanDate
// Il2CppName: ScanDate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::ExpressionParser::*)()>(&System::Data::ExpressionParser::ScanDate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::ExpressionParser*), "ScanDate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::ExpressionParser::ScanBinaryConstant
// Il2CppName: ScanBinaryConstant
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::ExpressionParser::*)()>(&System::Data::ExpressionParser::ScanBinaryConstant)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::ExpressionParser*), "ScanBinaryConstant", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::ExpressionParser::ScanReserved
// Il2CppName: ScanReserved
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::ExpressionParser::*)()>(&System::Data::ExpressionParser::ScanReserved)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::ExpressionParser*), "ScanReserved", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::ExpressionParser::ScanString
// Il2CppName: ScanString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::ExpressionParser::*)(::Il2CppChar)>(&System::Data::ExpressionParser::ScanString)> {
  static const MethodInfo* get() {
    static auto* escape = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ExpressionParser*), "ScanString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{escape});
  }
};
// Writing MetadataGetter for method: System::Data::ExpressionParser::ScanToken
// Il2CppName: ScanToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::ExpressionParser::*)(::System::Data::Tokens)>(&System::Data::ExpressionParser::ScanToken)> {
  static const MethodInfo* get() {
    static auto* token = &::il2cpp_utils::GetClassFromName("System.Data", "Tokens")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ExpressionParser*), "ScanToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{token});
  }
};
// Writing MetadataGetter for method: System::Data::ExpressionParser::ScanWhite
// Il2CppName: ScanWhite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::ExpressionParser::*)()>(&System::Data::ExpressionParser::ScanWhite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::ExpressionParser*), "ScanWhite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::ExpressionParser::IsWhiteSpace
// Il2CppName: IsWhiteSpace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::ExpressionParser::*)(::Il2CppChar)>(&System::Data::ExpressionParser::IsWhiteSpace)> {
  static const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ExpressionParser*), "IsWhiteSpace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch});
  }
};
// Writing MetadataGetter for method: System::Data::ExpressionParser::IsAlphaNumeric
// Il2CppName: IsAlphaNumeric
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::ExpressionParser::*)(::Il2CppChar)>(&System::Data::ExpressionParser::IsAlphaNumeric)> {
  static const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ExpressionParser*), "IsAlphaNumeric", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch});
  }
};
// Writing MetadataGetter for method: System::Data::ExpressionParser::IsDigit
// Il2CppName: IsDigit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::ExpressionParser::*)(::Il2CppChar)>(&System::Data::ExpressionParser::IsDigit)> {
  static const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ExpressionParser*), "IsDigit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch});
  }
};
// Writing MetadataGetter for method: System::Data::ExpressionParser::IsAlpha
// Il2CppName: IsAlpha
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::ExpressionParser::*)(::Il2CppChar)>(&System::Data::ExpressionParser::IsAlpha)> {
  static const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ExpressionParser*), "IsAlpha", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch});
  }
};
// Writing MetadataGetter for method: System::Data::ExpressionParser::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Data::ExpressionParser::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::ExpressionParser*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};