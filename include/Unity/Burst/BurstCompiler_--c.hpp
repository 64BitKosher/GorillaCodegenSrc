// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Unity.Burst.BurstCompiler
#include "Unity/Burst/BurstCompiler.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Attribute
  class Attribute;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::Burst::BurstCompiler::$$c);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::BurstCompiler::$$c*, "Unity.Burst", "BurstCompiler/<>c");
// Type namespace: Unity.Burst
namespace Unity::Burst {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Unity.Burst.BurstCompiler/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class BurstCompiler::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Unity.Burst.BurstCompiler/<>c <>9
    static ::Unity::Burst::BurstCompiler::$$c* _get_$$9();
    // Set static field: static public readonly Unity.Burst.BurstCompiler/<>c <>9
    static void _set_$$9(::Unity::Burst::BurstCompiler::$$c* value);
    // Get static field: static public System.Func`2<System.Attribute,System.Boolean> <>9__22_0
    static ::System::Func_2<::System::Attribute*, bool>* _get_$$9__22_0();
    // Set static field: static public System.Func`2<System.Attribute,System.Boolean> <>9__22_0
    static void _set_$$9__22_0(::System::Func_2<::System::Attribute*, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x5081290
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x50812F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BurstCompiler::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Burst::BurstCompiler::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BurstCompiler::$$c*, creationType>()));
    }
    // System.Boolean <Compile>b__22_0(System.Attribute s)
    // Offset: 0x5081300
    bool $Compile$b__22_0(::System::Attribute* s);
  }; // Unity.Burst.BurstCompiler/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::Burst::BurstCompiler::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Unity::Burst::BurstCompiler::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Burst::BurstCompiler::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::Burst::BurstCompiler::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Unity::Burst::BurstCompiler::$$c::$Compile$b__22_0
// Il2CppName: <Compile>b__22_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Unity::Burst::BurstCompiler::$$c::*)(::System::Attribute*)>(&Unity::Burst::BurstCompiler::$$c::$Compile$b__22_0)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "Attribute")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Burst::BurstCompiler::$$c*), "<Compile>b__22_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};