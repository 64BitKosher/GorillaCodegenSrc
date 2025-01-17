// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction
namespace Oculus::Interaction {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Forward declaring type: ListLayout
  class ListLayout;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::ListLayout);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::ListLayout*, "Oculus.Interaction", "ListLayout");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.ListLayout
  // [TokenAttribute] Offset: FFFFFFFF
  class ListLayout : public ::Il2CppObject {
    public:
    // Nested type: ::Oculus::Interaction::ListLayout::ListElement
    class ListElement;
    // Nested type: ::Oculus::Interaction::ListLayout::$$c
    class $$c;
    public:
    // private Oculus.Interaction.ListLayout/ListElement _root
    // Size: 0x8
    // Offset: 0x10
    ::Oculus::Interaction::ListLayout::ListElement* root;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::ListLayout::ListElement*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.Int32,Oculus.Interaction.ListLayout/ListElement> _elements
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::Dictionary_2<int, ::Oculus::Interaction::ListLayout::ListElement*>* elements;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<int, ::Oculus::Interaction::ListLayout::ListElement*>*) == 0x8);
    // public System.Action`1<System.Int32> WhenElementAdded
    // Size: 0x8
    // Offset: 0x20
    ::System::Action_1<int>* WhenElementAdded;
    // Field size check
    static_assert(sizeof(::System::Action_1<int>*) == 0x8);
    // public System.Action`2<System.Int32,System.Boolean> WhenElementUpdated
    // Size: 0x8
    // Offset: 0x28
    ::System::Action_2<int, bool>* WhenElementUpdated;
    // Field size check
    static_assert(sizeof(::System::Action_2<int, bool>*) == 0x8);
    // public System.Action`1<System.Int32> WhenElementRemoved
    // Size: 0x8
    // Offset: 0x30
    ::System::Action_1<int>* WhenElementRemoved;
    // Field size check
    static_assert(sizeof(::System::Action_1<int>*) == 0x8);
    // private System.Boolean _sizeUpdate
    // Size: 0x1
    // Offset: 0x38
    bool sizeUpdate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: sizeUpdate and: moveElement
    char __padding5[0x3] = {};
    // private System.Int32 _moveElement
    // Size: 0x4
    // Offset: 0x3C
    int moveElement;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _size
    // Size: 0x4
    // Offset: 0x40
    float size;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private Oculus.Interaction.ListLayout/ListElement _root
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::ListLayout::ListElement*& dyn__root();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.Int32,Oculus.Interaction.ListLayout/ListElement> _elements
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<int, ::Oculus::Interaction::ListLayout::ListElement*>*& dyn__elements();
    // Get instance field reference: public System.Action`1<System.Int32> WhenElementAdded
    [[deprecated("Use field access instead!")]] ::System::Action_1<int>*& dyn_WhenElementAdded();
    // Get instance field reference: public System.Action`2<System.Int32,System.Boolean> WhenElementUpdated
    [[deprecated("Use field access instead!")]] ::System::Action_2<int, bool>*& dyn_WhenElementUpdated();
    // Get instance field reference: public System.Action`1<System.Int32> WhenElementRemoved
    [[deprecated("Use field access instead!")]] ::System::Action_1<int>*& dyn_WhenElementRemoved();
    // Get instance field reference: private System.Boolean _sizeUpdate
    [[deprecated("Use field access instead!")]] bool& dyn__sizeUpdate();
    // Get instance field reference: private System.Int32 _moveElement
    [[deprecated("Use field access instead!")]] int& dyn__moveElement();
    // Get instance field reference: private System.Single _size
    [[deprecated("Use field access instead!")]] float& dyn__size();
    // public System.Single get_Size()
    // Offset: 0x47B7654
    float get_Size();
    // public System.Void .ctor()
    // Offset: 0x47B765C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ListLayout* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::ListLayout::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ListLayout*, creationType>()));
    }
    // public System.Void AddElement(System.Int32 id, System.Single size, System.Single target)
    // Offset: 0x47B78E4
    void AddElement(int id, float size, float target);
    // public System.Void RemoveElement(System.Int32 id)
    // Offset: 0x47B7CB4
    void RemoveElement(int id);
    // private System.Void UpdatePos(Oculus.Interaction.ListLayout/ListElement element, System.Single pos, System.Boolean force)
    // Offset: 0x47B7C48
    void UpdatePos(::Oculus::Interaction::ListLayout::ListElement* element, float pos, bool force);
    // private System.Void UpdatePositionsFromRoot()
    // Offset: 0x47B7AF0
    void UpdatePositionsFromRoot();
    // private System.Void UpdatePositionsRight(Oculus.Interaction.ListLayout/ListElement current)
    // Offset: 0x47B7DF4
    void UpdatePositionsRight(::Oculus::Interaction::ListLayout::ListElement* current);
    // private System.Void SwapWithNext(Oculus.Interaction.ListLayout/ListElement element)
    // Offset: 0x47B7E44
    void SwapWithNext(::Oculus::Interaction::ListLayout::ListElement* element);
    // private System.Void SwapWithPrev(Oculus.Interaction.ListLayout/ListElement element)
    // Offset: 0x47B7F88
    void SwapWithPrev(::Oculus::Interaction::ListLayout::ListElement* element);
    // public System.Void MoveElement(System.Int32 id, System.Single target)
    // Offset: 0x47B7B34
    void MoveElement(int id, float target);
    // public System.Void UpdateElementSize(System.Int32 id, System.Single size)
    // Offset: 0x47B7FA0
    void UpdateElementSize(int id, float size);
    // public System.Single GetElementPosition(System.Int32 id)
    // Offset: 0x47B8054
    float GetElementPosition(int id);
    // public System.Single GetElementSize(System.Int32 id)
    // Offset: 0x47B80D4
    float GetElementSize(int id);
    // public System.Single GetTargetPosition(System.Int32 id, System.Single target, System.Single size)
    // Offset: 0x47B8158
    float GetTargetPosition(int id, float target, float size);
  }; // Oculus.Interaction.ListLayout
  #pragma pack(pop)
  static check_size<sizeof(ListLayout), 64 + sizeof(float)> __Oculus_Interaction_ListLayoutSizeCheck;
  static_assert(sizeof(ListLayout) == 0x44);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::ListLayout::get_Size
