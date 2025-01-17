// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Behaviour
#include "UnityEngine/Behaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture
  class Texture;
  // Forward declaring type: Vector4
  struct Vector4;
  // Skipping declaration: ReflectionProbeEvent because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ReflectionProbe
  class ReflectionProbe;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ReflectionProbe);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ReflectionProbe*, "UnityEngine", "ReflectionProbe");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ReflectionProbe
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  class ReflectionProbe : public ::UnityEngine::Behaviour {
    public:
    // Nested type: ::UnityEngine::ReflectionProbe::ReflectionProbeEvent
    struct ReflectionProbeEvent;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.ReflectionProbe/ReflectionProbeEvent
    // [TokenAttribute] Offset: FFFFFFFF
    struct ReflectionProbeEvent/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: ReflectionProbeEvent
      constexpr ReflectionProbeEvent(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.ReflectionProbe/ReflectionProbeEvent ReflectionProbeAdded
      static constexpr const int ReflectionProbeAdded = 0;
      // Get static field: static public UnityEngine.ReflectionProbe/ReflectionProbeEvent ReflectionProbeAdded
      static ::UnityEngine::ReflectionProbe::ReflectionProbeEvent _get_ReflectionProbeAdded();
      // Set static field: static public UnityEngine.ReflectionProbe/ReflectionProbeEvent ReflectionProbeAdded
      static void _set_ReflectionProbeAdded(::UnityEngine::ReflectionProbe::ReflectionProbeEvent value);
      // static field const value: static public UnityEngine.ReflectionProbe/ReflectionProbeEvent ReflectionProbeRemoved
      static constexpr const int ReflectionProbeRemoved = 1;
      // Get static field: static public UnityEngine.ReflectionProbe/ReflectionProbeEvent ReflectionProbeRemoved
      static ::UnityEngine::ReflectionProbe::ReflectionProbeEvent _get_ReflectionProbeRemoved();
      // Set static field: static public UnityEngine.ReflectionProbe/ReflectionProbeEvent ReflectionProbeRemoved
      static void _set_ReflectionProbeRemoved(::UnityEngine::ReflectionProbe::ReflectionProbeEvent value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // UnityEngine.ReflectionProbe/ReflectionProbeEvent
    #pragma pack(pop)
    static check_size<sizeof(ReflectionProbe::ReflectionProbeEvent), 0 + sizeof(int)> __UnityEngine_ReflectionProbe_ReflectionProbeEventSizeCheck;
    static_assert(sizeof(ReflectionProbe::ReflectionProbeEvent) == 0x4);
    // Get static field: static private System.Action`2<UnityEngine.ReflectionProbe,UnityEngine.ReflectionProbe/ReflectionProbeEvent> reflectionProbeChanged
    static ::System::Action_2<::UnityEngine::ReflectionProbe*, ::UnityEngine::ReflectionProbe::ReflectionProbeEvent>* _get_reflectionProbeChanged();
    // Set static field: static private System.Action`2<UnityEngine.ReflectionProbe,UnityEngine.ReflectionProbe/ReflectionProbeEvent> reflectionProbeChanged
    static void _set_reflectionProbeChanged(::System::Action_2<::UnityEngine::ReflectionProbe*, ::UnityEngine::ReflectionProbe::ReflectionProbeEvent>* value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.Int32,System.Action`1<UnityEngine.Texture>> registeredDefaultReflectionSetActions
    static ::System::Collections::Generic::Dictionary_2<int, ::System::Action_1<::UnityEngine::Texture*>*>* _get_registeredDefaultReflectionSetActions();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.Int32,System.Action`1<UnityEngine.Texture>> registeredDefaultReflectionSetActions
    static void _set_registeredDefaultReflectionSetActions(::System::Collections::Generic::Dictionary_2<int, ::System::Action_1<::UnityEngine::Texture*>*>* value);
    // Get static field: static private System.Collections.Generic.List`1<System.Action`1<UnityEngine.Texture>> registeredDefaultReflectionTextureActions
    static ::System::Collections::Generic::List_1<::System::Action_1<::UnityEngine::Texture*>*>* _get_registeredDefaultReflectionTextureActions();
    // Set static field: static private System.Collections.Generic.List`1<System.Action`1<UnityEngine.Texture>> registeredDefaultReflectionTextureActions
    static void _set_registeredDefaultReflectionTextureActions(::System::Collections::Generic::List_1<::System::Action_1<::UnityEngine::Texture*>*>* value);
    // static public UnityEngine.Vector4 get_defaultTextureHDRDecodeValues()
    // Offset: 0x54808B0
    static ::UnityEngine::Vector4 get_defaultTextureHDRDecodeValues();
    // static public UnityEngine.Texture get_defaultTexture()
    // Offset: 0x5480974
    static ::UnityEngine::Texture* get_defaultTexture();
    // static private System.Void CallReflectionProbeEvent(UnityEngine.ReflectionProbe probe, UnityEngine.ReflectionProbe/ReflectionProbeEvent probeEvent)
    // Offset: 0x548099C
    static void CallReflectionProbeEvent(::UnityEngine::ReflectionProbe* probe, ::UnityEngine::ReflectionProbe::ReflectionProbeEvent probeEvent);
    // static private System.Void CallSetDefaultReflection(UnityEngine.Texture defaultReflectionCubemap)
    // Offset: 0x5480A2C
    static void CallSetDefaultReflection(::UnityEngine::Texture* defaultReflectionCubemap);
    // static private System.Void get_defaultTextureHDRDecodeValues_Injected(out UnityEngine.Vector4 ret)
    // Offset: 0x5480938
    static void get_defaultTextureHDRDecodeValues_Injected(ByRef<::UnityEngine::Vector4> ret);
    // static private System.Void .cctor()
    // Offset: 0x5480BB0
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // UnityEngine.ReflectionProbe
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ReflectionProbe::ReflectionProbeEvent, "UnityEngine", "ReflectionProbe/ReflectionProbeEvent");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ReflectionProbe::get_defaultTextureHDRDecodeValues
// Il2CppName: get_defaultTextureHDRDecodeValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (*)()>(&UnityEngine::ReflectionProbe::get_defaultTextureHDRDecodeValues)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ReflectionProbe*), "get_defaultTextureHDRDecodeValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ReflectionProbe::get_defaultTexture
// Il2CppName: get_defaultTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Texture* (*)()>(&UnityEngine::ReflectionProbe::get_defaultTexture)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ReflectionProbe*), "get_defaultTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ReflectionProbe::CallReflectionProbeEvent
// Il2CppName: CallReflectionProbeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ReflectionProbe*, ::UnityEngine::ReflectionProbe::ReflectionProbeEvent)>(&UnityEngine::ReflectionProbe::CallReflectionProbeEvent)> {
  static const MethodInfo* get() {
    static auto* probe = &::il2cpp_utils::GetClassFromName("UnityEngine", "ReflectionProbe")->byval_arg;
    static auto* probeEvent = &::il2cpp_utils::GetClassFromName("UnityEngine", "ReflectionProbe/ReflectionProbeEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ReflectionProbe*), "CallReflectionProbeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{probe, probeEvent});
  }
};
// Writing MetadataGetter for method: UnityEngine::ReflectionProbe::CallSetDefaultReflection
// Il2CppName: CallSetDefaultReflection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Texture*)>(&UnityEngine::ReflectionProbe::CallSetDefaultReflection)> {
  static const MethodInfo* get() {
    static auto* defaultReflectionCubemap = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ReflectionProbe*), "CallSetDefaultReflection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{defaultReflectionCubemap});
  }
};
// Writing MetadataGetter for method: UnityEngine::ReflectionProbe::get_defaultTextureHDRDecodeValues_Injected
// Il2CppName: get_defaultTextureHDRDecodeValues_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Vector4>)>(&UnityEngine::ReflectionProbe::get_defaultTextureHDRDecodeValues_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ReflectionProbe*), "get_defaultTextureHDRDecodeValues_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::ReflectionProbe::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::ReflectionProbe::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ReflectionProbe*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
