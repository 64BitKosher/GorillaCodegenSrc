// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Unity.Burst.BurstCompiler/BurstCompilerHelper
#include "Unity/Burst/BurstCompiler_BurstCompilerHelper.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::Burst::BurstCompiler::BurstCompilerHelper::IsBurstEnabledDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::BurstCompiler::BurstCompilerHelper::IsBurstEnabledDelegate*, "Unity.Burst", "BurstCompiler/BurstCompilerHelper/IsBurstEnabledDelegate");
// Type namespace: Unity.Burst
namespace Unity::Burst {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: Unity.Burst.BurstCompiler/BurstCompilerHelper/IsBurstEnabledDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: FFFFFFFF
  class BurstCompiler::BurstCompilerHelper::IsBurstEnabledDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x50811D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BurstCompiler::BurstCompilerHelper::IsBurstEnabledDelegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Burst::BurstCompiler::BurstCompilerHelper::IsBurstEnabledDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BurstCompiler::BurstCompilerHelper::IsBurstEnabledDelegate*, creationType>(object, method)));
    }
    // public System.Boolean Invoke()
    // Offset: 0x5081274
    bool Invoke();
  }; // Unity.Burst.BurstCompiler/BurstCompilerHelper/IsBurstEnabledDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::Burst::BurstCompiler::BurstCompilerHelper::IsBurstEnabledDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Unity::Burst::BurstCompiler::BurstCompilerHelper::IsBurstEnabledDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Unity::Burst::BurstCompiler::BurstCompilerHelper::IsBurstEnabledDelegate::*)()>(&Unity::Burst::BurstCompiler::BurstCompilerHelper::IsBurstEnabledDelegate::Invoke)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Burst::BurstCompiler::BurstCompilerHelper::IsBurstEnabledDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};