// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Dynamic.BindingRestrictions
#include "System/Dynamic/BindingRestrictions.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Linq::Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: Expression
  class Expression;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: Stack`1<T>
  template<typename T>
  class Stack_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Dynamic::BindingRestrictions::TestBuilder);
DEFINE_IL2CPP_ARG_TYPE(::System::Dynamic::BindingRestrictions::TestBuilder*, "System.Dynamic", "BindingRestrictions/TestBuilder");
// Type namespace: System.Dynamic
namespace System::Dynamic {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Dynamic.BindingRestrictions/TestBuilder
  // [TokenAttribute] Offset: FFFFFFFF
  class BindingRestrictions::TestBuilder : public ::Il2CppObject {
    public:
    // Nested type: ::System::Dynamic::BindingRestrictions::TestBuilder::AndNode
    struct AndNode;
    // Size: 0x10
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: System.Dynamic.BindingRestrictions/TestBuilder/AndNode
    // [TokenAttribute] Offset: FFFFFFFF
    struct AndNode/*, public ::System::ValueType*/ {
      public:
      public:
      // System.Int32 Depth
      // Size: 0x4
      // Offset: 0x0
      int Depth;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Padding between fields: Depth and: Node
      char __padding0[0x4] = {};
      // System.Linq.Expressions.Expression Node
      // Size: 0x8
      // Offset: 0x8
      ::System::Linq::Expressions::Expression* Node;
      // Field size check
      static_assert(sizeof(::System::Linq::Expressions::Expression*) == 0x8);
      public:
      // Creating value type constructor for type: AndNode
      constexpr AndNode(int Depth_ = {}, ::System::Linq::Expressions::Expression* Node_ = {}) noexcept : Depth{Depth_}, Node{Node_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: System.Int32 Depth
      [[deprecated("Use field access instead!")]] int& dyn_Depth();
      // Get instance field reference: System.Linq.Expressions.Expression Node
      [[deprecated("Use field access instead!")]] ::System::Linq::Expressions::Expression*& dyn_Node();
    }; // System.Dynamic.BindingRestrictions/TestBuilder/AndNode
    #pragma pack(pop)
    static check_size<sizeof(BindingRestrictions::TestBuilder::AndNode), 8 + sizeof(::System::Linq::Expressions::Expression*)> __System_Dynamic_BindingRestrictions_TestBuilder_AndNodeSizeCheck;
    static_assert(sizeof(BindingRestrictions::TestBuilder::AndNode) == 0x10);
    public:
    // private readonly System.Collections.Generic.HashSet`1<System.Dynamic.BindingRestrictions> _unique
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::HashSet_1<::System::Dynamic::BindingRestrictions*>* unique;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::HashSet_1<::System::Dynamic::BindingRestrictions*>*) == 0x8);
    // private readonly System.Collections.Generic.Stack`1<System.Dynamic.BindingRestrictions/TestBuilder/AndNode> _tests
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::Stack_1<::System::Dynamic::BindingRestrictions::TestBuilder::AndNode>* tests;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Stack_1<::System::Dynamic::BindingRestrictions::TestBuilder::AndNode>*) == 0x8);
    public:
    // Get instance field reference: private readonly System.Collections.Generic.HashSet`1<System.Dynamic.BindingRestrictions> _unique
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::HashSet_1<::System::Dynamic::BindingRestrictions*>*& dyn__unique();
    // Get instance field reference: private readonly System.Collections.Generic.Stack`1<System.Dynamic.BindingRestrictions/TestBuilder/AndNode> _tests
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Stack_1<::System::Dynamic::BindingRestrictions::TestBuilder::AndNode>*& dyn__tests();
    // System.Void Append(System.Dynamic.BindingRestrictions restrictions)
    // Offset: 0x4BE14AC
    void Append(::System::Dynamic::BindingRestrictions* restrictions);
    // System.Linq.Expressions.Expression ToExpression()
    // Offset: 0x4BE168C
    ::System::Linq::Expressions::Expression* ToExpression();
    // private System.Void Push(System.Linq.Expressions.Expression node, System.Int32 depth)
    // Offset: 0x4BE1538
    void Push(::System::Linq::Expressions::Expression* node, int depth);
    // public System.Void .ctor()
    // Offset: 0x4BE1760
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BindingRestrictions::TestBuilder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Dynamic::BindingRestrictions::TestBuilder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BindingRestrictions::TestBuilder*, creationType>()));
    }
  }; // System.Dynamic.BindingRestrictions/TestBuilder
  #pragma pack(pop)
  static check_size<sizeof(BindingRestrictions::TestBuilder), 24 + sizeof(::System::Collections::Generic::Stack_1<::System::Dynamic::BindingRestrictions::TestBuilder::AndNode>*)> __System_Dynamic_BindingRestrictions_TestBuilderSizeCheck;
  static_assert(sizeof(BindingRestrictions::TestBuilder) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Dynamic::BindingRestrictions::TestBuilder::AndNode, "System.Dynamic", "BindingRestrictions/TestBuilder/AndNode");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Dynamic::BindingRestrictions::TestBuilder::Append
// Il2CppName: Append
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Dynamic::BindingRestrictions::TestBuilder::*)(::System::Dynamic::BindingRestrictions*)>(&System::Dynamic::BindingRestrictions::TestBuilder::Append)> {
  static const MethodInfo* get() {
    static auto* restrictions = &::il2cpp_utils::GetClassFromName("System.Dynamic", "BindingRestrictions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::BindingRestrictions::TestBuilder*), "Append", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{restrictions});
  }
};
// Writing MetadataGetter for method: System::Dynamic::BindingRestrictions::TestBuilder::ToExpression
// Il2CppName: ToExpression
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Dynamic::BindingRestrictions::TestBuilder::*)()>(&System::Dynamic::BindingRestrictions::TestBuilder::ToExpression)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::BindingRestrictions::TestBuilder*), "ToExpression", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Dynamic::BindingRestrictions::TestBuilder::Push
// Il2CppName: Push
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Dynamic::BindingRestrictions::TestBuilder::*)(::System::Linq::Expressions::Expression*, int)>(&System::Dynamic::BindingRestrictions::TestBuilder::Push)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "Expression")->byval_arg;
    static auto* depth = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::BindingRestrictions::TestBuilder*), "Push", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node, depth});
  }
};
// Writing MetadataGetter for method: System::Dynamic::BindingRestrictions::TestBuilder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
