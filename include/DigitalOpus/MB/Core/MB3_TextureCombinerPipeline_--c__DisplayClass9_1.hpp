// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DigitalOpus.MB.Core.MB3_TextureCombinerPipeline
#include "DigitalOpus/MB/Core/MB3_TextureCombinerPipeline.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: DigitalOpus::MB::Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: MB_TexSet
  class MB_TexSet;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::$$c__DisplayClass9_1);
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::$$c__DisplayClass9_1*, "DigitalOpus.MB.Core", "MB3_TextureCombinerPipeline/<>c__DisplayClass9_1");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.MB3_TextureCombinerPipeline/<>c__DisplayClass9_1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class MB3_TextureCombinerPipeline::$$c__DisplayClass9_1 : public ::Il2CppObject {
    public:
    public:
    // public DigitalOpus.MB.Core.MB_TexSet setOfTexs
    // Size: 0x8
    // Offset: 0x10
    ::DigitalOpus::MB::Core::MB_TexSet* setOfTexs;
    // Field size check
    static_assert(sizeof(::DigitalOpus::MB::Core::MB_TexSet*) == 0x8);
    // public DigitalOpus.MB.Core.MB3_TextureCombinerPipeline/<>c__DisplayClass9_0 CS$<>8__locals1
    // Size: 0x8
    // Offset: 0x18
    ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::$$c__DisplayClass9_0* CS$$$8__locals1;
    // Field size check
    static_assert(sizeof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::$$c__DisplayClass9_0*) == 0x8);
    public:
    // Get instance field reference: public DigitalOpus.MB.Core.MB_TexSet setOfTexs
    [[deprecated("Use field access instead!")]] ::DigitalOpus::MB::Core::MB_TexSet*& dyn_setOfTexs();
    // Get instance field reference: public DigitalOpus.MB.Core.MB3_TextureCombinerPipeline/<>c__DisplayClass9_0 CS$<>8__locals1
    [[deprecated("Use field access instead!")]] ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::$$c__DisplayClass9_0*& dyn_CS$$$8__locals1();
    // public System.Void .ctor()
    // Offset: 0x43F85AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MB3_TextureCombinerPipeline::$$c__DisplayClass9_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::$$c__DisplayClass9_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MB3_TextureCombinerPipeline::$$c__DisplayClass9_1*, creationType>()));
    }
    // System.Boolean <__Step1_CollectDistinctMatTexturesAndUsedObjects>b__0(DigitalOpus.MB.Core.MB_TexSet x)
    // Offset: 0x43F85B4
    bool $__Step1_CollectDistinctMatTexturesAndUsedObjects$b__0(::DigitalOpus::MB::Core::MB_TexSet* x);
  }; // DigitalOpus.MB.Core.MB3_TextureCombinerPipeline/<>c__DisplayClass9_1
  #pragma pack(pop)
  static check_size<sizeof(MB3_TextureCombinerPipeline::$$c__DisplayClass9_1), 24 + sizeof(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::$$c__DisplayClass9_0*)> __DigitalOpus_MB_Core_MB3_TextureCombinerPipeline_$$c__DisplayClass9_1SizeCheck;
  static_assert(sizeof(MB3_TextureCombinerPipeline::$$c__DisplayClass9_1) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::$$c__DisplayClass9_1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::$$c__DisplayClass9_1::$__Step1_CollectDistinctMatTexturesAndUsedObjects$b__0
// Il2CppName: <__Step1_CollectDistinctMatTexturesAndUsedObjects>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::$$c__DisplayClass9_1::*)(::DigitalOpus::MB::Core::MB_TexSet*)>(&DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::$$c__DisplayClass9_1::$__Step1_CollectDistinctMatTexturesAndUsedObjects$b__0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB_TexSet")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::$$c__DisplayClass9_1*), "<__Step1_CollectDistinctMatTexturesAndUsedObjects>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
