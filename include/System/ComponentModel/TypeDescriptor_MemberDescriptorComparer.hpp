// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.TypeDescriptor
#include "System/ComponentModel/TypeDescriptor.hpp"
// Including type: System.Collections.IComparer
#include "System/Collections/IComparer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::TypeDescriptor::MemberDescriptorComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::TypeDescriptor::MemberDescriptorComparer*, "System.ComponentModel", "TypeDescriptor/MemberDescriptorComparer");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.TypeDescriptor/MemberDescriptorComparer
  // [TokenAttribute] Offset: FFFFFFFF
  class TypeDescriptor::MemberDescriptorComparer : public ::Il2CppObject/*, public ::System::Collections::IComparer*/ {
    public:
    // Creating interface conversion operator: operator ::System::Collections::IComparer
    operator ::System::Collections::IComparer() noexcept {
      return *reinterpret_cast<::System::Collections::IComparer*>(this);
    }
    // Get static field: static public readonly System.ComponentModel.TypeDescriptor/MemberDescriptorComparer Instance
    static ::System::ComponentModel::TypeDescriptor::MemberDescriptorComparer* _get_Instance();
    // Set static field: static public readonly System.ComponentModel.TypeDescriptor/MemberDescriptorComparer Instance
    static void _set_Instance(::System::ComponentModel::TypeDescriptor::MemberDescriptorComparer* value);
    // public System.Int32 Compare(System.Object left, System.Object right)
    // Offset: 0x4F40CDC
    int Compare(::Il2CppObject* left, ::Il2CppObject* right);
    // public System.Void .ctor()
    // Offset: 0x4F40DF8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeDescriptor::MemberDescriptorComparer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::TypeDescriptor::MemberDescriptorComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeDescriptor::MemberDescriptorComparer*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x4F40E00
    static void _cctor();
  }; // System.ComponentModel.TypeDescriptor/MemberDescriptorComparer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::MemberDescriptorComparer::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ComponentModel::TypeDescriptor::MemberDescriptorComparer::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::ComponentModel::TypeDescriptor::MemberDescriptorComparer::Compare)> {
  static const MethodInfo* get() {
    static auto* left = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* right = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor::MemberDescriptorComparer*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{left, right});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::MemberDescriptorComparer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::TypeDescriptor::MemberDescriptorComparer::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::ComponentModel::TypeDescriptor::MemberDescriptorComparer::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeDescriptor::MemberDescriptorComparer*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