// Il2CppName: get_Size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::ListLayout::*)()>(&Oculus::Interaction::ListLayout::get_Size)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ListLayout*), "get_Size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ListLayout::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Interaction::ListLayout::AddElement
// Il2CppName: AddElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ListLayout::*)(int, float, float)>(&Oculus::Interaction::ListLayout::AddElement)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* target = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ListLayout*), "AddElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id, size, target});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ListLayout::RemoveElement
// Il2CppName: RemoveElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ListLayout::*)(int)>(&Oculus::Interaction::ListLayout::RemoveElement)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ListLayout*), "RemoveElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ListLayout::UpdatePos
// Il2CppName: UpdatePos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ListLayout::*)(::Oculus::Interaction::ListLayout::ListElement*, float, bool)>(&Oculus::Interaction::ListLayout::UpdatePos)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "ListLayout/ListElement")->byval_arg;
    static auto* pos = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* force = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ListLayout*), "UpdatePos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element, pos, force});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ListLayout::UpdatePositionsFromRoot
// Il2CppName: UpdatePositionsFromRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ListLayout::*)()>(&Oculus::Interaction::ListLayout::UpdatePositionsFromRoot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ListLayout*), "UpdatePositionsFromRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ListLayout::UpdatePositionsRight
// Il2CppName: UpdatePositionsRight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ListLayout::*)(::Oculus::Interaction::ListLayout::ListElement*)>(&Oculus::Interaction::ListLayout::UpdatePositionsRight)> {
  static const MethodInfo* get() {
    static auto* current = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "ListLayout/ListElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ListLayout*), "UpdatePositionsRight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{current});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ListLayout::SwapWithNext
// Il2CppName: SwapWithNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ListLayout::*)(::Oculus::Interaction::ListLayout::ListElement*)>(&Oculus::Interaction::ListLayout::SwapWithNext)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "ListLayout/ListElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ListLayout*), "SwapWithNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ListLayout::SwapWithPrev
// Il2CppName: SwapWithPrev
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ListLayout::*)(::Oculus::Interaction::ListLayout::ListElement*)>(&Oculus::Interaction::ListLayout::SwapWithPrev)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "ListLayout/ListElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ListLayout*), "SwapWithPrev", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ListLayout::MoveElement
// Il2CppName: MoveElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ListLayout::*)(int, float)>(&Oculus::Interaction::ListLayout::MoveElement)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* target = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ListLayout*), "MoveElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id, target});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ListLayout::UpdateElementSize
// Il2CppName: UpdateElementSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ListLayout::*)(int, float)>(&Oculus::Interaction::ListLayout::UpdateElementSize)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ListLayout*), "UpdateElementSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id, size});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ListLayout::GetElementPosition
// Il2CppName: GetElementPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::ListLayout::*)(int)>(&Oculus::Interaction::ListLayout::GetElementPosition)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ListLayout*), "GetElementPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ListLayout::GetElementSize
// Il2CppName: GetElementSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::ListLayout::*)(int)>(&Oculus::Interaction::ListLayout::GetElementSize)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ListLayout*), "GetElementSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ListLayout::GetTargetPosition
// Il2CppName: GetTargetPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::ListLayout::*)(int, float, float)>(&Oculus::Interaction::ListLayout::GetTargetPosition)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* target = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ListLayout*), "GetTargetPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id, target, size});
  }
};
