// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: ParamsArray
  struct ParamsArray;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::ParamsArray, "System", "ParamsArray");
// Type namespace: System
namespace System {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.ParamsArray
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: FFFFFFFF
  struct ParamsArray/*, public ::System::ValueType*/ {
    public:
    public:
    // private readonly System.Object _arg0
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppObject* arg0;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private readonly System.Object _arg1
    // Size: 0x8
    // Offset: 0x8
    ::Il2CppObject* arg1;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private readonly System.Object _arg2
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* arg2;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private readonly System.Object[] _args
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::Il2CppObject*> args;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppObject*>) == 0x8);
    public:
    // Creating value type constructor for type: ParamsArray
    constexpr ParamsArray(::Il2CppObject* arg0_ = {}, ::Il2CppObject* arg1_ = {}, ::Il2CppObject* arg2_ = {}, ::ArrayW<::Il2CppObject*> args_ = ::ArrayW<::Il2CppObject*>(static_cast<void*>(nullptr))) noexcept : arg0{arg0_}, arg1{arg1_}, arg2{arg2_}, args{args_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get static field: static private readonly System.Object[] s_oneArgArray
    static ::ArrayW<::Il2CppObject*> _get_s_oneArgArray();
    // Set static field: static private readonly System.Object[] s_oneArgArray
    static void _set_s_oneArgArray(::ArrayW<::Il2CppObject*> value);
    // Get static field: static private readonly System.Object[] s_twoArgArray
    static ::ArrayW<::Il2CppObject*> _get_s_twoArgArray();
    // Set static field: static private readonly System.Object[] s_twoArgArray
    static void _set_s_twoArgArray(::ArrayW<::Il2CppObject*> value);
    // Get static field: static private readonly System.Object[] s_threeArgArray
    static ::ArrayW<::Il2CppObject*> _get_s_threeArgArray();
    // Set static field: static private readonly System.Object[] s_threeArgArray
    static void _set_s_threeArgArray(::ArrayW<::Il2CppObject*> value);
    // Get instance field reference: private readonly System.Object _arg0
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__arg0();
    // Get instance field reference: private readonly System.Object _arg1
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__arg1();
    // Get instance field reference: private readonly System.Object _arg2
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__arg2();
    // Get instance field reference: private readonly System.Object[] _args
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppObject*>& dyn__args();
    // public System.Void .ctor(System.Object arg0)
    // Offset: 0x466AEE4
    ParamsArray(::Il2CppObject* arg0);
    // public System.Void .ctor(System.Object arg0, System.Object arg1)
    // Offset: 0x466AF84
    ParamsArray(::Il2CppObject* arg0, ::Il2CppObject* arg1);
    // public System.Void .ctor(System.Object arg0, System.Object arg1, System.Object arg2)
    // Offset: 0x466B028
    ParamsArray(::Il2CppObject* arg0, ::Il2CppObject* arg1, ::Il2CppObject* arg2);
    // public System.Void .ctor(System.Object[] args)
    // Offset: 0x466B0D8
    ParamsArray(::ArrayW<::Il2CppObject*> args);
    // public System.Int32 get_Length()
    // Offset: 0x466B190
    int get_Length();
    // public System.Object get_Item(System.Int32 index)
    // Offset: 0x466B1AC
    ::Il2CppObject* get_Item(int index);
    // private System.Object GetAtSlow(System.Int32 index)
    // Offset: 0x466B1BC
    ::Il2CppObject* GetAtSlow(int index);
    // static private System.Void .cctor()
    // Offset: 0x466B210
    static void _cctor();
  }; // System.ParamsArray
  #pragma pack(pop)
  static check_size<sizeof(ParamsArray), 24 + sizeof(::ArrayW<::Il2CppObject*>)> __System_ParamsArraySizeCheck;
  static_assert(sizeof(ParamsArray) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ParamsArray::ParamsArray
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ParamsArray::ParamsArray
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ParamsArray::ParamsArray
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ParamsArray::ParamsArray
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ParamsArray::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ParamsArray::*)()>(&System::ParamsArray::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ParamsArray), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ParamsArray::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ParamsArray::*)(int)>(&System::ParamsArray::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ParamsArray), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::ParamsArray::GetAtSlow
// Il2CppName: GetAtSlow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ParamsArray::*)(int)>(&System::ParamsArray::GetAtSlow)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ParamsArray), "GetAtSlow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::ParamsArray::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::ParamsArray::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ParamsArray), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
