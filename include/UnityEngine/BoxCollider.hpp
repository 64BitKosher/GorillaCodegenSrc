// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Collider
#include "UnityEngine/Collider.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: BoxCollider
  class BoxCollider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::BoxCollider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::BoxCollider*, "UnityEngine", "BoxCollider");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.BoxCollider
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  class BoxCollider : public ::UnityEngine::Collider {
    public:
    // public UnityEngine.Vector3 get_center()
    // Offset: 0x55315E0
    ::UnityEngine::Vector3 get_center();
    // public System.Void set_center(UnityEngine.Vector3 value)
    // Offset: 0x5531680
    void set_center(::UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_size()
    // Offset: 0x5531718
    ::UnityEngine::Vector3 get_size();
    // public System.Void set_size(UnityEngine.Vector3 value)
    // Offset: 0x55317B8
    void set_size(::UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_extents()
    // Offset: 0x5531850
    ::UnityEngine::Vector3 get_extents();
    // public System.Void set_extents(UnityEngine.Vector3 value)
    // Offset: 0x5531870
    void set_extents(::UnityEngine::Vector3 value);
    // private System.Void get_center_Injected(out UnityEngine.Vector3 ret)
    // Offset: 0x553163C
    void get_center_Injected(ByRef<::UnityEngine::Vector3> ret);
    // private System.Void set_center_Injected(ref UnityEngine.Vector3 value)
    // Offset: 0x55316D4
    void set_center_Injected(ByRef<::UnityEngine::Vector3> value);
    // private System.Void get_size_Injected(out UnityEngine.Vector3 ret)
    // Offset: 0x5531774
    void get_size_Injected(ByRef<::UnityEngine::Vector3> ret);
    // private System.Void set_size_Injected(ref UnityEngine.Vector3 value)
    // Offset: 0x553180C
    void set_size_Injected(ByRef<::UnityEngine::Vector3> value);
    // public System.Void .ctor()
    // Offset: 0x5531880
    // Implemented from: UnityEngine.Collider
    // Base method: System.Void Collider::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BoxCollider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::BoxCollider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BoxCollider*, creationType>()));
    }
  }; // UnityEngine.BoxCollider
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::BoxCollider::get_center
// Il2CppName: get_center
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::BoxCollider::*)()>(&UnityEngine::BoxCollider::get_center)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoxCollider*), "get_center", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoxCollider::set_center
// Il2CppName: set_center
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::BoxCollider::*)(::UnityEngine::Vector3)>(&UnityEngine::BoxCollider::set_center)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoxCollider*), "set_center", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoxCollider::get_size
// Il2CppName: get_size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::BoxCollider::*)()>(&UnityEngine::BoxCollider::get_size)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoxCollider*), "get_size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoxCollider::set_size
// Il2CppName: set_size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::BoxCollider::*)(::UnityEngine::Vector3)>(&UnityEngine::BoxCollider::set_size)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoxCollider*), "set_size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoxCollider::get_extents
// Il2CppName: get_extents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::BoxCollider::*)()>(&UnityEngine::BoxCollider::get_extents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoxCollider*), "get_extents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoxCollider::set_extents
// Il2CppName: set_extents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::BoxCollider::*)(::UnityEngine::Vector3)>(&UnityEngine::BoxCollider::set_extents)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoxCollider*), "set_extents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoxCollider::get_center_Injected
// Il2CppName: get_center_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::BoxCollider::*)(ByRef<::UnityEngine::Vector3>)>(&UnityEngine::BoxCollider::get_center_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoxCollider*), "get_center_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoxCollider::set_center_Injected
// Il2CppName: set_center_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::BoxCollider::*)(ByRef<::UnityEngine::Vector3>)>(&UnityEngine::BoxCollider::set_center_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoxCollider*), "set_center_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoxCollider::get_size_Injected
// Il2CppName: get_size_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::BoxCollider::*)(ByRef<::UnityEngine::Vector3>)>(&UnityEngine::BoxCollider::get_size_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoxCollider*), "get_size_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoxCollider::set_size_Injected
// Il2CppName: set_size_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::BoxCollider::*)(ByRef<::UnityEngine::Vector3>)>(&UnityEngine::BoxCollider::set_size_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoxCollider*), "set_size_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoxCollider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
