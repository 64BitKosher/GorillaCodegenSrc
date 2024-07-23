// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Animations
namespace UnityEngine::Animations {
  // Forward declaring type: AnimationPlayableOutput
  struct AnimationPlayableOutput;
}
// Forward declaring namespace: UnityEngine::Experimental::Animations
namespace UnityEngine::Experimental::Animations {
  // Forward declaring type: AnimationStreamSource
  struct AnimationStreamSource;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableOutputHandle
  struct PlayableOutputHandle;
}
// Completed forward declares
// Type namespace: UnityEngine.Experimental.Animations
namespace UnityEngine::Experimental::Animations {
  // Forward declaring type: AnimationPlayableOutputExtensions
  class AnimationPlayableOutputExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Experimental::Animations::AnimationPlayableOutputExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Animations::AnimationPlayableOutputExtensions*, "UnityEngine.Experimental.Animations", "AnimationPlayableOutputExtensions");
// Type namespace: UnityEngine.Experimental.Animations
namespace UnityEngine::Experimental::Animations {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [StaticAccessorAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  class AnimationPlayableOutputExtensions : public ::Il2CppObject {
    public:
    // static public System.Void SetAnimationStreamSource(UnityEngine.Animations.AnimationPlayableOutput output, UnityEngine.Experimental.Animations.AnimationStreamSource streamSource)
    // Offset: 0x546A9C4
    static void SetAnimationStreamSource(::UnityEngine::Animations::AnimationPlayableOutput output, ::UnityEngine::Experimental::Animations::AnimationStreamSource streamSource);
    // static public System.Void SetSortingOrder(UnityEngine.Animations.AnimationPlayableOutput output, System.UInt16 sortingOrder)
    // Offset: 0x546AA24
    static void SetSortingOrder(::UnityEngine::Animations::AnimationPlayableOutput output, uint16_t sortingOrder);
    // static private System.Void InternalSetAnimationStreamSource(UnityEngine.Playables.PlayableOutputHandle output, UnityEngine.Experimental.Animations.AnimationStreamSource streamSource)
    // Offset: 0x546A9D4
    static void InternalSetAnimationStreamSource(::UnityEngine::Playables::PlayableOutputHandle output, ::UnityEngine::Experimental::Animations::AnimationStreamSource streamSource);
    // static private System.Void InternalSetSortingOrder(UnityEngine.Playables.PlayableOutputHandle output, System.Int32 sortingOrder)
    // Offset: 0x546AA2C
    static void InternalSetSortingOrder(::UnityEngine::Playables::PlayableOutputHandle output, int sortingOrder);
    // static private System.Void InternalSetAnimationStreamSource_Injected(ref UnityEngine.Playables.PlayableOutputHandle output, UnityEngine.Experimental.Animations.AnimationStreamSource streamSource)
    // Offset: 0x546AA7C
    static void InternalSetAnimationStreamSource_Injected(ByRef<::UnityEngine::Playables::PlayableOutputHandle> output, ::UnityEngine::Experimental::Animations::AnimationStreamSource streamSource);
    // static private System.Void InternalSetSortingOrder_Injected(ref UnityEngine.Playables.PlayableOutputHandle output, System.Int32 sortingOrder)
    // Offset: 0x546AAC0
    static void InternalSetSortingOrder_Injected(ByRef<::UnityEngine::Playables::PlayableOutputHandle> output, int sortingOrder);
  }; // UnityEngine.Experimental.Animations.AnimationPlayableOutputExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Experimental::Animations::AnimationPlayableOutputExtensions::SetAnimationStreamSource
// Il2CppName: SetAnimationStreamSource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Animations::AnimationPlayableOutput, ::UnityEngine::Experimental::Animations::AnimationStreamSource)>(&UnityEngine::Experimental::Animations::AnimationPlayableOutputExtensions::SetAnimationStreamSource)> {
  static const MethodInfo* get() {
    static auto* output = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "AnimationPlayableOutput")->byval_arg;
    static auto* streamSource = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Animations", "AnimationStreamSource")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Animations::AnimationPlayableOutputExtensions*), "SetAnimationStreamSource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, streamSource});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Animations::AnimationPlayableOutputExtensions::SetSortingOrder
// Il2CppName: SetSortingOrder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Animations::AnimationPlayableOutput, uint16_t)>(&UnityEngine::Experimental::Animations::AnimationPlayableOutputExtensions::SetSortingOrder)> {
  static const MethodInfo* get() {
    static auto* output = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "AnimationPlayableOutput")->byval_arg;
    static auto* sortingOrder = &::il2cpp_utils::GetClassFromName("System", "UInt16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Animations::AnimationPlayableOutputExtensions*), "SetSortingOrder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, sortingOrder});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Animations::AnimationPlayableOutputExtensions::InternalSetAnimationStreamSource
// Il2CppName: InternalSetAnimationStreamSource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Playables::PlayableOutputHandle, ::UnityEngine::Experimental::Animations::AnimationStreamSource)>(&UnityEngine::Experimental::Animations::AnimationPlayableOutputExtensions::InternalSetAnimationStreamSource)> {
  static const MethodInfo* get() {
    static auto* output = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableOutputHandle")->byval_arg;
    static auto* streamSource = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Animations", "AnimationStreamSource")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Animations::AnimationPlayableOutputExtensions*), "InternalSetAnimationStreamSource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, streamSource});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Animations::AnimationPlayableOutputExtensions::InternalSetSortingOrder
// Il2CppName: InternalSetSortingOrder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Playables::PlayableOutputHandle, int)>(&UnityEngine::Experimental::Animations::AnimationPlayableOutputExtensions::InternalSetSortingOrder)> {
  static const MethodInfo* get() {
    static auto* output = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableOutputHandle")->byval_arg;
    static auto* sortingOrder = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Animations::AnimationPlayableOutputExtensions*), "InternalSetSortingOrder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, sortingOrder});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Animations::AnimationPlayableOutputExtensions::InternalSetAnimationStreamSource_Injected
// Il2CppName: InternalSetAnimationStreamSource_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Playables::PlayableOutputHandle>, ::UnityEngine::Experimental::Animations::AnimationStreamSource)>(&UnityEngine::Experimental::Animations::AnimationPlayableOutputExtensions::InternalSetAnimationStreamSource_Injected)> {
  static const MethodInfo* get() {
    static auto* output = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableOutputHandle")->this_arg;
    static auto* streamSource = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Animations", "AnimationStreamSource")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Animations::AnimationPlayableOutputExtensions*), "InternalSetAnimationStreamSource_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, streamSource});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Animations::AnimationPlayableOutputExtensions::InternalSetSortingOrder_Injected
// Il2CppName: InternalSetSortingOrder_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Playables::PlayableOutputHandle>, int)>(&UnityEngine::Experimental::Animations::AnimationPlayableOutputExtensions::InternalSetSortingOrder_Injected)> {
  static const MethodInfo* get() {
    static auto* output = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableOutputHandle")->this_arg;
    static auto* sortingOrder = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Animations::AnimationPlayableOutputExtensions*), "InternalSetSortingOrder_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, sortingOrder});
  }
};