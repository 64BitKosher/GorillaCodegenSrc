// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Forward declaring type: OrgScopedID
  class OrgScopedID;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::OrgScopedID);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::OrgScopedID*, "Oculus.Platform.Models", "OrgScopedID");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.OrgScopedID
  // [TokenAttribute] Offset: FFFFFFFF
  class OrgScopedID : public ::Il2CppObject {
    public:
    public:
    // public readonly System.UInt64 ID
    // Size: 0x8
    // Offset: 0x10
    uint64_t _ID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    public:
    // Creating conversion operator: operator uint64_t
    constexpr operator uint64_t() const noexcept {
      return _ID;
    }
    // Get instance field reference: public readonly System.UInt64 ID
    [[deprecated("Use field access instead!")]] uint64_t& dyn_ID();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x488969C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OrgScopedID* New_ctor(::System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::OrgScopedID::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OrgScopedID*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.OrgScopedID
  #pragma pack(pop)
  static check_size<sizeof(OrgScopedID), 16 + sizeof(uint64_t)> __Oculus_Platform_Models_OrgScopedIDSizeCheck;
  static_assert(sizeof(OrgScopedID) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::OrgScopedID::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!