// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
// Including type: OVRPlugin/SpaceComponentType
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: OVRSpace
#include "GlobalNamespace/OVRSpace.hpp"
// Including type: OVRTask`1
#include "GlobalNamespace/OVRTask_1.hpp"
// Including type: OVRSpace/StorageLocation
#include "GlobalNamespace/OVRSpace_StorageLocation.hpp"
// Including type: OVRDeserialize
#include "GlobalNamespace/OVRDeserialize.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Pose
  struct Pose;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Camera
  class Camera;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IOVRAnchorComponent`1<T>
  template<typename T>
  class IOVRAnchorComponent_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRAnchor
  struct OVRAnchor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRAnchor, "", "OVRAnchor");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRAnchor
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct OVRAnchor/*, public ::System::ValueType, public ::System::IEquatable_1<::GlobalNamespace::OVRAnchor>, public ::System::IDisposable*/ {
    public:
    public:
    // private readonly System.UInt64 <Handle>k__BackingField
    // Size: 0x8
    // Offset: 0x0
    uint64_t Handle;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private readonly System.Guid <Uuid>k__BackingField
    // Size: 0x10
    // Offset: 0x8
    ::System::Guid Uuid;
    // Field size check
    static_assert(sizeof(::System::Guid) == 0x10);
    public:
    // Creating value type constructor for type: OVRAnchor
    constexpr OVRAnchor(uint64_t Handle_ = {}, ::System::Guid Uuid_ = {}) noexcept : Handle{Handle_}, Uuid{Uuid_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::GlobalNamespace::OVRAnchor>
    operator ::System::IEquatable_1<::GlobalNamespace::OVRAnchor>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::GlobalNamespace::OVRAnchor>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get static field: static public readonly OVRAnchor Null
    static ::GlobalNamespace::OVRAnchor _get_Null();
    // Set static field: static public readonly OVRAnchor Null
    static void _set_Null(::GlobalNamespace::OVRAnchor value);
    // Get static field: static private readonly OVRPlugin/SpaceComponentType[] SupportedComponentsArray
    static ::ArrayW<::GlobalNamespace::OVRPlugin::SpaceComponentType> _get_SupportedComponentsArray();
    // Set static field: static private readonly OVRPlugin/SpaceComponentType[] SupportedComponentsArray
    static void _set_SupportedComponentsArray(::ArrayW<::GlobalNamespace::OVRPlugin::SpaceComponentType> value);
    // Get instance field reference: private readonly System.UInt64 <Handle>k__BackingField
    [[deprecated("Use field access instead!")]] uint64_t& dyn_$Handle$k__BackingField();
    // Get instance field reference: private readonly System.Guid <Uuid>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Guid& dyn_$Uuid$k__BackingField();
    // static OVRPlugin/SpaceQueryInfo GetQueryInfo(OVRPlugin/SpaceComponentType type, OVRSpace/StorageLocation location, System.Int32 maxResults, System.Double timeout)
    // Offset: 0x48ADB4C
    static ::GlobalNamespace::OVRPlugin::SpaceQueryInfo GetQueryInfo(::GlobalNamespace::OVRPlugin::SpaceComponentType type, ::GlobalNamespace::OVRSpace::StorageLocation location, int maxResults, double timeout);
    // static OVRPlugin/SpaceQueryInfo GetQueryInfo(System.Collections.Generic.IEnumerable`1<System.Guid> uuids, OVRSpace/StorageLocation location, System.Double timeout)
    // Offset: 0x48ADBC8
    static ::GlobalNamespace::OVRPlugin::SpaceQueryInfo GetQueryInfo(::System::Collections::Generic::IEnumerable_1<::System::Guid>* uuids, ::GlobalNamespace::OVRSpace::StorageLocation location, double timeout);
    // static OVRTask`1<System.Boolean> FetchAnchorsAsync(OVRPlugin/SpaceComponentType type, System.Collections.Generic.IList`1<OVRAnchor> anchors, OVRSpace/StorageLocation location, System.Int32 maxResults, System.Double timeout)
    // Offset: 0x48ADC44
    static ::GlobalNamespace::OVRTask_1<bool> FetchAnchorsAsync(::GlobalNamespace::OVRPlugin::SpaceComponentType type, ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>* anchors, ::GlobalNamespace::OVRSpace::StorageLocation location, int maxResults, double timeout);
    // static public OVRTask`1<System.Boolean> FetchAnchorsAsync(System.Collections.Generic.IList`1<OVRAnchor> anchors, OVRSpace/StorageLocation location, System.Int32 maxResults, System.Double timeout)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::GlobalNamespace::OVRTask_1<bool> FetchAnchorsAsync(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>* anchors, ::GlobalNamespace::OVRSpace::StorageLocation location, int maxResults, double timeout) {
      static_assert(std::is_convertible_v<std::remove_pointer_t<T>, ::GlobalNamespace::IOVRAnchorComponent_1<T>> && std::is_convertible_v<T, ::System::ValueType*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRAnchor::FetchAnchorsAsync");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "OVRAnchor", "FetchAnchorsAsync", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(anchors), ::il2cpp_utils::ExtractType(location), ::il2cpp_utils::ExtractType(maxResults), ::il2cpp_utils::ExtractType(timeout)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, anchors, location, maxResults, timeout);
    }
    // static public OVRTask`1<System.Boolean> FetchAnchorsAsync(System.Collections.Generic.IEnumerable`1<System.Guid> uuids, System.Collections.Generic.IList`1<OVRAnchor> anchors, OVRSpace/StorageLocation location, System.Double timeout)
    // Offset: 0x48ADEDC
    static ::GlobalNamespace::OVRTask_1<bool> FetchAnchorsAsync(::System::Collections::Generic::IEnumerable_1<::System::Guid>* uuids, ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>* anchors, ::GlobalNamespace::OVRSpace::StorageLocation location, double timeout);
    // static private OVRTask`1<System.Boolean> FetchAnchors(System.Collections.Generic.IList`1<OVRAnchor> anchors, OVRPlugin/SpaceQueryInfo queryInfo)
    // Offset: 0x48ADD18
    static ::GlobalNamespace::OVRTask_1<bool> FetchAnchors(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>* anchors, ::GlobalNamespace::OVRPlugin::SpaceQueryInfo queryInfo);
    // static System.Void OnSpaceQueryCompleteData(OVRDeserialize/SpaceQueryCompleteData data)
    // Offset: 0x48AE018
    static void OnSpaceQueryCompleteData(::GlobalNamespace::OVRDeserialize::SpaceQueryCompleteData data);
    // static public OVRTask`1<OVRAnchor> CreateSpatialAnchorAsync(UnityEngine.Pose trackingSpacePose)
    // Offset: 0x48AE38C
    static ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRAnchor> CreateSpatialAnchorAsync(::UnityEngine::Pose trackingSpacePose);
    // static public OVRTask`1<OVRAnchor> CreateSpatialAnchorAsync(UnityEngine.Transform transform, UnityEngine.Camera centerEyeCamera)
    // Offset: 0x48AE4EC
    static ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRAnchor> CreateSpatialAnchorAsync(::UnityEngine::Transform* transform, ::UnityEngine::Camera* centerEyeCamera);
    // System.UInt64 get_Handle()
    // Offset: 0x48AE7A8
    uint64_t get_Handle();
    // public System.Guid get_Uuid()
    // Offset: 0x48AE7B0
    ::System::Guid get_Uuid();
    // System.Void .ctor(System.UInt64 handle, System.Guid uuid)
    // Offset: 0x48AE380
    // ABORTED: conflicts with another method.  OVRAnchor(uint64_t handle, ::System::Guid uuid);
    // public T GetComponent()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    T GetComponent() {
      static_assert(std::is_convertible_v<std::remove_pointer_t<T>, ::GlobalNamespace::IOVRAnchorComponent_1<T>> && std::is_convertible_v<T, ::System::ValueType*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRAnchor::GetComponent");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "GetComponent", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___generic__method);
    }
    // public System.Boolean TryGetComponent(out T component)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    bool TryGetComponent(ByRef<T> component) {
      static_assert(std::is_convertible_v<std::remove_pointer_t<T>, ::GlobalNamespace::IOVRAnchorComponent_1<T>> && std::is_convertible_v<T, ::System::ValueType*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRAnchor::TryGetComponent");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "TryGetComponent", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<T&>()})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___generic__method, byref(component));
    }
    // public System.Boolean SupportsComponent()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    bool SupportsComponent() {
      static_assert(std::is_convertible_v<std::remove_pointer_t<T>, ::GlobalNamespace::IOVRAnchorComponent_1<T>> && std::is_convertible_v<T, ::System::ValueType*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRAnchor::SupportsComponent");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "SupportsComponent", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___generic__method);
    }
    // public System.Boolean GetSupportedComponents(System.Collections.Generic.List`1<OVRPlugin/SpaceComponentType> components)
    // Offset: 0x48AE7BC
    bool GetSupportedComponents(::System::Collections::Generic::List_1<::GlobalNamespace::OVRPlugin::SpaceComponentType>* components);
    // public System.Boolean Equals(OVRAnchor other)
    // Offset: 0x48AE960
    bool Equals(::GlobalNamespace::OVRAnchor other);
    // public System.Void Dispose()
    // Offset: 0x48AEB40
    void Dispose();
    // static private System.Void .cctor()
    // Offset: 0x48AEB9C
    static void _cctor();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x48AE9C8
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x48AEABC
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x48AEB18
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // OVRAnchor
  #pragma pack(pop)
  static check_size<sizeof(OVRAnchor), 8 + sizeof(::System::Guid)> __GlobalNamespace_OVRAnchorSizeCheck;
  static_assert(sizeof(OVRAnchor) == 0x18);
  // static public System.Boolean op_Equality(OVRAnchor lhs, OVRAnchor rhs)
  // Offset: 0x48AEA58
  bool operator ==(const ::GlobalNamespace::OVRAnchor& lhs, const ::GlobalNamespace::OVRAnchor& rhs);
  // static public System.Boolean op_Inequality(OVRAnchor lhs, OVRAnchor rhs)
  // Offset: 0x48AEA88
  bool operator !=(const ::GlobalNamespace::OVRAnchor& lhs, const ::GlobalNamespace::OVRAnchor& rhs);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRAnchor::GetQueryInfo
