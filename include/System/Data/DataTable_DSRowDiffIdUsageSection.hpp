// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Data.DataTable
#include "System/Data/DataTable.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Data
namespace System::Data {
  // Forward declaring type: DataSet
  class DataSet;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataTable::DSRowDiffIdUsageSection, "System.Data", "DataTable/DSRowDiffIdUsageSection");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Data.DataTable/DSRowDiffIdUsageSection
  // [TokenAttribute] Offset: FFFFFFFF
  struct DataTable::DSRowDiffIdUsageSection/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Data.DataSet _targetDS
    // Size: 0x8
    // Offset: 0x0
    ::System::Data::DataSet* targetDS;
    // Field size check
    static_assert(sizeof(::System::Data::DataSet*) == 0x8);
    public:
    // Creating value type constructor for type: DSRowDiffIdUsageSection
    constexpr DSRowDiffIdUsageSection(::System::Data::DataSet* targetDS_ = {}) noexcept : targetDS{targetDS_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::System::Data::DataSet*
    constexpr operator ::System::Data::DataSet*() const noexcept {
      return targetDS;
    }
    // Get instance field reference: private System.Data.DataSet _targetDS
    [[deprecated("Use field access instead!")]] ::System::Data::DataSet*& dyn__targetDS();
    // System.Void Prepare(System.Data.DataSet ds)
    // Offset: 0x4C48794
    void Prepare(::System::Data::DataSet* ds);
  }; // System.Data.DataTable/DSRowDiffIdUsageSection
  #pragma pack(pop)
  static check_size<sizeof(DataTable::DSRowDiffIdUsageSection), 0 + sizeof(::System::Data::DataSet*)> __System_Data_DataTable_DSRowDiffIdUsageSectionSizeCheck;
  static_assert(sizeof(DataTable::DSRowDiffIdUsageSection) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::DataTable::DSRowDiffIdUsageSection::Prepare
// Il2CppName: Prepare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataTable::DSRowDiffIdUsageSection::*)(::System::Data::DataSet*)>(&System::Data::DataTable::DSRowDiffIdUsageSection::Prepare)> {
  static const MethodInfo* get() {
    static auto* ds = &::il2cpp_utils::GetClassFromName("System.Data", "DataSet")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataTable::DSRowDiffIdUsageSection), "Prepare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ds});
  }
};
