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
// Forward declaring namespace: System::Data
namespace System::Data {
  // Forward declaring type: DataRow
  class DataRow;
}
// Completed forward declares
// Type namespace: System.Data
namespace System::Data {
  // Forward declaring type: DataTableNewRowEventArgs
  class DataTableNewRowEventArgs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Data::DataTableNewRowEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataTableNewRowEventArgs*, "System.Data", "DataTableNewRowEventArgs");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.DataTableNewRowEventArgs
  // [TokenAttribute] Offset: FFFFFFFF
  class DataTableNewRowEventArgs : public ::System::EventArgs {
    public:
    public:
    // private readonly System.Data.DataRow <Row>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::System::Data::DataRow* Row;
    // Field size check
    static_assert(sizeof(::System::Data::DataRow*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Data::DataRow*
    constexpr operator ::System::Data::DataRow*() const noexcept {
      return Row;
    }
    // Get instance field reference: private readonly System.Data.DataRow <Row>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Data::DataRow*& dyn_$Row$k__BackingField();
    // public System.Void .ctor(System.Data.DataRow dataRow)
    // Offset: 0x4C4E0EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DataTableNewRowEventArgs* New_ctor(::System::Data::DataRow* dataRow) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::DataTableNewRowEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DataTableNewRowEventArgs*, creationType>(dataRow)));
    }
  }; // System.Data.DataTableNewRowEventArgs
  #pragma pack(pop)
  static check_size<sizeof(DataTableNewRowEventArgs), 16 + sizeof(::System::Data::DataRow*)> __System_Data_DataTableNewRowEventArgsSizeCheck;
  static_assert(sizeof(DataTableNewRowEventArgs) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::DataTableNewRowEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