// Il2CppName: GetQueryInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::SpaceQueryInfo (*)(::GlobalNamespace::OVRPlugin::SpaceComponentType, ::GlobalNamespace::OVRSpace::StorageLocation, int, double)>(&GlobalNamespace::OVRAnchor::GetQueryInfo)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/SpaceComponentType")->byval_arg;
    static auto* location = &::il2cpp_utils::GetClassFromName("", "OVRSpace/StorageLocation")->byval_arg;
    static auto* maxResults = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* timeout = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRAnchor), "GetQueryInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, location, maxResults, timeout});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRAnchor::GetQueryInfo
// Il2CppName: GetQueryInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::SpaceQueryInfo (*)(::System::Collections::Generic::IEnumerable_1<::System::Guid>*, ::GlobalNamespace::OVRSpace::StorageLocation, double)>(&GlobalNamespace::OVRAnchor::GetQueryInfo)> {
  static const MethodInfo* get() {
    static auto* uuids = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Guid")})->byval_arg;
    static auto* location = &::il2cpp_utils::GetClassFromName("", "OVRSpace/StorageLocation")->byval_arg;
    static auto* timeout = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRAnchor), "GetQueryInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uuids, location, timeout});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRAnchor::FetchAnchorsAsync
// Il2CppName: FetchAnchorsAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_1<bool> (*)(::GlobalNamespace::OVRPlugin::SpaceComponentType, ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRSpace::StorageLocation, int, double)>(&GlobalNamespace::OVRAnchor::FetchAnchorsAsync)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/SpaceComponentType")->byval_arg;
    static auto* anchors = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "OVRAnchor")})->byval_arg;
    static auto* location = &::il2cpp_utils::GetClassFromName("", "OVRSpace/StorageLocation")->byval_arg;
    static auto* maxResults = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* timeout = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRAnchor), "FetchAnchorsAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, anchors, location, maxResults, timeout});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRAnchor::FetchAnchorsAsync
