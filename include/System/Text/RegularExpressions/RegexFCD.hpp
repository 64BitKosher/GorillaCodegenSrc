// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Collections.Generic.ValueListBuilder`1
#include "System/Collections/Generic/ValueListBuilder_1_.hpp"
// Including type: System.Text.RegularExpressions.RegexPrefix
#include "System/Text/RegularExpressions/RegexPrefix.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: RegexFC
  class RegexFC;
  // Forward declaring type: RegexTree
  class RegexTree;
  // Forward declaring type: RegexNode
  class RegexNode;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Span`1 because it is already included!
  // Forward declaring type: Nullable`1<T>
  template<typename T>
  struct Nullable_1;
}
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: RegexFCD
  struct RegexFCD;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::RegexFCD, "System.Text.RegularExpressions", "RegexFCD");
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Text.RegularExpressions.RegexFCD
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsByRefLikeAttribute] Offset: FFFFFFFF
  // [ObsoleteAttribute] Offset: FFFFFFFF
  struct RegexFCD/*, public ::System::ValueType*/ {
    public:
    public:
    // private readonly System.Collections.Generic.List`1<System.Text.RegularExpressions.RegexFC> _fcStack
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexFC*>* fcStack;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexFC*>*) == 0x8);
    // private System.Collections.Generic.ValueListBuilder`1<System.Int32> _intStack
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Collections::Generic::ValueListBuilder_1_<int> intStack;
    // private System.Boolean _skipAllChildren
    // Size: 0x1
    // Offset: 0x28
    bool skipAllChildren;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _skipchild
    // Size: 0x1
    // Offset: 0x29
    bool skipchild;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _failed
    // Size: 0x1
    // Offset: 0x2A
    bool failed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: RegexFCD
    constexpr RegexFCD(::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexFC*>* fcStack_ = {}, ::System::Collections::Generic::ValueListBuilder_1_<int> intStack_ = {}, bool skipAllChildren_ = {}, bool skipchild_ = {}, bool failed_ = {}) noexcept : fcStack{fcStack_}, intStack{intStack_}, skipAllChildren{skipAllChildren_}, skipchild{skipchild_}, failed{failed_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private readonly System.Collections.Generic.List`1<System.Text.RegularExpressions.RegexFC> _fcStack
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexFC*>*& dyn__fcStack();
    // Get instance field reference: private System.Collections.Generic.ValueListBuilder`1<System.Int32> _intStack
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::ValueListBuilder_1_<int>& dyn__intStack();
    // Get instance field reference: private System.Boolean _skipAllChildren
    [[deprecated("Use field access instead!")]] bool& dyn__skipAllChildren();
    // Get instance field reference: private System.Boolean _skipchild
    [[deprecated("Use field access instead!")]] bool& dyn__skipchild();
    // Get instance field reference: private System.Boolean _failed
    [[deprecated("Use field access instead!")]] bool& dyn__failed();
    // private System.Void .ctor(System.Span`1<System.Int32> intStack)
    // Offset: 0x4F781D8
    RegexFCD(::System::Span_1<int> intStack);
    // static public System.Nullable`1<System.Text.RegularExpressions.RegexPrefix> FirstChars(System.Text.RegularExpressions.RegexTree t)
    // Offset: 0x4F782AC
    static ::System::Nullable_1<::System::Text::RegularExpressions::RegexPrefix> FirstChars(::System::Text::RegularExpressions::RegexTree* t);
    // static public System.Text.RegularExpressions.RegexPrefix Prefix(System.Text.RegularExpressions.RegexTree tree)
    // Offset: 0x4F78658
    static ::System::Text::RegularExpressions::RegexPrefix Prefix(::System::Text::RegularExpressions::RegexTree* tree);
    // static public System.Int32 Anchors(System.Text.RegularExpressions.RegexTree tree)
    // Offset: 0x4F78920
    static int Anchors(::System::Text::RegularExpressions::RegexTree* tree);
    // static private System.Int32 AnchorFromType(System.Int32 type)
    // Offset: 0x4F78A50
    static int AnchorFromType(int type);
    // private System.Void PushInt(System.Int32 i)
    // Offset: 0x4F78AC0
    void PushInt(int i);
    // private System.Boolean IntIsEmpty()
    // Offset: 0x4F78B74
    bool IntIsEmpty();
    // private System.Int32 PopInt()
    // Offset: 0x4F78BB8
    int PopInt();
    // private System.Void PushFC(System.Text.RegularExpressions.RegexFC fc)
    // Offset: 0x4F78C14
    void PushFC(::System::Text::RegularExpressions::RegexFC* fc);
    // private System.Boolean FCIsEmpty()
    // Offset: 0x4F78CC0
    bool FCIsEmpty();
    // private System.Text.RegularExpressions.RegexFC PopFC()
    // Offset: 0x4F78D10
    ::System::Text::RegularExpressions::RegexFC* PopFC();
    // private System.Text.RegularExpressions.RegexFC TopFC()
    // Offset: 0x4F78D8C
    ::System::Text::RegularExpressions::RegexFC* TopFC();
    // public System.Void Dispose()
    // Offset: 0x4F785B0
    void Dispose();
    // private System.Text.RegularExpressions.RegexFC RegexFCFromRegexTree(System.Text.RegularExpressions.RegexTree tree)
    // Offset: 0x4F78418
    ::System::Text::RegularExpressions::RegexFC* RegexFCFromRegexTree(::System::Text::RegularExpressions::RegexTree* tree);
    // private System.Void SkipChild()
    // Offset: 0x4F791EC
    void SkipChild();
    // private System.Void CalculateFC(System.Int32 NodeType, System.Text.RegularExpressions.RegexNode node, System.Int32 CurIndex)
    // Offset: 0x4F78DF0
    void CalculateFC(int NodeType, ::System::Text::RegularExpressions::RegexNode* node, int CurIndex);
  }; // System.Text.RegularExpressions.RegexFCD
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFCD::RegexFCD
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFCD::FirstChars
// Il2CppName: FirstChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::Text::RegularExpressions::RegexPrefix> (*)(::System::Text::RegularExpressions::RegexTree*)>(&System::Text::RegularExpressions::RegexFCD::FirstChars)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System.Text.RegularExpressions", "RegexTree")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexFCD), "FirstChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFCD::Prefix
// Il2CppName: Prefix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::RegularExpressions::RegexPrefix (*)(::System::Text::RegularExpressions::RegexTree*)>(&System::Text::RegularExpressions::RegexFCD::Prefix)> {
  static const MethodInfo* get() {
    static auto* tree = &::il2cpp_utils::GetClassFromName("System.Text.RegularExpressions", "RegexTree")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexFCD), "Prefix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tree});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFCD::Anchors
