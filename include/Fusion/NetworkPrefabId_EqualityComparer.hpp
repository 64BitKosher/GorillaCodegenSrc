// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.NetworkPrefabId
#include "Fusion/NetworkPrefabId.hpp"
// Including type: System.Collections.Generic.IEqualityComparer`1
#include "System/Collections/Generic/IEqualityComparer_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::NetworkPrefabId::EqualityComparer);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkPrefabId::EqualityComparer*, "Fusion", "NetworkPrefabId/EqualityComparer");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.NetworkPrefabId/EqualityComparer
  // [TokenAttribute] Offset: FFFFFFFF
  class NetworkPrefabId::EqualityComparer : public ::Il2CppObject/*, public ::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkPrefabId>*/ {
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkPrefabId>
    operator ::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkPrefabId>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkPrefabId>*>(this);
    }
    // public System.Boolean Equals(Fusion.NetworkPrefabId x, Fusion.NetworkPrefabId y)
    // Offset: 0x2B4F220
    bool Equals(::Fusion::NetworkPrefabId x, ::Fusion::NetworkPrefabId y);
    // public System.Int32 GetHashCode(Fusion.NetworkPrefabId obj)
    // Offset: 0x2B4F22C
    int GetHashCode(::Fusion::NetworkPrefabId obj);
    // public System.Void .ctor()
    // Offset: 0x2B4F234
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkPrefabId::EqualityComparer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkPrefabId::EqualityComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkPrefabId::EqualityComparer*, creationType>()));
    }
  }; // Fusion.NetworkPrefabId/EqualityComparer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::NetworkPrefabId::EqualityComparer::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::NetworkPrefabId::EqualityComparer::*)(::Fusion::NetworkPrefabId, ::Fusion::NetworkPrefabId)>(&Fusion::NetworkPrefabId::EqualityComparer::Equals)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Fusion", "NetworkPrefabId")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("Fusion", "NetworkPrefabId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkPrefabId::EqualityComparer*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkPrefabId::EqualityComparer::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Fusion::NetworkPrefabId::EqualityComparer::*)(::Fusion::NetworkPrefabId)>(&Fusion::NetworkPrefabId::EqualityComparer::GetHashCode)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("Fusion", "NetworkPrefabId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkPrefabId::EqualityComparer*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkPrefabId::EqualityComparer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
