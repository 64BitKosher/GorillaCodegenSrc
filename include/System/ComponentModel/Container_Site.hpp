// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.Container
#include "System/ComponentModel/Container.hpp"
// Including type: System.ComponentModel.ISite
#include "System/ComponentModel/ISite.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: IComponent
  class IComponent;
  // Forward declaring type: IContainer
  class IContainer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::Container::Site);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::Container::Site*, "System.ComponentModel", "Container/Site");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.Container/Site
  // [TokenAttribute] Offset: FFFFFFFF
  class Container::Site : public ::Il2CppObject/*, public ::System::ComponentModel::ISite*/ {
    public:
    public:
    // private System.ComponentModel.IComponent component
    // Size: 0x8
    // Offset: 0x10
    ::System::ComponentModel::IComponent* component;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::IComponent*) == 0x8);
    // private System.ComponentModel.Container container
    // Size: 0x8
    // Offset: 0x18
    ::System::ComponentModel::Container* container;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::Container*) == 0x8);
    // private System.String name
    // Size: 0x8
    // Offset: 0x20
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::ComponentModel::ISite
    operator ::System::ComponentModel::ISite() noexcept {
      return *reinterpret_cast<::System::ComponentModel::ISite*>(this);
    }
    // Get instance field reference: private System.ComponentModel.IComponent component
    [[deprecated("Use field access instead!")]] ::System::ComponentModel::IComponent*& dyn_component();
    // Get instance field reference: private System.ComponentModel.Container container
    [[deprecated("Use field access instead!")]] ::System::ComponentModel::Container*& dyn_container();
    // Get instance field reference: private System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
    // System.Void .ctor(System.ComponentModel.IComponent component, System.ComponentModel.Container container, System.String name)
    // Offset: 0x4F1CDE4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Container::Site* New_ctor(::System::ComponentModel::IComponent* component, ::System::ComponentModel::Container* container, ::StringW name) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::Container::Site::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Container::Site*, creationType>(component, container, name)));
    }
    // public System.ComponentModel.IComponent get_Component()
    // Offset: 0x4F1D940
    ::System::ComponentModel::IComponent* get_Component();
    // public System.ComponentModel.IContainer get_Container()
    // Offset: 0x4F1D948
    ::System::ComponentModel::IContainer* get_Container();
    // public System.Object GetService(System.Type service)
    // Offset: 0x4F1D950
    ::Il2CppObject* GetService(::System::Type* service);
    // public System.Boolean get_DesignMode()
    // Offset: 0x4F1DA14
    bool get_DesignMode();
    // public System.String get_Name()
    // Offset: 0x4F1DA1C
    ::StringW get_Name();
    // public System.Void set_Name(System.String value)
    // Offset: 0x4F1DA24
    void set_Name(::StringW value);
  }; // System.ComponentModel.Container/Site
  #pragma pack(pop)
  static check_size<sizeof(Container::Site), 32 + sizeof(::StringW)> __System_ComponentModel_Container_SiteSizeCheck;
  static_assert(sizeof(Container::Site) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::Container::Site::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::Container::Site::get_Component
// Il2CppName: get_Component
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::IComponent* (System::ComponentModel::Container::Site::*)()>(&System::ComponentModel::Container::Site::get_Component)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::Container::Site*), "get_Component", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::Container::Site::get_Container
// Il2CppName: get_Container
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::IContainer* (System::ComponentModel::Container::Site::*)()>(&System::ComponentModel::Container::Site::get_Container)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::Container::Site*), "get_Container", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::Container::Site::GetService
// Il2CppName: GetService
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::Container::Site::*)(::System::Type*)>(&System::ComponentModel::Container::Site::GetService)> {
  static const MethodInfo* get() {
    static auto* service = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::Container::Site*), "GetService", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{service});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::Container::Site::get_DesignMode
// Il2CppName: get_DesignMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::Container::Site::*)()>(&System::ComponentModel::Container::Site::get_DesignMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::Container::Site*), "get_DesignMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::Container::Site::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::Container::Site::*)()>(&System::ComponentModel::Container::Site::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::Container::Site*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::Container::Site::set_Name
// Il2CppName: set_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::Container::Site::*)(::StringW)>(&System::ComponentModel::Container::Site::set_Name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::Container::Site*), "set_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
