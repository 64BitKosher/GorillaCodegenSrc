// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: NetworkSerializeMethodAttribute
  class NetworkSerializeMethodAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::NetworkSerializeMethodAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkSerializeMethodAttribute*, "Fusion", "NetworkSerializeMethodAttribute");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.NetworkSerializeMethodAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  class NetworkSerializeMethodAttribute : public ::System::Attribute {
    public:
    public:
    // private System.Int32 <MaxSize>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    int MaxSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return MaxSize;
    }
    // Get instance field reference: private System.Int32 <MaxSize>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$MaxSize$k__BackingField();
    // public System.Int32 get_MaxSize()
    // Offset: 0x2AFF300
    int get_MaxSize();
    // public System.Void set_MaxSize(System.Int32 value)
    // Offset: 0x2AFF308
    void set_MaxSize(int value);
    // public System.Void .ctor()
    // Offset: 0x2AFF310
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkSerializeMethodAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkSerializeMethodAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkSerializeMethodAttribute*, creationType>()));
    }
  }; // Fusion.NetworkSerializeMethodAttribute
  #pragma pack(pop)
  static check_size<sizeof(NetworkSerializeMethodAttribute), 16 + sizeof(int)> __Fusion_NetworkSerializeMethodAttributeSizeCheck;
  static_assert(sizeof(NetworkSerializeMethodAttribute) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::NetworkSerializeMethodAttribute::get_MaxSize
// Il2CppName: get_MaxSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Fusion::NetworkSerializeMethodAttribute::*)()>(&Fusion::NetworkSerializeMethodAttribute::get_MaxSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkSerializeMethodAttribute*), "get_MaxSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkSerializeMethodAttribute::set_MaxSize
// Il2CppName: set_MaxSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkSerializeMethodAttribute::*)(int)>(&Fusion::NetworkSerializeMethodAttribute::set_MaxSize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkSerializeMethodAttribute*), "set_MaxSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkSerializeMethodAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
