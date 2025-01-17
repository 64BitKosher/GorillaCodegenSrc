// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Unity.Burst.BurstCompiler
#include "Unity/Burst/BurstCompiler.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::Burst::BurstCompiler::StaticTypeReinitAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::BurstCompiler::StaticTypeReinitAttribute*, "Unity.Burst", "BurstCompiler/StaticTypeReinitAttribute");
// Type namespace: Unity.Burst
namespace Unity::Burst {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Unity.Burst.BurstCompiler/StaticTypeReinitAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  class BurstCompiler::StaticTypeReinitAttribute : public ::System::Attribute {
    public:
    public:
    // public readonly System.Type reinitType
    // Size: 0x8
    // Offset: 0x10
    ::System::Type* reinitType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Type*
    constexpr operator ::System::Type*() const noexcept {
      return reinitType;
    }
    // Get instance field reference: public readonly System.Type reinitType
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_reinitType();
    // public System.Void .ctor(System.Type toReinit)
    // Offset: 0x5081028
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BurstCompiler::StaticTypeReinitAttribute* New_ctor(::System::Type* toReinit) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Burst::BurstCompiler::StaticTypeReinitAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BurstCompiler::StaticTypeReinitAttribute*, creationType>(toReinit)));
    }
  }; // Unity.Burst.BurstCompiler/StaticTypeReinitAttribute
  #pragma pack(pop)
  static check_size<sizeof(BurstCompiler::StaticTypeReinitAttribute), 16 + sizeof(::System::Type*)> __Unity_Burst_BurstCompiler_StaticTypeReinitAttributeSizeCheck;
  static_assert(sizeof(BurstCompiler::StaticTypeReinitAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::Burst::BurstCompiler::StaticTypeReinitAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