// Il2CppName: FetchAnchorsAsync
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::OVRAnchor::FetchAnchorsAsync
// Il2CppName: FetchAnchorsAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_1<bool> (*)(::System::Collections::Generic::IEnumerable_1<::System::Guid>*, ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRSpace::StorageLocation, double)>(&GlobalNamespace::OVRAnchor::FetchAnchorsAsync)> {
  static const MethodInfo* get() {
    static auto* uuids = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Guid")})->byval_arg;
    static auto* anchors = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "OVRAnchor")})->byval_arg;
    static auto* location = &::il2cpp_utils::GetClassFromName("", "OVRSpace/StorageLocation")->byval_arg;
    static auto* timeout = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRAnchor), "FetchAnchorsAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uuids, anchors, location, timeout});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRAnchor::FetchAnchors
// Il2CppName: FetchAnchors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_1<bool> (*)(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRPlugin::SpaceQueryInfo)>(&GlobalNamespace::OVRAnchor::FetchAnchors)> {
  static const MethodInfo* get() {
    static auto* anchors = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "OVRAnchor")})->byval_arg;
    static auto* queryInfo = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/SpaceQueryInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRAnchor), "FetchAnchors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{anchors, queryInfo});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRAnchor::OnSpaceQueryCompleteData
// Il2CppName: OnSpaceQueryCompleteData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OVRDeserialize::SpaceQueryCompleteData)>(&GlobalNamespace::OVRAnchor::OnSpaceQueryCompleteData)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("", "OVRDeserialize/SpaceQueryCompleteData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRAnchor), "OnSpaceQueryCompleteData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRAnchor::CreateSpatialAnchorAsync
// Il2CppName: CreateSpatialAnchorAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRAnchor> (*)(::UnityEngine::Pose)>(&GlobalNamespace::OVRAnchor::CreateSpatialAnchorAsync)> {
  static const MethodInfo* get() {
    static auto* trackingSpacePose = &::il2cpp_utils::GetClassFromName("UnityEngine", "Pose")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRAnchor), "CreateSpatialAnchorAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{trackingSpacePose});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRAnchor::CreateSpatialAnchorAsync
