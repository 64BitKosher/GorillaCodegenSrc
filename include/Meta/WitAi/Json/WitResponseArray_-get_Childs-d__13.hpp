// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.WitAi.Json.WitResponseArray
#include "Meta/WitAi/Json/WitResponseArray.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: System.Collections.Generic.List`1/Enumerator
#include "System/Collections/Generic/List_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Meta::WitAi::Json
namespace Meta::WitAi::Json {
  // Forward declaring type: WitResponseNode
  class WitResponseNode;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::Json::WitResponseArray::$get_Childs$d__13);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::Json::WitResponseArray::$get_Childs$d__13*, "Meta.WitAi.Json", "WitResponseArray/<get_Childs>d__13");
// Type namespace: Meta.WitAi.Json
namespace Meta::WitAi::Json {
  // WARNING Size may be invalid!
  // Autogenerated type: Meta.WitAi.Json.WitResponseArray/<get_Childs>d__13
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class WitResponseArray::$get_Childs$d__13 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::Json::WitResponseNode*>, public ::System::Collections::Generic::IEnumerator_1<::Meta::WitAi::Json::WitResponseNode*>*/ {
    public:
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private Meta.WitAi.Json.WitResponseNode <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Meta::WitAi::Json::WitResponseNode* $$2__current;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::Json::WitResponseNode*) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public Meta.WitAi.Json.WitResponseArray <>4__this
    // Size: 0x8
    // Offset: 0x28
    ::Meta::WitAi::Json::WitResponseArray* $$4__this;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::Json::WitResponseArray*) == 0x8);
    // private System.Collections.Generic.List`1/Enumerator<Meta.WitAi.Json.WitResponseNode> <>7__wrap1
    // Size: 0xFFFFFFFF
    // Offset: 0x30
    typename ::System::Collections::Generic::List_1<::Meta::WitAi::Json::WitResponseNode*>::Enumerator $$7__wrap1;
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::Json::WitResponseNode*>
    operator ::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::Json::WitResponseNode*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::Json::WitResponseNode*>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Meta::WitAi::Json::WitResponseNode*>
    operator ::System::Collections::Generic::IEnumerator_1<::Meta::WitAi::Json::WitResponseNode*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Meta::WitAi::Json::WitResponseNode*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private Meta.WitAi.Json.WitResponseNode <>2__current
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::Json::WitResponseNode*& dyn_$$2__current();
    // Get instance field reference: private System.Int32 <>l__initialThreadId
    [[deprecated("Use field access instead!")]] int& dyn_$$l__initialThreadId();
    // Get instance field reference: public Meta.WitAi.Json.WitResponseArray <>4__this
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::Json::WitResponseArray*& dyn_$$4__this();
    // Get instance field reference: private System.Collections.Generic.List`1/Enumerator<Meta.WitAi.Json.WitResponseNode> <>7__wrap1
    [[deprecated("Use field access instead!")]] typename ::System::Collections::Generic::List_1<::Meta::WitAi::Json::WitResponseNode*>::Enumerator& dyn_$$7__wrap1();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x444E1CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WitResponseArray::$get_Childs$d__13* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Json::WitResponseArray::$get_Childs$d__13::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WitResponseArray::$get_Childs$d__13*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x444EA44
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x444EA60
    bool MoveNext();
    // private System.Void <>m__Finally1()
    // Offset: 0x444EC08
    void $$m__Finally1();
    // private Meta.WitAi.Json.WitResponseNode System.Collections.Generic.IEnumerator<Meta.WitAi.Json.WitResponseNode>.get_Current()
    // Offset: 0x444EC58
    ::Meta::WitAi::Json::WitResponseNode* System_Collections_Generic_IEnumerator$Meta_WitAi_Json_WitResponseNode$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x444EC60
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x444EC98
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<Meta.WitAi.Json.WitResponseNode> System.Collections.Generic.IEnumerable<Meta.WitAi.Json.WitResponseNode>.GetEnumerator()
    // Offset: 0x444ECA0
    ::System::Collections::Generic::IEnumerator_1<::Meta::WitAi::Json::WitResponseNode*>* System_Collections_Generic_IEnumerable$Meta_WitAi_Json_WitResponseNode$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x444ED44
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // Meta.WitAi.Json.WitResponseArray/<get_Childs>d__13
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::Json::WitResponseArray::$get_Childs$d__13::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Meta::WitAi::Json::WitResponseArray::$get_Childs$d__13::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Json::WitResponseArray::$get_Childs$d__13::*)()>(&Meta::WitAi::Json::WitResponseArray::$get_Childs$d__13::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Json::WitResponseArray::$get_Childs$d__13*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Json::WitResponseArray::$get_Childs$d__13::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Meta::WitAi::Json::WitResponseArray::$get_Childs$d__13::*)()>(&Meta::WitAi::Json::WitResponseArray::$get_Childs$d__13::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Json::WitResponseArray::$get_Childs$d__13*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Json::WitResponseArray::$get_Childs$d__13::$$m__Finally1
// Il2CppName: <>m__Finally1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Json::WitResponseArray::$get_Childs$d__13::*)()>(&Meta::WitAi::Json::WitResponseArray::$get_Childs$d__13::$$m__Finally1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Json::WitResponseArray::$get_Childs$d__13*), "<>m__Finally1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Json::WitResponseArray::$get_Childs$d__13::System_Collections_Generic_IEnumerator$Meta_WitAi_Json_WitResponseNode$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<Meta.WitAi.Json.WitResponseNode>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::Json::WitResponseNode* (Meta::WitAi::Json::WitResponseArray::$get_Childs$d__13::*)()>(&Meta::WitAi::Json::WitResponseArray::$get_Childs$d__13::System_Collections_Generic_IEnumerator$Meta_WitAi_Json_WitResponseNode$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Json::WitResponseArray::$get_Childs$d__13*), "System.Collections.Generic.IEnumerator<Meta.WitAi.Json.WitResponseNode>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Json::WitResponseArray::$get_Childs$d__13::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Json::WitResponseArray::$get_Childs$d__13::*)()>(&Meta::WitAi::Json::WitResponseArray::$get_Childs$d__13::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Json::WitResponseArray::$get_Childs$d__13*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Json::WitResponseArray::$get_Childs$d__13::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Meta::WitAi::Json::WitResponseArray::$get_Childs$d__13::*)()>(&Meta::WitAi::Json::WitResponseArray::$get_Childs$d__13::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Json::WitResponseArray::$get_Childs$d__13*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Json::WitResponseArray::$get_Childs$d__13::System_Collections_Generic_IEnumerable$Meta_WitAi_Json_WitResponseNode$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<Meta.WitAi.Json.WitResponseNode>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::Meta::WitAi::Json::WitResponseNode*>* (Meta::WitAi::Json::WitResponseArray::$get_Childs$d__13::*)()>(&Meta::WitAi::Json::WitResponseArray::$get_Childs$d__13::System_Collections_Generic_IEnumerable$Meta_WitAi_Json_WitResponseNode$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Json::WitResponseArray::$get_Childs$d__13*), "System.Collections.Generic.IEnumerable<Meta.WitAi.Json.WitResponseNode>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Json::WitResponseArray::$get_Childs$d__13::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (Meta::WitAi::Json::WitResponseArray::$get_Childs$d__13::*)()>(&Meta::WitAi::Json::WitResponseArray::$get_Childs$d__13::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Json::WitResponseArray::$get_Childs$d__13*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
