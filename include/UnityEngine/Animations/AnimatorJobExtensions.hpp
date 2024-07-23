// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Animations
namespace UnityEngine::Animations {
  // Forward declaring type: TransformStreamHandle
  struct TransformStreamHandle;
  // Forward declaring type: PropertyStreamHandle
  struct PropertyStreamHandle;
  // Forward declaring type: CustomStreamPropertyType
  struct CustomStreamPropertyType;
  // Forward declaring type: TransformSceneHandle
  struct TransformSceneHandle;
  // Forward declaring type: PropertySceneHandle
  struct PropertySceneHandle;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine.Animations
namespace UnityEngine::Animations {
  // Forward declaring type: AnimatorJobExtensions
  class AnimatorJobExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Animations::AnimatorJobExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::AnimatorJobExtensions*, "UnityEngine.Animations", "AnimatorJobExtensions");
// Type namespace: UnityEngine.Animations
namespace UnityEngine::Animations {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Animations.AnimatorJobExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [StaticAccessorAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  // [MovedFromAttribute] Offset: FFFFFFFF
  class AnimatorJobExtensions : public ::Il2CppObject {
    public:
    // static public UnityEngine.Animations.TransformStreamHandle BindStreamTransform(UnityEngine.Animator animator, UnityEngine.Transform transform)
    // Offset: 0x547022C
    static ::UnityEngine::Animations::TransformStreamHandle BindStreamTransform(::UnityEngine::Animator* animator, ::UnityEngine::Transform* transform);
    // static public UnityEngine.Animations.PropertyStreamHandle BindStreamProperty(UnityEngine.Animator animator, UnityEngine.Transform transform, System.Type type, System.String property)
    // Offset: 0x54702E4
    static ::UnityEngine::Animations::PropertyStreamHandle BindStreamProperty(::UnityEngine::Animator* animator, ::UnityEngine::Transform* transform, ::System::Type* type, ::StringW property);
    // static public UnityEngine.Animations.PropertyStreamHandle BindCustomStreamProperty(UnityEngine.Animator animator, System.String property, UnityEngine.Animations.CustomStreamPropertyType type)
    // Offset: 0x5470370
    static ::UnityEngine::Animations::PropertyStreamHandle BindCustomStreamProperty(::UnityEngine::Animator* animator, ::StringW property, ::UnityEngine::Animations::CustomStreamPropertyType type);
    // static public UnityEngine.Animations.PropertyStreamHandle BindStreamProperty(UnityEngine.Animator animator, UnityEngine.Transform transform, System.Type type, System.String property, System.Boolean isObjectReference)
    // Offset: 0x54702EC
    static ::UnityEngine::Animations::PropertyStreamHandle BindStreamProperty(::UnityEngine::Animator* animator, ::UnityEngine::Transform* transform, ::System::Type* type, ::StringW property, bool isObjectReference);
    // static public UnityEngine.Animations.TransformSceneHandle BindSceneTransform(UnityEngine.Animator animator, UnityEngine.Transform transform)
    // Offset: 0x54704AC
    static ::UnityEngine::Animations::TransformSceneHandle BindSceneTransform(::UnityEngine::Animator* animator, ::UnityEngine::Transform* transform);
    // static public UnityEngine.Animations.PropertySceneHandle BindSceneProperty(UnityEngine.Animator animator, UnityEngine.Transform transform, System.Type type, System.String property)
    // Offset: 0x547055C
    static ::UnityEngine::Animations::PropertySceneHandle BindSceneProperty(::UnityEngine::Animator* animator, ::UnityEngine::Transform* transform, ::System::Type* type, ::StringW property);
    // static public UnityEngine.Animations.PropertySceneHandle BindSceneProperty(UnityEngine.Animator animator, UnityEngine.Transform transform, System.Type type, System.String property, System.Boolean isObjectReference)
    // Offset: 0x54705D4
    static ::UnityEngine::Animations::PropertySceneHandle BindSceneProperty(::UnityEngine::Animator* animator, ::UnityEngine::Transform* transform, ::System::Type* type, ::StringW property, bool isObjectReference);
    // static private System.Void InternalBindStreamTransform(UnityEngine.Animator animator, UnityEngine.Transform transform, out UnityEngine.Animations.TransformStreamHandle transformStreamHandle)
    // Offset: 0x5470290
    static void InternalBindStreamTransform(::UnityEngine::Animator* animator, ::UnityEngine::Transform* transform, ByRef<::UnityEngine::Animations::TransformStreamHandle> transformStreamHandle);
    // static private System.Void InternalBindStreamProperty(UnityEngine.Animator animator, UnityEngine.Transform transform, System.Type type, System.String property, System.Boolean isObjectReference, out UnityEngine.Animations.PropertyStreamHandle propertyStreamHandle)
    // Offset: 0x5470438
    static void InternalBindStreamProperty(::UnityEngine::Animator* animator, ::UnityEngine::Transform* transform, ::System::Type* type, ::StringW property, bool isObjectReference, ByRef<::UnityEngine::Animations::PropertyStreamHandle> propertyStreamHandle);
    // static private System.Void InternalBindCustomStreamProperty(UnityEngine.Animator animator, System.String property, UnityEngine.Animations.CustomStreamPropertyType propertyType, out UnityEngine.Animations.PropertyStreamHandle propertyStreamHandle)
    // Offset: 0x54703DC
    static void InternalBindCustomStreamProperty(::UnityEngine::Animator* animator, ::StringW property, ::UnityEngine::Animations::CustomStreamPropertyType propertyType, ByRef<::UnityEngine::Animations::PropertyStreamHandle> propertyStreamHandle);
    // static private System.Void InternalBindSceneTransform(UnityEngine.Animator animator, UnityEngine.Transform transform, out UnityEngine.Animations.TransformSceneHandle transformSceneHandle)
    // Offset: 0x5470508
    static void InternalBindSceneTransform(::UnityEngine::Animator* animator, ::UnityEngine::Transform* transform, ByRef<::UnityEngine::Animations::TransformSceneHandle> transformSceneHandle);
    // static private System.Void InternalBindSceneProperty(UnityEngine.Animator animator, UnityEngine.Transform transform, System.Type type, System.String property, System.Boolean isObjectReference, out UnityEngine.Animations.PropertySceneHandle propertySceneHandle)
    // Offset: 0x5470650
    static void InternalBindSceneProperty(::UnityEngine::Animator* animator, ::UnityEngine::Transform* transform, ::System::Type* type, ::StringW property, bool isObjectReference, ByRef<::UnityEngine::Animations::PropertySceneHandle> propertySceneHandle);
  }; // UnityEngine.Animations.AnimatorJobExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Animations::AnimatorJobExtensions::BindStreamTransform
// Il2CppName: BindStreamTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Animations::TransformStreamHandle (*)(::UnityEngine::Animator*, ::UnityEngine::Transform*)>(&UnityEngine::Animations::AnimatorJobExtensions::BindStreamTransform)> {
  static const MethodInfo* get() {
    static auto* animator = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animator")->byval_arg;
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimatorJobExtensions*), "BindStreamTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animator, transform});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimatorJobExtensions::BindStreamProperty
// Il2CppName: BindStreamProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Animations::PropertyStreamHandle (*)(::UnityEngine::Animator*, ::UnityEngine::Transform*, ::System::Type*, ::StringW)>(&UnityEngine::Animations::AnimatorJobExtensions::BindStreamProperty)> {
  static const MethodInfo* get() {
    static auto* animator = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animator")->byval_arg;
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* property = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimatorJobExtensions*), "BindStreamProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animator, transform, type, property});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimatorJobExtensions::BindCustomStreamProperty
// Il2CppName: BindCustomStreamProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Animations::PropertyStreamHandle (*)(::UnityEngine::Animator*, ::StringW, ::UnityEngine::Animations::CustomStreamPropertyType)>(&UnityEngine::Animations::AnimatorJobExtensions::BindCustomStreamProperty)> {
  static const MethodInfo* get() {
    static auto* animator = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animator")->byval_arg;
    static auto* property = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "CustomStreamPropertyType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimatorJobExtensions*), "BindCustomStreamProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animator, property, type});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimatorJobExtensions::BindStreamProperty
// Il2CppName: BindStreamProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Animations::PropertyStreamHandle (*)(::UnityEngine::Animator*, ::UnityEngine::Transform*, ::System::Type*, ::StringW, bool)>(&UnityEngine::Animations::AnimatorJobExtensions::BindStreamProperty)> {
  static const MethodInfo* get() {
    static auto* animator = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animator")->byval_arg;
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* property = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* isObjectReference = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimatorJobExtensions*), "BindStreamProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animator, transform, type, property, isObjectReference});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimatorJobExtensions::BindSceneTransform
// Il2CppName: BindSceneTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Animations::TransformSceneHandle (*)(::UnityEngine::Animator*, ::UnityEngine::Transform*)>(&UnityEngine::Animations::AnimatorJobExtensions::BindSceneTransform)> {
  static const MethodInfo* get() {
    static auto* animator = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animator")->byval_arg;
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimatorJobExtensions*), "BindSceneTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animator, transform});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimatorJobExtensions::BindSceneProperty
// Il2CppName: BindSceneProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Animations::PropertySceneHandle (*)(::UnityEngine::Animator*, ::UnityEngine::Transform*, ::System::Type*, ::StringW)>(&UnityEngine::Animations::AnimatorJobExtensions::BindSceneProperty)> {
  static const MethodInfo* get() {
    static auto* animator = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animator")->byval_arg;
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* property = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimatorJobExtensions*), "BindSceneProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animator, transform, type, property});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimatorJobExtensions::BindSceneProperty
// Il2CppName: BindSceneProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Animations::PropertySceneHandle (*)(::UnityEngine::Animator*, ::UnityEngine::Transform*, ::System::Type*, ::StringW, bool)>(&UnityEngine::Animations::AnimatorJobExtensions::BindSceneProperty)> {
  static const MethodInfo* get() {
    static auto* animator = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animator")->byval_arg;
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* property = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* isObjectReference = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimatorJobExtensions*), "BindSceneProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animator, transform, type, property, isObjectReference});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimatorJobExtensions::InternalBindStreamTransform
// Il2CppName: InternalBindStreamTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Animator*, ::UnityEngine::Transform*, ByRef<::UnityEngine::Animations::TransformStreamHandle>)>(&UnityEngine::Animations::AnimatorJobExtensions::InternalBindStreamTransform)> {
  static const MethodInfo* get() {
    static auto* animator = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animator")->byval_arg;
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* transformStreamHandle = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "TransformStreamHandle")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimatorJobExtensions*), "InternalBindStreamTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animator, transform, transformStreamHandle});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimatorJobExtensions::InternalBindStreamProperty
// Il2CppName: InternalBindStreamProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Animator*, ::UnityEngine::Transform*, ::System::Type*, ::StringW, bool, ByRef<::UnityEngine::Animations::PropertyStreamHandle>)>(&UnityEngine::Animations::AnimatorJobExtensions::InternalBindStreamProperty)> {
  static const MethodInfo* get() {
    static auto* animator = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animator")->byval_arg;
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* property = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* isObjectReference = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* propertyStreamHandle = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "PropertyStreamHandle")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimatorJobExtensions*), "InternalBindStreamProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animator, transform, type, property, isObjectReference, propertyStreamHandle});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimatorJobExtensions::InternalBindCustomStreamProperty
// Il2CppName: InternalBindCustomStreamProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Animator*, ::StringW, ::UnityEngine::Animations::CustomStreamPropertyType, ByRef<::UnityEngine::Animations::PropertyStreamHandle>)>(&UnityEngine::Animations::AnimatorJobExtensions::InternalBindCustomStreamProperty)> {
  static const MethodInfo* get() {
    static auto* animator = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animator")->byval_arg;
    static auto* property = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* propertyType = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "CustomStreamPropertyType")->byval_arg;
    static auto* propertyStreamHandle = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "PropertyStreamHandle")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimatorJobExtensions*), "InternalBindCustomStreamProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animator, property, propertyType, propertyStreamHandle});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimatorJobExtensions::InternalBindSceneTransform
// Il2CppName: InternalBindSceneTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Animator*, ::UnityEngine::Transform*, ByRef<::UnityEngine::Animations::TransformSceneHandle>)>(&UnityEngine::Animations::AnimatorJobExtensions::InternalBindSceneTransform)> {
  static const MethodInfo* get() {
    static auto* animator = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animator")->byval_arg;
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* transformSceneHandle = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "TransformSceneHandle")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimatorJobExtensions*), "InternalBindSceneTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animator, transform, transformSceneHandle});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimatorJobExtensions::InternalBindSceneProperty
// Il2CppName: InternalBindSceneProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Animator*, ::UnityEngine::Transform*, ::System::Type*, ::StringW, bool, ByRef<::UnityEngine::Animations::PropertySceneHandle>)>(&UnityEngine::Animations::AnimatorJobExtensions::InternalBindSceneProperty)> {
  static const MethodInfo* get() {
    static auto* animator = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animator")->byval_arg;
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* property = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* isObjectReference = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* propertySceneHandle = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "PropertySceneHandle")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimatorJobExtensions*), "InternalBindSceneProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animator, transform, type, property, isObjectReference, propertySceneHandle});
  }
};