// Il2CppName: Anchors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::Text::RegularExpressions::RegexTree*)>(&System::Text::RegularExpressions::RegexFCD::Anchors)> {
  static const MethodInfo* get() {
    static auto* tree = &::il2cpp_utils::GetClassFromName("System.Text.RegularExpressions", "RegexTree")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexFCD), "Anchors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tree});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFCD::AnchorFromType
// Il2CppName: AnchorFromType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&System::Text::RegularExpressions::RegexFCD::AnchorFromType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexFCD), "AnchorFromType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFCD::PushInt
// Il2CppName: PushInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexFCD::*)(int)>(&System::Text::RegularExpressions::RegexFCD::PushInt)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexFCD), "PushInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFCD::IntIsEmpty
// Il2CppName: IntIsEmpty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::RegularExpressions::RegexFCD::*)()>(&System::Text::RegularExpressions::RegexFCD::IntIsEmpty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexFCD), "IntIsEmpty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFCD::PopInt
// Il2CppName: PopInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Text::RegularExpressions::RegexFCD::*)()>(&System::Text::RegularExpressions::RegexFCD::PopInt)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexFCD), "PopInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFCD::PushFC
// Il2CppName: PushFC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexFCD::*)(::System::Text::RegularExpressions::RegexFC*)>(&System::Text::RegularExpressions::RegexFCD::PushFC)> {
  static const MethodInfo* get() {
    static auto* fc = &::il2cpp_utils::GetClassFromName("System.Text.RegularExpressions", "RegexFC")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexFCD), "PushFC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fc});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFCD::FCIsEmpty
// Il2CppName: FCIsEmpty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::RegularExpressions::RegexFCD::*)()>(&System::Text::RegularExpressions::RegexFCD::FCIsEmpty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexFCD), "FCIsEmpty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFCD::PopFC
// Il2CppName: PopFC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::RegularExpressions::RegexFC* (System::Text::RegularExpressions::RegexFCD::*)()>(&System::Text::RegularExpressions::RegexFCD::PopFC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexFCD), "PopFC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFCD::TopFC
// Il2CppName: TopFC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::RegularExpressions::RegexFC* (System::Text::RegularExpressions::RegexFCD::*)()>(&System::Text::RegularExpressions::RegexFCD::TopFC)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexFCD), "TopFC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFCD::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexFCD::*)()>(&System::Text::RegularExpressions::RegexFCD::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexFCD), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFCD::RegexFCFromRegexTree
// Il2CppName: RegexFCFromRegexTree
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::RegularExpressions::RegexFC* (System::Text::RegularExpressions::RegexFCD::*)(::System::Text::RegularExpressions::RegexTree*)>(&System::Text::RegularExpressions::RegexFCD::RegexFCFromRegexTree)> {
  static const MethodInfo* get() {
    static auto* tree = &::il2cpp_utils::GetClassFromName("System.Text.RegularExpressions", "RegexTree")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexFCD), "RegexFCFromRegexTree", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tree});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFCD::SkipChild
// Il2CppName: SkipChild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexFCD::*)()>(&System::Text::RegularExpressions::RegexFCD::SkipChild)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexFCD), "SkipChild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexFCD::CalculateFC
// Il2CppName: CalculateFC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexFCD::*)(int, ::System::Text::RegularExpressions::RegexNode*, int)>(&System::Text::RegularExpressions::RegexFCD::CalculateFC)> {
  static const MethodInfo* get() {
    static auto* NodeType = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Text.RegularExpressions", "RegexNode")->byval_arg;
    static auto* CurIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexFCD), "CalculateFC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{NodeType, node, CurIndex});
  }
};
