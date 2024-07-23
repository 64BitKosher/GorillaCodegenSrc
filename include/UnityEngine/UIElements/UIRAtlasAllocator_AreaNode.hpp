// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.UIRAtlasAllocator
#include "UnityEngine/UIElements/UIRAtlasAllocator.hpp"
// Including type: UnityEngine.RectInt
#include "UnityEngine/RectInt.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: ObjectPool`1<T>
  template<typename T>
  class ObjectPool_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::UIRAtlasAllocator::AreaNode);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIRAtlasAllocator::AreaNode*, "UnityEngine.UIElements", "UIRAtlasAllocator/AreaNode");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.UIRAtlasAllocator/AreaNode
  // [TokenAttribute] Offset: FFFFFFFF
  class UIRAtlasAllocator::AreaNode : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::UIElements::UIRAtlasAllocator::AreaNode::$$c
    class $$c;
    public:
    // public UnityEngine.RectInt rect
    // Size: 0x10
    // Offset: 0x10
    ::UnityEngine::RectInt rect;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectInt) == 0x10);
    // public UnityEngine.UIElements.UIRAtlasAllocator/AreaNode previous
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::UIElements::UIRAtlasAllocator::AreaNode* previous;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::UIRAtlasAllocator::AreaNode*) == 0x8);
    // public UnityEngine.UIElements.UIRAtlasAllocator/AreaNode next
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::UIElements::UIRAtlasAllocator::AreaNode* next;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::UIRAtlasAllocator::AreaNode*) == 0x8);
    public:
    // Get static field: static private UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.UIRAtlasAllocator/AreaNode> s_Pool
    static ::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::UIRAtlasAllocator::AreaNode*>* _get_s_Pool();
    // Set static field: static private UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.UIRAtlasAllocator/AreaNode> s_Pool
    static void _set_s_Pool(::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::UIRAtlasAllocator::AreaNode*>* value);
    // Get instance field reference: public UnityEngine.RectInt rect
    [[deprecated("Use field access instead!")]] ::UnityEngine::RectInt& dyn_rect();
    // Get instance field reference: public UnityEngine.UIElements.UIRAtlasAllocator/AreaNode previous
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::UIRAtlasAllocator::AreaNode*& dyn_previous();
    // Get instance field reference: public UnityEngine.UIElements.UIRAtlasAllocator/AreaNode next
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::UIRAtlasAllocator::AreaNode*& dyn_next();
    // static public UnityEngine.UIElements.UIRAtlasAllocator/AreaNode Acquire(UnityEngine.RectInt rect)
    // Offset: 0x566AED0
    static ::UnityEngine::UIElements::UIRAtlasAllocator::AreaNode* Acquire(::UnityEngine::RectInt rect);
    // public System.Void Release()
    // Offset: 0x566AB64
    void Release();
    // public System.Void RemoveFromChain()
    // Offset: 0x566B65C
    void RemoveFromChain();
    // public System.Void AddAfter(UnityEngine.UIElements.UIRAtlasAllocator/AreaNode previous)
    // Offset: 0x566B6BC
    void AddAfter(::UnityEngine::UIElements::UIRAtlasAllocator::AreaNode* previous);
    // public System.Void .ctor()
    // Offset: 0x566BA38
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UIRAtlasAllocator::AreaNode* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::UIRAtlasAllocator::AreaNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UIRAtlasAllocator::AreaNode*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x566BA40
    static void _cctor();
  }; // UnityEngine.UIElements.UIRAtlasAllocator/AreaNode
  #pragma pack(pop)
  static check_size<sizeof(UIRAtlasAllocator::AreaNode), 40 + sizeof(::UnityEngine::UIElements::UIRAtlasAllocator::AreaNode*)> __UnityEngine_UIElements_UIRAtlasAllocator_AreaNodeSizeCheck;
  static_assert(sizeof(UIRAtlasAllocator::AreaNode) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::UIRAtlasAllocator::AreaNode::Acquire
// Il2CppName: Acquire
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIRAtlasAllocator::AreaNode* (*)(::UnityEngine::RectInt)>(&UnityEngine::UIElements::UIRAtlasAllocator::AreaNode::Acquire)> {
  static const MethodInfo* get() {
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectInt")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIRAtlasAllocator::AreaNode*), "Acquire", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rect});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIRAtlasAllocator::AreaNode::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIRAtlasAllocator::AreaNode::*)()>(&UnityEngine::UIElements::UIRAtlasAllocator::AreaNode::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIRAtlasAllocator::AreaNode*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIRAtlasAllocator::AreaNode::RemoveFromChain
// Il2CppName: RemoveFromChain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIRAtlasAllocator::AreaNode::*)()>(&UnityEngine::UIElements::UIRAtlasAllocator::AreaNode::RemoveFromChain)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIRAtlasAllocator::AreaNode*), "RemoveFromChain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIRAtlasAllocator::AreaNode::AddAfter
// Il2CppName: AddAfter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIRAtlasAllocator::AreaNode::*)(::UnityEngine::UIElements::UIRAtlasAllocator::AreaNode*)>(&UnityEngine::UIElements::UIRAtlasAllocator::AreaNode::AddAfter)> {
  static const MethodInfo* get() {
    static auto* previous = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "UIRAtlasAllocator/AreaNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIRAtlasAllocator::AreaNode*), "AddAfter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{previous});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIRAtlasAllocator::AreaNode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::UIRAtlasAllocator::AreaNode::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::UIRAtlasAllocator::AreaNode::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIRAtlasAllocator::AreaNode*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
