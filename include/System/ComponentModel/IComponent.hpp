// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: ISite
  class ISite;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: EventHandler
  class EventHandler;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: IComponent
  class IComponent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::IComponent);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::IComponent*, "System.ComponentModel", "IComponent");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.IComponent
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: FFFFFFFF
  // [TypeConverterAttribute] Offset: FFFFFFFF
  // [RootDesignerSerializerAttribute] Offset: FFFFFFFF
  class IComponent/*, public ::System::IDisposable*/ {
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // public System.ComponentModel.ISite get_Site()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::ComponentModel::ISite* get_Site();
    // public System.Void set_Site(System.ComponentModel.ISite value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Site(::System::ComponentModel::ISite* value);
    // public System.Void add_Disposed(System.EventHandler value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void add_Disposed(::System::EventHandler* value);
    // public System.Void remove_Disposed(System.EventHandler value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void remove_Disposed(::System::EventHandler* value);
  }; // System.ComponentModel.IComponent
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::IComponent::get_Site
// Il2CppName: get_Site
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ISite* (System::ComponentModel::IComponent::*)()>(&System::ComponentModel::IComponent::get_Site)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::IComponent*), "get_Site", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::IComponent::set_Site
// Il2CppName: set_Site
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::IComponent::*)(::System::ComponentModel::ISite*)>(&System::ComponentModel::IComponent::set_Site)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ISite")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::IComponent*), "set_Site", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::IComponent::add_Disposed
// Il2CppName: add_Disposed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::IComponent::*)(::System::EventHandler*)>(&System::ComponentModel::IComponent::add_Disposed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "EventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::IComponent*), "add_Disposed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::IComponent::remove_Disposed
// Il2CppName: remove_Disposed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::IComponent::*)(::System::EventHandler*)>(&System::ComponentModel::IComponent::remove_Disposed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "EventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::IComponent*), "remove_Disposed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};