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
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: SerStack
  class SerStack;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: SerObjectInfoInit
  class SerObjectInfoInit;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, "System.Runtime.Serialization.Formatters.Binary", "SerObjectInfoInit");
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit
  // [TokenAttribute] Offset: FFFFFFFF
  class SerObjectInfoInit : public ::Il2CppObject {
    public:
    public:
    // System.Collections.Hashtable seenBeforeTable
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Hashtable* seenBeforeTable;
    // Field size check
    static_assert(sizeof(::System::Collections::Hashtable*) == 0x8);
    // System.Int32 objectInfoIdCount
    // Size: 0x4
    // Offset: 0x18
    int objectInfoIdCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: objectInfoIdCount and: oiPool
    char __padding1[0x4] = {};
    // System.Runtime.Serialization.Formatters.Binary.SerStack oiPool
    // Size: 0x8
    // Offset: 0x20
    ::System::Runtime::Serialization::Formatters::Binary::SerStack* oiPool;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::Formatters::Binary::SerStack*) == 0x8);
    public:
    // Get instance field reference: System.Collections.Hashtable seenBeforeTable
    [[deprecated("Use field access instead!")]] ::System::Collections::Hashtable*& dyn_seenBeforeTable();
    // Get instance field reference: System.Int32 objectInfoIdCount
    [[deprecated("Use field access instead!")]] int& dyn_objectInfoIdCount();
    // Get instance field reference: System.Runtime.Serialization.Formatters.Binary.SerStack oiPool
    [[deprecated("Use field access instead!")]] ::System::Runtime::Serialization::Formatters::Binary::SerStack*& dyn_oiPool();
    // public System.Void .ctor()
    // Offset: 0x4566D40
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SerObjectInfoInit* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SerObjectInfoInit*, creationType>()));
    }
  }; // System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit
  #pragma pack(pop)
  static check_size<sizeof(SerObjectInfoInit), 32 + sizeof(::System::Runtime::Serialization::Formatters::Binary::SerStack*)> __System_Runtime_Serialization_Formatters_Binary_SerObjectInfoInitSizeCheck;
  static_assert(sizeof(SerObjectInfoInit) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
