// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Data.Nodes
#include "System/Data/Nodes.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Data
namespace System::Data {
  // Forward declaring type: OperatorInfo
  class OperatorInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Data::OperatorInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::OperatorInfo*, "System.Data", "OperatorInfo");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.OperatorInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class OperatorInfo : public ::Il2CppObject {
    public:
    public:
    // System.Data.Nodes _type
    // Size: 0x4
    // Offset: 0x10
    ::System::Data::Nodes type;
    // Field size check
    static_assert(sizeof(::System::Data::Nodes) == 0x4);
    // System.Int32 _op
    // Size: 0x4
    // Offset: 0x14
    int op;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 _priority
    // Size: 0x4
    // Offset: 0x18
    int priority;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: System.Data.Nodes _type
    [[deprecated("Use field access instead!")]] ::System::Data::Nodes& dyn__type();
    // Get instance field reference: System.Int32 _op
    [[deprecated("Use field access instead!")]] int& dyn__op();
    // Get instance field reference: System.Int32 _priority
    [[deprecated("Use field access instead!")]] int& dyn__priority();
    // System.Void .ctor(System.Data.Nodes type, System.Int32 op, System.Int32 pri)
    // Offset: 0x4C61208
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OperatorInfo* New_ctor(::System::Data::Nodes type, int op, int pri) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::OperatorInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OperatorInfo*, creationType>(type, op, pri)));
    }
  }; // System.Data.OperatorInfo
  #pragma pack(pop)
  static check_size<sizeof(OperatorInfo), 24 + sizeof(int)> __System_Data_OperatorInfoSizeCheck;
  static_assert(sizeof(OperatorInfo) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::OperatorInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!