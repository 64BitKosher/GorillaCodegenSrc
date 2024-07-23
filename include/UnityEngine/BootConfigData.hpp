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
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: BootConfigData
  class BootConfigData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::BootConfigData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::BootConfigData*, "UnityEngine", "BootConfigData");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.BootConfigData
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  class BootConfigData : public ::Il2CppObject {
    public:
    public:
    // private System.IntPtr m_Ptr
    // Size: 0x8
    // Offset: 0x10
    ::System::IntPtr m_Ptr;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept {
      return m_Ptr;
    }
    // Get instance field reference: private System.IntPtr m_Ptr
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_m_Ptr();
    // static private UnityEngine.BootConfigData WrapBootConfigData(System.IntPtr nativeHandle)
    // Offset: 0x547D0DC
    static ::UnityEngine::BootConfigData* WrapBootConfigData(::System::IntPtr nativeHandle);
    // private System.Void .ctor(System.IntPtr nativeHandle)
    // Offset: 0x547D134
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BootConfigData* New_ctor(::System::IntPtr nativeHandle) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::BootConfigData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BootConfigData*, creationType>(nativeHandle)));
    }
  }; // UnityEngine.BootConfigData
  #pragma pack(pop)
  static check_size<sizeof(BootConfigData), 16 + sizeof(::System::IntPtr)> __UnityEngine_BootConfigDataSizeCheck;
  static_assert(sizeof(BootConfigData) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::BootConfigData::WrapBootConfigData
// Il2CppName: WrapBootConfigData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::BootConfigData* (*)(::System::IntPtr)>(&UnityEngine::BootConfigData::WrapBootConfigData)> {
  static const MethodInfo* get() {
    static auto* nativeHandle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BootConfigData*), "WrapBootConfigData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nativeHandle});
  }
};
// Writing MetadataGetter for method: UnityEngine::BootConfigData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!