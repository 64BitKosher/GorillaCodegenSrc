// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.EventArgs
#include "System/EventArgs.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: RefreshEventArgs
  class RefreshEventArgs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::RefreshEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::RefreshEventArgs*, "System.ComponentModel", "RefreshEventArgs");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.RefreshEventArgs
  // [TokenAttribute] Offset: FFFFFFFF
  class RefreshEventArgs : public ::System::EventArgs {
    public:
    public:
    // private readonly System.Object <ComponentChanged>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* ComponentChanged;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private readonly System.Type <TypeChanged>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::System::Type* TypeChanged;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Get instance field reference: private readonly System.Object <ComponentChanged>k__BackingField
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$ComponentChanged$k__BackingField();
    // Get instance field reference: private readonly System.Type <TypeChanged>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_$TypeChanged$k__BackingField();
    // public System.Void .ctor(System.Object componentChanged)
    // Offset: 0x4F16F50
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RefreshEventArgs* New_ctor(::Il2CppObject* componentChanged) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::RefreshEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RefreshEventArgs*, creationType>(componentChanged)));
    }
    // public System.Void .ctor(System.Type typeChanged)
    // Offset: 0x4F16FE8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RefreshEventArgs* New_ctor(::System::Type* typeChanged) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::RefreshEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RefreshEventArgs*, creationType>(typeChanged)));
    }
    // public System.Object get_ComponentChanged()
    // Offset: 0x4F1705C
    ::Il2CppObject* get_ComponentChanged();
    // public System.Type get_TypeChanged()
    // Offset: 0x4F17064
    ::System::Type* get_TypeChanged();
  }; // System.ComponentModel.RefreshEventArgs
  #pragma pack(pop)
  static check_size<sizeof(RefreshEventArgs), 24 + sizeof(::System::Type*)> __System_ComponentModel_RefreshEventArgsSizeCheck;
  static_assert(sizeof(RefreshEventArgs) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::RefreshEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::RefreshEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::RefreshEventArgs::get_ComponentChanged
// Il2CppName: get_ComponentChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::RefreshEventArgs::*)()>(&System::ComponentModel::RefreshEventArgs::get_ComponentChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::RefreshEventArgs*), "get_ComponentChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::RefreshEventArgs::get_TypeChanged
// Il2CppName: get_TypeChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::ComponentModel::RefreshEventArgs::*)()>(&System::ComponentModel::RefreshEventArgs::get_TypeChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::RefreshEventArgs*), "get_TypeChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
