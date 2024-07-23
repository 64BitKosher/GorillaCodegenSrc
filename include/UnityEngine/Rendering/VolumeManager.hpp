// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueTuple`2
#include "System/ValueTuple_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: VolumeStack
  class VolumeStack;
  // Forward declaring type: Volume
  class Volume;
  // Forward declaring type: VolumeComponent
  class VolumeComponent;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Lazy`1<T>
  template<typename T>
  class Lazy_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collider
  class Collider;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: LayerMask
  struct LayerMask;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: VolumeManager
  class VolumeManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::VolumeManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::VolumeManager*, "UnityEngine.Rendering", "VolumeManager");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.VolumeManager
  // [TokenAttribute] Offset: FFFFFFFF
  class VolumeManager : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::Rendering::VolumeManager::$$c
    class $$c;
    public:
    // private UnityEngine.Rendering.VolumeStack <stack>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Rendering::VolumeStack* stack;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::VolumeStack*) == 0x8);
    // private System.Type[] <baseComponentTypeArray>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::System::Type*> baseComponentTypeArray;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Type*>) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>> m_SortedVolumes
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::Dictionary_2<int, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Volume*>*>* m_SortedVolumes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<int, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Volume*>*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<UnityEngine.Rendering.Volume> m_Volumes
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Volume*>* m_Volumes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Volume*>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean> m_SortNeeded
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::Dictionary_2<int, bool>* m_SortNeeded;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<int, bool>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<UnityEngine.Rendering.VolumeComponent> m_ComponentsDefaultState
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::VolumeComponent*>* m_ComponentsDefaultState;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Rendering::VolumeComponent*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<UnityEngine.Collider> m_TempColliders
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::List_1<::UnityEngine::Collider*>* m_TempColliders;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Collider*>*) == 0x8);
    // private UnityEngine.Rendering.VolumeStack m_DefaultStack
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Rendering::VolumeStack* m_DefaultStack;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::VolumeStack*) == 0x8);
    public:
    // Get static field: static private readonly System.Lazy`1<UnityEngine.Rendering.VolumeManager> s_Instance
    static ::System::Lazy_1<::UnityEngine::Rendering::VolumeManager*>* _get_s_Instance();
    // Set static field: static private readonly System.Lazy`1<UnityEngine.Rendering.VolumeManager> s_Instance
    static void _set_s_Instance(::System::Lazy_1<::UnityEngine::Rendering::VolumeManager*>* value);
    // Get static field: static private readonly System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.ValueTuple`2<System.String,System.Type>>> s_SupportedVolumeComponentsForRenderPipeline
    static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, ::System::Type*>>*>* _get_s_SupportedVolumeComponentsForRenderPipeline();
    // Set static field: static private readonly System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.ValueTuple`2<System.String,System.Type>>> s_SupportedVolumeComponentsForRenderPipeline
    static void _set_s_SupportedVolumeComponentsForRenderPipeline(::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, ::System::Type*>>*>* value);
    // Get instance field reference: private UnityEngine.Rendering.VolumeStack <stack>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::VolumeStack*& dyn_$stack$k__BackingField();
    // Get instance field reference: private System.Type[] <baseComponentTypeArray>k__BackingField
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Type*>& dyn_$baseComponentTypeArray$k__BackingField();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>> m_SortedVolumes
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<int, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Volume*>*>*& dyn_m_SortedVolumes();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<UnityEngine.Rendering.Volume> m_Volumes
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Volume*>*& dyn_m_Volumes();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean> m_SortNeeded
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<int, bool>*& dyn_m_SortNeeded();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<UnityEngine.Rendering.VolumeComponent> m_ComponentsDefaultState
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Rendering::VolumeComponent*>*& dyn_m_ComponentsDefaultState();
    // Get instance field reference: private readonly System.Collections.Generic.List`1<UnityEngine.Collider> m_TempColliders
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Collider*>*& dyn_m_TempColliders();
    // Get instance field reference: private UnityEngine.Rendering.VolumeStack m_DefaultStack
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::VolumeStack*& dyn_m_DefaultStack();
    // static public UnityEngine.Rendering.VolumeManager get_instance()
    // Offset: 0x525F9E4
    static ::UnityEngine::Rendering::VolumeManager* get_instance();
    // public UnityEngine.Rendering.VolumeStack get_stack()
    // Offset: 0x52618D0
    ::UnityEngine::Rendering::VolumeStack* get_stack();
    // public System.Void set_stack(UnityEngine.Rendering.VolumeStack value)
    // Offset: 0x52618D8
    void set_stack(::UnityEngine::Rendering::VolumeStack* value);
    // static System.Collections.Generic.List`1<System.ValueTuple`2<System.String,System.Type>> GetSupportedVolumeComponents(System.Type currentPipelineType)
    // Offset: 0x52618E0
    static ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, ::System::Type*>>* GetSupportedVolumeComponents(::System::Type* currentPipelineType);
    // static private System.Collections.Generic.List`1<System.ValueTuple`2<System.String,System.Type>> FilterVolumeComponentTypes(System.Type[] types, System.Type currentPipelineType)
    // Offset: 0x52619D8
    static ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, ::System::Type*>>* FilterVolumeComponentTypes(::ArrayW<::System::Type*> types, ::System::Type* currentPipelineType);
    // public System.Type[] get_baseComponentTypeArray()
    // Offset: 0x5261DD4
    ::ArrayW<::System::Type*> get_baseComponentTypeArray();
    // private System.Void set_baseComponentTypeArray(System.Type[] value)
    // Offset: 0x5261DDC
    void set_baseComponentTypeArray(::ArrayW<::System::Type*> value);
    // private System.Void .ctor()
    // Offset: 0x5261DE4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VolumeManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::VolumeManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VolumeManager*, creationType>()));
    }
    // public UnityEngine.Rendering.VolumeStack CreateStack()
    // Offset: 0x5262314
    ::UnityEngine::Rendering::VolumeStack* CreateStack();
    // public System.Void ResetMainStack()
    // Offset: 0x52628B0
    void ResetMainStack();
    // private System.Void ReloadBaseTypes()
    // Offset: 0x5261FEC
    void ReloadBaseTypes();
    // public System.Void Register(UnityEngine.Rendering.Volume volume, System.Int32 layer)
    // Offset: 0x525FA5C
    void Register(::UnityEngine::Rendering::Volume* volume, int layer);
    // public System.Void Unregister(UnityEngine.Rendering.Volume volume, System.Int32 layer)
    // Offset: 0x525FD8C
    void Unregister(::UnityEngine::Rendering::Volume* volume, int layer);
    // System.Void SetLayerDirty(System.Int32 layer)
    // Offset: 0x5260080
    void SetLayerDirty(int layer);
    // System.Void UpdateVolumeLayer(UnityEngine.Rendering.Volume volume, System.Int32 prevLayer, System.Int32 newLayer)
    // Offset: 0x5260204
    void UpdateVolumeLayer(::UnityEngine::Rendering::Volume* volume, int prevLayer, int newLayer);
    // private System.Void OverrideData(UnityEngine.Rendering.VolumeStack stack, System.Collections.Generic.List`1<UnityEngine.Rendering.VolumeComponent> components, System.Single interpFactor)
    // Offset: 0x52628BC
    void OverrideData(::UnityEngine::Rendering::VolumeStack* stack, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::VolumeComponent*>* components, float interpFactor);
    // System.Void ReplaceData(UnityEngine.Rendering.VolumeStack stack)
    // Offset: 0x5262A10
    void ReplaceData(::UnityEngine::Rendering::VolumeStack* stack);
    // private System.Boolean CheckUpdateRequired(UnityEngine.Rendering.VolumeStack stack)
    // Offset: 0x5262AB0
    bool CheckUpdateRequired(::UnityEngine::Rendering::VolumeStack* stack);
    // public System.Void Update(UnityEngine.Transform trigger, UnityEngine.LayerMask layerMask)
    // Offset: 0x5262B24
    void Update(::UnityEngine::Transform* trigger, ::UnityEngine::LayerMask layerMask);
    // public System.Void Update(UnityEngine.Rendering.VolumeStack stack, UnityEngine.Transform trigger, UnityEngine.LayerMask layerMask)
    // Offset: 0x5262B38
    void Update(::UnityEngine::Rendering::VolumeStack* stack, ::UnityEngine::Transform* trigger, ::UnityEngine::LayerMask layerMask);
    // public UnityEngine.Rendering.Volume[] GetVolumes(UnityEngine.LayerMask layerMask)
    // Offset: 0x5263248
    ::ArrayW<::UnityEngine::Rendering::Volume*> GetVolumes(::UnityEngine::LayerMask layerMask);
    // private System.Collections.Generic.List`1<UnityEngine.Rendering.Volume> GrabVolumes(UnityEngine.LayerMask mask)
    // Offset: 0x5262F40
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Volume*>* GrabVolumes(::UnityEngine::LayerMask mask);
    // static private System.Void SortByPriority(System.Collections.Generic.List`1<UnityEngine.Rendering.Volume> volumes)
    // Offset: 0x5263384
    static void SortByPriority(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Volume*>* volumes);
    // static private System.Void .cctor()
    // Offset: 0x52634B8
    static void _cctor();
  }; // UnityEngine.Rendering.VolumeManager
  #pragma pack(pop)
  static check_size<sizeof(VolumeManager), 72 + sizeof(::UnityEngine::Rendering::VolumeStack*)> __UnityEngine_Rendering_VolumeManagerSizeCheck;
  static_assert(sizeof(VolumeManager) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::VolumeManager::get_instance
// Il2CppName: get_instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::VolumeManager* (*)()>(&UnityEngine::Rendering::VolumeManager::get_instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VolumeManager*), "get_instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::VolumeManager::get_stack
// Il2CppName: get_stack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::VolumeStack* (UnityEngine::Rendering::VolumeManager::*)()>(&UnityEngine::Rendering::VolumeManager::get_stack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VolumeManager*), "get_stack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::VolumeManager::set_stack
// Il2CppName: set_stack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::VolumeManager::*)(::UnityEngine::Rendering::VolumeStack*)>(&UnityEngine::Rendering::VolumeManager::set_stack)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "VolumeStack")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VolumeManager*), "set_stack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::VolumeManager::GetSupportedVolumeComponents
// Il2CppName: GetSupportedVolumeComponents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, ::System::Type*>>* (*)(::System::Type*)>(&UnityEngine::Rendering::VolumeManager::GetSupportedVolumeComponents)> {
  static const MethodInfo* get() {
    static auto* currentPipelineType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VolumeManager*), "GetSupportedVolumeComponents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{currentPipelineType});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::VolumeManager::FilterVolumeComponentTypes
// Il2CppName: FilterVolumeComponentTypes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, ::System::Type*>>* (*)(::ArrayW<::System::Type*>, ::System::Type*)>(&UnityEngine::Rendering::VolumeManager::FilterVolumeComponentTypes)> {
  static const MethodInfo* get() {
    static auto* types = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    static auto* currentPipelineType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VolumeManager*), "FilterVolumeComponentTypes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{types, currentPipelineType});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::VolumeManager::get_baseComponentTypeArray
// Il2CppName: get_baseComponentTypeArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Type*> (UnityEngine::Rendering::VolumeManager::*)()>(&UnityEngine::Rendering::VolumeManager::get_baseComponentTypeArray)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VolumeManager*), "get_baseComponentTypeArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::VolumeManager::set_baseComponentTypeArray
// Il2CppName: set_baseComponentTypeArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::VolumeManager::*)(::ArrayW<::System::Type*>)>(&UnityEngine::Rendering::VolumeManager::set_baseComponentTypeArray)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VolumeManager*), "set_baseComponentTypeArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::VolumeManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::VolumeManager::CreateStack
// Il2CppName: CreateStack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::VolumeStack* (UnityEngine::Rendering::VolumeManager::*)()>(&UnityEngine::Rendering::VolumeManager::CreateStack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VolumeManager*), "CreateStack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::VolumeManager::ResetMainStack
// Il2CppName: ResetMainStack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::VolumeManager::*)()>(&UnityEngine::Rendering::VolumeManager::ResetMainStack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VolumeManager*), "ResetMainStack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::VolumeManager::ReloadBaseTypes
// Il2CppName: ReloadBaseTypes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::VolumeManager::*)()>(&UnityEngine::Rendering::VolumeManager::ReloadBaseTypes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VolumeManager*), "ReloadBaseTypes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::VolumeManager::Register
// Il2CppName: Register
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::VolumeManager::*)(::UnityEngine::Rendering::Volume*, int)>(&UnityEngine::Rendering::VolumeManager::Register)> {
  static const MethodInfo* get() {
    static auto* volume = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "Volume")->byval_arg;
    static auto* layer = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VolumeManager*), "Register", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{volume, layer});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::VolumeManager::Unregister
