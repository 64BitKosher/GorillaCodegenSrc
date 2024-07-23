// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: PlayFab
namespace PlayFab {
  // Forward declaring type: PlayFabApiSettings
  class PlayFabApiSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::PlayFabApiSettings);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::PlayFabApiSettings*, "PlayFab", "PlayFabApiSettings");
// Type namespace: PlayFab
namespace PlayFab {
  // Size: 0x43
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.PlayFabApiSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayFabApiSettings : public ::Il2CppObject {
    public:
    public:
    // private System.String _ProductionEnvironmentUrl
    // Size: 0x8
    // Offset: 0x10
    ::StringW ProductionEnvironmentUrl;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.Collections.Generic.Dictionary`2<System.String,System.String> _requestGetParams
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* requestGetParams;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*) == 0x8);
    // private System.String <TitleId>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::StringW TitleId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <VerticalName>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::StringW VerticalName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <AdvertisingIdType>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    ::StringW AdvertisingIdType;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <AdvertisingIdValue>k__BackingField
    // Size: 0x8
    // Offset: 0x38
    ::StringW AdvertisingIdValue;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean <DisableAdvertising>k__BackingField
    // Size: 0x1
    // Offset: 0x40
    bool DisableAdvertising;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <DisableDeviceInfo>k__BackingField
    // Size: 0x1
    // Offset: 0x41
    bool DisableDeviceInfo;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <DisableFocusTimeCollection>k__BackingField
    // Size: 0x1
    // Offset: 0x42
    bool DisableFocusTimeCollection;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.String _ProductionEnvironmentUrl
    [[deprecated("Use field access instead!")]] ::StringW& dyn__ProductionEnvironmentUrl();
    // Get instance field reference: public readonly System.Collections.Generic.Dictionary`2<System.String,System.String> _requestGetParams
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& dyn__requestGetParams();
    // Get instance field reference: private System.String <TitleId>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$TitleId$k__BackingField();
    // Get instance field reference: private System.String <VerticalName>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$VerticalName$k__BackingField();
    // Get instance field reference: private System.String <AdvertisingIdType>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$AdvertisingIdType$k__BackingField();
    // Get instance field reference: private System.String <AdvertisingIdValue>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$AdvertisingIdValue$k__BackingField();
    // Get instance field reference: private System.Boolean <DisableAdvertising>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$DisableAdvertising$k__BackingField();
    // Get instance field reference: private System.Boolean <DisableDeviceInfo>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$DisableDeviceInfo$k__BackingField();
    // Get instance field reference: private System.Boolean <DisableFocusTimeCollection>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$DisableFocusTimeCollection$k__BackingField();
    // public System.Collections.Generic.Dictionary`2<System.String,System.String> get_RequestGetParams()
    // Offset: 0x4AF93EC
    ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* get_RequestGetParams();
    // public System.String get_ProductionEnvironmentUrl()
    // Offset: 0x4AF93F4
    ::StringW get_ProductionEnvironmentUrl();
    // public System.Void set_ProductionEnvironmentUrl(System.String value)
    // Offset: 0x4AF93FC
    void set_ProductionEnvironmentUrl(::StringW value);
    // public System.String get_TitleId()
    // Offset: 0x4AF9404
    ::StringW get_TitleId();
    // public System.Void set_TitleId(System.String value)
    // Offset: 0x4AF940C
    void set_TitleId(::StringW value);
    // System.String get_VerticalName()
    // Offset: 0x4AF9414
    ::StringW get_VerticalName();
    // System.Void set_VerticalName(System.String value)
    // Offset: 0x4AF941C
    void set_VerticalName(::StringW value);
    // public System.String get_AdvertisingIdType()
    // Offset: 0x4AF9424
    ::StringW get_AdvertisingIdType();
    // public System.Void set_AdvertisingIdType(System.String value)
    // Offset: 0x4AF942C
    void set_AdvertisingIdType(::StringW value);
    // public System.String get_AdvertisingIdValue()
    // Offset: 0x4AF9434
    ::StringW get_AdvertisingIdValue();
    // public System.Void set_AdvertisingIdValue(System.String value)
    // Offset: 0x4AF943C
    void set_AdvertisingIdValue(::StringW value);
    // public System.Boolean get_DisableAdvertising()
    // Offset: 0x4AF9444
    bool get_DisableAdvertising();
    // public System.Void set_DisableAdvertising(System.Boolean value)
    // Offset: 0x4AF944C
    void set_DisableAdvertising(bool value);
    // public System.Boolean get_DisableDeviceInfo()
    // Offset: 0x4AF9458
    bool get_DisableDeviceInfo();
    // public System.Void set_DisableDeviceInfo(System.Boolean value)
    // Offset: 0x4AF9460
    void set_DisableDeviceInfo(bool value);
    // public System.Boolean get_DisableFocusTimeCollection()
    // Offset: 0x4AF946C
    bool get_DisableFocusTimeCollection();
    // public System.Void set_DisableFocusTimeCollection(System.Boolean value)
    // Offset: 0x4AF9474
    void set_DisableFocusTimeCollection(bool value);
    // public System.String GetFullUrl(System.String apiCall, System.Collections.Generic.Dictionary`2<System.String,System.String> getParams)
    // Offset: 0x4AF9480
    ::StringW GetFullUrl(::StringW apiCall, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* getParams);
    // public System.Void .ctor()
    // Offset: 0x4AF99D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayFabApiSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::PlayFabApiSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayFabApiSettings*, creationType>()));
    }
  }; // PlayFab.PlayFabApiSettings
  #pragma pack(pop)
  static check_size<sizeof(PlayFabApiSettings), 66 + sizeof(bool)> __PlayFab_PlayFabApiSettingsSizeCheck;
  static_assert(sizeof(PlayFabApiSettings) == 0x43);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::PlayFabApiSettings::get_RequestGetParams
