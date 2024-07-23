// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Matrix4x4
#include "UnityEngine/Matrix4x4.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.Rect
#include "UnityEngine/Rect.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Event
  class Event;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: RepaintData
  class RepaintData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::RepaintData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::RepaintData*, "UnityEngine.UIElements", "RepaintData");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.RepaintData
  // [TokenAttribute] Offset: FFFFFFFF
  class RepaintData : public ::Il2CppObject {
    public:
    public:
    // private UnityEngine.Matrix4x4 <currentOffset>k__BackingField
    // Size: 0x40
    // Offset: 0x10
    ::UnityEngine::Matrix4x4 currentOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Matrix4x4) == 0x40);
    // private UnityEngine.Vector2 <mousePosition>k__BackingField
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::Vector2 mousePosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // private UnityEngine.Rect <currentWorldClip>k__BackingField
    // Size: 0x10
    // Offset: 0x58
    ::UnityEngine::Rect currentWorldClip;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rect) == 0x10);
    // private UnityEngine.Event <repaintEvent>k__BackingField
    // Size: 0x8
    // Offset: 0x68
    ::UnityEngine::Event* repaintEvent;
    // Field size check
    static_assert(sizeof(::UnityEngine::Event*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.Matrix4x4 <currentOffset>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Matrix4x4& dyn_$currentOffset$k__BackingField();
    // Get instance field reference: private UnityEngine.Vector2 <mousePosition>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_$mousePosition$k__BackingField();
    // Get instance field reference: private UnityEngine.Rect <currentWorldClip>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rect& dyn_$currentWorldClip$k__BackingField();
    // Get instance field reference: private UnityEngine.Event <repaintEvent>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Event*& dyn_$repaintEvent$k__BackingField();
    // public UnityEngine.Matrix4x4 get_currentOffset()
    // Offset: 0x566562C
    ::UnityEngine::Matrix4x4 get_currentOffset();
    // public UnityEngine.Rect get_currentWorldClip()
    // Offset: 0x5665640
    ::UnityEngine::Rect get_currentWorldClip();
    // public UnityEngine.Event get_repaintEvent()
    // Offset: 0x566564C
    ::UnityEngine::Event* get_repaintEvent();
    // public System.Void set_repaintEvent(UnityEngine.Event value)
    // Offset: 0x5665654
    void set_repaintEvent(::UnityEngine::Event* value);
    // public System.Void .ctor()
    // Offset: 0x566565C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RepaintData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::RepaintData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RepaintData*, creationType>()));
    }
  }; // UnityEngine.UIElements.RepaintData
  #pragma pack(pop)
  static check_size<sizeof(RepaintData), 104 + sizeof(::UnityEngine::Event*)> __UnityEngine_UIElements_RepaintDataSizeCheck;
  static_assert(sizeof(RepaintData) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::RepaintData::get_currentOffset
// Il2CppName: get_currentOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (UnityEngine::UIElements::RepaintData::*)()>(&UnityEngine::UIElements::RepaintData::get_currentOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::RepaintData*), "get_currentOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::RepaintData::get_currentWorldClip
// Il2CppName: get_currentWorldClip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (UnityEngine::UIElements::RepaintData::*)()>(&UnityEngine::UIElements::RepaintData::get_currentWorldClip)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::RepaintData*), "get_currentWorldClip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::RepaintData::get_repaintEvent
// Il2CppName: get_repaintEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Event* (UnityEngine::UIElements::RepaintData::*)()>(&UnityEngine::UIElements::RepaintData::get_repaintEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::RepaintData*), "get_repaintEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::RepaintData::set_repaintEvent
// Il2CppName: set_repaintEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::RepaintData::*)(::UnityEngine::Event*)>(&UnityEngine::UIElements::RepaintData::set_repaintEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Event")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::RepaintData*), "set_repaintEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::RepaintData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