// Il2CppName: Unregister
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::VolumeManager::*)(::UnityEngine::Rendering::Volume*, int)>(&UnityEngine::Rendering::VolumeManager::Unregister)> {
  static const MethodInfo* get() {
    static auto* volume = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "Volume")->byval_arg;
    static auto* layer = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VolumeManager*), "Unregister", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{volume, layer});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::VolumeManager::SetLayerDirty
// Il2CppName: SetLayerDirty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::VolumeManager::*)(int)>(&UnityEngine::Rendering::VolumeManager::SetLayerDirty)> {
  static const MethodInfo* get() {
    static auto* layer = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VolumeManager*), "SetLayerDirty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{layer});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::VolumeManager::UpdateVolumeLayer
// Il2CppName: UpdateVolumeLayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::VolumeManager::*)(::UnityEngine::Rendering::Volume*, int, int)>(&UnityEngine::Rendering::VolumeManager::UpdateVolumeLayer)> {
  static const MethodInfo* get() {
    static auto* volume = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "Volume")->byval_arg;
    static auto* prevLayer = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* newLayer = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VolumeManager*), "UpdateVolumeLayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{volume, prevLayer, newLayer});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::VolumeManager::OverrideData
// Il2CppName: OverrideData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::VolumeManager::*)(::UnityEngine::Rendering::VolumeStack*, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::VolumeComponent*>*, float)>(&UnityEngine::Rendering::VolumeManager::OverrideData)> {
  static const MethodInfo* get() {
    static auto* stack = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "VolumeStack")->byval_arg;
    static auto* components = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "VolumeComponent")})->byval_arg;
    static auto* interpFactor = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VolumeManager*), "OverrideData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stack, components, interpFactor});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::VolumeManager::ReplaceData
