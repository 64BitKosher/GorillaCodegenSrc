// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Unity.Jobs.EarlyInitHelpers
#include "Unity/Jobs/EarlyInitHelpers.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::Jobs::EarlyInitHelpers::EarlyInitFunction);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Jobs::EarlyInitHelpers::EarlyInitFunction*, "Unity.Jobs", "EarlyInitHelpers/EarlyInitFunction");
// Type namespace: Unity.Jobs
namespace Unity::Jobs {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: Unity.Jobs.EarlyInitHelpers/EarlyInitFunction
  // [TokenAttribute] Offset: FFFFFFFF
  class EarlyInitHelpers::EarlyInitFunction : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x5085D90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EarlyInitHelpers::EarlyInitFunction* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Jobs::EarlyInitHelpers::EarlyInitFunction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EarlyInitHelpers::EarlyInitFunction*, creationType>(object, method)));
    }
    // public System.Void Invoke()
    // Offset: 0x5085E2C
    void Invoke();
  }; // Unity.Jobs.EarlyInitHelpers/EarlyInitFunction
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::Jobs::EarlyInitHelpers::EarlyInitFunction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Unity::Jobs::EarlyInitHelpers::EarlyInitFunction::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::Jobs::EarlyInitHelpers::EarlyInitFunction::*)()>(&Unity::Jobs::EarlyInitHelpers::EarlyInitFunction::Invoke)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Jobs::EarlyInitHelpers::EarlyInitFunction*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};