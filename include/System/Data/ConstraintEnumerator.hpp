// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System::Data
namespace System::Data {
  // Forward declaring type: Constraint
  class Constraint;
  // Forward declaring type: DataSet
  class DataSet;
}
// Completed forward declares
// Type namespace: System.Data
namespace System::Data {
  // Forward declaring type: ConstraintEnumerator
  class ConstraintEnumerator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Data::ConstraintEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::ConstraintEnumerator*, "System.Data", "ConstraintEnumerator");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.ConstraintEnumerator
  // [TokenAttribute] Offset: FFFFFFFF
  class ConstraintEnumerator : public ::Il2CppObject {
    public:
    public:
    // private System.Collections.IEnumerator _tables
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::IEnumerator* tables;
    // Field size check
    static_assert(sizeof(::System::Collections::IEnumerator*) == 0x8);
    // private System.Collections.IEnumerator _constraints
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::IEnumerator* constraints;
    // Field size check
    static_assert(sizeof(::System::Collections::IEnumerator*) == 0x8);
    // private System.Data.Constraint _currentObject
    // Size: 0x8
    // Offset: 0x20
    ::System::Data::Constraint* currentObject;
    // Field size check
    static_assert(sizeof(::System::Data::Constraint*) == 0x8);
    public:
    // Get instance field reference: private System.Collections.IEnumerator _tables
    [[deprecated("Use field access instead!")]] ::System::Collections::IEnumerator*& dyn__tables();
    // Get instance field reference: private System.Collections.IEnumerator _constraints
    [[deprecated("Use field access instead!")]] ::System::Collections::IEnumerator*& dyn__constraints();
    // Get instance field reference: private System.Data.Constraint _currentObject
    [[deprecated("Use field access instead!")]] ::System::Data::Constraint*& dyn__currentObject();
    // public System.Void .ctor(System.Data.DataSet dataSet)
    // Offset: 0x4C09970
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConstraintEnumerator* New_ctor(::System::Data::DataSet* dataSet) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::ConstraintEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConstraintEnumerator*, creationType>(dataSet)));
    }
    // public System.Boolean GetNext()
    // Offset: 0x4C099D8
    bool GetNext();
    // public System.Data.Constraint GetConstraint()
    // Offset: 0x4C09D04
    ::System::Data::Constraint* GetConstraint();
    // protected System.Boolean IsValidCandidate(System.Data.Constraint constraint)
    // Offset: 0x4C09D0C
    bool IsValidCandidate(::System::Data::Constraint* constraint);
    // protected System.Data.Constraint get_CurrentObject()
    // Offset: 0x4C09D14
    ::System::Data::Constraint* get_CurrentObject();
  }; // System.Data.ConstraintEnumerator
  #pragma pack(pop)
  static check_size<sizeof(ConstraintEnumerator), 32 + sizeof(::System::Data::Constraint*)> __System_Data_ConstraintEnumeratorSizeCheck;
  static_assert(sizeof(ConstraintEnumerator) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::ConstraintEnumerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::ConstraintEnumerator::GetNext
// Il2CppName: GetNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::ConstraintEnumerator::*)()>(&System::Data::ConstraintEnumerator::GetNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::ConstraintEnumerator*), "GetNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::ConstraintEnumerator::GetConstraint
// Il2CppName: GetConstraint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::Constraint* (System::Data::ConstraintEnumerator::*)()>(&System::Data::ConstraintEnumerator::GetConstraint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::ConstraintEnumerator*), "GetConstraint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::ConstraintEnumerator::IsValidCandidate
// Il2CppName: IsValidCandidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::ConstraintEnumerator::*)(::System::Data::Constraint*)>(&System::Data::ConstraintEnumerator::IsValidCandidate)> {
  static const MethodInfo* get() {
    static auto* constraint = &::il2cpp_utils::GetClassFromName("System.Data", "Constraint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::ConstraintEnumerator*), "IsValidCandidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{constraint});
  }
};
// Writing MetadataGetter for method: System::Data::ConstraintEnumerator::get_CurrentObject
// Il2CppName: get_CurrentObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::Constraint* (System::Data::ConstraintEnumerator::*)()>(&System::Data::ConstraintEnumerator::get_CurrentObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::ConstraintEnumerator*), "get_CurrentObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
