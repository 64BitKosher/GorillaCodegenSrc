// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.VolumeManager
#include "UnityEngine/Rendering/VolumeManager.hpp"
// Including type: System.ValueTuple`2
#include "System/ValueTuple_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Predicate`1<T>
  template<typename T>
  class Predicate_1;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: Volume
  class Volume;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::VolumeManager::$$c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::VolumeManager::$$c*, "UnityEngine.Rendering", "VolumeManager/<>c");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.VolumeManager/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class VolumeManager::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.Rendering.VolumeManager/<>c <>9
    static ::UnityEngine::Rendering::VolumeManager::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.Rendering.VolumeManager/<>c <>9
    static void _set_$$9(::UnityEngine::Rendering::VolumeManager::$$c* value);
    // Get static field: static public System.Func`2<System.ValueTuple`2<System.String,System.Type>,System.String> <>9__12_0
    static ::System::Func_2<::System::ValueTuple_2<::StringW, ::System::Type*>, ::StringW>* _get_$$9__12_0();
    // Set static field: static public System.Func`2<System.ValueTuple`2<System.String,System.Type>,System.String> <>9__12_0
    static void _set_$$9__12_0(::System::Func_2<::System::ValueTuple_2<::StringW, ::System::Type*>, ::StringW>* value);
    // Get static field: static public System.Func`2<System.Type,System.Boolean> <>9__29_0
    static ::System::Func_2<::System::Type*, bool>* _get_$$9__29_0();
    // Set static field: static public System.Func`2<System.Type,System.Boolean> <>9__29_0
    static void _set_$$9__29_0(::System::Func_2<::System::Type*, bool>* value);
    // Get static field: static public System.Predicate`1<UnityEngine.Rendering.Volume> <>9__42_0
    static ::System::Predicate_1<::UnityEngine::Rendering::Volume*>* _get_$$9__42_0();
    // Set static field: static public System.Predicate`1<UnityEngine.Rendering.Volume> <>9__42_0
    static void _set_$$9__42_0(::System::Predicate_1<::UnityEngine::Rendering::Volume*>* value);
    // static private System.Void .cctor()
    // Offset: 0x5263628
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x5263690
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VolumeManager::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::VolumeManager::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VolumeManager::$$c*, creationType>()));
    }
    // System.String <FilterVolumeComponentTypes>b__12_0(System.ValueTuple`2<System.String,System.Type> i)
    // Offset: 0x5263698
    ::StringW $FilterVolumeComponentTypes$b__12_0(::System::ValueTuple_2<::StringW, ::System::Type*> i);
    // System.Boolean <ReloadBaseTypes>b__29_0(System.Type t)
    // Offset: 0x52636A0
    bool $ReloadBaseTypes$b__29_0(::System::Type* t);
    // System.Boolean <GetVolumes>b__42_0(UnityEngine.Rendering.Volume v)
    // Offset: 0x52636C8
    bool $GetVolumes$b__42_0(::UnityEngine::Rendering::Volume* v);
    // UnityEngine.Rendering.VolumeManager <.cctor>b__46_0()
    // Offset: 0x5263724
    ::UnityEngine::Rendering::VolumeManager* $_cctor$b__46_0();
  }; // UnityEngine.Rendering.VolumeManager/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::VolumeManager::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Rendering::VolumeManager::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VolumeManager::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::VolumeManager::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::VolumeManager::$$c::$FilterVolumeComponentTypes$b__12_0
// Il2CppName: <FilterVolumeComponentTypes>b__12_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Rendering::VolumeManager::$$c::*)(::System::ValueTuple_2<::StringW, ::System::Type*>)>(&UnityEngine::Rendering::VolumeManager::$$c::$FilterVolumeComponentTypes$b__12_0)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ValueTuple`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "Type")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VolumeManager::$$c*), "<FilterVolumeComponentTypes>b__12_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::VolumeManager::$$c::$ReloadBaseTypes$b__29_0
// Il2CppName: <ReloadBaseTypes>b__29_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::VolumeManager::$$c::*)(::System::Type*)>(&UnityEngine::Rendering::VolumeManager::$$c::$ReloadBaseTypes$b__29_0)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VolumeManager::$$c*), "<ReloadBaseTypes>b__29_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::VolumeManager::$$c::$GetVolumes$b__42_0
// Il2CppName: <GetVolumes>b__42_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::VolumeManager::$$c::*)(::UnityEngine::Rendering::Volume*)>(&UnityEngine::Rendering::VolumeManager::$$c::$GetVolumes$b__42_0)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "Volume")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VolumeManager::$$c*), "<GetVolumes>b__42_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::VolumeManager::$$c::$_cctor$b__46_0
// Il2CppName: <.cctor>b__46_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::VolumeManager* (UnityEngine::Rendering::VolumeManager::$$c::*)()>(&UnityEngine::Rendering::VolumeManager::$$c::$_cctor$b__46_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VolumeManager::$$c*), "<.cctor>b__46_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
