// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Unity.Burst.BurstRuntime
#include "Unity/Burst/BurstRuntime.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::Burst::BurstRuntime::PreserveAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::BurstRuntime::PreserveAttribute*, "Unity.Burst", "BurstRuntime/PreserveAttribute");
// Type namespace: Unity.Burst
namespace Unity::Burst {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Unity.Burst.BurstRuntime/PreserveAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  class BurstRuntime::PreserveAttribute : public ::System::Attribute {
    public:
    // public System.Void .ctor()
    // Offset: 0x5081BA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BurstRuntime::PreserveAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Burst::BurstRuntime::PreserveAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BurstRuntime::PreserveAttribute*, creationType>()));
    }
  }; // Unity.Burst.BurstRuntime/PreserveAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::Burst::BurstRuntime::PreserveAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