// Il2CppName: CreateSpatialAnchorAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRAnchor> (*)(::UnityEngine::Transform*, ::UnityEngine::Camera*)>(&GlobalNamespace::OVRAnchor::CreateSpatialAnchorAsync)> {
  static const MethodInfo* get() {
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* centerEyeCamera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRAnchor), "CreateSpatialAnchorAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transform, centerEyeCamera});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRAnchor::get_Handle
// Il2CppName: get_Handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (GlobalNamespace::OVRAnchor::*)()>(&GlobalNamespace::OVRAnchor::get_Handle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRAnchor), "get_Handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRAnchor::get_Uuid
// Il2CppName: get_Uuid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (GlobalNamespace::OVRAnchor::*)()>(&GlobalNamespace::OVRAnchor::get_Uuid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRAnchor), "get_Uuid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRAnchor::OVRAnchor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRAnchor::GetComponent
// Il2CppName: GetComponent
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::OVRAnchor::TryGetComponent
// Il2CppName: TryGetComponent
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::OVRAnchor::SupportsComponent
// Il2CppName: SupportsComponent
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::OVRAnchor::GetSupportedComponents
// Il2CppName: GetSupportedComponents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRAnchor::*)(::System::Collections::Generic::List_1<::GlobalNamespace::OVRPlugin::SpaceComponentType>*)>(&GlobalNamespace::OVRAnchor::GetSupportedComponents)> {
  static const MethodInfo* get() {
    static auto* components = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "OVRPlugin/SpaceComponentType")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRAnchor), "GetSupportedComponents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{components});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRAnchor::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRAnchor::*)(::GlobalNamespace::OVRAnchor)>(&GlobalNamespace::OVRAnchor::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("", "OVRAnchor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRAnchor), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRAnchor::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRAnchor::*)()>(&GlobalNamespace::OVRAnchor::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRAnchor), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRAnchor::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRAnchor::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRAnchor), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRAnchor::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRAnchor::*)(::Il2CppObject*)>(&GlobalNamespace::OVRAnchor::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRAnchor), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRAnchor::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::OVRAnchor::*)()>(&GlobalNamespace::OVRAnchor::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRAnchor), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRAnchor::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::OVRAnchor::*)()>(&GlobalNamespace::OVRAnchor::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRAnchor), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRAnchor::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRAnchor::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!