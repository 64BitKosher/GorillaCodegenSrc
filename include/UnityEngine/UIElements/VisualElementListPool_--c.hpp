// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.VisualElementListPool
#include "UnityEngine/UIElements/VisualElementListPool.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: VisualElement
  class VisualElement;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::VisualElementListPool::$$c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElementListPool::$$c*, "UnityEngine.UIElements", "VisualElementListPool/<>c");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.VisualElementListPool/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class VisualElementListPool::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.UIElements.VisualElementListPool/<>c <>9
    static ::UnityEngine::UIElements::VisualElementListPool::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.UIElements.VisualElementListPool/<>c <>9
    static void _set_$$9(::UnityEngine::UIElements::VisualElementListPool::$$c* value);
    // static private System.Void .cctor()
    // Offset: 0x55C10C4
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x55C112C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VisualElementListPool::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::VisualElementListPool::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VisualElementListPool::$$c*, creationType>()));
    }
    // System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> <.cctor>b__4_0()
    // Offset: 0x55C1134
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* $_cctor$b__4_0();
  }; // UnityEngine.UIElements.VisualElementListPool/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualElementListPool::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::VisualElementListPool::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::VisualElementListPool::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualElementListPool::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualElementListPool::$$c::$_cctor$b__4_0
// Il2CppName: <.cctor>b__4_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* (UnityEngine::UIElements::VisualElementListPool::$$c::*)()>(&UnityEngine::UIElements::VisualElementListPool::$$c::$_cctor$b__4_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::VisualElementListPool::$$c*), "<.cctor>b__4_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
