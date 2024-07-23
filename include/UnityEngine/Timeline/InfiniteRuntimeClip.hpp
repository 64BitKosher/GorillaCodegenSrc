// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Timeline.RuntimeElement
#include "UnityEngine/Timeline/RuntimeElement.hpp"
// Including type: UnityEngine.Playables.Playable
#include "UnityEngine/Playables/Playable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: FrameData
  struct FrameData;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: InfiniteRuntimeClip
  class InfiniteRuntimeClip;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Timeline::InfiniteRuntimeClip);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::InfiniteRuntimeClip*, "UnityEngine.Timeline", "InfiniteRuntimeClip");
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.InfiniteRuntimeClip
  // [TokenAttribute] Offset: FFFFFFFF
  class InfiniteRuntimeClip : public ::UnityEngine::Timeline::RuntimeElement {
    public:
    // Writing base type padding for base size: 0x14 to desired offset: 0x18
    char ___base_padding[0x4] = {};
    public:
    // private UnityEngine.Playables.Playable m_Playable
    // Size: 0xC
    // Offset: 0x18
    ::UnityEngine::Playables::Playable m_Playable;
    // Field size check
    static_assert(sizeof(::UnityEngine::Playables::Playable) == 0xC);
    public:
    // Deleting conversion operator: operator int
    constexpr operator int() const noexcept = delete;
    // Get static field: static private readonly System.Int64 kIntervalEnd
    static int64_t _get_kIntervalEnd();
    // Set static field: static private readonly System.Int64 kIntervalEnd
    static void _set_kIntervalEnd(int64_t value);
    // Get instance field reference: private UnityEngine.Playables.Playable m_Playable
    [[deprecated("Use field access instead!")]] ::UnityEngine::Playables::Playable& dyn_m_Playable();
    // public System.Void .ctor(UnityEngine.Playables.Playable playable)
    // Offset: 0x53B069C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InfiniteRuntimeClip* New_ctor(::UnityEngine::Playables::Playable playable) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Timeline::InfiniteRuntimeClip::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InfiniteRuntimeClip*, creationType>(playable)));
    }
    // static private System.Void .cctor()
    // Offset: 0x53C3FC8
    static void _cctor();
    // public override System.Int64 get_intervalStart()
    // Offset: 0x53C3E30
    // Implemented from: UnityEngine.Timeline.RuntimeElement
    // Base method: System.Int64 RuntimeElement::get_intervalStart()
    int64_t get_intervalStart();
    // public override System.Int64 get_intervalEnd()
    // Offset: 0x53C3E38
    // Implemented from: UnityEngine.Timeline.RuntimeElement
    // Base method: System.Int64 RuntimeElement::get_intervalEnd()
    int64_t get_intervalEnd();
    // public override System.Void set_enable(System.Boolean value)
    // Offset: 0x53C3E90
    // Implemented from: UnityEngine.Timeline.RuntimeElement
    // Base method: System.Void RuntimeElement::set_enable(System.Boolean value)
    void set_enable(bool value);
    // public override System.Void EvaluateAt(System.Double localTime, UnityEngine.Playables.FrameData frameData)
    // Offset: 0x53C3F04
    // Implemented from: UnityEngine.Timeline.RuntimeElement
    // Base method: System.Void RuntimeElement::EvaluateAt(System.Double localTime, UnityEngine.Playables.FrameData frameData)
    void EvaluateAt(double localTime, ::UnityEngine::Playables::FrameData frameData);
    // public override System.Void DisableAt(System.Double localTime, System.Double rootDuration, UnityEngine.Playables.FrameData frameData)
    // Offset: 0x53C3F5C
    // Implemented from: UnityEngine.Timeline.RuntimeElement
    // Base method: System.Void RuntimeElement::DisableAt(System.Double localTime, System.Double rootDuration, UnityEngine.Playables.FrameData frameData)
    void DisableAt(double localTime, double rootDuration, ::UnityEngine::Playables::FrameData frameData);
  }; // UnityEngine.Timeline.InfiniteRuntimeClip
  #pragma pack(pop)
  static check_size<sizeof(InfiniteRuntimeClip), 24 + sizeof(::UnityEngine::Playables::Playable)> __UnityEngine_Timeline_InfiniteRuntimeClipSizeCheck;
  static_assert(sizeof(InfiniteRuntimeClip) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::InfiniteRuntimeClip::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Timeline::InfiniteRuntimeClip::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Timeline::InfiniteRuntimeClip::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::InfiniteRuntimeClip*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::InfiniteRuntimeClip::get_intervalStart
// Il2CppName: get_intervalStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (UnityEngine::Timeline::InfiniteRuntimeClip::*)()>(&UnityEngine::Timeline::InfiniteRuntimeClip::get_intervalStart)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::InfiniteRuntimeClip*), "get_intervalStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::InfiniteRuntimeClip::get_intervalEnd
// Il2CppName: get_intervalEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (UnityEngine::Timeline::InfiniteRuntimeClip::*)()>(&UnityEngine::Timeline::InfiniteRuntimeClip::get_intervalEnd)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::InfiniteRuntimeClip*), "get_intervalEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::InfiniteRuntimeClip::set_enable
// Il2CppName: set_enable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::InfiniteRuntimeClip::*)(bool)>(&UnityEngine::Timeline::InfiniteRuntimeClip::set_enable)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::InfiniteRuntimeClip*), "set_enable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::InfiniteRuntimeClip::EvaluateAt
// Il2CppName: EvaluateAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::InfiniteRuntimeClip::*)(double, ::UnityEngine::Playables::FrameData)>(&UnityEngine::Timeline::InfiniteRuntimeClip::EvaluateAt)> {
  static const MethodInfo* get() {
    static auto* localTime = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* frameData = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::InfiniteRuntimeClip*), "EvaluateAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{localTime, frameData});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::InfiniteRuntimeClip::DisableAt
// Il2CppName: DisableAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::InfiniteRuntimeClip::*)(double, double, ::UnityEngine::Playables::FrameData)>(&UnityEngine::Timeline::InfiniteRuntimeClip::DisableAt)> {
  static const MethodInfo* get() {
    static auto* localTime = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* rootDuration = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* frameData = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::InfiniteRuntimeClip*), "DisableAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{localTime, rootDuration, frameData});
  }
};