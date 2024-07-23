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
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: AddingNewEventArgs
  class AddingNewEventArgs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::AddingNewEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::AddingNewEventArgs*, "System.ComponentModel", "AddingNewEventArgs");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.AddingNewEventArgs
  // [TokenAttribute] Offset: FFFFFFFF
  class AddingNewEventArgs : public ::System::EventArgs {
    public:
    public:
    // private System.Object <NewObject>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* NewObject;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Creating conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept {
      return NewObject;
    }
    // Get instance field reference: private System.Object <NewObject>k__BackingField
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$NewObject$k__BackingField();
    // public System.Void .ctor()
    // Offset: 0x4EF3C68
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AddingNewEventArgs* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::AddingNewEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AddingNewEventArgs*, creationType>()));
    }
    // public System.Void .ctor(System.Object newObject)
    // Offset: 0x4EF3CC0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AddingNewEventArgs* New_ctor(::Il2CppObject* newObject) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::AddingNewEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AddingNewEventArgs*, creationType>(newObject)));
    }
    // public System.Object get_NewObject()
    // Offset: 0x4EF3D34
    ::Il2CppObject* get_NewObject();
    // public System.Void set_NewObject(System.Object value)
    // Offset: 0x4EF3D3C
    void set_NewObject(::Il2CppObject* value);
  }; // System.ComponentModel.AddingNewEventArgs
  #pragma pack(pop)
  static check_size<sizeof(AddingNewEventArgs), 16 + sizeof(::Il2CppObject*)> __System_ComponentModel_AddingNewEventArgsSizeCheck;
  static_assert(sizeof(AddingNewEventArgs) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::AddingNewEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::AddingNewEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::AddingNewEventArgs::get_NewObject
// Il2CppName: get_NewObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::AddingNewEventArgs::*)()>(&System::ComponentModel::AddingNewEventArgs::get_NewObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::AddingNewEventArgs*), "get_NewObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::AddingNewEventArgs::set_NewObject
// Il2CppName: set_NewObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::AddingNewEventArgs::*)(::Il2CppObject*)>(&System::ComponentModel::AddingNewEventArgs::set_NewObject)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::AddingNewEventArgs*), "set_NewObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