// Il2CppName: get_RequestGetParams
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* (PlayFab::PlayFabApiSettings::*)()>(&PlayFab::PlayFabApiSettings::get_RequestGetParams)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PlayFab::PlayFabApiSettings*), "get_RequestGetParams", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PlayFab::PlayFabApiSettings::get_ProductionEnvironmentUrl
// Il2CppName: get_ProductionEnvironmentUrl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (PlayFab::PlayFabApiSettings::*)()>(&PlayFab::PlayFabApiSettings::get_ProductionEnvironmentUrl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PlayFab::PlayFabApiSettings*), "get_ProductionEnvironmentUrl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PlayFab::PlayFabApiSettings::set_ProductionEnvironmentUrl
// Il2CppName: set_ProductionEnvironmentUrl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlayFab::PlayFabApiSettings::*)(::StringW)>(&PlayFab::PlayFabApiSettings::set_ProductionEnvironmentUrl)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::PlayFabApiSettings*), "set_ProductionEnvironmentUrl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: PlayFab::PlayFabApiSettings::get_TitleId
// Il2CppName: get_TitleId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (PlayFab::PlayFabApiSettings::*)()>(&PlayFab::PlayFabApiSettings::get_TitleId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PlayFab::PlayFabApiSettings*), "get_TitleId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PlayFab::PlayFabApiSettings::set_TitleId
// Il2CppName: set_TitleId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlayFab::PlayFabApiSettings::*)(::StringW)>(&PlayFab::PlayFabApiSettings::set_TitleId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::PlayFabApiSettings*), "set_TitleId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: PlayFab::PlayFabApiSettings::get_VerticalName
// Il2CppName: get_VerticalName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (PlayFab::PlayFabApiSettings::*)()>(&PlayFab::PlayFabApiSettings::get_VerticalName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PlayFab::PlayFabApiSettings*), "get_VerticalName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PlayFab::PlayFabApiSettings::set_VerticalName
// Il2CppName: set_VerticalName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlayFab::PlayFabApiSettings::*)(::StringW)>(&PlayFab::PlayFabApiSettings::set_VerticalName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::PlayFabApiSettings*), "set_VerticalName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: PlayFab::PlayFabApiSettings::get_AdvertisingIdType
// Il2CppName: get_AdvertisingIdType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (PlayFab::PlayFabApiSettings::*)()>(&PlayFab::PlayFabApiSettings::get_AdvertisingIdType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PlayFab::PlayFabApiSettings*), "get_AdvertisingIdType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PlayFab::PlayFabApiSettings::set_AdvertisingIdType
// Il2CppName: set_AdvertisingIdType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlayFab::PlayFabApiSettings::*)(::StringW)>(&PlayFab::PlayFabApiSettings::set_AdvertisingIdType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::PlayFabApiSettings*), "set_AdvertisingIdType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: PlayFab::PlayFabApiSettings::get_AdvertisingIdValue
// Il2CppName: get_AdvertisingIdValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (PlayFab::PlayFabApiSettings::*)()>(&PlayFab::PlayFabApiSettings::get_AdvertisingIdValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PlayFab::PlayFabApiSettings*), "get_AdvertisingIdValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PlayFab::PlayFabApiSettings::set_AdvertisingIdValue
// Il2CppName: set_AdvertisingIdValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlayFab::PlayFabApiSettings::*)(::StringW)>(&PlayFab::PlayFabApiSettings::set_AdvertisingIdValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::PlayFabApiSettings*), "set_AdvertisingIdValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: PlayFab::PlayFabApiSettings::get_DisableAdvertising
// Il2CppName: get_DisableAdvertising
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (PlayFab::PlayFabApiSettings::*)()>(&PlayFab::PlayFabApiSettings::get_DisableAdvertising)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PlayFab::PlayFabApiSettings*), "get_DisableAdvertising", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PlayFab::PlayFabApiSettings::set_DisableAdvertising
// Il2CppName: set_DisableAdvertising
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlayFab::PlayFabApiSettings::*)(bool)>(&PlayFab::PlayFabApiSettings::set_DisableAdvertising)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::PlayFabApiSettings*), "set_DisableAdvertising", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: PlayFab::PlayFabApiSettings::get_DisableDeviceInfo
// Il2CppName: get_DisableDeviceInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (PlayFab::PlayFabApiSettings::*)()>(&PlayFab::PlayFabApiSettings::get_DisableDeviceInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PlayFab::PlayFabApiSettings*), "get_DisableDeviceInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PlayFab::PlayFabApiSettings::set_DisableDeviceInfo
// Il2CppName: set_DisableDeviceInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlayFab::PlayFabApiSettings::*)(bool)>(&PlayFab::PlayFabApiSettings::set_DisableDeviceInfo)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::PlayFabApiSettings*), "set_DisableDeviceInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: PlayFab::PlayFabApiSettings::get_DisableFocusTimeCollection
// Il2CppName: get_DisableFocusTimeCollection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (PlayFab::PlayFabApiSettings::*)()>(&PlayFab::PlayFabApiSettings::get_DisableFocusTimeCollection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PlayFab::PlayFabApiSettings*), "get_DisableFocusTimeCollection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PlayFab::PlayFabApiSettings::set_DisableFocusTimeCollection
// Il2CppName: set_DisableFocusTimeCollection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlayFab::PlayFabApiSettings::*)(bool)>(&PlayFab::PlayFabApiSettings::set_DisableFocusTimeCollection)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::PlayFabApiSettings*), "set_DisableFocusTimeCollection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: PlayFab::PlayFabApiSettings::GetFullUrl
// Il2CppName: GetFullUrl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (PlayFab::PlayFabApiSettings::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(&PlayFab::PlayFabApiSettings::GetFullUrl)> {
  static const MethodInfo* get() {
    static auto* apiCall = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* getParams = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::PlayFabApiSettings*), "GetFullUrl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{apiCall, getParams});
  }
};
// Writing MetadataGetter for method: PlayFab::PlayFabApiSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
