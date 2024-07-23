// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BoingKit.BoingBehavior
#include "BoingKit/BoingBehavior.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: BoingKit
namespace BoingKit {
  // Forward declaring type: BoingReactor
  class BoingReactor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BoingKit::BoingReactor);
DEFINE_IL2CPP_ARG_TYPE(::BoingKit::BoingReactor*, "BoingKit", "BoingReactor");
// Type namespace: BoingKit
namespace BoingKit {
  // Size: 0x231
  #pragma pack(push, 1)
  // Autogenerated type: BoingKit.BoingReactor
  // [TokenAttribute] Offset: FFFFFFFF
  class BoingReactor : public ::BoingKit::BoingBehavior {
    public:
    // protected override System.Void Register()
    // Offset: 0x28F2844
    // Implemented from: BoingKit.BoingBehavior
    // Base method: System.Void BoingBehavior::Register()
    void Register();
    // protected override System.Void Unregister()
    // Offset: 0x28F2898
    // Implemented from: BoingKit.BoingBehavior
    // Base method: System.Void BoingBehavior::Unregister()
    void Unregister();
    // public override System.Void PrepareExecute()
    // Offset: 0x28EC800
    // Implemented from: BoingKit.BoingBehavior
    // Base method: System.Void BoingBehavior::PrepareExecute()
    void PrepareExecute();
    // public System.Void .ctor()
    // Offset: 0x28ECD08
    // Implemented from: BoingKit.BoingBehavior
    // Base method: System.Void BoingBehavior::.ctor()
    // Base method: System.Void BoingBase::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BoingReactor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BoingKit::BoingReactor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BoingReactor*, creationType>()));
    }
  }; // BoingKit.BoingReactor
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BoingKit::BoingReactor::Register
// Il2CppName: Register
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BoingKit::BoingReactor::*)()>(&BoingKit::BoingReactor::Register)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BoingKit::BoingReactor*), "Register", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BoingKit::BoingReactor::Unregister
// Il2CppName: Unregister
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BoingKit::BoingReactor::*)()>(&BoingKit::BoingReactor::Unregister)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BoingKit::BoingReactor*), "Unregister", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BoingKit::BoingReactor::PrepareExecute
// Il2CppName: PrepareExecute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BoingKit::BoingReactor::*)()>(&BoingKit::BoingReactor::PrepareExecute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BoingKit::BoingReactor*), "PrepareExecute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BoingKit::BoingReactor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!