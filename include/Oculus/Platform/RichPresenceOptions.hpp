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
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: RichPresenceOptions
  class RichPresenceOptions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::RichPresenceOptions);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::RichPresenceOptions*, "Oculus.Platform", "RichPresenceOptions");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.RichPresenceOptions
  // [TokenAttribute] Offset: FFFFFFFF
  class RichPresenceOptions : public ::Il2CppObject {
    public:
    public:
    // private System.IntPtr Handle
    // Size: 0x8
    // Offset: 0x10
    ::System::IntPtr Handle;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept {
      return Handle;
    }
    // Get instance field reference: private System.IntPtr Handle
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_Handle();
    // public System.Void .ctor()
    // Offset: 0x488384C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RichPresenceOptions* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::RichPresenceOptions::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RichPresenceOptions*, creationType>()));
    }
    // static public System.IntPtr op_Explicit(Oculus.Platform.RichPresenceOptions options)
    // Offset: 0x4881F88
    // ABORTED: conflicts with another method.  explicit operator ::System::IntPtr();
    // protected override System.Void Finalize()
    // Offset: 0x48838B0
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // Oculus.Platform.RichPresenceOptions
  #pragma pack(pop)
  static check_size<sizeof(RichPresenceOptions), 16 + sizeof(::System::IntPtr)> __Oculus_Platform_RichPresenceOptionsSizeCheck;
  static_assert(sizeof(RichPresenceOptions) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::RichPresenceOptions::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::RichPresenceOptions::operator ::System::IntPtr
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Oculus::Platform::RichPresenceOptions::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::RichPresenceOptions::*)()>(&Oculus::Platform::RichPresenceOptions::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::RichPresenceOptions*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