// Il2CppName: ReplaceData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::VolumeManager::*)(::UnityEngine::Rendering::VolumeStack*)>(&UnityEngine::Rendering::VolumeManager::ReplaceData)> {
  static const MethodInfo* get() {
    static auto* stack = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "VolumeStack")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VolumeManager*), "ReplaceData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stack});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::VolumeManager::CheckUpdateRequired
// Il2CppName: CheckUpdateRequired
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::VolumeManager::*)(::UnityEngine::Rendering::VolumeStack*)>(&UnityEngine::Rendering::VolumeManager::CheckUpdateRequired)> {
  static const MethodInfo* get() {
    static auto* stack = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "VolumeStack")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VolumeManager*), "CheckUpdateRequired", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stack});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::VolumeManager::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::VolumeManager::*)(::UnityEngine::Transform*, ::UnityEngine::LayerMask)>(&UnityEngine::Rendering::VolumeManager::Update)> {
  static const MethodInfo* get() {
    static auto* trigger = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* layerMask = &::il2cpp_utils::GetClassFromName("UnityEngine", "LayerMask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VolumeManager*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{trigger, layerMask});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::VolumeManager::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::VolumeManager::*)(::UnityEngine::Rendering::VolumeStack*, ::UnityEngine::Transform*, ::UnityEngine::LayerMask)>(&UnityEngine::Rendering::VolumeManager::Update)> {
  static const MethodInfo* get() {
    static auto* stack = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "VolumeStack")->byval_arg;
    static auto* trigger = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* layerMask = &::il2cpp_utils::GetClassFromName("UnityEngine", "LayerMask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VolumeManager*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stack, trigger, layerMask});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::VolumeManager::GetVolumes
// Il2CppName: GetVolumes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Rendering::Volume*> (UnityEngine::Rendering::VolumeManager::*)(::UnityEngine::LayerMask)>(&UnityEngine::Rendering::VolumeManager::GetVolumes)> {
  static const MethodInfo* get() {
    static auto* layerMask = &::il2cpp_utils::GetClassFromName("UnityEngine", "LayerMask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VolumeManager*), "GetVolumes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{layerMask});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::VolumeManager::GrabVolumes
// Il2CppName: GrabVolumes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Volume*>* (UnityEngine::Rendering::VolumeManager::*)(::UnityEngine::LayerMask)>(&UnityEngine::Rendering::VolumeManager::GrabVolumes)> {
  static const MethodInfo* get() {
    static auto* mask = &::il2cpp_utils::GetClassFromName("UnityEngine", "LayerMask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VolumeManager*), "GrabVolumes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mask});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::VolumeManager::SortByPriority
// Il2CppName: SortByPriority
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Volume*>*)>(&UnityEngine::Rendering::VolumeManager::SortByPriority)> {
  static const MethodInfo* get() {
    static auto* volumes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "Volume")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VolumeManager*), "SortByPriority", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{volumes});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::VolumeManager::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Rendering::VolumeManager::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VolumeManager*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
