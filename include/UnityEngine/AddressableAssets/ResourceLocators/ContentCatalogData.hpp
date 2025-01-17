// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ResourceManagement.Util.ObjectInitializationData
#include "UnityEngine/ResourceManagement/Util/ObjectInitializationData.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::AddressableAssets::ResourceLocators
namespace UnityEngine::AddressableAssets::ResourceLocators {
  // Forward declaring type: ContentCatalogDataEntry
  class ContentCatalogDataEntry;
  // Forward declaring type: ResourceLocationMap
  class ResourceLocationMap;
}
// Forward declaring namespace: UnityEngine::ResourceManagement::ResourceLocations
namespace UnityEngine::ResourceManagement::ResourceLocations {
  // Forward declaring type: IResourceLocation
  class IResourceLocation;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: UnityEngine.AddressableAssets.ResourceLocators
namespace UnityEngine::AddressableAssets::ResourceLocators {
  // Forward declaring type: ContentCatalogData
  class ContentCatalogData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*, "UnityEngine.AddressableAssets.ResourceLocators", "ContentCatalogData");
// Type namespace: UnityEngine.AddressableAssets.ResourceLocators
namespace UnityEngine::AddressableAssets::ResourceLocators {
  // Size: 0xE0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData
  // [TokenAttribute] Offset: FFFFFFFF
  class ContentCatalogData : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::Bucket
    struct Bucket;
    // Nested type: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CompactLocation
    class CompactLocation;
    // Nested type: ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::$$c
    class $$c;
    public:
    // System.String localHash
    // Size: 0x8
    // Offset: 0x10
    ::StringW localHash;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation location
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location;
    // Field size check
    static_assert(sizeof(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*) == 0x8);
    // System.String m_LocatorId
    // Size: 0x8
    // Offset: 0x20
    ::StringW m_LocatorId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.String m_BuildResultHash
    // Size: 0x8
    // Offset: 0x28
    ::StringW m_BuildResultHash;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private UnityEngine.ResourceManagement.Util.ObjectInitializationData m_InstanceProviderData
    // Size: 0x30
    // Offset: 0x30
    ::UnityEngine::ResourceManagement::Util::ObjectInitializationData m_InstanceProviderData;
    // Field size check
    static_assert(sizeof(::UnityEngine::ResourceManagement::Util::ObjectInitializationData) == 0x30);
    // private UnityEngine.ResourceManagement.Util.ObjectInitializationData m_SceneProviderData
    // Size: 0x30
    // Offset: 0x60
    ::UnityEngine::ResourceManagement::Util::ObjectInitializationData m_SceneProviderData;
    // Field size check
    static_assert(sizeof(::UnityEngine::ResourceManagement::Util::ObjectInitializationData) == 0x30);
    // System.Collections.Generic.List`1<UnityEngine.ResourceManagement.Util.ObjectInitializationData> m_ResourceProviderData
    // Size: 0x8
    // Offset: 0x90
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>* m_ResourceProviderData;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>*) == 0x8);
    // private System.Collections.Generic.IList`1<UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogDataEntry> m_Entries
    // Size: 0x8
    // Offset: 0x98
    ::System::Collections::Generic::IList_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry*>* m_Entries;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IList_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry*>*) == 0x8);
    // System.String[] m_ProviderIds
    // Size: 0x8
    // Offset: 0xA0
    ::ArrayW<::StringW> m_ProviderIds;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // System.String[] m_InternalIds
    // Size: 0x8
    // Offset: 0xA8
    ::ArrayW<::StringW> m_InternalIds;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // System.String m_KeyDataString
    // Size: 0x8
    // Offset: 0xB0
    ::StringW m_KeyDataString;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.String m_BucketDataString
    // Size: 0x8
    // Offset: 0xB8
    ::StringW m_BucketDataString;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.String m_EntryDataString
    // Size: 0x8
    // Offset: 0xC0
    ::StringW m_EntryDataString;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.String m_ExtraDataString
    // Size: 0x8
    // Offset: 0xC8
    ::StringW m_ExtraDataString;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // UnityEngine.ResourceManagement.Util.SerializedType[] m_resourceTypes
    // Size: 0x8
    // Offset: 0xD0
    ::ArrayW<::UnityEngine::ResourceManagement::Util::SerializedType> m_resourceTypes;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::ResourceManagement::Util::SerializedType>) == 0x8);
    // private System.String[] m_InternalIdPrefixes
    // Size: 0x8
    // Offset: 0xD8
    ::ArrayW<::StringW> m_InternalIdPrefixes;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    public:
    // Get static field: static private System.Int32 kMagic
    static int _get_kMagic();
    // Set static field: static private System.Int32 kMagic
    static void _set_kMagic(int value);
    // static field const value: static private System.Int32 kVersion
    static constexpr const int kVersion = 1;
    // Get static field: static private System.Int32 kVersion
    static int _get_kVersion();
    // Set static field: static private System.Int32 kVersion
    static void _set_kVersion(int value);
    // static field const value: static private System.Int32 kBytesPerInt32
    static constexpr const int kBytesPerInt32 = 4;
    // Get static field: static private System.Int32 kBytesPerInt32
    static int _get_kBytesPerInt32();
    // Set static field: static private System.Int32 kBytesPerInt32
    static void _set_kBytesPerInt32(int value);
    // static field const value: static private System.Int32 k_EntryDataItemPerEntry
    static constexpr const int k_EntryDataItemPerEntry = 7;
    // Get static field: static private System.Int32 k_EntryDataItemPerEntry
    static int _get_k_EntryDataItemPerEntry();
    // Set static field: static private System.Int32 k_EntryDataItemPerEntry
    static void _set_k_EntryDataItemPerEntry(int value);
    // Get instance field reference: System.String localHash
    [[deprecated("Use field access instead!")]] ::StringW& dyn_localHash();
    // Get instance field reference: UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation location
    [[deprecated("Use field access instead!")]] ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*& dyn_location();
    // Get instance field reference: System.String m_LocatorId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_LocatorId();
    // Get instance field reference: System.String m_BuildResultHash
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_BuildResultHash();
    // Get instance field reference: private UnityEngine.ResourceManagement.Util.ObjectInitializationData m_InstanceProviderData
    [[deprecated("Use field access instead!")]] ::UnityEngine::ResourceManagement::Util::ObjectInitializationData& dyn_m_InstanceProviderData();
    // Get instance field reference: private UnityEngine.ResourceManagement.Util.ObjectInitializationData m_SceneProviderData
    [[deprecated("Use field access instead!")]] ::UnityEngine::ResourceManagement::Util::ObjectInitializationData& dyn_m_SceneProviderData();
    // Get instance field reference: System.Collections.Generic.List`1<UnityEngine.ResourceManagement.Util.ObjectInitializationData> m_ResourceProviderData
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>*& dyn_m_ResourceProviderData();
    // Get instance field reference: private System.Collections.Generic.IList`1<UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogDataEntry> m_Entries
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IList_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry*>*& dyn_m_Entries();
    // Get instance field reference: System.String[] m_ProviderIds
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_m_ProviderIds();
    // Get instance field reference: System.String[] m_InternalIds
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_m_InternalIds();
    // Get instance field reference: System.String m_KeyDataString
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_KeyDataString();
    // Get instance field reference: System.String m_BucketDataString
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_BucketDataString();
    // Get instance field reference: System.String m_EntryDataString
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_EntryDataString();
    // Get instance field reference: System.String m_ExtraDataString
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_ExtraDataString();
    // Get instance field reference: UnityEngine.ResourceManagement.Util.SerializedType[] m_resourceTypes
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::ResourceManagement::Util::SerializedType>& dyn_m_resourceTypes();
    // Get instance field reference: private System.String[] m_InternalIdPrefixes
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_m_InternalIdPrefixes();
    // public System.String get_ProviderId()
    // Offset: 0x5061D60
    ::StringW get_ProviderId();
    // System.Void set_ProviderId(System.String value)
    // Offset: 0x5061D68
    void set_ProviderId(::StringW value);
    // public UnityEngine.ResourceManagement.Util.ObjectInitializationData get_InstanceProviderData()
    // Offset: 0x5061D70
    ::UnityEngine::ResourceManagement::Util::ObjectInitializationData get_InstanceProviderData();
    // public System.Void set_InstanceProviderData(UnityEngine.ResourceManagement.Util.ObjectInitializationData value)
    // Offset: 0x5061D84
    void set_InstanceProviderData(::UnityEngine::ResourceManagement::Util::ObjectInitializationData value);
    // public UnityEngine.ResourceManagement.Util.ObjectInitializationData get_SceneProviderData()
    // Offset: 0x5061DA4
    ::UnityEngine::ResourceManagement::Util::ObjectInitializationData get_SceneProviderData();
    // public System.Void set_SceneProviderData(UnityEngine.ResourceManagement.Util.ObjectInitializationData value)
    // Offset: 0x5061DB8
    void set_SceneProviderData(::UnityEngine::ResourceManagement::Util::ObjectInitializationData value);
    // public System.Collections.Generic.List`1<UnityEngine.ResourceManagement.Util.ObjectInitializationData> get_ResourceProviderData()
    // Offset: 0x5061DD8
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>* get_ResourceProviderData();
    // public System.Void set_ResourceProviderData(System.Collections.Generic.List`1<UnityEngine.ResourceManagement.Util.ObjectInitializationData> value)
    // Offset: 0x5061DE0
    void set_ResourceProviderData(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>* value);
    // public System.Void .ctor(System.String id)
    // Offset: 0x5061DE8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContentCatalogData* New_ctor(::StringW id) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContentCatalogData*, creationType>(id)));
    }
    // public System.Void .ctor()
    // Offset: 0x5061E84
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContentCatalogData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContentCatalogData*, creationType>()));
    }
    // public System.String[] get_ProviderIds()
    // Offset: 0x5061F0C
    ::ArrayW<::StringW> get_ProviderIds();
    // public System.String[] get_InternalIds()
    // Offset: 0x5061F14
    ::ArrayW<::StringW> get_InternalIds();
    // static UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData LoadFromFile(System.String path, System.Int32 cacheSize)
    // Offset: 0x5061F1C
    static ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* LoadFromFile(::StringW path, int cacheSize);
    // System.Void SaveToFile(System.String path)
    // Offset: 0x5061F6C
    void SaveToFile(::StringW path);
    // System.Void CleanData()
    // Offset: 0x5060314
    void CleanData();
    // UnityEngine.AddressableAssets.ResourceLocators.ResourceLocationMap CreateCustomLocator(System.String overrideId, System.String providerSuffix)
    // Offset: 0x505AC84
    ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* CreateCustomLocator(::StringW overrideId, ::StringW providerSuffix);
    // public UnityEngine.AddressableAssets.ResourceLocators.ResourceLocationMap CreateLocator(System.String providerSuffix)
    // Offset: 0x5061F90
    ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* CreateLocator(::StringW providerSuffix);
    // System.Collections.Generic.IList`1<UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogDataEntry> GetData()
    // Offset: 0x5062AA4
    ::System::Collections::Generic::IList_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry*>* GetData();
    // static System.String ExpandInternalId(System.String[] internalIdPrefixes, System.String v)
    // Offset: 0x50627E8
    static ::StringW ExpandInternalId(::ArrayW<::StringW> internalIdPrefixes, ::StringW v);
    // static private System.Void .cctor()
    // Offset: 0x5064118
    static void _cctor();
  }; // UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData
  #pragma pack(pop)
  static check_size<sizeof(ContentCatalogData), 216 + sizeof(::ArrayW<::StringW>)> __UnityEngine_AddressableAssets_ResourceLocators_ContentCatalogDataSizeCheck;
  static_assert(sizeof(ContentCatalogData) == 0xE0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_ProviderId
// Il2CppName: get_ProviderId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_ProviderId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*), "get_ProviderId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_ProviderId
// Il2CppName: set_ProviderId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)(::StringW)>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_ProviderId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*), "set_ProviderId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_InstanceProviderData
// Il2CppName: get_InstanceProviderData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::Util::ObjectInitializationData (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_InstanceProviderData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*), "get_InstanceProviderData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_InstanceProviderData
// Il2CppName: set_InstanceProviderData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)(::UnityEngine::ResourceManagement::Util::ObjectInitializationData)>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_InstanceProviderData)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.Util", "ObjectInitializationData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*), "set_InstanceProviderData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_SceneProviderData
// Il2CppName: get_SceneProviderData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::Util::ObjectInitializationData (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_SceneProviderData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*), "get_SceneProviderData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_SceneProviderData
// Il2CppName: set_SceneProviderData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)(::UnityEngine::ResourceManagement::Util::ObjectInitializationData)>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_SceneProviderData)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.Util", "ObjectInitializationData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*), "set_SceneProviderData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_ResourceProviderData
// Il2CppName: get_ResourceProviderData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>* (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_ResourceProviderData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*), "get_ResourceProviderData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_ResourceProviderData
// Il2CppName: set_ResourceProviderData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Util::ObjectInitializationData>*)>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::set_ResourceProviderData)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.Util", "ObjectInitializationData")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*), "set_ResourceProviderData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_ProviderIds
// Il2CppName: get_ProviderIds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_ProviderIds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*), "get_ProviderIds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_InternalIds
// Il2CppName: get_InternalIds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::get_InternalIds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*), "get_InternalIds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::LoadFromFile
// Il2CppName: LoadFromFile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* (*)(::StringW, int)>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::LoadFromFile)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* cacheSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*), "LoadFromFile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, cacheSize});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::SaveToFile
// Il2CppName: SaveToFile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)(::StringW)>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::SaveToFile)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*), "SaveToFile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CleanData
// Il2CppName: CleanData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CleanData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*), "CleanData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CreateCustomLocator
// Il2CppName: CreateCustomLocator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)(::StringW, ::StringW)>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CreateCustomLocator)> {
  static const MethodInfo* get() {
    static auto* overrideId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* providerSuffix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*), "CreateCustomLocator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{overrideId, providerSuffix});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CreateLocator
// Il2CppName: CreateLocator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)(::StringW)>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::CreateLocator)> {
  static const MethodInfo* get() {
    static auto* providerSuffix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*), "CreateLocator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{providerSuffix});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::GetData
// Il2CppName: GetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogDataEntry*>* (UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::*)()>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::GetData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*), "GetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::ExpandInternalId
// Il2CppName: ExpandInternalId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<::StringW>, ::StringW)>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::ExpandInternalId)> {
  static const MethodInfo* get() {
    static auto* internalIdPrefixes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    static auto* v = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*), "ExpandInternalId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{internalIdPrefixes, v});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
