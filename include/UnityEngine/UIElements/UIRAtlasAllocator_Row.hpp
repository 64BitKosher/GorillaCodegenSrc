// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.UIRAtlasAllocator
#include "UnityEngine/UIElements/UIRAtlasAllocator.hpp"
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
NEED_NO_BOX(::UnityEngine::UIElements::UIRAtlasAllocator::Row);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIRAtlasAllocator::Row*, "UnityEngine.UIElements", "UIRAtlasAllocator/Row");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.UIRAtlasAllocator/Row
  // [TokenAttribute] Offset: FFFFFFFF
  class UIRAtlasAllocator::Row : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::UIElements::UIRAtlasAllocator::Row::$$c
    class $$c;
    public:
    // private System.Int32 <offsetX>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    int offsetX;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <offsetY>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    int offsetY;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <width>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    int width;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <height>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    int height;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 Cursor
    // Size: 0x4
    // Offset: 0x20
    int Cursor;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get static field: static private UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.UIRAtlasAllocator/Row> s_Pool
    static ::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::UIRAtlasAllocator::Row*>* _get_s_Pool();
    // Set static field: static private UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.UIRAtlasAllocator/Row> s_Pool
    static void _set_s_Pool(::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::UIRAtlasAllocator::Row*>* value);
    // Get instance field reference: private System.Int32 <offsetX>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$offsetX$k__BackingField();
    // Get instance field reference: private System.Int32 <offsetY>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$offsetY$k__BackingField();
    // Get instance field reference: private System.Int32 <width>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$width$k__BackingField();
    // Get instance field reference: private System.Int32 <height>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$height$k__BackingField();
    // Get instance field reference: public System.Int32 Cursor
    [[deprecated("Use field access instead!")]] int& dyn_Cursor();
    // public System.Int32 get_offsetX()
    // Offset: 0x566B818
    int get_offsetX();
    // private System.Void set_offsetX(System.Int32 value)
    // Offset: 0x566B820
    void set_offsetX(int value);
    // public System.Int32 get_offsetY()
    // Offset: 0x566B828
    int get_offsetY();
    // private System.Void set_offsetY(System.Int32 value)
    // Offset: 0x566B830
    void set_offsetY(int value);
    // public System.Int32 get_width()
    // Offset: 0x566B838
    int get_width();
    // private System.Void set_width(System.Int32 value)
    // Offset: 0x566B840
    void set_width(int value);
    // private System.Void set_height(System.Int32 value)
    // Offset: 0x566B848
    void set_height(int value);
    // static public UnityEngine.UIElements.UIRAtlasAllocator/Row Acquire(System.Int32 offsetX, System.Int32 offsetY, System.Int32 width, System.Int32 height)
    // Offset: 0x566B5B0
    static ::UnityEngine::UIElements::UIRAtlasAllocator::Row* Acquire(int offsetX, int offsetY, int width, int height);
    // public System.Void Release()
    // Offset: 0x566AAD4
    void Release();
    // public System.Void .ctor()
    // Offset: 0x566B850
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UIRAtlasAllocator::Row* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::UIRAtlasAllocator::Row::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UIRAtlasAllocator::Row*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x566B858
    static void _cctor();
  }; // UnityEngine.UIElements.UIRAtlasAllocator/Row
  #pragma pack(pop)
  static check_size<sizeof(UIRAtlasAllocator::Row), 32 + sizeof(int)> __UnityEngine_UIElements_UIRAtlasAllocator_RowSizeCheck;
  static_assert(sizeof(UIRAtlasAllocator::Row) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::UIRAtlasAllocator::Row::get_offsetX
// Il2CppName: get_offsetX
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::UIRAtlasAllocator::Row::*)()>(&UnityEngine::UIElements::UIRAtlasAllocator::Row::get_offsetX)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIRAtlasAllocator::Row*), "get_offsetX", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIRAtlasAllocator::Row::set_offsetX
// Il2CppName: set_offsetX
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIRAtlasAllocator::Row::*)(int)>(&UnityEngine::UIElements::UIRAtlasAllocator::Row::set_offsetX)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIRAtlasAllocator::Row*), "set_offsetX", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIRAtlasAllocator::Row::get_offsetY
// Il2CppName: get_offsetY
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::UIRAtlasAllocator::Row::*)()>(&UnityEngine::UIElements::UIRAtlasAllocator::Row::get_offsetY)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIRAtlasAllocator::Row*), "get_offsetY", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIRAtlasAllocator::Row::set_offsetY
// Il2CppName: set_offsetY
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIRAtlasAllocator::Row::*)(int)>(&UnityEngine::UIElements::UIRAtlasAllocator::Row::set_offsetY)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIRAtlasAllocator::Row*), "set_offsetY", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIRAtlasAllocator::Row::get_width
// Il2CppName: get_width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::UIRAtlasAllocator::Row::*)()>(&UnityEngine::UIElements::UIRAtlasAllocator::Row::get_width)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIRAtlasAllocator::Row*), "get_width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIRAtlasAllocator::Row::set_width
// Il2CppName: set_width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIRAtlasAllocator::Row::*)(int)>(&UnityEngine::UIElements::UIRAtlasAllocator::Row::set_width)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIRAtlasAllocator::Row*), "set_width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIRAtlasAllocator::Row::set_height
// Il2CppName: set_height
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIRAtlasAllocator::Row::*)(int)>(&UnityEngine::UIElements::UIRAtlasAllocator::Row::set_height)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIRAtlasAllocator::Row*), "set_height", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIRAtlasAllocator::Row::Acquire
// Il2CppName: Acquire
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIRAtlasAllocator::Row* (*)(int, int, int, int)>(&UnityEngine::UIElements::UIRAtlasAllocator::Row::Acquire)> {
  static const MethodInfo* get() {
    static auto* offsetX = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* offsetY = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIRAtlasAllocator::Row*), "Acquire", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offsetX, offsetY, width, height});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIRAtlasAllocator::Row::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIRAtlasAllocator::Row::*)()>(&UnityEngine::UIElements::UIRAtlasAllocator::Row::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIRAtlasAllocator::Row*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIRAtlasAllocator::Row::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::UIRAtlasAllocator::Row::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::UIRAtlasAllocator::Row::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIRAtlasAllocator::Row*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
