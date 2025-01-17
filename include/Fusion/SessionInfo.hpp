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
// Forward declaring namespace: System::Collections::ObjectModel
namespace System::Collections::ObjectModel {
  // Forward declaring type: ReadOnlyDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class ReadOnlyDictionary_2;
}
// Forward declaring namespace: Fusion
namespace Fusion {
  // Forward declaring type: SessionProperty
  class SessionProperty;
  // Forward declaring type: NetworkRunner
  class NetworkRunner;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: SessionInfo
  class SessionInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::SessionInfo);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::SessionInfo*, "Fusion", "SessionInfo");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.SessionInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class SessionInfo : public ::Il2CppObject {
    public:
    public:
    // private System.String <Name>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <Region>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::StringW Region;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,Fusion.SessionProperty> <Properties>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::ObjectModel::ReadOnlyDictionary_2<::StringW, ::Fusion::SessionProperty*>* Properties;
    // Field size check
    static_assert(sizeof(::System::Collections::ObjectModel::ReadOnlyDictionary_2<::StringW, ::Fusion::SessionProperty*>*) == 0x8);
    // private System.Int32 <PlayerCount>k__BackingField
    // Size: 0x4
    // Offset: 0x28
    int PlayerCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <MaxPlayers>k__BackingField
    // Size: 0x4
    // Offset: 0x2C
    int MaxPlayers;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Boolean _isValid
    // Size: 0x1
    // Offset: 0x30
    bool isValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean _isOpen
    // Size: 0x1
    // Offset: 0x31
    bool isOpen;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean _isVisible
    // Size: 0x1
    // Offset: 0x32
    bool isVisible;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isVisible and: runner
    char __padding7[0x5] = {};
    // private readonly Fusion.NetworkRunner _runner
    // Size: 0x8
    // Offset: 0x38
    ::Fusion::NetworkRunner* runner;
    // Field size check
    static_assert(sizeof(::Fusion::NetworkRunner*) == 0x8);
    public:
    // Get instance field reference: private System.String <Name>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Name$k__BackingField();
    // Get instance field reference: private System.String <Region>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Region$k__BackingField();
    // Get instance field reference: private System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,Fusion.SessionProperty> <Properties>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Collections::ObjectModel::ReadOnlyDictionary_2<::StringW, ::Fusion::SessionProperty*>*& dyn_$Properties$k__BackingField();
    // Get instance field reference: private System.Int32 <PlayerCount>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$PlayerCount$k__BackingField();
    // Get instance field reference: private System.Int32 <MaxPlayers>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$MaxPlayers$k__BackingField();
    // Get instance field reference: System.Boolean _isValid
    [[deprecated("Use field access instead!")]] bool& dyn__isValid();
    // Get instance field reference: System.Boolean _isOpen
    [[deprecated("Use field access instead!")]] bool& dyn__isOpen();
    // Get instance field reference: System.Boolean _isVisible
    [[deprecated("Use field access instead!")]] bool& dyn__isVisible();
    // Get instance field reference: private readonly Fusion.NetworkRunner _runner
    [[deprecated("Use field access instead!")]] ::Fusion::NetworkRunner*& dyn__runner();
    // public System.Boolean get_IsValid()
    // Offset: 0x2B6B480
    bool get_IsValid();
    // public System.String get_Name()
    // Offset: 0x2B6B488
    ::StringW get_Name();
    // System.Void set_Name(System.String value)
    // Offset: 0x2B6B490
    void set_Name(::StringW value);
    // public System.String get_Region()
    // Offset: 0x2B6B498
    ::StringW get_Region();
    // System.Void set_Region(System.String value)
    // Offset: 0x2B6B4A0
    void set_Region(::StringW value);
    // public System.Boolean get_IsVisible()
    // Offset: 0x2B6B4A8
    bool get_IsVisible();
    // public System.Void set_IsVisible(System.Boolean value)
    // Offset: 0x2B6B4B0
    void set_IsVisible(bool value);
    // public System.Boolean get_IsOpen()
    // Offset: 0x2B6B548
    bool get_IsOpen();
    // public System.Void set_IsOpen(System.Boolean value)
    // Offset: 0x2B6B550
    void set_IsOpen(bool value);
    // public System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,Fusion.SessionProperty> get_Properties()
    // Offset: 0x2B6B5E8
    ::System::Collections::ObjectModel::ReadOnlyDictionary_2<::StringW, ::Fusion::SessionProperty*>* get_Properties();
    // System.Void set_Properties(System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,Fusion.SessionProperty> value)
    // Offset: 0x2B6B5F0
    void set_Properties(::System::Collections::ObjectModel::ReadOnlyDictionary_2<::StringW, ::Fusion::SessionProperty*>* value);
    // public System.Int32 get_PlayerCount()
    // Offset: 0x2B6B5F8
    int get_PlayerCount();
    // System.Void set_PlayerCount(System.Int32 value)
    // Offset: 0x2B6B600
    void set_PlayerCount(int value);
    // public System.Int32 get_MaxPlayers()
    // Offset: 0x2B6B608
    int get_MaxPlayers();
    // System.Void set_MaxPlayers(System.Int32 value)
    // Offset: 0x2B6B610
    void set_MaxPlayers(int value);
    // System.Void .ctor(Fusion.NetworkRunner runner)
    // Offset: 0x2B673D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SessionInfo* New_ctor(::Fusion::NetworkRunner* runner) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::SessionInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SessionInfo*, creationType>(runner)));
    }
    // public System.Boolean UpdateCustomProperties(System.Collections.Generic.Dictionary`2<System.String,Fusion.SessionProperty> customProperties)
    // Offset: 0x2B6A3DC
    bool UpdateCustomProperties(::System::Collections::Generic::Dictionary_2<::StringW, ::Fusion::SessionProperty*>* customProperties);
    // public override System.String ToString()
    // Offset: 0x2B6B62C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // Fusion.SessionInfo
  #pragma pack(pop)
  static check_size<sizeof(SessionInfo), 56 + sizeof(::Fusion::NetworkRunner*)> __Fusion_SessionInfoSizeCheck;
  static_assert(sizeof(SessionInfo) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::SessionInfo::get_IsValid
// Il2CppName: get_IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::SessionInfo::*)()>(&Fusion::SessionInfo::get_IsValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::SessionInfo*), "get_IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::SessionInfo::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Fusion::SessionInfo::*)()>(&Fusion::SessionInfo::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::SessionInfo*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::SessionInfo::set_Name
// Il2CppName: set_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::SessionInfo::*)(::StringW)>(&Fusion::SessionInfo::set_Name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::SessionInfo*), "set_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Fusion::SessionInfo::get_Region
// Il2CppName: get_Region
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Fusion::SessionInfo::*)()>(&Fusion::SessionInfo::get_Region)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::SessionInfo*), "get_Region", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::SessionInfo::set_Region
// Il2CppName: set_Region
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::SessionInfo::*)(::StringW)>(&Fusion::SessionInfo::set_Region)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::SessionInfo*), "set_Region", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Fusion::SessionInfo::get_IsVisible
// Il2CppName: get_IsVisible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::SessionInfo::*)()>(&Fusion::SessionInfo::get_IsVisible)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::SessionInfo*), "get_IsVisible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::SessionInfo::set_IsVisible
// Il2CppName: set_IsVisible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::SessionInfo::*)(bool)>(&Fusion::SessionInfo::set_IsVisible)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::SessionInfo*), "set_IsVisible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Fusion::SessionInfo::get_IsOpen
// Il2CppName: get_IsOpen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::SessionInfo::*)()>(&Fusion::SessionInfo::get_IsOpen)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::SessionInfo*), "get_IsOpen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::SessionInfo::set_IsOpen
// Il2CppName: set_IsOpen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::SessionInfo::*)(bool)>(&Fusion::SessionInfo::set_IsOpen)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::SessionInfo*), "set_IsOpen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Fusion::SessionInfo::get_Properties
// Il2CppName: get_Properties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ObjectModel::ReadOnlyDictionary_2<::StringW, ::Fusion::SessionProperty*>* (Fusion::SessionInfo::*)()>(&Fusion::SessionInfo::get_Properties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::SessionInfo*), "get_Properties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::SessionInfo::set_Properties
// Il2CppName: set_Properties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::SessionInfo::*)(::System::Collections::ObjectModel::ReadOnlyDictionary_2<::StringW, ::Fusion::SessionProperty*>*)>(&Fusion::SessionInfo::set_Properties)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.ObjectModel", "ReadOnlyDictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("Fusion", "SessionProperty")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::SessionInfo*), "set_Properties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Fusion::SessionInfo::get_PlayerCount
// Il2CppName: get_PlayerCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Fusion::SessionInfo::*)()>(&Fusion::SessionInfo::get_PlayerCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::SessionInfo*), "get_PlayerCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::SessionInfo::set_PlayerCount
// Il2CppName: set_PlayerCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::SessionInfo::*)(int)>(&Fusion::SessionInfo::set_PlayerCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::SessionInfo*), "set_PlayerCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Fusion::SessionInfo::get_MaxPlayers
// Il2CppName: get_MaxPlayers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Fusion::SessionInfo::*)()>(&Fusion::SessionInfo::get_MaxPlayers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::SessionInfo*), "get_MaxPlayers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::SessionInfo::set_MaxPlayers
// Il2CppName: set_MaxPlayers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::SessionInfo::*)(int)>(&Fusion::SessionInfo::set_MaxPlayers)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::SessionInfo*), "set_MaxPlayers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Fusion::SessionInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::SessionInfo::UpdateCustomProperties
// Il2CppName: UpdateCustomProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::SessionInfo::*)(::System::Collections::Generic::Dictionary_2<::StringW, ::Fusion::SessionProperty*>*)>(&Fusion::SessionInfo::UpdateCustomProperties)> {
  static const MethodInfo* get() {
    static auto* customProperties = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("Fusion", "SessionProperty")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::SessionInfo*), "UpdateCustomProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{customProperties});
  }
};
// Writing MetadataGetter for method: Fusion::SessionInfo::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Fusion::SessionInfo::*)()>(&Fusion::SessionInfo::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::SessionInfo*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
