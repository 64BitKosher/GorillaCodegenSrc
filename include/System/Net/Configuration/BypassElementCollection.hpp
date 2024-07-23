// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Configuration.ConfigurationElementCollection
#include "System/Configuration/ConfigurationElementCollection.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Configuration
namespace System::Net::Configuration {
  // Forward declaring type: BypassElement
  class BypassElement;
}
// Forward declaring namespace: System::Configuration
namespace System::Configuration {
  // Skipping declaration: ConfigurationElement because it is already included!
}
// Completed forward declares
// Type namespace: System.Net.Configuration
namespace System::Net::Configuration {
  // Forward declaring type: BypassElementCollection
  class BypassElementCollection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Configuration::BypassElementCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::BypassElementCollection*, "System.Net.Configuration", "BypassElementCollection");
// Type namespace: System.Net.Configuration
namespace System::Net::Configuration {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Configuration.BypassElementCollection
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: FFFFFFFF
  // [ConfigurationCollectionAttribute] Offset: FFFFFFFF
  class BypassElementCollection : public ::System::Configuration::ConfigurationElementCollection {
    public:
    // public System.Void .ctor()
    // Offset: 0x4F57450
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BypassElementCollection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Configuration::BypassElementCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BypassElementCollection*, creationType>()));
    }
    // public System.Net.Configuration.BypassElement get_Item(System.Int32 index)
    // Offset: 0x4F57488
    ::System::Net::Configuration::BypassElement* get_Item(int index);
    // public System.Void set_Item(System.Int32 index, System.Net.Configuration.BypassElement value)
    // Offset: 0x4F574C0
    void set_Item(int index, ::System::Net::Configuration::BypassElement* value);
    // public System.Net.Configuration.BypassElement get_Item(System.String name)
    // Offset: 0x4F574F8
    ::System::Net::Configuration::BypassElement* get_Item(::StringW name);
    // public System.Void set_Item(System.String name, System.Net.Configuration.BypassElement value)
    // Offset: 0x4F57530
    void set_Item(::StringW name, ::System::Net::Configuration::BypassElement* value);
    // public System.Void Add(System.Net.Configuration.BypassElement element)
    // Offset: 0x4F575A0
    void Add(::System::Net::Configuration::BypassElement* element);
    // public System.Void Clear()
    // Offset: 0x4F575D8
    void Clear();
    // public System.Int32 IndexOf(System.Net.Configuration.BypassElement element)
    // Offset: 0x4F57680
    int IndexOf(::System::Net::Configuration::BypassElement* element);
    // public System.Void Remove(System.Net.Configuration.BypassElement element)
    // Offset: 0x4F576B8
    void Remove(::System::Net::Configuration::BypassElement* element);
    // public System.Void Remove(System.String name)
    // Offset: 0x4F576F0
    void Remove(::StringW name);
    // public System.Void RemoveAt(System.Int32 index)
    // Offset: 0x4F57728
    void RemoveAt(int index);
    // protected override System.Boolean get_ThrowOnDuplicate()
    // Offset: 0x4F57568
    // Implemented from: System.Configuration.ConfigurationElementCollection
    // Base method: System.Boolean ConfigurationElementCollection::get_ThrowOnDuplicate()
    bool get_ThrowOnDuplicate();
    // protected override System.Configuration.ConfigurationElement CreateNewElement()
    // Offset: 0x4F57610
    // Implemented from: System.Configuration.ConfigurationElementCollection
    // Base method: System.Configuration.ConfigurationElement ConfigurationElementCollection::CreateNewElement()
    ::System::Configuration::ConfigurationElement* CreateNewElement();
    // protected override System.Object GetElementKey(System.Configuration.ConfigurationElement element)
    // Offset: 0x4F57648
    // Implemented from: System.Configuration.ConfigurationElementCollection
    // Base method: System.Object ConfigurationElementCollection::GetElementKey(System.Configuration.ConfigurationElement element)
    ::Il2CppObject* GetElementKey(::System::Configuration::ConfigurationElement* element);
  }; // System.Net.Configuration.BypassElementCollection
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Configuration::BypassElementCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Configuration::BypassElementCollection::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Configuration::BypassElement* (System::Net::Configuration::BypassElementCollection::*)(int)>(&System::Net::Configuration::BypassElementCollection::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::BypassElementCollection*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::BypassElementCollection::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::BypassElementCollection::*)(int, ::System::Net::Configuration::BypassElement*)>(&System::Net::Configuration::BypassElementCollection::set_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net.Configuration", "BypassElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::BypassElementCollection*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, value});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::BypassElementCollection::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Configuration::BypassElement* (System::Net::Configuration::BypassElementCollection::*)(::StringW)>(&System::Net::Configuration::BypassElementCollection::get_Item)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::BypassElementCollection*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::BypassElementCollection::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::BypassElementCollection::*)(::StringW, ::System::Net::Configuration::BypassElement*)>(&System::Net::Configuration::BypassElementCollection::set_Item)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net.Configuration", "BypassElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::BypassElementCollection*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::BypassElementCollection::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::BypassElementCollection::*)(::System::Net::Configuration::BypassElement*)>(&System::Net::Configuration::BypassElementCollection::Add)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("System.Net.Configuration", "BypassElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::BypassElementCollection*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::BypassElementCollection::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::BypassElementCollection::*)()>(&System::Net::Configuration::BypassElementCollection::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::BypassElementCollection*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::BypassElementCollection::IndexOf
// Il2CppName: IndexOf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Configuration::BypassElementCollection::*)(::System::Net::Configuration::BypassElement*)>(&System::Net::Configuration::BypassElementCollection::IndexOf)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("System.Net.Configuration", "BypassElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::BypassElementCollection*), "IndexOf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::BypassElementCollection::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::BypassElementCollection::*)(::System::Net::Configuration::BypassElement*)>(&System::Net::Configuration::BypassElementCollection::Remove)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("System.Net.Configuration", "BypassElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::BypassElementCollection*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::BypassElementCollection::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::BypassElementCollection::*)(::StringW)>(&System::Net::Configuration::BypassElementCollection::Remove)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::BypassElementCollection*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::BypassElementCollection::RemoveAt
// Il2CppName: RemoveAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::BypassElementCollection::*)(int)>(&System::Net::Configuration::BypassElementCollection::RemoveAt)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::BypassElementCollection*), "RemoveAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::BypassElementCollection::get_ThrowOnDuplicate
// Il2CppName: get_ThrowOnDuplicate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Configuration::BypassElementCollection::*)()>(&System::Net::Configuration::BypassElementCollection::get_ThrowOnDuplicate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::BypassElementCollection*), "get_ThrowOnDuplicate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::BypassElementCollection::CreateNewElement
// Il2CppName: CreateNewElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Configuration::ConfigurationElement* (System::Net::Configuration::BypassElementCollection::*)()>(&System::Net::Configuration::BypassElementCollection::CreateNewElement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::BypassElementCollection*), "CreateNewElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::BypassElementCollection::GetElementKey
// Il2CppName: GetElementKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Net::Configuration::BypassElementCollection::*)(::System::Configuration::ConfigurationElement*)>(&System::Net::Configuration::BypassElementCollection::GetElementKey)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("System.Configuration", "ConfigurationElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::BypassElementCollection*), "GetElementKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
