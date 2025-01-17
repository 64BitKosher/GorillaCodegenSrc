// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Unity.Collections.xxHash3
#include "Unity/Collections/xxHash3.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Unity::Mathematics
namespace Unity::Mathematics {
  // Forward declaring type: uint4
  struct uint4;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::Collections::xxHash3::Hash128Long_00000A6D$PostfixBurstDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::xxHash3::Hash128Long_00000A6D$PostfixBurstDelegate*, "Unity.Collections", "xxHash3/Hash128Long_00000A6D$PostfixBurstDelegate");
// Type namespace: Unity.Collections
namespace Unity::Collections {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000A6D$PostfixBurstDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class xxHash3::Hash128Long_00000A6D$PostfixBurstDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object , System.IntPtr )
    // Offset: 0x508AB5C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static xxHash3::Hash128Long_00000A6D$PostfixBurstDelegate* New_ctor(::Il2CppObject* param_0, ::System::IntPtr param_1) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::xxHash3::Hash128Long_00000A6D$PostfixBurstDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<xxHash3::Hash128Long_00000A6D$PostfixBurstDelegate*, creationType>(param_0, param_1)));
    }
    // public System.Void Invoke(System.Byte* input, System.Byte* dest, System.Int64 length, System.Byte* secret, out Unity.Mathematics.uint4 result)
    // Offset: 0x508AC10
    void Invoke(uint8_t* input, uint8_t* dest, int64_t length, uint8_t* secret, ByRef<::Unity::Mathematics::uint4> result);
  }; // Unity.Collections.xxHash3/Unity.Collections.Hash128Long_00000A6D$PostfixBurstDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::Collections::xxHash3::Hash128Long_00000A6D$PostfixBurstDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Unity::Collections::xxHash3::Hash128Long_00000A6D$PostfixBurstDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::Collections::xxHash3::Hash128Long_00000A6D$PostfixBurstDelegate::*)(uint8_t*, uint8_t*, int64_t, uint8_t*, ByRef<::Unity::Mathematics::uint4>)>(&Unity::Collections::xxHash3::Hash128Long_00000A6D$PostfixBurstDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* dest = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* secret = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("Unity.Mathematics", "uint4")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::xxHash3::Hash128Long_00000A6D$PostfixBurstDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, dest, length, secret, result});
  }
};
