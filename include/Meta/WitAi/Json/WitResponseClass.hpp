// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.WitAi.Json.WitResponseNode
#include "Meta/WitAi/Json/WitResponseNode.hpp"
// Including type: System.Collections.IEnumerable
#include "System/Collections/IEnumerable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Meta::WitAi::Json
namespace Meta::WitAi::Json {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: BinaryWriter
  class BinaryWriter;
}
// Completed forward declares
// Type namespace: Meta.WitAi.Json
namespace Meta::WitAi::Json {
  // Forward declaring type: WitResponseClass
  class WitResponseClass;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::Json::WitResponseClass);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::Json::WitResponseClass*, "Meta.WitAi.Json", "WitResponseClass");
// Type namespace: Meta.WitAi.Json
namespace Meta::WitAi::Json {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.Json.WitResponseClass
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: FFFFFFFF
  class WitResponseClass : public ::Meta::WitAi::Json::WitResponseNode/*, public ::System::Collections::IEnumerable*/ {
    public:
    // Nested type: ::Meta::WitAi::Json::WitResponseClass::$$c__DisplayClass15_0
    class $$c__DisplayClass15_0;
    // Nested type: ::Meta::WitAi::Json::WitResponseClass::$GetEnumerator$d__18
    class $GetEnumerator$d__18;
    // Nested type: ::Meta::WitAi::Json::WitResponseClass::$get_Childs$d__17
    class $get_Childs$d__17;
    public:
    // private System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Json.WitResponseNode> m_Dict
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Meta::WitAi::Json::WitResponseNode*>* m_Dict;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::Meta::WitAi::Json::WitResponseNode*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::IEnumerable
    operator ::System::Collections::IEnumerable() noexcept {
      return *reinterpret_cast<::System::Collections::IEnumerable*>(this);
    }
    // Creating conversion operator: operator ::System::Collections::Generic::Dictionary_2<::StringW, ::Meta::WitAi::Json::WitResponseNode*>*
    constexpr operator ::System::Collections::Generic::Dictionary_2<::StringW, ::Meta::WitAi::Json::WitResponseNode*>*() const noexcept {
      return m_Dict;
    }
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Json.WitResponseNode> m_Dict
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::Meta::WitAi::Json::WitResponseNode*>*& dyn_m_Dict();
    // public System.String[] get_ChildNodeNames()
    // Offset: 0x444A050
    ::ArrayW<::StringW> get_ChildNodeNames();
    // public System.Boolean HasChild(System.String child)
    // Offset: 0x4442FFC
    bool HasChild(::StringW child);
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x444F618
    ::System::Collections::IEnumerator* GetEnumerator();
    // public T GetChild(System.String aKey, T defaultValue)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    T GetChild(::StringW aKey, T defaultValue) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Json::WitResponseClass::GetChild");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetChild", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(aKey), ::il2cpp_utils::ExtractType(defaultValue)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___generic__method, aKey, defaultValue);
    }
    // public override Meta.WitAi.Json.WitResponseNode get_Item(System.String aKey)
    // Offset: 0x444ED48
    // Implemented from: Meta.WitAi.Json.WitResponseNode
    // Base method: Meta.WitAi.Json.WitResponseNode WitResponseNode::get_Item(System.String aKey)
    ::Meta::WitAi::Json::WitResponseNode* get_Item(::StringW aKey);
    // public override System.Void set_Item(System.String aKey, Meta.WitAi.Json.WitResponseNode value)
    // Offset: 0x444EE4C
    // Implemented from: Meta.WitAi.Json.WitResponseNode
    // Base method: System.Void WitResponseNode::set_Item(System.String aKey, Meta.WitAi.Json.WitResponseNode value)
    void set_Item(::StringW aKey, ::Meta::WitAi::Json::WitResponseNode* value);
    // public override Meta.WitAi.Json.WitResponseNode get_Item(System.Int32 aIndex)
    // Offset: 0x444EF18
    // Implemented from: Meta.WitAi.Json.WitResponseNode
    // Base method: Meta.WitAi.Json.WitResponseNode WitResponseNode::get_Item(System.Int32 aIndex)
    ::Meta::WitAi::Json::WitResponseNode* get_Item(int aIndex);
    // public override System.Void set_Item(System.Int32 aIndex, Meta.WitAi.Json.WitResponseNode value)
    // Offset: 0x444EFB8
    // Implemented from: Meta.WitAi.Json.WitResponseNode
    // Base method: System.Void WitResponseNode::set_Item(System.Int32 aIndex, Meta.WitAi.Json.WitResponseNode value)
    void set_Item(int aIndex, ::Meta::WitAi::Json::WitResponseNode* value);
    // public override System.Int32 get_Count()
    // Offset: 0x444F094
    // Implemented from: Meta.WitAi.Json.WitResponseNode
    // Base method: System.Int32 WitResponseNode::get_Count()
    int get_Count();
    // public override System.Void Add(System.String aKey, Meta.WitAi.Json.WitResponseNode aItem)
    // Offset: 0x444F0E4
    // Implemented from: Meta.WitAi.Json.WitResponseNode
    // Base method: System.Void WitResponseNode::Add(System.String aKey, Meta.WitAi.Json.WitResponseNode aItem)
    void Add(::StringW aKey, ::Meta::WitAi::Json::WitResponseNode* aItem);
    // public override Meta.WitAi.Json.WitResponseNode Remove(System.String aKey)
    // Offset: 0x444F1FC
    // Implemented from: Meta.WitAi.Json.WitResponseNode
    // Base method: Meta.WitAi.Json.WitResponseNode WitResponseNode::Remove(System.String aKey)
    ::Meta::WitAi::Json::WitResponseNode* Remove(::StringW aKey);
    // public override Meta.WitAi.Json.WitResponseNode Remove(System.Int32 aIndex)
    // Offset: 0x444F2C0
    // Implemented from: Meta.WitAi.Json.WitResponseNode
    // Base method: Meta.WitAi.Json.WitResponseNode WitResponseNode::Remove(System.Int32 aIndex)
    ::Meta::WitAi::Json::WitResponseNode* Remove(int aIndex);
    // public override Meta.WitAi.Json.WitResponseNode Remove(Meta.WitAi.Json.WitResponseNode aNode)
    // Offset: 0x444F39C
    // Implemented from: Meta.WitAi.Json.WitResponseNode
    // Base method: Meta.WitAi.Json.WitResponseNode WitResponseNode::Remove(Meta.WitAi.Json.WitResponseNode aNode)
    ::Meta::WitAi::Json::WitResponseNode* Remove(::Meta::WitAi::Json::WitResponseNode* aNode);
    // public override System.Collections.Generic.IEnumerable`1<Meta.WitAi.Json.WitResponseNode> get_Childs()
    // Offset: 0x444F568
    // Implemented from: Meta.WitAi.Json.WitResponseNode
    // Base method: System.Collections.Generic.IEnumerable`1<Meta.WitAi.Json.WitResponseNode> WitResponseNode::get_Childs()
    ::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::Json::WitResponseNode*>* get_Childs();
    // public override System.String ToString()
    // Offset: 0x444F6AC
    // Implemented from: Meta.WitAi.Json.WitResponseNode
    // Base method: System.String WitResponseNode::ToString()
    ::StringW ToString();
    // public override System.String ToString(System.String aPrefix)
    // Offset: 0x444FA04
    // Implemented from: Meta.WitAi.Json.WitResponseNode
    // Base method: System.String WitResponseNode::ToString(System.String aPrefix)
    ::StringW ToString(::StringW aPrefix);
    // public override System.Void Serialize(System.IO.BinaryWriter aWriter)
    // Offset: 0x444FDDC
    // Implemented from: Meta.WitAi.Json.WitResponseNode
    // Base method: System.Void WitResponseNode::Serialize(System.IO.BinaryWriter aWriter)
    void Serialize(::System::IO::BinaryWriter* aWriter);
    // public System.Void .ctor()
    // Offset: 0x444B468
    // Implemented from: Meta.WitAi.Json.WitResponseNode
    // Base method: System.Void WitResponseNode::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WitResponseClass* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Json::WitResponseClass::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WitResponseClass*, creationType>()));
    }
  }; // Meta.WitAi.Json.WitResponseClass
  #pragma pack(pop)
  static check_size<sizeof(WitResponseClass), 16 + sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::Meta::WitAi::Json::WitResponseNode*>*)> __Meta_WitAi_Json_WitResponseClassSizeCheck;
  static_assert(sizeof(WitResponseClass) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::Json::WitResponseClass::get_ChildNodeNames
// Il2CppName: get_ChildNodeNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (Meta::WitAi::Json::WitResponseClass::*)()>(&Meta::WitAi::Json::WitResponseClass::get_ChildNodeNames)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Json::WitResponseClass*), "get_ChildNodeNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Json::WitResponseClass::HasChild
// Il2CppName: HasChild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Meta::WitAi::Json::WitResponseClass::*)(::StringW)>(&Meta::WitAi::Json::WitResponseClass::HasChild)> {
  static const MethodInfo* get() {
    static auto* child = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Json::WitResponseClass*), "HasChild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{child});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Json::WitResponseClass::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (Meta::WitAi::Json::WitResponseClass::*)()>(&Meta::WitAi::Json::WitResponseClass::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Json::WitResponseClass*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Json::WitResponseClass::GetChild
// Il2CppName: GetChild
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Meta::WitAi::Json::WitResponseClass::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::Json::WitResponseNode* (Meta::WitAi::Json::WitResponseClass::*)(::StringW)>(&Meta::WitAi::Json::WitResponseClass::get_Item)> {
  static const MethodInfo* get() {
    static auto* aKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Json::WitResponseClass*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aKey});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Json::WitResponseClass::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Json::WitResponseClass::*)(::StringW, ::Meta::WitAi::Json::WitResponseNode*)>(&Meta::WitAi::Json::WitResponseClass::set_Item)> {
  static const MethodInfo* get() {
    static auto* aKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Json", "WitResponseNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Json::WitResponseClass*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aKey, value});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Json::WitResponseClass::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::Json::WitResponseNode* (Meta::WitAi::Json::WitResponseClass::*)(int)>(&Meta::WitAi::Json::WitResponseClass::get_Item)> {
  static const MethodInfo* get() {
    static auto* aIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Json::WitResponseClass*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aIndex});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Json::WitResponseClass::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Json::WitResponseClass::*)(int, ::Meta::WitAi::Json::WitResponseNode*)>(&Meta::WitAi::Json::WitResponseClass::set_Item)> {
  static const MethodInfo* get() {
    static auto* aIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Json", "WitResponseNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Json::WitResponseClass*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aIndex, value});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Json::WitResponseClass::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Meta::WitAi::Json::WitResponseClass::*)()>(&Meta::WitAi::Json::WitResponseClass::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Json::WitResponseClass*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Json::WitResponseClass::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Json::WitResponseClass::*)(::StringW, ::Meta::WitAi::Json::WitResponseNode*)>(&Meta::WitAi::Json::WitResponseClass::Add)> {
  static const MethodInfo* get() {
    static auto* aKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* aItem = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Json", "WitResponseNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Json::WitResponseClass*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aKey, aItem});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Json::WitResponseClass::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::Json::WitResponseNode* (Meta::WitAi::Json::WitResponseClass::*)(::StringW)>(&Meta::WitAi::Json::WitResponseClass::Remove)> {
  static const MethodInfo* get() {
    static auto* aKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Json::WitResponseClass*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aKey});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Json::WitResponseClass::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::Json::WitResponseNode* (Meta::WitAi::Json::WitResponseClass::*)(int)>(&Meta::WitAi::Json::WitResponseClass::Remove)> {
  static const MethodInfo* get() {
    static auto* aIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Json::WitResponseClass*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aIndex});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Json::WitResponseClass::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::Json::WitResponseNode* (Meta::WitAi::Json::WitResponseClass::*)(::Meta::WitAi::Json::WitResponseNode*)>(&Meta::WitAi::Json::WitResponseClass::Remove)> {
  static const MethodInfo* get() {
    static auto* aNode = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Json", "WitResponseNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Json::WitResponseClass*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aNode});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Json::WitResponseClass::get_Childs
// Il2CppName: get_Childs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::Json::WitResponseNode*>* (Meta::WitAi::Json::WitResponseClass::*)()>(&Meta::WitAi::Json::WitResponseClass::get_Childs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Json::WitResponseClass*), "get_Childs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Json::WitResponseClass::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Meta::WitAi::Json::WitResponseClass::*)()>(&Meta::WitAi::Json::WitResponseClass::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Json::WitResponseClass*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Json::WitResponseClass::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Meta::WitAi::Json::WitResponseClass::*)(::StringW)>(&Meta::WitAi::Json::WitResponseClass::ToString)> {
  static const MethodInfo* get() {
    static auto* aPrefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Json::WitResponseClass*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aPrefix});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Json::WitResponseClass::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Json::WitResponseClass::*)(::System::IO::BinaryWriter*)>(&Meta::WitAi::Json::WitResponseClass::Serialize)> {
  static const MethodInfo* get() {
    static auto* aWriter = &::il2cpp_utils::GetClassFromName("System.IO", "BinaryWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Json::WitResponseClass*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aWriter});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Json::WitResponseClass::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
