// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MB2_TextureBakeResults
#include "GlobalNamespace/MB2_TextureBakeResults.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MB2_TextureBakeResults::CoroutineResult);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MB2_TextureBakeResults::CoroutineResult*, "", "MB2_TextureBakeResults/CoroutineResult");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: MB2_TextureBakeResults/CoroutineResult
  // [TokenAttribute] Offset: FFFFFFFF
  class MB2_TextureBakeResults::CoroutineResult : public ::Il2CppObject {
    public:
    public:
    // public System.Boolean isComplete
    // Size: 0x1
    // Offset: 0x10
    bool isComplete;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return isComplete;
    }
    // Get instance field reference: public System.Boolean isComplete
    [[deprecated("Use field access instead!")]] bool& dyn_isComplete();
    // public System.Void .ctor()
    // Offset: 0x439E77C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MB2_TextureBakeResults::CoroutineResult* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MB2_TextureBakeResults::CoroutineResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MB2_TextureBakeResults::CoroutineResult*, creationType>()));
    }
  }; // MB2_TextureBakeResults/CoroutineResult
  #pragma pack(pop)
  static check_size<sizeof(MB2_TextureBakeResults::CoroutineResult), 16 + sizeof(bool)> __GlobalNamespace_MB2_TextureBakeResults_CoroutineResultSizeCheck;
  static_assert(sizeof(MB2_TextureBakeResults::CoroutineResult) == 0x11);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MB2_TextureBakeResults::CoroutineResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
