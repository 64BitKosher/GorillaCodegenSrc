// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DigitalOpus.MB.Core.MB_Utility
#include "DigitalOpus/MB/Core/MB_Utility.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DigitalOpus::MB::Core::MB_Utility::MB_Triangle);
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::MB_Utility::MB_Triangle*, "DigitalOpus.MB.Core", "MB_Utility/MB_Triangle");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.MB_Utility/MB_Triangle
  // [TokenAttribute] Offset: FFFFFFFF
  class MB_Utility::MB_Triangle : public ::Il2CppObject {
    public:
    public:
    // private System.Int32 submeshIdx
    // Size: 0x4
    // Offset: 0x10
    int submeshIdx;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: submeshIdx and: vs
    char __padding0[0x4] = {};
    // private System.Int32[] vs
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<int> vs;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    public:
    // Get instance field reference: private System.Int32 submeshIdx
    [[deprecated("Use field access instead!")]] int& dyn_submeshIdx();
    // Get instance field reference: private System.Int32[] vs
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_vs();
    // public System.Boolean isSame(System.Object obj)
    // Offset: 0x43D48C8
    bool isSame(::Il2CppObject* obj);
    // public System.Boolean sharesVerts(DigitalOpus.MB.Core.MB_Utility/MB_Triangle obj)
    // Offset: 0x43D49DC
    bool sharesVerts(::DigitalOpus::MB::Core::MB_Utility::MB_Triangle* obj);
    // public System.Void Initialize(System.Int32[] ts, System.Int32 idx, System.Int32 sIdx)
    // Offset: 0x43D47F8
    void Initialize(::ArrayW<int> ts, int idx, int sIdx);
    // public System.Void .ctor()
    // Offset: 0x43D4794
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MB_Utility::MB_Triangle* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::MB_Utility::MB_Triangle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MB_Utility::MB_Triangle*, creationType>()));
    }
  }; // DigitalOpus.MB.Core.MB_Utility/MB_Triangle
  #pragma pack(pop)
  static check_size<sizeof(MB_Utility::MB_Triangle), 24 + sizeof(::ArrayW<int>)> __DigitalOpus_MB_Core_MB_Utility_MB_TriangleSizeCheck;
  static_assert(sizeof(MB_Utility::MB_Triangle) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB_Utility::MB_Triangle::isSame
// Il2CppName: isSame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::MB_Utility::MB_Triangle::*)(::Il2CppObject*)>(&DigitalOpus::MB::Core::MB_Utility::MB_Triangle::isSame)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB_Utility::MB_Triangle*), "isSame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB_Utility::MB_Triangle::sharesVerts
// Il2CppName: sharesVerts
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::MB_Utility::MB_Triangle::*)(::DigitalOpus::MB::Core::MB_Utility::MB_Triangle*)>(&DigitalOpus::MB::Core::MB_Utility::MB_Triangle::sharesVerts)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB_Utility/MB_Triangle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB_Utility::MB_Triangle*), "sharesVerts", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB_Utility::MB_Triangle::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MB_Utility::MB_Triangle::*)(::ArrayW<int>, int, int)>(&DigitalOpus::MB::Core::MB_Utility::MB_Triangle::Initialize)> {
  static const MethodInfo* get() {
    static auto* ts = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* sIdx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB_Utility::MB_Triangle*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ts, idx, sIdx});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB_Utility::MB_Triangle::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
