// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Linq.XContainer
#include "System/Xml/Linq/XContainer.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Linq
namespace System::Xml::Linq {
  // Forward declaring type: XNode
  class XNode;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Linq::XContainer::$Nodes$d__18);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XContainer::$Nodes$d__18*, "System.Xml.Linq", "XContainer/<Nodes>d__18");
// Type namespace: System.Xml.Linq
namespace System::Xml::Linq {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Linq.XContainer/<Nodes>d__18
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class XContainer::$Nodes$d__18 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XNode*>, public ::System::Collections::Generic::IEnumerator_1<::System::Xml::Linq::XNode*>*/ {
    public:
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Xml.Linq.XNode <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::System::Xml::Linq::XNode* $$2__current;
    // Field size check
    static_assert(sizeof(::System::Xml::Linq::XNode*) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$l__initialThreadId and: $$4__this
    char __padding2[0x4] = {};
    // public System.Xml.Linq.XContainer <>4__this
    // Size: 0x8
    // Offset: 0x28
    ::System::Xml::Linq::XContainer* $$4__this;
    // Field size check
    static_assert(sizeof(::System::Xml::Linq::XContainer*) == 0x8);
    // private System.Xml.Linq.XNode <n>5__2
    // Size: 0x8
    // Offset: 0x30
    ::System::Xml::Linq::XNode* $n$5__2;
    // Field size check
    static_assert(sizeof(::System::Xml::Linq::XNode*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XNode*>
    operator ::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XNode*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XNode*>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::System::Xml::Linq::XNode*>
    operator ::System::Collections::Generic::IEnumerator_1<::System::Xml::Linq::XNode*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::System::Xml::Linq::XNode*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.Xml.Linq.XNode <>2__current
    [[deprecated("Use field access instead!")]] ::System::Xml::Linq::XNode*& dyn_$$2__current();
    // Get instance field reference: private System.Int32 <>l__initialThreadId
    [[deprecated("Use field access instead!")]] int& dyn_$$l__initialThreadId();
    // Get instance field reference: public System.Xml.Linq.XContainer <>4__this
    [[deprecated("Use field access instead!")]] ::System::Xml::Linq::XContainer*& dyn_$$4__this();
    // Get instance field reference: private System.Xml.Linq.XNode <n>5__2
    [[deprecated("Use field access instead!")]] ::System::Xml::Linq::XNode*& dyn_$n$5__2();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x4D19348
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XContainer::$Nodes$d__18* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Linq::XContainer::$Nodes$d__18::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XContainer::$Nodes$d__18*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x4D1B8BC
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x4D1B8C0
    bool MoveNext();
    // private System.Xml.Linq.XNode System.Collections.Generic.IEnumerator<System.Xml.Linq.XNode>.get_Current()
    // Offset: 0x4D1B980
    ::System::Xml::Linq::XNode* System_Collections_Generic_IEnumerator$System_Xml_Linq_XNode$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x4D1B988
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x4D1B9C0
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XNode> System.Collections.Generic.IEnumerable<System.Xml.Linq.XNode>.GetEnumerator()
    // Offset: 0x4D1B9C8
    ::System::Collections::Generic::IEnumerator_1<::System::Xml::Linq::XNode*>* System_Collections_Generic_IEnumerable$System_Xml_Linq_XNode$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x4D1BA6C
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // System.Xml.Linq.XContainer/<Nodes>d__18
  #pragma pack(pop)
  static check_size<sizeof(XContainer::$Nodes$d__18), 48 + sizeof(::System::Xml::Linq::XNode*)> __System_Xml_Linq_XContainer_$Nodes$d__18SizeCheck;
  static_assert(sizeof(XContainer::$Nodes$d__18) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Linq::XContainer::$Nodes$d__18::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Linq::XContainer::$Nodes$d__18::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Linq::XContainer::$Nodes$d__18::*)()>(&System::Xml::Linq::XContainer::$Nodes$d__18::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XContainer::$Nodes$d__18*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XContainer::$Nodes$d__18::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Linq::XContainer::$Nodes$d__18::*)()>(&System::Xml::Linq::XContainer::$Nodes$d__18::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XContainer::$Nodes$d__18*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XContainer::$Nodes$d__18::System_Collections_Generic_IEnumerator$System_Xml_Linq_XNode$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Xml.Linq.XNode>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Linq::XNode* (System::Xml::Linq::XContainer::$Nodes$d__18::*)()>(&System::Xml::Linq::XContainer::$Nodes$d__18::System_Collections_Generic_IEnumerator$System_Xml_Linq_XNode$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XContainer::$Nodes$d__18*), "System.Collections.Generic.IEnumerator<System.Xml.Linq.XNode>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XContainer::$Nodes$d__18::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Linq::XContainer::$Nodes$d__18::*)()>(&System::Xml::Linq::XContainer::$Nodes$d__18::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XContainer::$Nodes$d__18*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XContainer::$Nodes$d__18::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Linq::XContainer::$Nodes$d__18::*)()>(&System::Xml::Linq::XContainer::$Nodes$d__18::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XContainer::$Nodes$d__18*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XContainer::$Nodes$d__18::System_Collections_Generic_IEnumerable$System_Xml_Linq_XNode$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<System.Xml.Linq.XNode>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::Xml::Linq::XNode*>* (System::Xml::Linq::XContainer::$Nodes$d__18::*)()>(&System::Xml::Linq::XContainer::$Nodes$d__18::System_Collections_Generic_IEnumerable$System_Xml_Linq_XNode$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XContainer::$Nodes$d__18*), "System.Collections.Generic.IEnumerable<System.Xml.Linq.XNode>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::XContainer::$Nodes$d__18::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (System::Xml::Linq::XContainer::$Nodes$d__18::*)()>(&System::Xml::Linq::XContainer::$Nodes$d__18::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::XContainer::$Nodes$d__18*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
