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
// Type namespace: LitJson
namespace LitJson {
  // Forward declaring type: WriterContext
  class WriterContext;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::LitJson::WriterContext);
DEFINE_IL2CPP_ARG_TYPE(::LitJson::WriterContext*, "LitJson", "WriterContext");
// Type namespace: LitJson
namespace LitJson {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: LitJson.WriterContext
  // [TokenAttribute] Offset: FFFFFFFF
  class WriterContext : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 Count
    // Size: 0x4
    // Offset: 0x10
    int Count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean InArray
    // Size: 0x1
    // Offset: 0x14
    bool InArray;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean InObject
    // Size: 0x1
    // Offset: 0x15
    bool InObject;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean ExpectingValue
    // Size: 0x1
    // Offset: 0x16
    bool ExpectingValue;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: ExpectingValue and: Padding
    char __padding3[0x1] = {};
    // public System.Int32 Padding
    // Size: 0x4
    // Offset: 0x18
    int Padding;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public System.Int32 Count
    [[deprecated("Use field access instead!")]] int& dyn_Count();
    // Get instance field reference: public System.Boolean InArray
    [[deprecated("Use field access instead!")]] bool& dyn_InArray();
    // Get instance field reference: public System.Boolean InObject
    [[deprecated("Use field access instead!")]] bool& dyn_InObject();
    // Get instance field reference: public System.Boolean ExpectingValue
    [[deprecated("Use field access instead!")]] bool& dyn_ExpectingValue();
    // Get instance field reference: public System.Int32 Padding
    [[deprecated("Use field access instead!")]] int& dyn_Padding();
    // public System.Void .ctor()
    // Offset: 0x27C9920
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WriterContext* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::LitJson::WriterContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WriterContext*, creationType>()));
    }
  }; // LitJson.WriterContext
  #pragma pack(pop)
  static check_size<sizeof(WriterContext), 24 + sizeof(int)> __LitJson_WriterContextSizeCheck;
  static_assert(sizeof(WriterContext) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LitJson::WriterContext::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
