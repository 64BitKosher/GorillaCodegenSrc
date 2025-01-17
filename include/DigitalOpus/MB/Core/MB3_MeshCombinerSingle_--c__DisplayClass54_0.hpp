// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DigitalOpus.MB.Core.MB3_MeshCombinerSingle
#include "DigitalOpus/MB/Core/MB3_MeshCombinerSingle.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Predicate`1<T>
  template<typename T>
  class Predicate_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::$$c__DisplayClass54_0);
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::$$c__DisplayClass54_0*, "DigitalOpus.MB.Core", "MB3_MeshCombinerSingle/<>c__DisplayClass54_0");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.MB3_MeshCombinerSingle/<>c__DisplayClass54_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class MB3_MeshCombinerSingle::$$c__DisplayClass54_0 : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.GameObject[] _goToAdd
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::UnityEngine::GameObject*> goToAdd;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::GameObject*>) == 0x8);
    // public System.Int32 i
    // Size: 0x4
    // Offset: 0x18
    int i;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: i and: $$9__0
    char __padding1[0x4] = {};
    // public System.Predicate`1<System.Int32> <>9__0
    // Size: 0x8
    // Offset: 0x20
    ::System::Predicate_1<int>* $$9__0;
    // Field size check
    static_assert(sizeof(::System::Predicate_1<int>*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.GameObject[] _goToAdd
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::GameObject*>& dyn__goToAdd();
    // Get instance field reference: public System.Int32 i
    [[deprecated("Use field access instead!")]] int& dyn_i();
    // Get instance field reference: public System.Predicate`1<System.Int32> <>9__0
    [[deprecated("Use field access instead!")]] ::System::Predicate_1<int>*& dyn_$$9__0();
    // public System.Void .ctor()
    // Offset: 0x43CCF58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MB3_MeshCombinerSingle::$$c__DisplayClass54_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::$$c__DisplayClass54_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MB3_MeshCombinerSingle::$$c__DisplayClass54_0*, creationType>()));
    }
    // System.Boolean <_addToCombined>b__0(System.Int32 o)
    // Offset: 0x43CCF60
    bool $_addToCombined$b__0(int o);
  }; // DigitalOpus.MB.Core.MB3_MeshCombinerSingle/<>c__DisplayClass54_0
  #pragma pack(pop)
  static check_size<sizeof(MB3_MeshCombinerSingle::$$c__DisplayClass54_0), 32 + sizeof(::System::Predicate_1<int>*)> __DigitalOpus_MB_Core_MB3_MeshCombinerSingle_$$c__DisplayClass54_0SizeCheck;
  static_assert(sizeof(MB3_MeshCombinerSingle::$$c__DisplayClass54_0) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_MeshCombinerSingle::$$c__DisplayClass54_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_MeshCombinerSingle::$$c__DisplayClass54_0::$_addToCombined$b__0
// Il2CppName: <_addToCombined>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::MB3_MeshCombinerSingle::$$c__DisplayClass54_0::*)(int)>(&DigitalOpus::MB::Core::MB3_MeshCombinerSingle::$$c__DisplayClass54_0::$_addToCombined$b__0)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_MeshCombinerSingle::$$c__DisplayClass54_0*), "<_addToCombined>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
