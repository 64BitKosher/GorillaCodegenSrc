// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Unity.Collections.AutoFreeAllocator
#include "Unity/Collections/AutoFreeAllocator.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Unity.Collections.AllocatorManager
#include "Unity/Collections/AllocatorManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::Collections::AutoFreeAllocator::Try_000000DF$PostfixBurstDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::AutoFreeAllocator::Try_000000DF$PostfixBurstDelegate*, "Unity.Collections", "AutoFreeAllocator/Try_000000DF$PostfixBurstDelegate");
// Type namespace: Unity.Collections
namespace Unity::Collections {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: Unity.Collections.AutoFreeAllocator/Unity.Collections.Try_000000DF$PostfixBurstDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class AutoFreeAllocator::Try_000000DF$PostfixBurstDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object , System.IntPtr )
    // Offset: 0x508794C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AutoFreeAllocator::Try_000000DF$PostfixBurstDelegate* New_ctor(::Il2CppObject* param_0, ::System::IntPtr param_1) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::AutoFreeAllocator::Try_000000DF$PostfixBurstDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AutoFreeAllocator::Try_000000DF$PostfixBurstDelegate*, creationType>(param_0, param_1)));
    }
    // public System.Int32 Invoke(System.IntPtr state, ref Unity.Collections.AllocatorManager/Block block)
    // Offset: 0x50879EC
    int Invoke(::System::IntPtr state, ByRef<::Unity::Collections::AllocatorManager::Block> block);
  }; // Unity.Collections.AutoFreeAllocator/Unity.Collections.Try_000000DF$PostfixBurstDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::Collections::AutoFreeAllocator::Try_000000DF$PostfixBurstDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Unity::Collections::AutoFreeAllocator::Try_000000DF$PostfixBurstDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Unity::Collections::AutoFreeAllocator::Try_000000DF$PostfixBurstDelegate::*)(::System::IntPtr, ByRef<::Unity::Collections::AllocatorManager::Block>)>(&Unity::Collections::AutoFreeAllocator::Try_000000DF$PostfixBurstDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* block = &::il2cpp_utils::GetClassFromName("Unity.Collections", "AllocatorManager/Block")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::AutoFreeAllocator::Try_000000DF$PostfixBurstDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state, block});
  }
};
