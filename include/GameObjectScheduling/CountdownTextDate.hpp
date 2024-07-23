// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: GameObjectScheduling
namespace GameObjectScheduling {
  // Forward declaring type: CountdownTextDate
  class CountdownTextDate;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GameObjectScheduling::CountdownTextDate);
DEFINE_IL2CPP_ARG_TYPE(::GameObjectScheduling::CountdownTextDate*, "GameObjectScheduling", "CountdownTextDate");
// Type namespace: GameObjectScheduling
namespace GameObjectScheduling {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: GameObjectScheduling.CountdownTextDate
  // [TokenAttribute] Offset: FFFFFFFF
  // [CreateAssetMenuAttribute] Offset: FFFFFFFF
  class CountdownTextDate : public ::UnityEngine::ScriptableObject {
    public:
    public:
    // public System.String CountdownTo
    // Size: 0x8
    // Offset: 0x18
    ::StringW CountdownTo;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String FormatString
    // Size: 0x8
    // Offset: 0x20
    ::StringW FormatString;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 DaysThreshold
    // Size: 0x4
    // Offset: 0x28
    int DaysThreshold;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.String CountdownTo
    [[deprecated("Use field access instead!")]] ::StringW& dyn_CountdownTo();
    // Get instance field reference: public System.String FormatString
    [[deprecated("Use field access instead!")]] ::StringW& dyn_FormatString();
    // Get instance field reference: public System.Int32 DaysThreshold
    [[deprecated("Use field access instead!")]] int& dyn_DaysThreshold();
    // public System.Void .ctor()
    // Offset: 0x28CE320
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CountdownTextDate* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GameObjectScheduling::CountdownTextDate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CountdownTextDate*, creationType>()));
    }
  }; // GameObjectScheduling.CountdownTextDate
  #pragma pack(pop)
  static check_size<sizeof(CountdownTextDate), 40 + sizeof(int)> __GameObjectScheduling_CountdownTextDateSizeCheck;
  static_assert(sizeof(CountdownTextDate) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GameObjectScheduling::CountdownTextDate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
