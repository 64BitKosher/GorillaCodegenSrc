// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: ClipCaps
  struct ClipCaps;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: ITimelineClipAsset
  class ITimelineClipAsset;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Timeline::ITimelineClipAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::ITimelineClipAsset*, "UnityEngine.Timeline", "ITimelineClipAsset");
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.ITimelineClipAsset
  // [TokenAttribute] Offset: FFFFFFFF
  class ITimelineClipAsset {
    public:
    // public UnityEngine.Timeline.ClipCaps get_clipCaps()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Timeline::ClipCaps get_clipCaps();
  }; // UnityEngine.Timeline.ITimelineClipAsset
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::ITimelineClipAsset::get_clipCaps
// Il2CppName: get_clipCaps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::ClipCaps (UnityEngine::Timeline::ITimelineClipAsset::*)()>(&UnityEngine::Timeline::ITimelineClipAsset::get_clipCaps)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ITimelineClipAsset*), "get_clipCaps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
