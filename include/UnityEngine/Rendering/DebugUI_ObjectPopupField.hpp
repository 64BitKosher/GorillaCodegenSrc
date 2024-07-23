// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.DebugUI
#include "UnityEngine/Rendering/DebugUI.hpp"
// Including type: UnityEngine.Rendering.DebugUI/Field`1
#include "UnityEngine/Rendering/DebugUI_Field_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::DebugUI::ObjectPopupField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugUI::ObjectPopupField*, "UnityEngine.Rendering", "DebugUI/ObjectPopupField");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Rendering.DebugUI/ObjectPopupField
  // [TokenAttribute] Offset: FFFFFFFF
  class DebugUI::ObjectPopupField : public ::UnityEngine::Rendering::DebugUI::Field_1<::UnityEngine::Object*> {
    public:
    public:
    // private System.Func`1<System.Collections.Generic.IEnumerable`1<UnityEngine.Object>> <getObjects>k__BackingField
    // Size: 0x8
    // Offset: 0x60
    ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Object*>*>* getObjects;
    // Field size check
    static_assert(sizeof(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Object*>*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Object*>*>*
    constexpr operator ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Object*>*>*() const noexcept {
      return getObjects;
    }
    // Get instance field reference: private System.Func`1<System.Collections.Generic.IEnumerable`1<UnityEngine.Object>> <getObjects>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Object*>*>*& dyn_$getObjects$k__BackingField();
    // public System.Func`1<System.Collections.Generic.IEnumerable`1<UnityEngine.Object>> get_getObjects()
    // Offset: 0x524A944
    ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Object*>*>* get_getObjects();
    // public System.Void set_getObjects(System.Func`1<System.Collections.Generic.IEnumerable`1<UnityEngine.Object>> value)
    // Offset: 0x524A94C
    void set_getObjects(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Object*>*>* value);
    // public System.Void .ctor()
    // Offset: 0x524A954
    // Implemented from: UnityEngine.Rendering.DebugUI/Field`1
    // Base method: System.Void Field_1::.ctor()
    // Base method: System.Void Widget::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DebugUI::ObjectPopupField* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::DebugUI::ObjectPopupField::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DebugUI::ObjectPopupField*, creationType>()));
    }
  }; // UnityEngine.Rendering.DebugUI/ObjectPopupField
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugUI::ObjectPopupField::get_getObjects
// Il2CppName: get_getObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Object*>*>* (UnityEngine::Rendering::DebugUI::ObjectPopupField::*)()>(&UnityEngine::Rendering::DebugUI::ObjectPopupField::get_getObjects)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugUI::ObjectPopupField*), "get_getObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugUI::ObjectPopupField::set_getObjects
// Il2CppName: set_getObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::DebugUI::ObjectPopupField::*)(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Object*>*>*)>(&UnityEngine::Rendering::DebugUI::ObjectPopupField::set_getObjects)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Object")})})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugUI::ObjectPopupField*), "set_getObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugUI::ObjectPopupField::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
