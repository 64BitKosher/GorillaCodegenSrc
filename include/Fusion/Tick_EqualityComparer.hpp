// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.Tick
#include "Fusion/Tick.hpp"
// Including type: System.Collections.Generic.IEqualityComparer`1
#include "System/Collections/Generic/IEqualityComparer_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::Tick::EqualityComparer);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Tick::EqualityComparer*, "Fusion", "Tick/EqualityComparer");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.Tick/EqualityComparer
  // [TokenAttribute] Offset: FFFFFFFF
  class Tick::EqualityComparer : public ::Il2CppObject/*, public ::System::Collections::Generic::IEqualityComparer_1<::Fusion::Tick>*/ {
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEqualityComparer_1<::Fusion::Tick>
    operator ::System::Collections::Generic::IEqualityComparer_1<::Fusion::Tick>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEqualityComparer_1<::Fusion::Tick>*>(this);
    }
    // public System.Boolean Equals(Fusion.Tick x, Fusion.Tick y)
    // Offset: 0x2B4A74C
    bool Equals(::Fusion::Tick x, ::Fusion::Tick y);
    // public System.Int32 GetHashCode(Fusion.Tick obj)
    // Offset: 0x2B4A758
    int GetHashCode(::Fusion::Tick obj);
    // public System.Void .ctor()
    // Offset: 0x2B4A760
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Tick::EqualityComparer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::Tick::EqualityComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Tick::EqualityComparer*, creationType>()));
    }
  }; // Fusion.Tick/EqualityComparer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::Tick::EqualityComparer::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::Tick::EqualityComparer::*)(::Fusion::Tick, ::Fusion::Tick)>(&Fusion::Tick::EqualityComparer::Equals)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Fusion", "Tick")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("Fusion", "Tick")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Tick::EqualityComparer*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: Fusion::Tick::EqualityComparer::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Fusion::Tick::EqualityComparer::*)(::Fusion::Tick)>(&Fusion::Tick::EqualityComparer::GetHashCode)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("Fusion", "Tick")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Tick::EqualityComparer*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Fusion::Tick::EqualityComparer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
