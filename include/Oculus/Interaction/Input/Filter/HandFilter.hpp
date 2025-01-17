// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.Input.Hand
#include "Oculus/Interaction/Input/Hand.hpp"
// Including type: Oculus.Interaction.Input.Filter.HandData
#include "Oculus/Interaction/Input/Filter/HandData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction::Input::Filter
namespace Oculus::Interaction::Input::Filter {
}
// Forward declaring namespace: Oculus::Interaction::Input
namespace Oculus::Interaction::Input {
  // Forward declaring type: HandFilterParameterBlock
  class HandFilterParameterBlock;
  // Forward declaring type: HandDataAsset
  class HandDataAsset;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.Input.Filter
namespace Oculus::Interaction::Input::Filter {
  // Forward declaring type: HandFilter
  class HandFilter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::Input::Filter::HandFilter);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Input::Filter::HandFilter*, "Oculus.Interaction.Input.Filter", "HandFilter");
// Type namespace: Oculus.Interaction.Input.Filter
namespace Oculus::Interaction::Input::Filter {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Interaction.Input.Filter.HandFilter
  // [TokenAttribute] Offset: FFFFFFFF
  class HandFilter : public ::Oculus::Interaction::Input::Hand {
    public:
    // Nested type: ::Oculus::Interaction::Input::Filter::HandFilter::AttributeId
    struct AttributeId;
    public:
    // private Oculus.Interaction.Input.HandFilterParameterBlock _filterParameters
    // Size: 0x8
    // Offset: 0x80
    ::Oculus::Interaction::Input::HandFilterParameterBlock* filterParameters;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Input::HandFilterParameterBlock*) == 0x8);
    // private System.Int32 _dataSourceHandle
    // Size: 0x4
    // Offset: 0x88
    int dataSourceHandle;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _handModifierHandle
    // Size: 0x4
    // Offset: 0x8C
    int handModifierHandle;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _hasFlaggedError
    // Size: 0x1
    // Offset: 0x90
    bool hasFlaggedError;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private Oculus.Interaction.Input.Filter.HandData _handData
    // Size: 0x24
    // Offset: 0x98
    ::Oculus::Interaction::Input::Filter::HandData handData;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Input::Filter::HandData) == 0x24);
    public:
    // static field const value: static private System.Int32 _isdkExternalHandSourceId
    static constexpr const int _isdkExternalHandSourceId = 2;
    // Get static field: static private System.Int32 _isdkExternalHandSourceId
    static int _get__isdkExternalHandSourceId();
    // Set static field: static private System.Int32 _isdkExternalHandSourceId
    static void _set__isdkExternalHandSourceId(int value);
    // static field const value: static private System.Int32 _isdkOneEuroHandModifierId
    static constexpr const int _isdkOneEuroHandModifierId = 1;
    // Get static field: static private System.Int32 _isdkOneEuroHandModifierId
    static int _get__isdkOneEuroHandModifierId();
    // Set static field: static private System.Int32 _isdkOneEuroHandModifierId
    static void _set__isdkOneEuroHandModifierId(int value);
    // static field const value: static private System.Int32 _isdkSuccess
    static constexpr const int _isdkSuccess = 0;
    // Get static field: static private System.Int32 _isdkSuccess
    static int _get__isdkSuccess();
    // Set static field: static private System.Int32 _isdkSuccess
    static void _set__isdkSuccess(int value);
    // static field const value: static private System.String _logPrefix
    static constexpr const char* _logPrefix = "[Oculus.Interaction]";
    // Get static field: static private System.String _logPrefix
    static ::StringW _get__logPrefix();
    // Set static field: static private System.String _logPrefix
    static void _set__logPrefix(::StringW value);
    // Get instance field reference: private Oculus.Interaction.Input.HandFilterParameterBlock _filterParameters
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Input::HandFilterParameterBlock*& dyn__filterParameters();
    // Get instance field reference: private System.Int32 _dataSourceHandle
    [[deprecated("Use field access instead!")]] int& dyn__dataSourceHandle();
    // Get instance field reference: private System.Int32 _handModifierHandle
    [[deprecated("Use field access instead!")]] int& dyn__handModifierHandle();
    // Get instance field reference: private System.Boolean _hasFlaggedError
    [[deprecated("Use field access instead!")]] bool& dyn__hasFlaggedError();
    // Get instance field reference: private Oculus.Interaction.Input.Filter.HandData _handData
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Input::Filter::HandData& dyn__handData();
    // static private System.Int32 isdk_DataSource_Create(System.Int32 id)
    // Offset: 0x481F7B8
    static int isdk_DataSource_Create(int id);
    // static private System.Int32 isdk_DataSource_Destroy(System.Int32 handle)
    // Offset: 0x481F834
    static int isdk_DataSource_Destroy(int handle);
    // static private System.Int32 isdk_DataModifier_Create(System.Int32 id, System.Int32 handle)
    // Offset: 0x481F8B0
    static int isdk_DataModifier_Create(int id, int handle);
    // static private System.Int32 isdk_DataSource_Update(System.Int32 handle)
    // Offset: 0x481F934
    static int isdk_DataSource_Update(int handle);
    // static private System.Int32 isdk_DataSource_GetData(System.Int32 handle, ref Oculus.Interaction.Input.Filter.HandData data)
    // Offset: 0x481F9B0
    static int isdk_DataSource_GetData(int handle, ByRef<::Oculus::Interaction::Input::Filter::HandData> data);
    // static private System.Int32 isdk_ExternalHandSource_SetData(System.Int32 handle, in Oculus.Interaction.Input.Filter.HandData data)
    // Offset: 0x481FA94
    static int isdk_ExternalHandSource_SetData(int handle, ByRef<::Oculus::Interaction::Input::Filter::HandData> data);
    // static private System.Int32 isdk_DataSource_SetAttributeFloat(System.Int32 handle, System.Int32 attrId, System.Single value)
    // Offset: 0x481FB3C
    static int isdk_DataSource_SetAttributeFloat(int handle, int attrId, float value);
    // protected System.Void Awake()
    // Offset: 0x481FBD0
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x481FC04
    void OnDestroy();
    // protected System.Boolean UpdateFilterParameters()
    // Offset: 0x481FCD8
    bool UpdateFilterParameters();
    // protected System.Boolean UpdateHandData(Oculus.Interaction.Input.HandDataAsset handDataAsset)
    // Offset: 0x481FE70
    bool UpdateHandData(::Oculus::Interaction::Input::HandDataAsset* handDataAsset);
    // protected override System.Void Apply(Oculus.Interaction.Input.HandDataAsset handDataAsset)
    // Offset: 0x481FC20
    // Implemented from: Oculus.Interaction.Input.Hand
    // Base method: System.Void Hand::Apply(Oculus.Interaction.Input.HandDataAsset handDataAsset)
    void Apply(::Oculus::Interaction::Input::HandDataAsset* handDataAsset);
    // public System.Void .ctor()
    // Offset: 0x481FF64
    // Implemented from: Oculus.Interaction.Input.Hand
    // Base method: System.Void Hand::.ctor()
    // Base method: System.Void DataModifier_1::.ctor()
    // Base method: System.Void DataSource_1::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HandFilter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Input::Filter::HandFilter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HandFilter*, creationType>()));
    }
  }; // Oculus.Interaction.Input.Filter.HandFilter
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::Input::Filter::HandFilter::isdk_DataSource_Create
// Il2CppName: isdk_DataSource_Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&Oculus::Interaction::Input::Filter::HandFilter::isdk_DataSource_Create)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::Filter::HandFilter*), "isdk_DataSource_Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::Filter::HandFilter::isdk_DataSource_Destroy
// Il2CppName: isdk_DataSource_Destroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&Oculus::Interaction::Input::Filter::HandFilter::isdk_DataSource_Destroy)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::Filter::HandFilter*), "isdk_DataSource_Destroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::Filter::HandFilter::isdk_DataModifier_Create
// Il2CppName: isdk_DataModifier_Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int)>(&Oculus::Interaction::Input::Filter::HandFilter::isdk_DataModifier_Create)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::Filter::HandFilter*), "isdk_DataModifier_Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id, handle});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::Filter::HandFilter::isdk_DataSource_Update
// Il2CppName: isdk_DataSource_Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&Oculus::Interaction::Input::Filter::HandFilter::isdk_DataSource_Update)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::Filter::HandFilter*), "isdk_DataSource_Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::Filter::HandFilter::isdk_DataSource_GetData
// Il2CppName: isdk_DataSource_GetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, ByRef<::Oculus::Interaction::Input::Filter::HandData>)>(&Oculus::Interaction::Input::Filter::HandFilter::isdk_DataSource_GetData)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input.Filter", "HandData")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::Filter::HandFilter*), "isdk_DataSource_GetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle, data});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::Filter::HandFilter::isdk_ExternalHandSource_SetData
// Il2CppName: isdk_ExternalHandSource_SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, ByRef<::Oculus::Interaction::Input::Filter::HandData>)>(&Oculus::Interaction::Input::Filter::HandFilter::isdk_ExternalHandSource_SetData)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input.Filter", "HandData")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::Filter::HandFilter*), "isdk_ExternalHandSource_SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle, data});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::Filter::HandFilter::isdk_DataSource_SetAttributeFloat
// Il2CppName: isdk_DataSource_SetAttributeFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int, float)>(&Oculus::Interaction::Input::Filter::HandFilter::isdk_DataSource_SetAttributeFloat)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* attrId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::Filter::HandFilter*), "isdk_DataSource_SetAttributeFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle, attrId, value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::Filter::HandFilter::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Input::Filter::HandFilter::*)()>(&Oculus::Interaction::Input::Filter::HandFilter::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::Filter::HandFilter*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::Filter::HandFilter::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Input::Filter::HandFilter::*)()>(&Oculus::Interaction::Input::Filter::HandFilter::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::Filter::HandFilter*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::Filter::HandFilter::UpdateFilterParameters
// Il2CppName: UpdateFilterParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::Input::Filter::HandFilter::*)()>(&Oculus::Interaction::Input::Filter::HandFilter::UpdateFilterParameters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::Filter::HandFilter*), "UpdateFilterParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::Filter::HandFilter::UpdateHandData
// Il2CppName: UpdateHandData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::Input::Filter::HandFilter::*)(::Oculus::Interaction::Input::HandDataAsset*)>(&Oculus::Interaction::Input::Filter::HandFilter::UpdateHandData)> {
  static const MethodInfo* get() {
    static auto* handDataAsset = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "HandDataAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::Filter::HandFilter*), "UpdateHandData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handDataAsset});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::Filter::HandFilter::Apply
// Il2CppName: Apply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Input::Filter::HandFilter::*)(::Oculus::Interaction::Input::HandDataAsset*)>(&Oculus::Interaction::Input::Filter::HandFilter::Apply)> {
  static const MethodInfo* get() {
    static auto* handDataAsset = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "HandDataAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::Filter::HandFilter*), "Apply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handDataAsset});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::Filter::HandFilter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
