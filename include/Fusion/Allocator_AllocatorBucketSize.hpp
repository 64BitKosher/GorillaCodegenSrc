// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.Allocator
#include "Fusion/Allocator.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::Allocator::AllocatorBucketSize);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Allocator::AllocatorBucketSize*, "Fusion", "Allocator/AllocatorBucketSize");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.Allocator/AllocatorBucketSize
  // [TokenAttribute] Offset: FFFFFFFF
  class Allocator::AllocatorBucketSize : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Int32[] Sizes
    static ::ArrayW<int> _get_Sizes();
    // Set static field: static public readonly System.Int32[] Sizes
    static void _set_Sizes(::ArrayW<int> value);
    // static private System.Void .cctor()
    // Offset: 0x2AFE308
    static void _cctor();
  }; // Fusion.Allocator/AllocatorBucketSize
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::Allocator::AllocatorBucketSize::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Fusion::Allocator::AllocatorBucketSize::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Allocator::AllocatorBucketSize*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
